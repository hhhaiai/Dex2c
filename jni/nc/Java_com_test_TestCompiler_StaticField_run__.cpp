#include "Dex2C.h"

/* Lcom/test/TestCompiler/StaticField;->run()V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_StaticField_run__(JNIEnv *env, jobject thiz){
jclass cls0 = NULL;
jmethodID mth0 = NULL, mth1 = NULL;
L0:
LOGD("0:invoke-static \x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x61\x73\x73\x69\x67\x6e\x46\x69\x65\x6c\x64\x73\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/StaticField", "assignFields", "()V");
jvalue args[] = {};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("6:invoke-static \x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x63\x68\x65\x63\x6b\x46\x69\x65\x6c\x64\x73\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/StaticField", "checkFields", "()V");
jvalue args[] = {};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;
EX_UnwindBlock: return;
}
