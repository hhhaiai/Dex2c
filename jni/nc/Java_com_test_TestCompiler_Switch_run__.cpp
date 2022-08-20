#include "Dex2C.h"

/* Lcom/test/TestCompiler/Switch;->run()V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_Switch_run__(JNIEnv *env, jobject thiz){
jclass cls0 = NULL;
jmethodID mth0 = NULL;
L0:
LOGD("0:invoke-static \x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x77\x69\x74\x63\x68\x3b\x2d\x3e\x74\x65\x73\x74\x53\x77\x69\x74\x63\x68\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Switch", "testSwitch", "()V");
jvalue args[] = {};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;
EX_UnwindBlock: return;
}
