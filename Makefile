CXX=g++
CXXFLAGS= -g -fprofile-arcs -ftest-coverage

LINKFLAGS= -lgtest

SRC_DIR = src
SRCS = 

TEST_DIR = test

SRC_INCLUDE = include
TEST_INCLUDE = test
INCLUDE = -I ${SRC_INCLUDE} -I ${TEST_INCLUDE}

GCOV = gcov
LCOV = lcov
COVERAGE_RESULTS = result.coverage
COVERAGE_DIR = coverage

MEMCHECK_RESULTS = results.memcheck

PROGRAM = game
PROGRAM_TEST = test

.PHONY: all
all: ${PROGRAM} $(PROGRAM_TEST) memcheck-game memcheck-test coverage docs style

# default rule for compiling .cc to .o
%.o: %.cpp
# $(CC) $(CFLAGS) -c $< -o $(patsubst %.cpp,%.o,$<) ${INCLUDE}
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -rf *~ $(SRC)/*.o $(TEST_SRC)/*.o *.gcov *.gcda *.gcno $(COVERAGE_RESULTS) $(PROGRAM_TEST) $(MEMCHECK_RESULTS) ${COVERAGE_DIR}


.PHONY: clean-all
clean-all: clean
	rm -rf $(PROGRAM) $(PROGRAM_TEST)

$(PROGRAM): ${SRC_DIR}
	$(CXX) $(CXXFLAGS) -o $(PROGRAM) -I ${SRC_INCLUDE} $(SRC_DIR)/*.cpp $(LINKFLAGS)

$(PROGRAM_TEST): ${TEST_DIR}
	$(CXX) $(CXXFLAGS) -o $(PROGRAM_TEST) ${INCLUDE} $(TEST_DIR)/*.cpp ${SRCS} $(LINKFLAGS)
	$(PROGRAM_TEST)

memcheck-game: $(PROGRAM)
	rm -f results
	valgrind --leak-check=yes $(PROGRAM) &> results
	more results


memcheck-test: $(PROGRAM_TEST)
	rm -f results
	valgrind --leak-check=yes $(PROGRAM_TEST) &> results
	more results

coverage: test
	$(LCOV) --capture --gcov-tool ${GCOV} --directory . --output-file $(COVERAGE_RESULTS)
	$(LCOV) --extract ${COVERAGE_RESULTS} "*/src/*" -o ${COVERAGE_RESULTS}
	genhtml $(COVERAGE_RESULTS) --output-directory ${COVERAGE_DIR}
	rm -f *.gc*

style: ${SRC_DIR}
	cppcheck --verbose --enable=all --xml ${SRC_DIR} ${TEST_DIR} ${INCLUDE} --suppress=missingInclude

docs: ${SRC_INCLUDE}
	doxygen
