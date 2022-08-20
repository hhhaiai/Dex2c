#include "Dex2C.h"

/* Lcom/test/TestCompiler/Goto;->run()V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_Goto_run__(JNIEnv *env, jobject thiz){
jint v0;
jint v1;
jint v2;
jclass cls0 = NULL;
jmethodID mth0 = NULL, mth1 = NULL, mth2 = NULL;
L0:
v0 = 0;
v0 = 0;
v0 = 0;
LOGD("2:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x73\x6d\x61\x6c\x6c\x47\x6f\x74\x6f\x28\x5a\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "smallGoto", "(Z)I");
jvalue args[] = {{.z = (jboolean) v0}};
v1 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v2 = 1;
v2 = 1;
v2 = 1;
LOGD("a:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x73\x6d\x61\x6c\x6c\x47\x6f\x74\x6f\x28\x5a\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "smallGoto", "(Z)I");
jvalue args[] = {{.z = (jboolean) v2}};
v1 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("10:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x6d\x65\x64\x69\x75\x6d\x47\x6f\x74\x6f\x28\x5a\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "mediumGoto", "(Z)I");
jvalue args[] = {{.z = (jboolean) v0}};
v1 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("16:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x6d\x65\x64\x69\x75\x6d\x47\x6f\x74\x6f\x28\x5a\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "mediumGoto", "(Z)I");
jvalue args[] = {{.z = (jboolean) v2}};
v1 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1c:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x62\x69\x67\x47\x6f\x74\x6f\x28\x5a\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "bigGoto", "(Z)I");
jvalue args[] = {{.z = (jboolean) v0}};
v1 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("22:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x62\x69\x67\x47\x6f\x74\x6f\x28\x5a\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "bigGoto", "(Z)I");
jvalue args[] = {{.z = (jboolean) v2}};
v1 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;
EX_UnwindBlock: return;
}
