cmake_minimum_required (VERSION 2.8.0)
project (msvsover)

include("BasicChecks.cmake")
include("BitwidthChecks.cmake")

configure_file ("${CMAKE_CURRENT_SOURCE_DIR}/Bitwidth_Style_Types.h.in"
                "${CMAKE_CURRENT_BINARY_DIR}/Bitwidth_Style_Types.h")

include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_executable(msvsover msvsover.cpp)

enable_testing()

add_test(msvsover_test msvsover)
 