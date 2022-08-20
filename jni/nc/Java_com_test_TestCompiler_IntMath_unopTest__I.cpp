#include "Dex2C.h"

/* Lcom/test/TestCompiler/IntMath;->unopTest(I)I */
extern "C" JNIEXPORT jint JNICALL
Java_com_test_TestCompiler_IntMath_unopTest__I(JNIEnv *env, jobject thiz, jint p0){
jint v0;
v0 = (jint)p0;
L0:
LOGD("0:neg-int \x76\x30\x2c\x20\x76\x30");
v0 = (- v0);
LOGD("2:xor-int/lit8 \x76\x30\x2c\x20\x76\x30\x2c\x20\x2d\x31");
v0 = (v0 ^ -1);
return (jint) v0;
EX_UnwindBlock: return (jint)0;
}
