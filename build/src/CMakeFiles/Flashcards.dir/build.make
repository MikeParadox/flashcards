# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mikhail/programming/c++/projects/flashcards

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mikhail/programming/c++/projects/flashcards/build

# Include any dependencies generated for this target.
include src/CMakeFiles/Flashcards.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/Flashcards.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/Flashcards.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/Flashcards.dir/flags.make

src/CMakeFiles/Flashcards.dir/main.cpp.o: src/CMakeFiles/Flashcards.dir/flags.make
src/CMakeFiles/Flashcards.dir/main.cpp.o: /home/mikhail/programming/c++/projects/flashcards/src/main.cpp
src/CMakeFiles/Flashcards.dir/main.cpp.o: src/CMakeFiles/Flashcards.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/mikhail/programming/c++/projects/flashcards/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/Flashcards.dir/main.cpp.o"
	cd /home/mikhail/programming/c++/projects/flashcards/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/Flashcards.dir/main.cpp.o -MF CMakeFiles/Flashcards.dir/main.cpp.o.d -o CMakeFiles/Flashcards.dir/main.cpp.o -c /home/mikhail/programming/c++/projects/flashcards/src/main.cpp

src/CMakeFiles/Flashcards.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Flashcards.dir/main.cpp.i"
	cd /home/mikhail/programming/c++/projects/flashcards/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mikhail/programming/c++/projects/flashcards/src/main.cpp > CMakeFiles/Flashcards.dir/main.cpp.i

src/CMakeFiles/Flashcards.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Flashcards.dir/main.cpp.s"
	cd /home/mikhail/programming/c++/projects/flashcards/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mikhail/programming/c++/projects/flashcards/src/main.cpp -o CMakeFiles/Flashcards.dir/main.cpp.s

# Object files for target Flashcards
Flashcards_OBJECTS = \
"CMakeFiles/Flashcards.dir/main.cpp.o"

# External object files for target Flashcards
Flashcards_EXTERNAL_OBJECTS =

Flashcards: src/CMakeFiles/Flashcards.dir/main.cpp.o
Flashcards: src/CMakeFiles/Flashcards.dir/build.make
Flashcards: src/libflashcards.a
Flashcards: src/CMakeFiles/Flashcards.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/mikhail/programming/c++/projects/flashcards/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../Flashcards"
	cd /home/mikhail/programming/c++/projects/flashcards/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Flashcards.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/Flashcards.dir/build: Flashcards
.PHONY : src/CMakeFiles/Flashcards.dir/build

src/CMakeFiles/Flashcards.dir/clean:
	cd /home/mikhail/programming/c++/projects/flashcards/build/src && $(CMAKE_COMMAND) -P CMakeFiles/Flashcards.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/Flashcards.dir/clean

src/CMakeFiles/Flashcards.dir/depend:
	cd /home/mikhail/programming/c++/projects/flashcards/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mikhail/programming/c++/projects/flashcards /home/mikhail/programming/c++/projects/flashcards/src /home/mikhail/programming/c++/projects/flashcards/build /home/mikhail/programming/c++/projects/flashcards/build/src /home/mikhail/programming/c++/projects/flashcards/build/src/CMakeFiles/Flashcards.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/CMakeFiles/Flashcards.dir/depend
