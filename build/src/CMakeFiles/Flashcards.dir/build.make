# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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

src/CMakeFiles/Flashcards.dir/Deck.cpp.o: src/CMakeFiles/Flashcards.dir/flags.make
src/CMakeFiles/Flashcards.dir/Deck.cpp.o: /home/mikhail/programming/c++/projects/flashcards/src/Deck.cpp
src/CMakeFiles/Flashcards.dir/Deck.cpp.o: src/CMakeFiles/Flashcards.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/mikhail/programming/c++/projects/flashcards/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/Flashcards.dir/Deck.cpp.o"
	cd /home/mikhail/programming/c++/projects/flashcards/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/Flashcards.dir/Deck.cpp.o -MF CMakeFiles/Flashcards.dir/Deck.cpp.o.d -o CMakeFiles/Flashcards.dir/Deck.cpp.o -c /home/mikhail/programming/c++/projects/flashcards/src/Deck.cpp

src/CMakeFiles/Flashcards.dir/Deck.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Flashcards.dir/Deck.cpp.i"
	cd /home/mikhail/programming/c++/projects/flashcards/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mikhail/programming/c++/projects/flashcards/src/Deck.cpp > CMakeFiles/Flashcards.dir/Deck.cpp.i

src/CMakeFiles/Flashcards.dir/Deck.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Flashcards.dir/Deck.cpp.s"
	cd /home/mikhail/programming/c++/projects/flashcards/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mikhail/programming/c++/projects/flashcards/src/Deck.cpp -o CMakeFiles/Flashcards.dir/Deck.cpp.s

src/CMakeFiles/Flashcards.dir/Flashcard.cpp.o: src/CMakeFiles/Flashcards.dir/flags.make
src/CMakeFiles/Flashcards.dir/Flashcard.cpp.o: /home/mikhail/programming/c++/projects/flashcards/src/Flashcard.cpp
src/CMakeFiles/Flashcards.dir/Flashcard.cpp.o: src/CMakeFiles/Flashcards.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/mikhail/programming/c++/projects/flashcards/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/Flashcards.dir/Flashcard.cpp.o"
	cd /home/mikhail/programming/c++/projects/flashcards/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/Flashcards.dir/Flashcard.cpp.o -MF CMakeFiles/Flashcards.dir/Flashcard.cpp.o.d -o CMakeFiles/Flashcards.dir/Flashcard.cpp.o -c /home/mikhail/programming/c++/projects/flashcards/src/Flashcard.cpp

src/CMakeFiles/Flashcards.dir/Flashcard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Flashcards.dir/Flashcard.cpp.i"
	cd /home/mikhail/programming/c++/projects/flashcards/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mikhail/programming/c++/projects/flashcards/src/Flashcard.cpp > CMakeFiles/Flashcards.dir/Flashcard.cpp.i

src/CMakeFiles/Flashcards.dir/Flashcard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Flashcards.dir/Flashcard.cpp.s"
	cd /home/mikhail/programming/c++/projects/flashcards/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mikhail/programming/c++/projects/flashcards/src/Flashcard.cpp -o CMakeFiles/Flashcards.dir/Flashcard.cpp.s

src/CMakeFiles/Flashcards.dir/Quiz.cpp.o: src/CMakeFiles/Flashcards.dir/flags.make
src/CMakeFiles/Flashcards.dir/Quiz.cpp.o: /home/mikhail/programming/c++/projects/flashcards/src/Quiz.cpp
src/CMakeFiles/Flashcards.dir/Quiz.cpp.o: src/CMakeFiles/Flashcards.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/mikhail/programming/c++/projects/flashcards/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/Flashcards.dir/Quiz.cpp.o"
	cd /home/mikhail/programming/c++/projects/flashcards/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/Flashcards.dir/Quiz.cpp.o -MF CMakeFiles/Flashcards.dir/Quiz.cpp.o.d -o CMakeFiles/Flashcards.dir/Quiz.cpp.o -c /home/mikhail/programming/c++/projects/flashcards/src/Quiz.cpp

src/CMakeFiles/Flashcards.dir/Quiz.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Flashcards.dir/Quiz.cpp.i"
	cd /home/mikhail/programming/c++/projects/flashcards/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mikhail/programming/c++/projects/flashcards/src/Quiz.cpp > CMakeFiles/Flashcards.dir/Quiz.cpp.i

src/CMakeFiles/Flashcards.dir/Quiz.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Flashcards.dir/Quiz.cpp.s"
	cd /home/mikhail/programming/c++/projects/flashcards/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mikhail/programming/c++/projects/flashcards/src/Quiz.cpp -o CMakeFiles/Flashcards.dir/Quiz.cpp.s

# Object files for target Flashcards
Flashcards_OBJECTS = \
"CMakeFiles/Flashcards.dir/Deck.cpp.o" \
"CMakeFiles/Flashcards.dir/Flashcard.cpp.o" \
"CMakeFiles/Flashcards.dir/Quiz.cpp.o"

# External object files for target Flashcards
Flashcards_EXTERNAL_OBJECTS =

src/libFlashcards.a: src/CMakeFiles/Flashcards.dir/Deck.cpp.o
src/libFlashcards.a: src/CMakeFiles/Flashcards.dir/Flashcard.cpp.o
src/libFlashcards.a: src/CMakeFiles/Flashcards.dir/Quiz.cpp.o
src/libFlashcards.a: src/CMakeFiles/Flashcards.dir/build.make
src/libFlashcards.a: src/CMakeFiles/Flashcards.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/mikhail/programming/c++/projects/flashcards/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library libFlashcards.a"
	cd /home/mikhail/programming/c++/projects/flashcards/build/src && $(CMAKE_COMMAND) -P CMakeFiles/Flashcards.dir/cmake_clean_target.cmake
	cd /home/mikhail/programming/c++/projects/flashcards/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Flashcards.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/Flashcards.dir/build: src/libFlashcards.a
.PHONY : src/CMakeFiles/Flashcards.dir/build

src/CMakeFiles/Flashcards.dir/clean:
	cd /home/mikhail/programming/c++/projects/flashcards/build/src && $(CMAKE_COMMAND) -P CMakeFiles/Flashcards.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/Flashcards.dir/clean

src/CMakeFiles/Flashcards.dir/depend:
	cd /home/mikhail/programming/c++/projects/flashcards/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mikhail/programming/c++/projects/flashcards /home/mikhail/programming/c++/projects/flashcards/src /home/mikhail/programming/c++/projects/flashcards/build /home/mikhail/programming/c++/projects/flashcards/build/src /home/mikhail/programming/c++/projects/flashcards/build/src/CMakeFiles/Flashcards.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/CMakeFiles/Flashcards.dir/depend

