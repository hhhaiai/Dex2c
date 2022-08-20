#include "Dex2C.h"

/* Lcom/test/TestCompiler/Main;->run()V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_Main_run__(JNIEnv *env, jobject thiz){
jobject v0 = NULL;
jobject v1 = NULL;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL,cls3 = NULL,cls4 = NULL,cls5 = NULL,cls6 = NULL,cls7 = NULL,cls8 = NULL,cls9 = NULL,cls10 = NULL,cls11 = NULL,cls12 = NULL,cls13 = NULL,cls14 = NULL;
jmethodID mth0 = NULL, mth1 = NULL, mth2 = NULL, mth3 = NULL, mth4 = NULL, mth5 = NULL, mth6 = NULL, mth7 = NULL, mth8 = NULL, mth9 = NULL, mth10 = NULL, mth11 = NULL, mth12 = NULL, mth13 = NULL, mth14 = NULL, mth15 = NULL;
v0 = (jobject)env->NewLocalRef(thiz);
L0:
LOGD("0:new-instance \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
jclass &clz = cls0;
D2C_RESOLVE_CLASS(clz,"com/test/TestCompiler/InstField");
v1 = (jobject) env->AllocObject(clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("4:invoke-direct \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x3c\x69\x6e\x69\x74\x3e\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_METHOD(clz, mid, "com/test/TestCompiler/InstField", "<init>", "()V");
jvalue args[] = {};
env->CallVoidMethodA(v1, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("a:invoke-virtual \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x72\x75\x6e\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
jclass &clz = cls0;
jmethodID &mid = mth1;
D2C_RESOLVE_METHOD(clz, mid, "com/test/TestCompiler/InstField", "run", "()V");
jvalue args[] = {};
env->CallVoidMethodA(v1, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("10:invoke-static \x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x72\x75\x6e\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls1;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/StaticField", "run", "()V");
jvalue args[] = {};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("16:invoke-static \x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x72\x75\x6e\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth3;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/IntMath", "run", "()V");
jvalue args[] = {};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1c:invoke-static \x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x72\x75\x6e\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth4;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/FloatMath", "run", "()V");
jvalue args[] = {};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("22:invoke-static \x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x43\x6f\x6d\x70\x61\x72\x65\x3b\x2d\x3e\x72\x75\x6e\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls4;
jmethodID &mid = mth5;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Compare", "run", "()V");
jvalue args[] = {};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("28:invoke-static \x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x6f\x6e\x69\x74\x6f\x72\x3b\x2d\x3e\x72\x75\x6e\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls5;
jmethodID &mid = mth6;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Monitor", "run", "()V");
jvalue args[] = {};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("2e:invoke-static \x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x77\x69\x74\x63\x68\x3b\x2d\x3e\x72\x75\x6e\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls6;
jmethodID &mid = mth7;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Switch", "run", "()V");
jvalue args[] = {};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("34:invoke-static \x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x41\x72\x72\x61\x79\x3b\x2d\x3e\x72\x75\x6e\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls7;
jmethodID &mid = mth8;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Array", "run", "()V");
jvalue args[] = {};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("3a:invoke-static \x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x43\x6c\x61\x73\x73\x65\x73\x3b\x2d\x3e\x72\x75\x6e\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls8;
jmethodID &mid = mth9;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Classes", "run", "()V");
jvalue args[] = {};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("40:invoke-static \x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x72\x75\x6e\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls9;
jmethodID &mid = mth10;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "run", "()V");
jvalue args[] = {};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("46:invoke-static \x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x65\x74\x68\x6f\x64\x43\x61\x6c\x6c\x3b\x2d\x3e\x72\x75\x6e\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls10;
jmethodID &mid = mth11;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/MethodCall", "run", "()V");
jvalue args[] = {};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("4c:invoke-static \x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x54\x68\x72\x6f\x77\x3b\x2d\x3e\x72\x75\x6e\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls11;
jmethodID &mid = mth12;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Throw", "run", "()V");
jvalue args[] = {};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("52:invoke-static \x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x65\x6e\x53\x65\x6c\x65\x63\x74\x3b\x2d\x3e\x72\x75\x6e\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls12;
jmethodID &mid = mth13;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/GenSelect", "run", "()V");
jvalue args[] = {};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("58:invoke-static \x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x46\x69\x6c\x6c\x41\x72\x72\x61\x79\x44\x61\x74\x61\x3b\x2d\x3e\x72\x75\x6e\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls13;
jmethodID &mid = mth14;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/FillArrayData", "run", "()V");
jvalue args[] = {};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("5e:invoke-static \x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4c\x6f\x63\x61\x6c\x52\x65\x66\x3b\x2d\x3e\x72\x75\x6e\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls14;
jmethodID &mid = mth15;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/LocalRef", "run", "()V");
jvalue args[] = {};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;
EX_UnwindBlock: return;
}
