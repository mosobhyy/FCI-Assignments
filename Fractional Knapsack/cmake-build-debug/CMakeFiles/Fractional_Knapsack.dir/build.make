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
CMAKE_COMMAND = /snap/clion/139/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/139/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/media/muhmd/New Volume/Projects/C++/Fractional Knapsack"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/media/muhmd/New Volume/Projects/C++/Fractional Knapsack/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Fractional_Knapsack.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Fractional_Knapsack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Fractional_Knapsack.dir/flags.make

CMakeFiles/Fractional_Knapsack.dir/Fractional_Knapsack.cpp.o: CMakeFiles/Fractional_Knapsack.dir/flags.make
CMakeFiles/Fractional_Knapsack.dir/Fractional_Knapsack.cpp.o: ../Fractional_Knapsack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/muhmd/New Volume/Projects/C++/Fractional Knapsack/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Fractional_Knapsack.dir/Fractional_Knapsack.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Fractional_Knapsack.dir/Fractional_Knapsack.cpp.o -c "/media/muhmd/New Volume/Projects/C++/Fractional Knapsack/Fractional_Knapsack.cpp"

CMakeFiles/Fractional_Knapsack.dir/Fractional_Knapsack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Fractional_Knapsack.dir/Fractional_Knapsack.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/media/muhmd/New Volume/Projects/C++/Fractional Knapsack/Fractional_Knapsack.cpp" > CMakeFiles/Fractional_Knapsack.dir/Fractional_Knapsack.cpp.i

CMakeFiles/Fractional_Knapsack.dir/Fractional_Knapsack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Fractional_Knapsack.dir/Fractional_Knapsack.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/media/muhmd/New Volume/Projects/C++/Fractional Knapsack/Fractional_Knapsack.cpp" -o CMakeFiles/Fractional_Knapsack.dir/Fractional_Knapsack.cpp.s

# Object files for target Fractional_Knapsack
Fractional_Knapsack_OBJECTS = \
"CMakeFiles/Fractional_Knapsack.dir/Fractional_Knapsack.cpp.o"

# External object files for target Fractional_Knapsack
Fractional_Knapsack_EXTERNAL_OBJECTS =

Fractional_Knapsack: CMakeFiles/Fractional_Knapsack.dir/Fractional_Knapsack.cpp.o
Fractional_Knapsack: CMakeFiles/Fractional_Knapsack.dir/build.make
Fractional_Knapsack: CMakeFiles/Fractional_Knapsack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/media/muhmd/New Volume/Projects/C++/Fractional Knapsack/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Fractional_Knapsack"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Fractional_Knapsack.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Fractional_Knapsack.dir/build: Fractional_Knapsack

.PHONY : CMakeFiles/Fractional_Knapsack.dir/build

CMakeFiles/Fractional_Knapsack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Fractional_Knapsack.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Fractional_Knapsack.dir/clean

CMakeFiles/Fractional_Knapsack.dir/depend:
	cd "/media/muhmd/New Volume/Projects/C++/Fractional Knapsack/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/media/muhmd/New Volume/Projects/C++/Fractional Knapsack" "/media/muhmd/New Volume/Projects/C++/Fractional Knapsack" "/media/muhmd/New Volume/Projects/C++/Fractional Knapsack/cmake-build-debug" "/media/muhmd/New Volume/Projects/C++/Fractional Knapsack/cmake-build-debug" "/media/muhmd/New Volume/Projects/C++/Fractional Knapsack/cmake-build-debug/CMakeFiles/Fractional_Knapsack.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Fractional_Knapsack.dir/depend
