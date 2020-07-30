#include <iostream>
#include "NativeLibrary.h"

JNIEXPORT void JNICALL Java_NativeLibrary_printOne(JNIEnv * env, jclass jcl) {
    (void) env;
    (void) jcl;
    std::cout << "One" << '\n';
}
