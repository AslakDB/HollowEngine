
if (NOT EXISTS "C:/3DProg/Github/HollowEngine/HollowEngine/cmake-build-debug/Dependencies/libs/glfw-3.3.9/install_manifest.txt")
  message(FATAL_ERROR "Cannot find install manifest: \"C:/3DProg/Github/HollowEngine/HollowEngine/cmake-build-debug/Dependencies/libs/glfw-3.3.9/install_manifest.txt\"")
endif()

file(READ "C:/3DProg/Github/HollowEngine/HollowEngine/cmake-build-debug/Dependencies/libs/glfw-3.3.9/install_manifest.txt" files)
string(REGEX REPLACE "\n" ";" files "${files}")

foreach (file ${files})
  message(STATUS "Uninstalling \"$ENV{DESTDIR}${file}\"")
  if (EXISTS "$ENV{DESTDIR}${file}")
    exec_program("C:/Users/askel/AppData/Local/JetBrains/Toolbox/apps/CLion/ch-1/241.14494.288/bin/cmake/win/x64/bin/cmake.exe" ARGS "-E remove \"$ENV{DESTDIR}${file}\""
                 OUTPUT_VARIABLE rm_out
                 RETURN_VALUE rm_retval)
    if (NOT "${rm_retval}" STREQUAL 0)
      MESSAGE(FATAL_ERROR "Problem when removing \"$ENV{DESTDIR}${file}\"")
    endif()
  elseif (IS_SYMLINK "$ENV{DESTDIR}${file}")
    EXEC_PROGRAM("C:/Users/askel/AppData/Local/JetBrains/Toolbox/apps/CLion/ch-1/241.14494.288/bin/cmake/win/x64/bin/cmake.exe" ARGS "-E remove \"$ENV{DESTDIR}${file}\""
                 OUTPUT_VARIABLE rm_out
                 RETURN_VALUE rm_retval)
    if (NOT "${rm_retval}" STREQUAL 0)
      message(FATAL_ERROR "Problem when removing symlink \"$ENV{DESTDIR}${file}\"")
    endif()
  else()
    message(STATUS "File \"$ENV{DESTDIR}${file}\" does not exist.")
  endif()
endforeach()

