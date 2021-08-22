#!/bin/bash

# Clean the history
rm -rf build>>/dev/null
rm *.class>>/dev/null

# Compile and build JNI shared library
mkdir build
cd build
cmake ../
make

# Compile Java file
cd ../
javac JNIJavaSample.java

# Run Java class file
java -Djava.library.path=./build JNIJavaSample

# Clean the class files
rm *.class>>/dev/null

echo "Done and Happy coding!"