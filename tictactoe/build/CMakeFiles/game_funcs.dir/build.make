# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/eduv/Documentos/tictactoe

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/eduv/Documentos/tictactoe/build

# Include any dependencies generated for this target.
include CMakeFiles/game_funcs.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/game_funcs.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/game_funcs.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/game_funcs.dir/flags.make

CMakeFiles/game_funcs.dir/src/funcs.cpp.o: CMakeFiles/game_funcs.dir/flags.make
CMakeFiles/game_funcs.dir/src/funcs.cpp.o: ../src/funcs.cpp
CMakeFiles/game_funcs.dir/src/funcs.cpp.o: CMakeFiles/game_funcs.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eduv/Documentos/tictactoe/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/game_funcs.dir/src/funcs.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/game_funcs.dir/src/funcs.cpp.o -MF CMakeFiles/game_funcs.dir/src/funcs.cpp.o.d -o CMakeFiles/game_funcs.dir/src/funcs.cpp.o -c /home/eduv/Documentos/tictactoe/src/funcs.cpp

CMakeFiles/game_funcs.dir/src/funcs.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game_funcs.dir/src/funcs.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eduv/Documentos/tictactoe/src/funcs.cpp > CMakeFiles/game_funcs.dir/src/funcs.cpp.i

CMakeFiles/game_funcs.dir/src/funcs.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game_funcs.dir/src/funcs.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eduv/Documentos/tictactoe/src/funcs.cpp -o CMakeFiles/game_funcs.dir/src/funcs.cpp.s

# Object files for target game_funcs
game_funcs_OBJECTS = \
"CMakeFiles/game_funcs.dir/src/funcs.cpp.o"

# External object files for target game_funcs
game_funcs_EXTERNAL_OBJECTS =

libgame_funcs.a: CMakeFiles/game_funcs.dir/src/funcs.cpp.o
libgame_funcs.a: CMakeFiles/game_funcs.dir/build.make
libgame_funcs.a: CMakeFiles/game_funcs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/eduv/Documentos/tictactoe/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libgame_funcs.a"
	$(CMAKE_COMMAND) -P CMakeFiles/game_funcs.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/game_funcs.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/game_funcs.dir/build: libgame_funcs.a
.PHONY : CMakeFiles/game_funcs.dir/build

CMakeFiles/game_funcs.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/game_funcs.dir/cmake_clean.cmake
.PHONY : CMakeFiles/game_funcs.dir/clean

CMakeFiles/game_funcs.dir/depend:
	cd /home/eduv/Documentos/tictactoe/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/eduv/Documentos/tictactoe /home/eduv/Documentos/tictactoe /home/eduv/Documentos/tictactoe/build /home/eduv/Documentos/tictactoe/build /home/eduv/Documentos/tictactoe/build/CMakeFiles/game_funcs.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/game_funcs.dir/depend

