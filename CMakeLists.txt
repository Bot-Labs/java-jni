cmake_minimum_required(VERSION 3.10)
project(JNISample)

set(CMAKE_CXX_STANDARD 14)

# Change your path based on your JVM
include_directories(
        headers
        /usr/lib/jvm/java-11-openjdk-amd64/include
        /usr/lib/jvm/java-11-openjdk-amd64/include/linux)

set(SOURCE cpp/library.cpp)

add_library(jnilib SHARED ${SOURCE} )