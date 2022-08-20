#include "Dex2C.h"

/* Lcom/test/TestCompiler/InstField;->run()V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_InstField_run__(JNIEnv *env, jobject thiz){
jobject v0 = NULL;
jobject v1 = NULL;
jclass cls0 = NULL;
jmethodID mth0 = NULL, mth1 = NULL, mth2 = NULL;
v0 = (jobject)env->NewLocalRef(thiz);
L0:
LOGD("0:invoke-virtual \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x61\x73\x73\x69\x67\x6e\x46\x69\x65\x6c\x64\x73\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_METHOD(clz, mid, "com/test/TestCompiler/InstField", "assignFields", "()V");
jvalue args[] = {};
env->CallVoidMethodA(v0, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("6:invoke-virtual \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x63\x68\x65\x63\x6b\x46\x69\x65\x6c\x64\x73\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls0;
jmethodID &mid = mth1;
D2C_RESOLVE_METHOD(clz, mid, "com/test/TestCompiler/InstField", "checkFields", "()V");
jvalue args[] = {};
env->CallVoidMethodA(v0, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = 0;
LOGD("e:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6e\x75\x6c\x6c\x43\x68\x65\x63\x6b\x28\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/InstField", "nullCheck", "(Lcom/test/TestCompiler/InstField;)V");
jvalue args[] = {{.l = v1}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;
EX_UnwindBlock: return;
}
