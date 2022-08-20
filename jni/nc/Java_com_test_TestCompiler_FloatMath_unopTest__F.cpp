#include "Dex2C.h"

/* Lcom/test/TestCompiler/FloatMath;->unopTest(F)F */
extern "C" JNIEXPORT jfloat JNICALL
Java_com_test_TestCompiler_FloatMath_unopTest__F(JNIEnv *env, jobject thiz, jfloat p0){
jfloat v0;
v0 = (jfloat)p0;
L0:
LOGD("0:neg-float \x76\x30\x2c\x20\x76\x30");
v0 = (- v0);
return (jfloat) v0;
EX_UnwindBlock: return (jfloat)0;
}
