cmake_minimum_required(VERSION 3.28)
project(AddressBook)

set(CMAKE_CXX_STANDARD 17)
include_directories(Struct.h)

aux_source_directory(. DIR_SRCS)
add_executable(AddressBook ${DIR_SRCS})