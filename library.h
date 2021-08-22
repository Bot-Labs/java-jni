#include <jni.h>

#ifndef JNISAMPLE_LIBRARY_H
#define JNISAMPLE_LIBRARY_H

extern "C"
{
JNIEXPORT jdouble JNICALL Java_JNIJavaSample_add(JNIEnv *, jobject, jdouble, jdouble);
};

#endif //JNISAMPLE_LIBRARY_H
