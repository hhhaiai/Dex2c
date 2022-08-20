#include "Dex2C.h"

/* Lcom/test/TestCompiler/Goto;->filler(I)I */
extern "C" JNIEXPORT jint JNICALL
Java_com_test_TestCompiler_Goto_filler__I(JNIEnv *env, jobject thiz, jint p1){
jint v0;
jint v1;
v0 = (jint)p1;
L0:
LOGD("0:add-int/lit8 \x76\x30\x2c\x20\x76\x31\x2c\x20\x31");
v1 = (v0 + 1);
return (jint) v1;
EX_UnwindBlock: return (jint)0;
}
