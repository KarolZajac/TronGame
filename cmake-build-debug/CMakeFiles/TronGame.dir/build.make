# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\karol\OneDrive\Pulpit\TronGame\TronGame

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\karol\OneDrive\Pulpit\TronGame\TronGame\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TronGame.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TronGame.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TronGame.dir/flags.make

CMakeFiles/TronGame.dir/main.cpp.obj: CMakeFiles/TronGame.dir/flags.make
CMakeFiles/TronGame.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\karol\OneDrive\Pulpit\TronGame\TronGame\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TronGame.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\TronGame.dir\main.cpp.obj -c C:\Users\karol\OneDrive\Pulpit\TronGame\TronGame\main.cpp

CMakeFiles/TronGame.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TronGame.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\karol\OneDrive\Pulpit\TronGame\TronGame\main.cpp > CMakeFiles\TronGame.dir\main.cpp.i

CMakeFiles/TronGame.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TronGame.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\karol\OneDrive\Pulpit\TronGame\TronGame\main.cpp -o CMakeFiles\TronGame.dir\main.cpp.s

# Object files for target TronGame
TronGame_OBJECTS = \
"CMakeFiles/TronGame.dir/main.cpp.obj"

# External object files for target TronGame
TronGame_EXTERNAL_OBJECTS =

TronGame.exe: CMakeFiles/TronGame.dir/main.cpp.obj
TronGame.exe: CMakeFiles/TronGame.dir/build.make
TronGame.exe: CMakeFiles/TronGame.dir/linklibs.rsp
TronGame.exe: CMakeFiles/TronGame.dir/objects1.rsp
TronGame.exe: CMakeFiles/TronGame.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\karol\OneDrive\Pulpit\TronGame\TronGame\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TronGame.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\TronGame.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TronGame.dir/build: TronGame.exe

.PHONY : CMakeFiles/TronGame.dir/build

CMakeFiles/TronGame.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\TronGame.dir\cmake_clean.cmake
.PHONY : CMakeFiles/TronGame.dir/clean

CMakeFiles/TronGame.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\karol\OneDrive\Pulpit\TronGame\TronGame C:\Users\karol\OneDrive\Pulpit\TronGame\TronGame C:\Users\karol\OneDrive\Pulpit\TronGame\TronGame\cmake-build-debug C:\Users\karol\OneDrive\Pulpit\TronGame\TronGame\cmake-build-debug C:\Users\karol\OneDrive\Pulpit\TronGame\TronGame\cmake-build-debug\CMakeFiles\TronGame.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TronGame.dir/depend

