# Makefile

# Get a list of all C++ source files in the current directory
CPP_FILES := $(wildcard *.cpp)

# Generate corresponding executable names
EXECUTABLES := $(patsubst %.cpp,%,$(CPP_FILES))

# Default target to build all executables
all: $(EXECUTABLES)

# Rule to compile each C++ file to an executable
%: %.cpp
	g++ -std=c++2a -o ./executables/$@ $<

# Clean up generated executables
clean:
	rm -f ./executables/$(EXECUTABLES)
