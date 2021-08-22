
#include <iostream>
#include "library.h"

jdouble JNICALL Java_JNIJavaSample_add(JNIEnv *env, jobject obj, jdouble a, jdouble b)
{
    printf("Print from C++!\n");
    return a + b;
}
