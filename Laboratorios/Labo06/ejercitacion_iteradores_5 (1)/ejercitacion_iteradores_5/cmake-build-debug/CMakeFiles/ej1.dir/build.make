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
CMAKE_COMMAND = /snap/clion/189/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/189/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/clinux01/Descargas/ejercitacion_iteradores_5 (1)/ejercitacion_iteradores_5"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/clinux01/Descargas/ejercitacion_iteradores_5 (1)/ejercitacion_iteradores_5/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/ej1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ej1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ej1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ej1.dir/flags.make

CMakeFiles/ej1.dir/tests/algo_tests.cpp.o: CMakeFiles/ej1.dir/flags.make
CMakeFiles/ej1.dir/tests/algo_tests.cpp.o: ../tests/algo_tests.cpp
CMakeFiles/ej1.dir/tests/algo_tests.cpp.o: CMakeFiles/ej1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/clinux01/Descargas/ejercitacion_iteradores_5 (1)/ejercitacion_iteradores_5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ej1.dir/tests/algo_tests.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ej1.dir/tests/algo_tests.cpp.o -MF CMakeFiles/ej1.dir/tests/algo_tests.cpp.o.d -o CMakeFiles/ej1.dir/tests/algo_tests.cpp.o -c "/home/clinux01/Descargas/ejercitacion_iteradores_5 (1)/ejercitacion_iteradores_5/tests/algo_tests.cpp"

CMakeFiles/ej1.dir/tests/algo_tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ej1.dir/tests/algo_tests.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/clinux01/Descargas/ejercitacion_iteradores_5 (1)/ejercitacion_iteradores_5/tests/algo_tests.cpp" > CMakeFiles/ej1.dir/tests/algo_tests.cpp.i

CMakeFiles/ej1.dir/tests/algo_tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ej1.dir/tests/algo_tests.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/clinux01/Descargas/ejercitacion_iteradores_5 (1)/ejercitacion_iteradores_5/tests/algo_tests.cpp" -o CMakeFiles/ej1.dir/tests/algo_tests.cpp.s

# Object files for target ej1
ej1_OBJECTS = \
"CMakeFiles/ej1.dir/tests/algo_tests.cpp.o"

# External object files for target ej1
ej1_EXTERNAL_OBJECTS =

ej1: CMakeFiles/ej1.dir/tests/algo_tests.cpp.o
ej1: CMakeFiles/ej1.dir/build.make
ej1: libgtest.a
ej1: libgtest_main.a
ej1: CMakeFiles/ej1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/clinux01/Descargas/ejercitacion_iteradores_5 (1)/ejercitacion_iteradores_5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ej1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ej1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ej1.dir/build: ej1
.PHONY : CMakeFiles/ej1.dir/build

CMakeFiles/ej1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ej1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ej1.dir/clean

CMakeFiles/ej1.dir/depend:
	cd "/home/clinux01/Descargas/ejercitacion_iteradores_5 (1)/ejercitacion_iteradores_5/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/clinux01/Descargas/ejercitacion_iteradores_5 (1)/ejercitacion_iteradores_5" "/home/clinux01/Descargas/ejercitacion_iteradores_5 (1)/ejercitacion_iteradores_5" "/home/clinux01/Descargas/ejercitacion_iteradores_5 (1)/ejercitacion_iteradores_5/cmake-build-debug" "/home/clinux01/Descargas/ejercitacion_iteradores_5 (1)/ejercitacion_iteradores_5/cmake-build-debug" "/home/clinux01/Descargas/ejercitacion_iteradores_5 (1)/ejercitacion_iteradores_5/cmake-build-debug/CMakeFiles/ej1.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/ej1.dir/depend

