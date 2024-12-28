# Variables
CXX := clang++
CXXFLAGS := -g -std=c++23 -O2 -Wall -Wextra -I$(GTEST_DEV)
LDFLAGS := -L$(GTEST) -lgtest_main -lgtest -lpthread
TESTS := $(wildcard ./tests/*.cpp)
BUILD_DIR := ./build
EXECUTABLES := $(patsubst ./tests/%.cpp, $(BUILD_DIR)/%, $(TESTS))

# Colors
BLUE := \033[34m
RED := \033[31m
NORMAL := \033[0m

# Default target: Build all tests
all: $(BUILD_DIR) $(EXECUTABLES)

# Create build directory
$(BUILD_DIR):
	@mkdir -p $(BUILD_DIR)

# Build each test
$(BUILD_DIR)/%: ./tests/%.cpp
	@echo -e "$(BLUE)[INFO]$(NORMAL) Building $< -> $@"
	@$(CXX) $(CXXFLAGS) $< -o $@ $(LDFLAGS)

# Build a specific test
build-test: $(BUILD_DIR)
	@if [ -z "$(file)" ]; then \
		echo -e "$(RED)[ERROR]$(NORMAL) Please specify a test file with 'make build-test file=./tests/your_test.cpp'"; \
		exit 1; \
	elif [ ! -f "$(file)" ]; then \
		echo -e "$(RED)[ERROR]$(NORMAL) File $(file) not found!"; \
		exit 1; \
	else \
		output_file=$(BUILD_DIR)/$$(basename $(file) .cpp); \
		echo -e "$(BLUE)[INFO]$(NORMAL) Building $(file) -> $$output_file"; \
		$(CXX) $(CXXFLAGS) $(file) -o $$output_file $(LDFLAGS); \
	fi

# Run all tests
run-tests: all
	@echo -e "$(BLUE)[INFO]$(NORMAL) Running all tests..."
	@for exe in $(EXECUTABLES); do \
		if [ -x "$$exe" ]; then \
			echo -e "$(BLUE)[TEST]$(NORMAL) Running $$exe"; \
			$$exe || exit 1; \
		else \
			echo -e "$(RED)[ERROR]$(NORMAL) Executable $$exe not found or not executable!"; \
			exit 1; \
		fi \
	done
	@echo -e "$(BLUE)[INFO]$(NORMAL) All tests passed!"

# Clean up the project
clean:
	@echo -e "$(BLUE)[INFO]$(NORMAL) Cleaning build artifacts"
	@rm -rf $(BUILD_DIR)

.PHONY: all clean build-test run-tests
