# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /snap/clion/137/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/137/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/media/muhmd/New Volume/Projects/C++/Task 4"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/media/muhmd/New Volume/Projects/C++/Task 4/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Task_4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Task_4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Task_4.dir/flags.make

CMakeFiles/Task_4.dir/Task_4.cpp.o: CMakeFiles/Task_4.dir/flags.make
CMakeFiles/Task_4.dir/Task_4.cpp.o: ../Task\ 4.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/muhmd/New Volume/Projects/C++/Task 4/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Task_4.dir/Task_4.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Task_4.dir/Task_4.cpp.o -c "/media/muhmd/New Volume/Projects/C++/Task 4/Task 4.cpp"

CMakeFiles/Task_4.dir/Task_4.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Task_4.dir/Task_4.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/media/muhmd/New Volume/Projects/C++/Task 4/Task 4.cpp" > CMakeFiles/Task_4.dir/Task_4.cpp.i

CMakeFiles/Task_4.dir/Task_4.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Task_4.dir/Task_4.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/media/muhmd/New Volume/Projects/C++/Task 4/Task 4.cpp" -o CMakeFiles/Task_4.dir/Task_4.cpp.s

# Object files for target Task_4
Task_4_OBJECTS = \
"CMakeFiles/Task_4.dir/Task_4.cpp.o"

# External object files for target Task_4
Task_4_EXTERNAL_OBJECTS =

Task_4: CMakeFiles/Task_4.dir/Task_4.cpp.o
Task_4: CMakeFiles/Task_4.dir/build.make
Task_4: CMakeFiles/Task_4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/media/muhmd/New Volume/Projects/C++/Task 4/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Task_4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Task_4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Task_4.dir/build: Task_4

.PHONY : CMakeFiles/Task_4.dir/build

CMakeFiles/Task_4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Task_4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Task_4.dir/clean

CMakeFiles/Task_4.dir/depend:
	cd "/media/muhmd/New Volume/Projects/C++/Task 4/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/media/muhmd/New Volume/Projects/C++/Task 4" "/media/muhmd/New Volume/Projects/C++/Task 4" "/media/muhmd/New Volume/Projects/C++/Task 4/cmake-build-debug" "/media/muhmd/New Volume/Projects/C++/Task 4/cmake-build-debug" "/media/muhmd/New Volume/Projects/C++/Task 4/cmake-build-debug/CMakeFiles/Task_4.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Task_4.dir/depend

