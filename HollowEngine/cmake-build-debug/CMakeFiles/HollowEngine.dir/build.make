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
include CMakeFiles/HollowEngine.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/HollowEngine.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/HollowEngine.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HollowEngine.dir/flags.make

CMakeFiles/HollowEngine.dir/main.cpp.obj: CMakeFiles/HollowEngine.dir/flags.make
CMakeFiles/HollowEngine.dir/main.cpp.obj: CMakeFiles/HollowEngine.dir/includes_CXX.rsp
CMakeFiles/HollowEngine.dir/main.cpp.obj: D:/School/3DProgramming/HollowEngine/HollowEngine/main.cpp
CMakeFiles/HollowEngine.dir/main.cpp.obj: CMakeFiles/HollowEngine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\School\3DProgramming\HollowEngine\HollowEngine\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HollowEngine.dir/main.cpp.obj"
	C:\Users\Aslak\AppData\Local\Programs\CLION2~1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/HollowEngine.dir/main.cpp.obj -MF CMakeFiles\HollowEngine.dir\main.cpp.obj.d -o CMakeFiles\HollowEngine.dir\main.cpp.obj -c D:\School\3DProgramming\HollowEngine\HollowEngine\main.cpp

CMakeFiles/HollowEngine.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/HollowEngine.dir/main.cpp.i"
	C:\Users\Aslak\AppData\Local\Programs\CLION2~1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\School\3DProgramming\HollowEngine\HollowEngine\main.cpp > CMakeFiles\HollowEngine.dir\main.cpp.i

CMakeFiles/HollowEngine.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/HollowEngine.dir/main.cpp.s"
	C:\Users\Aslak\AppData\Local\Programs\CLION2~1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\School\3DProgramming\HollowEngine\HollowEngine\main.cpp -o CMakeFiles\HollowEngine.dir\main.cpp.s

CMakeFiles/HollowEngine.dir/glad.c.obj: CMakeFiles/HollowEngine.dir/flags.make
CMakeFiles/HollowEngine.dir/glad.c.obj: CMakeFiles/HollowEngine.dir/includes_C.rsp
CMakeFiles/HollowEngine.dir/glad.c.obj: D:/School/3DProgramming/HollowEngine/HollowEngine/glad.c
CMakeFiles/HollowEngine.dir/glad.c.obj: CMakeFiles/HollowEngine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\School\3DProgramming\HollowEngine\HollowEngine\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/HollowEngine.dir/glad.c.obj"
	C:\Users\Aslak\AppData\Local\Programs\CLION2~1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/HollowEngine.dir/glad.c.obj -MF CMakeFiles\HollowEngine.dir\glad.c.obj.d -o CMakeFiles\HollowEngine.dir\glad.c.obj -c D:\School\3DProgramming\HollowEngine\HollowEngine\glad.c

CMakeFiles/HollowEngine.dir/glad.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/HollowEngine.dir/glad.c.i"
	C:\Users\Aslak\AppData\Local\Programs\CLION2~1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\School\3DProgramming\HollowEngine\HollowEngine\glad.c > CMakeFiles\HollowEngine.dir\glad.c.i

CMakeFiles/HollowEngine.dir/glad.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/HollowEngine.dir/glad.c.s"
	C:\Users\Aslak\AppData\Local\Programs\CLION2~1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\School\3DProgramming\HollowEngine\HollowEngine\glad.c -o CMakeFiles\HollowEngine.dir\glad.c.s

CMakeFiles/HollowEngine.dir/Core/Camera.cpp.obj: CMakeFiles/HollowEngine.dir/flags.make
CMakeFiles/HollowEngine.dir/Core/Camera.cpp.obj: CMakeFiles/HollowEngine.dir/includes_CXX.rsp
CMakeFiles/HollowEngine.dir/Core/Camera.cpp.obj: D:/School/3DProgramming/HollowEngine/HollowEngine/Core/Camera.cpp
CMakeFiles/HollowEngine.dir/Core/Camera.cpp.obj: CMakeFiles/HollowEngine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\School\3DProgramming\HollowEngine\HollowEngine\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/HollowEngine.dir/Core/Camera.cpp.obj"
	C:\Users\Aslak\AppData\Local\Programs\CLION2~1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/HollowEngine.dir/Core/Camera.cpp.obj -MF CMakeFiles\HollowEngine.dir\Core\Camera.cpp.obj.d -o CMakeFiles\HollowEngine.dir\Core\Camera.cpp.obj -c D:\School\3DProgramming\HollowEngine\HollowEngine\Core\Camera.cpp

CMakeFiles/HollowEngine.dir/Core/Camera.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/HollowEngine.dir/Core/Camera.cpp.i"
	C:\Users\Aslak\AppData\Local\Programs\CLION2~1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\School\3DProgramming\HollowEngine\HollowEngine\Core\Camera.cpp > CMakeFiles\HollowEngine.dir\Core\Camera.cpp.i

CMakeFiles/HollowEngine.dir/Core/Camera.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/HollowEngine.dir/Core/Camera.cpp.s"
	C:\Users\Aslak\AppData\Local\Programs\CLION2~1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\School\3DProgramming\HollowEngine\HollowEngine\Core\Camera.cpp -o CMakeFiles\HollowEngine.dir\Core\Camera.cpp.s

CMakeFiles/HollowEngine.dir/Core/Shaders.cpp.obj: CMakeFiles/HollowEngine.dir/flags.make
CMakeFiles/HollowEngine.dir/Core/Shaders.cpp.obj: CMakeFiles/HollowEngine.dir/includes_CXX.rsp
CMakeFiles/HollowEngine.dir/Core/Shaders.cpp.obj: D:/School/3DProgramming/HollowEngine/HollowEngine/Core/Shaders.cpp
CMakeFiles/HollowEngine.dir/Core/Shaders.cpp.obj: CMakeFiles/HollowEngine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\School\3DProgramming\HollowEngine\HollowEngine\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/HollowEngine.dir/Core/Shaders.cpp.obj"
	C:\Users\Aslak\AppData\Local\Programs\CLION2~1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/HollowEngine.dir/Core/Shaders.cpp.obj -MF CMakeFiles\HollowEngine.dir\Core\Shaders.cpp.obj.d -o CMakeFiles\HollowEngine.dir\Core\Shaders.cpp.obj -c D:\School\3DProgramming\HollowEngine\HollowEngine\Core\Shaders.cpp

CMakeFiles/HollowEngine.dir/Core/Shaders.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/HollowEngine.dir/Core/Shaders.cpp.i"
	C:\Users\Aslak\AppData\Local\Programs\CLION2~1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\School\3DProgramming\HollowEngine\HollowEngine\Core\Shaders.cpp > CMakeFiles\HollowEngine.dir\Core\Shaders.cpp.i

CMakeFiles/HollowEngine.dir/Core/Shaders.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/HollowEngine.dir/Core/Shaders.cpp.s"
	C:\Users\Aslak\AppData\Local\Programs\CLION2~1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\School\3DProgramming\HollowEngine\HollowEngine\Core\Shaders.cpp -o CMakeFiles\HollowEngine.dir\Core\Shaders.cpp.s

# Object files for target HollowEngine
HollowEngine_OBJECTS = \
"CMakeFiles/HollowEngine.dir/main.cpp.obj" \
"CMakeFiles/HollowEngine.dir/glad.c.obj" \
"CMakeFiles/HollowEngine.dir/Core/Camera.cpp.obj" \
"CMakeFiles/HollowEngine.dir/Core/Shaders.cpp.obj"

# External object files for target HollowEngine
HollowEngine_EXTERNAL_OBJECTS =

HollowEngine.exe: CMakeFiles/HollowEngine.dir/main.cpp.obj
HollowEngine.exe: CMakeFiles/HollowEngine.dir/glad.c.obj
HollowEngine.exe: CMakeFiles/HollowEngine.dir/Core/Camera.cpp.obj
HollowEngine.exe: CMakeFiles/HollowEngine.dir/Core/Shaders.cpp.obj
HollowEngine.exe: CMakeFiles/HollowEngine.dir/build.make
HollowEngine.exe: Dependencies/libs/glfw-3.3.9/src/libglfw3.a
HollowEngine.exe: CMakeFiles/HollowEngine.dir/linkLibs.rsp
HollowEngine.exe: CMakeFiles/HollowEngine.dir/objects1.rsp
HollowEngine.exe: CMakeFiles/HollowEngine.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=D:\School\3DProgramming\HollowEngine\HollowEngine\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable HollowEngine.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\HollowEngine.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HollowEngine.dir/build: HollowEngine.exe
.PHONY : CMakeFiles/HollowEngine.dir/build

CMakeFiles/HollowEngine.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\HollowEngine.dir\cmake_clean.cmake
.PHONY : CMakeFiles/HollowEngine.dir/clean

CMakeFiles/HollowEngine.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\School\3DProgramming\HollowEngine\HollowEngine D:\School\3DProgramming\HollowEngine\HollowEngine D:\School\3DProgramming\HollowEngine\HollowEngine\cmake-build-debug D:\School\3DProgramming\HollowEngine\HollowEngine\cmake-build-debug D:\School\3DProgramming\HollowEngine\HollowEngine\cmake-build-debug\CMakeFiles\HollowEngine.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/HollowEngine.dir/depend

