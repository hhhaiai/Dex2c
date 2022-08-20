#include "Dex2C.h"

/* Lcom/test/TestCompiler/MethodCallBase;->tryThing()I */
extern "C" JNIEXPORT jint JNICALL
Java_com_test_TestCompiler_MethodCallBase_tryThing__(JNIEnv *env, jobject thiz){
jobject v0 = NULL;
jint v1;
v0 = (jobject)env->NewLocalRef(thiz);
L0:
v1 = 7;
return (jint) v1;
EX_UnwindBlock: return (jint)0;
}
