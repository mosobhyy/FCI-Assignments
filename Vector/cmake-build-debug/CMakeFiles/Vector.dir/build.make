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
CMAKE_COMMAND = /snap/clion/138/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/138/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/media/muhmd/New Volume/Projects/C++/Vector"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/media/muhmd/New Volume/Projects/C++/Vector/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Vector.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Vector.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Vector.dir/flags.make

CMakeFiles/Vector.dir/src/Course.cpp.o: CMakeFiles/Vector.dir/flags.make
CMakeFiles/Vector.dir/src/Course.cpp.o: ../src/Course.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/muhmd/New Volume/Projects/C++/Vector/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Vector.dir/src/Course.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Vector.dir/src/Course.cpp.o -c "/media/muhmd/New Volume/Projects/C++/Vector/src/Course.cpp"

CMakeFiles/Vector.dir/src/Course.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Vector.dir/src/Course.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/media/muhmd/New Volume/Projects/C++/Vector/src/Course.cpp" > CMakeFiles/Vector.dir/src/Course.cpp.i

CMakeFiles/Vector.dir/src/Course.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Vector.dir/src/Course.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/media/muhmd/New Volume/Projects/C++/Vector/src/Course.cpp" -o CMakeFiles/Vector.dir/src/Course.cpp.s

CMakeFiles/Vector.dir/src/Student.cpp.o: CMakeFiles/Vector.dir/flags.make
CMakeFiles/Vector.dir/src/Student.cpp.o: ../src/Student.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/muhmd/New Volume/Projects/C++/Vector/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Vector.dir/src/Student.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Vector.dir/src/Student.cpp.o -c "/media/muhmd/New Volume/Projects/C++/Vector/src/Student.cpp"

CMakeFiles/Vector.dir/src/Student.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Vector.dir/src/Student.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/media/muhmd/New Volume/Projects/C++/Vector/src/Student.cpp" > CMakeFiles/Vector.dir/src/Student.cpp.i

CMakeFiles/Vector.dir/src/Student.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Vector.dir/src/Student.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/media/muhmd/New Volume/Projects/C++/Vector/src/Student.cpp" -o CMakeFiles/Vector.dir/src/Student.cpp.s

CMakeFiles/Vector.dir/main.cpp.o: CMakeFiles/Vector.dir/flags.make
CMakeFiles/Vector.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/muhmd/New Volume/Projects/C++/Vector/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Vector.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Vector.dir/main.cpp.o -c "/media/muhmd/New Volume/Projects/C++/Vector/main.cpp"

CMakeFiles/Vector.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Vector.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/media/muhmd/New Volume/Projects/C++/Vector/main.cpp" > CMakeFiles/Vector.dir/main.cpp.i

CMakeFiles/Vector.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Vector.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/media/muhmd/New Volume/Projects/C++/Vector/main.cpp" -o CMakeFiles/Vector.dir/main.cpp.s

# Object files for target Vector
Vector_OBJECTS = \
"CMakeFiles/Vector.dir/src/Course.cpp.o" \
"CMakeFiles/Vector.dir/src/Student.cpp.o" \
"CMakeFiles/Vector.dir/main.cpp.o"

# External object files for target Vector
Vector_EXTERNAL_OBJECTS =

Vector: CMakeFiles/Vector.dir/src/Course.cpp.o
Vector: CMakeFiles/Vector.dir/src/Student.cpp.o
Vector: CMakeFiles/Vector.dir/main.cpp.o
Vector: CMakeFiles/Vector.dir/build.make
Vector: CMakeFiles/Vector.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/media/muhmd/New Volume/Projects/C++/Vector/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Vector"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Vector.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Vector.dir/build: Vector

.PHONY : CMakeFiles/Vector.dir/build

CMakeFiles/Vector.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Vector.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Vector.dir/clean

CMakeFiles/Vector.dir/depend:
	cd "/media/muhmd/New Volume/Projects/C++/Vector/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/media/muhmd/New Volume/Projects/C++/Vector" "/media/muhmd/New Volume/Projects/C++/Vector" "/media/muhmd/New Volume/Projects/C++/Vector/cmake-build-debug" "/media/muhmd/New Volume/Projects/C++/Vector/cmake-build-debug" "/media/muhmd/New Volume/Projects/C++/Vector/cmake-build-debug/CMakeFiles/Vector.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Vector.dir/depend

