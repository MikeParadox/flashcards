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
include src/CMakeFiles/flashcards.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/flashcards.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/flashcards.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/flashcards.dir/flags.make

src/CMakeFiles/flashcards.dir/Flashcard.cpp.o: src/CMakeFiles/flashcards.dir/flags.make
src/CMakeFiles/flashcards.dir/Flashcard.cpp.o: /home/mikhail/programming/c++/projects/flashcards/src/Flashcard.cpp
src/CMakeFiles/flashcards.dir/Flashcard.cpp.o: src/CMakeFiles/flashcards.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/mikhail/programming/c++/projects/flashcards/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/flashcards.dir/Flashcard.cpp.o"
	cd /home/mikhail/programming/c++/projects/flashcards/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/flashcards.dir/Flashcard.cpp.o -MF CMakeFiles/flashcards.dir/Flashcard.cpp.o.d -o CMakeFiles/flashcards.dir/Flashcard.cpp.o -c /home/mikhail/programming/c++/projects/flashcards/src/Flashcard.cpp

src/CMakeFiles/flashcards.dir/Flashcard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/flashcards.dir/Flashcard.cpp.i"
	cd /home/mikhail/programming/c++/projects/flashcards/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mikhail/programming/c++/projects/flashcards/src/Flashcard.cpp > CMakeFiles/flashcards.dir/Flashcard.cpp.i

src/CMakeFiles/flashcards.dir/Flashcard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/flashcards.dir/Flashcard.cpp.s"
	cd /home/mikhail/programming/c++/projects/flashcards/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mikhail/programming/c++/projects/flashcards/src/Flashcard.cpp -o CMakeFiles/flashcards.dir/Flashcard.cpp.s

src/CMakeFiles/flashcards.dir/Flashcards_deck.cpp.o: src/CMakeFiles/flashcards.dir/flags.make
src/CMakeFiles/flashcards.dir/Flashcards_deck.cpp.o: /home/mikhail/programming/c++/projects/flashcards/src/Flashcards_deck.cpp
src/CMakeFiles/flashcards.dir/Flashcards_deck.cpp.o: src/CMakeFiles/flashcards.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/mikhail/programming/c++/projects/flashcards/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/flashcards.dir/Flashcards_deck.cpp.o"
	cd /home/mikhail/programming/c++/projects/flashcards/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/flashcards.dir/Flashcards_deck.cpp.o -MF CMakeFiles/flashcards.dir/Flashcards_deck.cpp.o.d -o CMakeFiles/flashcards.dir/Flashcards_deck.cpp.o -c /home/mikhail/programming/c++/projects/flashcards/src/Flashcards_deck.cpp

src/CMakeFiles/flashcards.dir/Flashcards_deck.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/flashcards.dir/Flashcards_deck.cpp.i"
	cd /home/mikhail/programming/c++/projects/flashcards/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mikhail/programming/c++/projects/flashcards/src/Flashcards_deck.cpp > CMakeFiles/flashcards.dir/Flashcards_deck.cpp.i

src/CMakeFiles/flashcards.dir/Flashcards_deck.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/flashcards.dir/Flashcards_deck.cpp.s"
	cd /home/mikhail/programming/c++/projects/flashcards/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mikhail/programming/c++/projects/flashcards/src/Flashcards_deck.cpp -o CMakeFiles/flashcards.dir/Flashcards_deck.cpp.s

# Object files for target flashcards
flashcards_OBJECTS = \
"CMakeFiles/flashcards.dir/Flashcard.cpp.o" \
"CMakeFiles/flashcards.dir/Flashcards_deck.cpp.o"

# External object files for target flashcards
flashcards_EXTERNAL_OBJECTS =

src/libflashcards.a: src/CMakeFiles/flashcards.dir/Flashcard.cpp.o
src/libflashcards.a: src/CMakeFiles/flashcards.dir/Flashcards_deck.cpp.o
src/libflashcards.a: src/CMakeFiles/flashcards.dir/build.make
src/libflashcards.a: src/CMakeFiles/flashcards.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/mikhail/programming/c++/projects/flashcards/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libflashcards.a"
	cd /home/mikhail/programming/c++/projects/flashcards/build/src && $(CMAKE_COMMAND) -P CMakeFiles/flashcards.dir/cmake_clean_target.cmake
	cd /home/mikhail/programming/c++/projects/flashcards/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/flashcards.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/flashcards.dir/build: src/libflashcards.a
.PHONY : src/CMakeFiles/flashcards.dir/build

src/CMakeFiles/flashcards.dir/clean:
	cd /home/mikhail/programming/c++/projects/flashcards/build/src && $(CMAKE_COMMAND) -P CMakeFiles/flashcards.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/flashcards.dir/clean

src/CMakeFiles/flashcards.dir/depend:
	cd /home/mikhail/programming/c++/projects/flashcards/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mikhail/programming/c++/projects/flashcards /home/mikhail/programming/c++/projects/flashcards/src /home/mikhail/programming/c++/projects/flashcards/build /home/mikhail/programming/c++/projects/flashcards/build/src /home/mikhail/programming/c++/projects/flashcards/build/src/CMakeFiles/flashcards.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/CMakeFiles/flashcards.dir/depend

