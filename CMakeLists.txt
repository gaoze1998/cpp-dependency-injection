cmake_minimum_required(VERSION 3.5.0)
project(cpp-event VERSION 0.1.0 LANGUAGES C CXX)
set(CMAKE_CXX_STANDARD 17)

include(CTest)
enable_testing()

add_executable(cpp-event main.cpp common.hpp event.hpp publisher.hpp publisher.cpp publisherfactory.hpp publisherfactory.cpp listener.hpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
