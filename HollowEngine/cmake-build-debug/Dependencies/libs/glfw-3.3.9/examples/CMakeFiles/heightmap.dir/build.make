# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = "C:\Users\Aslak\AppData\Local\Programs\CLion 2\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Users\Aslak\AppData\Local\Programs\CLion 2\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\School\3DProgramming\HollowEngine\HollowEngine

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\School\3DProgramming\HollowEngine\HollowEngine\cmake-build-debug

# Include any dependencies generated for this target.
include Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/compiler_depend.make

# Include the progress variables for this target.
include Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/progress.make

# Include the compile flags for this target's objects.
include Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/flags.make

Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/heightmap.c.obj: Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/flags.make
Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/heightmap.c.obj: Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/includes_C.rsp
Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/heightmap.c.obj: D:/School/3DProgramming/HollowEngine/HollowEngine/Dependencies/libs/glfw-3.3.9/examples/heightmap.c
Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/heightmap.c.obj: Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\School\3DProgramming\HollowEngine\HollowEngine\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/heightmap.c.obj"
	cd /d D:\School\3DProgramming\HollowEngine\HollowEngine\cmake-build-debug\Dependencies\libs\glfw-3.3.9\examples && C:\Users\Aslak\AppData\Local\Programs\CLION2~1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/heightmap.c.obj -MF CMakeFiles\heightmap.dir\heightmap.c.obj.d -o CMakeFiles\heightmap.dir\heightmap.c.obj -c D:\School\3DProgramming\HollowEngine\HollowEngine\Dependencies\libs\glfw-3.3.9\examples\heightmap.c

Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/heightmap.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/heightmap.dir/heightmap.c.i"
	cd /d D:\School\3DProgramming\HollowEngine\HollowEngine\cmake-build-debug\Dependencies\libs\glfw-3.3.9\examples && C:\Users\Aslak\AppData\Local\Programs\CLION2~1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\School\3DProgramming\HollowEngine\HollowEngine\Dependencies\libs\glfw-3.3.9\examples\heightmap.c > CMakeFiles\heightmap.dir\heightmap.c.i

Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/heightmap.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/heightmap.dir/heightmap.c.s"
	cd /d D:\School\3DProgramming\HollowEngine\HollowEngine\cmake-build-debug\Dependencies\libs\glfw-3.3.9\examples && C:\Users\Aslak\AppData\Local\Programs\CLION2~1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\School\3DProgramming\HollowEngine\HollowEngine\Dependencies\libs\glfw-3.3.9\examples\heightmap.c -o CMakeFiles\heightmap.dir\heightmap.c.s

Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/glfw.rc.obj: Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/flags.make
Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/glfw.rc.obj: D:/School/3DProgramming/HollowEngine/HollowEngine/Dependencies/libs/glfw-3.3.9/examples/glfw.rc
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\School\3DProgramming\HollowEngine\HollowEngine\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building RC object Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/glfw.rc.obj"
	cd /d D:\School\3DProgramming\HollowEngine\HollowEngine\cmake-build-debug\Dependencies\libs\glfw-3.3.9\examples && C:\Users\Aslak\AppData\Local\Programs\CLION2~1\bin\mingw\bin\windres.exe -O coff $(RC_DEFINES) $(RC_INCLUDES) $(RC_FLAGS) D:\School\3DProgramming\HollowEngine\HollowEngine\Dependencies\libs\glfw-3.3.9\examples\glfw.rc CMakeFiles\heightmap.dir\glfw.rc.obj

Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/__/deps/glad_gl.c.obj: Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/flags.make
Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/__/deps/glad_gl.c.obj: Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/includes_C.rsp
Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/__/deps/glad_gl.c.obj: D:/School/3DProgramming/HollowEngine/HollowEngine/Dependencies/libs/glfw-3.3.9/deps/glad_gl.c
Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/__/deps/glad_gl.c.obj: Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\School\3DProgramming\HollowEngine\HollowEngine\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/__/deps/glad_gl.c.obj"
	cd /d D:\School\3DProgramming\HollowEngine\HollowEngine\cmake-build-debug\Dependencies\libs\glfw-3.3.9\examples && C:\Users\Aslak\AppData\Local\Programs\CLION2~1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/__/deps/glad_gl.c.obj -MF CMakeFiles\heightmap.dir\__\deps\glad_gl.c.obj.d -o CMakeFiles\heightmap.dir\__\deps\glad_gl.c.obj -c D:\School\3DProgramming\HollowEngine\HollowEngine\Dependencies\libs\glfw-3.3.9\deps\glad_gl.c

Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/__/deps/glad_gl.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/heightmap.dir/__/deps/glad_gl.c.i"
	cd /d D:\School\3DProgramming\HollowEngine\HollowEngine\cmake-build-debug\Dependencies\libs\glfw-3.3.9\examples && C:\Users\Aslak\AppData\Local\Programs\CLION2~1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\School\3DProgramming\HollowEngine\HollowEngine\Dependencies\libs\glfw-3.3.9\deps\glad_gl.c > CMakeFiles\heightmap.dir\__\deps\glad_gl.c.i

Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/__/deps/glad_gl.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/heightmap.dir/__/deps/glad_gl.c.s"
	cd /d D:\School\3DProgramming\HollowEngine\HollowEngine\cmake-build-debug\Dependencies\libs\glfw-3.3.9\examples && C:\Users\Aslak\AppData\Local\Programs\CLION2~1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\School\3DProgramming\HollowEngine\HollowEngine\Dependencies\libs\glfw-3.3.9\deps\glad_gl.c -o CMakeFiles\heightmap.dir\__\deps\glad_gl.c.s

# Object files for target heightmap
heightmap_OBJECTS = \
"CMakeFiles/heightmap.dir/heightmap.c.obj" \
"CMakeFiles/heightmap.dir/glfw.rc.obj" \
"CMakeFiles/heightmap.dir/__/deps/glad_gl.c.obj"

# External object files for target heightmap
heightmap_EXTERNAL_OBJECTS =

Dependencies/libs/glfw-3.3.9/examples/heightmap.exe: Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/heightmap.c.obj
Dependencies/libs/glfw-3.3.9/examples/heightmap.exe: Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/glfw.rc.obj
Dependencies/libs/glfw-3.3.9/examples/heightmap.exe: Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/__/deps/glad_gl.c.obj
Dependencies/libs/glfw-3.3.9/examples/heightmap.exe: Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/build.make
Dependencies/libs/glfw-3.3.9/examples/heightmap.exe: Dependencies/libs/glfw-3.3.9/src/libglfw3.a
Dependencies/libs/glfw-3.3.9/examples/heightmap.exe: Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/linkLibs.rsp
Dependencies/libs/glfw-3.3.9/examples/heightmap.exe: Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/objects1.rsp
Dependencies/libs/glfw-3.3.9/examples/heightmap.exe: Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=D:\School\3DProgramming\HollowEngine\HollowEngine\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable heightmap.exe"
	cd /d D:\School\3DProgramming\HollowEngine\HollowEngine\cmake-build-debug\Dependencies\libs\glfw-3.3.9\examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\heightmap.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/build: Dependencies/libs/glfw-3.3.9/examples/heightmap.exe
.PHONY : Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/build

Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/clean:
	cd /d D:\School\3DProgramming\HollowEngine\HollowEngine\cmake-build-debug\Dependencies\libs\glfw-3.3.9\examples && $(CMAKE_COMMAND) -P CMakeFiles\heightmap.dir\cmake_clean.cmake
.PHONY : Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/clean

Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\School\3DProgramming\HollowEngine\HollowEngine D:\School\3DProgramming\HollowEngine\HollowEngine\Dependencies\libs\glfw-3.3.9\examples D:\School\3DProgramming\HollowEngine\HollowEngine\cmake-build-debug D:\School\3DProgramming\HollowEngine\HollowEngine\cmake-build-debug\Dependencies\libs\glfw-3.3.9\examples D:\School\3DProgramming\HollowEngine\HollowEngine\cmake-build-debug\Dependencies\libs\glfw-3.3.9\examples\CMakeFiles\heightmap.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : Dependencies/libs/glfw-3.3.9/examples/CMakeFiles/heightmap.dir/depend

