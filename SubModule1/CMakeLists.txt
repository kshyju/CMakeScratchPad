# CMakeList.txt : CMake project for CMakeScratchPad, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (SubModule1 "main.cpp" "main.h")

set(CMAKE_CXX_STANDARD 20)

if(NOT TARGET spdlog)
    # Stand-alone build
    find_package(spdlog REQUIRED)
endif()
target_link_libraries(SubModule1 PRIVATE spdlog::spdlog)

# TODO: Add tests and install targets if needed.
