# CMakeList.txt : CMake project for sp-Engine, include source and define
# project specific logic here.
#
cmake_minimum_required(VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project(sp-Engine VERSION 1.0.0)

# SDL3
# Windows: add SDL3_Dir to user varaiables and point to the SDL3 folder
find_package(SDL3 REQUIRED)

# Add source to this project's executable.
add_executable(sp-Engine "main.cpp" "include/")

# SDL3
target_link_libraries(sp-Engine PRIVATE SDL3::SDL3)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET sp-Engine PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.

if(WIN32)
    add_custom_command(TARGET sp-Engine POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        $<TARGET_FILE:SDL3::SDL3> $<TARGET_FILE_DIR:sp-Engine>
    )
endif()
