# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\cmake-3.27.0-rc4-windows-x86_64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\cmake-3.27.0-rc4-windows-x86_64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\jiangy\Desktop\PTC\Serial

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\jiangy\Desktop\PTC\Serial\build

# Utility rule file for Serial_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/Serial_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Serial_autogen.dir/progress.make

CMakeFiles/Serial_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=C:\Users\jiangy\Desktop\PTC\Serial\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target Serial"
	"C:\Program Files\CMake\cmake-3.27.0-rc4-windows-x86_64\bin\cmake.exe" -E cmake_autogen C:/Users/jiangy/Desktop/PTC/Serial/build/CMakeFiles/Serial_autogen.dir/AutogenInfo.json Debug

Serial_autogen: CMakeFiles/Serial_autogen
Serial_autogen: CMakeFiles/Serial_autogen.dir/build.make
.PHONY : Serial_autogen

# Rule to build all files generated by this target.
CMakeFiles/Serial_autogen.dir/build: Serial_autogen
.PHONY : CMakeFiles/Serial_autogen.dir/build

CMakeFiles/Serial_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Serial_autogen.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Serial_autogen.dir/clean

CMakeFiles/Serial_autogen.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\jiangy\Desktop\PTC\Serial C:\Users\jiangy\Desktop\PTC\Serial C:\Users\jiangy\Desktop\PTC\Serial\build C:\Users\jiangy\Desktop\PTC\Serial\build C:\Users\jiangy\Desktop\PTC\Serial\build\CMakeFiles\Serial_autogen.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Serial_autogen.dir/depend

