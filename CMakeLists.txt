cmake_minimum_required (VERSION 3.0.0)
project (msvsover)

include("BasicChecks.cmake")
include("BitwidthChecks.cmake")

configure_file ("${CMAKE_CURRENT_SOURCE_DIR}/Bitwidth_Style_Types.h.in"
                "${CMAKE_CURRENT_BINARY_DIR}/Bitwidth_Style_Types.h")


add_executable(msvsover msvsover.cpp)

enable_testing()

add_test(msvsover_test msvsover)
 