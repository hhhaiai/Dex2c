#include "Dex2C.h"

/* Lcom/test/TestCompiler/MethodCall;->directly()V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_MethodCall_directly__(JNIEnv *env, jobject thiz){
jobject v0 = NULL;
v0 = (jobject)env->NewLocalRef(thiz);
L0:
return;
EX_UnwindBlock: return;
}
