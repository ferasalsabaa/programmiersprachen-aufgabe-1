# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.11

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/feras/programmiersprachen-helloworld

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/feras/programmiersprachen-helloworld/build

# Include any dependencies generated for this target.
include source/CMakeFiles/helloworld.dir/depend.make

# Include the progress variables for this target.
include source/CMakeFiles/helloworld.dir/progress.make

# Include the compile flags for this target's objects.
include source/CMakeFiles/helloworld.dir/flags.make

source/CMakeFiles/helloworld.dir/helloworld.cpp.o: source/CMakeFiles/helloworld.dir/flags.make
source/CMakeFiles/helloworld.dir/helloworld.cpp.o: ../source/helloworld.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/feras/programmiersprachen-helloworld/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object source/CMakeFiles/helloworld.dir/helloworld.cpp.o"
	cd /home/feras/programmiersprachen-helloworld/build/source && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/helloworld.dir/helloworld.cpp.o -c /home/feras/programmiersprachen-helloworld/source/helloworld.cpp

source/CMakeFiles/helloworld.dir/helloworld.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/helloworld.dir/helloworld.cpp.i"
	cd /home/feras/programmiersprachen-helloworld/build/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/feras/programmiersprachen-helloworld/source/helloworld.cpp > CMakeFiles/helloworld.dir/helloworld.cpp.i

source/CMakeFiles/helloworld.dir/helloworld.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/helloworld.dir/helloworld.cpp.s"
	cd /home/feras/programmiersprachen-helloworld/build/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/feras/programmiersprachen-helloworld/source/helloworld.cpp -o CMakeFiles/helloworld.dir/helloworld.cpp.s

# Object files for target helloworld
helloworld_OBJECTS = \
"CMakeFiles/helloworld.dir/helloworld.cpp.o"

# External object files for target helloworld
helloworld_EXTERNAL_OBJECTS =

source/helloworld: source/CMakeFiles/helloworld.dir/helloworld.cpp.o
source/helloworld: source/CMakeFiles/helloworld.dir/build.make
source/helloworld: source/CMakeFiles/helloworld.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/feras/programmiersprachen-helloworld/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable helloworld"
	cd /home/feras/programmiersprachen-helloworld/build/source && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/helloworld.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/CMakeFiles/helloworld.dir/build: source/helloworld

.PHONY : source/CMakeFiles/helloworld.dir/build

source/CMakeFiles/helloworld.dir/clean:
	cd /home/feras/programmiersprachen-helloworld/build/source && $(CMAKE_COMMAND) -P CMakeFiles/helloworld.dir/cmake_clean.cmake
.PHONY : source/CMakeFiles/helloworld.dir/clean

source/CMakeFiles/helloworld.dir/depend:
	cd /home/feras/programmiersprachen-helloworld/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/feras/programmiersprachen-helloworld /home/feras/programmiersprachen-helloworld/source /home/feras/programmiersprachen-helloworld/build /home/feras/programmiersprachen-helloworld/build/source /home/feras/programmiersprachen-helloworld/build/source/CMakeFiles/helloworld.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : source/CMakeFiles/helloworld.dir/depend

