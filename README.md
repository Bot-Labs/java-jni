#### Build C++ JNI shared library
```bash
mkdir build
cd build
cmake ../
make
```

#### Compile the Java file
```bash
cd ../
javac JNIJavaSample.java
```

#### Run the Java class
```bash

java - -Djava.library.path=./build JNIJavaSample
```
#### Run using the sh file
```bash

chmod +x build_n_run.sh
./build_n_run.sh
```
