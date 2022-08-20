#include "Dex2C.h"

/* Lcom/test/TestCompiler/Classes;->run()V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_Classes_run__(JNIEnv *env, jobject thiz){
jobject v0 = NULL;
jobject v1 = NULL;
jobject v2 = NULL;
jint v3;
jclass cls0 = NULL,cls1 = NULL;
jmethodID mth0 = NULL, mth1 = NULL, mth2 = NULL, mth3 = NULL, mth4 = NULL, mth5 = NULL;
L0:
LOGD("0:new-instance \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x43\x6c\x61\x73\x73\x65\x73\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
jclass &clz = cls0;
D2C_RESOLVE_CLASS(clz,"com/test/TestCompiler/Classes");
v0 = (jobject) env->AllocObject(clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("4:invoke-direct \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x43\x6c\x61\x73\x73\x65\x73\x3b\x2d\x3e\x3c\x69\x6e\x69\x74\x3e\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_METHOD(clz, mid, "com/test/TestCompiler/Classes", "<init>", "()V");
jvalue args[] = {};
env->CallVoidMethodA(v0, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("a:new-instance \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x6f\x72\x65\x43\x6c\x61\x73\x73\x65\x73\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
jclass &clz = cls1;
D2C_RESOLVE_CLASS(clz,"com/test/TestCompiler/MoreClasses");
v1 = (jobject) env->AllocObject(clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("e:invoke-direct \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x6f\x72\x65\x43\x6c\x61\x73\x73\x65\x73\x3b\x2d\x3e\x3c\x69\x6e\x69\x74\x3e\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
jclass &clz = cls1;
jmethodID &mid = mth1;
D2C_RESOLVE_METHOD(clz, mid, "com/test/TestCompiler/MoreClasses", "<init>", "()V");
jvalue args[] = {};
env->CallVoidMethodA(v1, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v2) {
LOGD("env->DeleteLocalRef(%p):v2", v2);
env->DeleteLocalRef(v2);
}
v2 = 0;
LOGD("16:invoke-virtual \x76\x30\x2c\x20\x76\x30\x2c\x20\x76\x31\x2c\x20\x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x43\x6c\x61\x73\x73\x65\x73\x3b\x2d\x3e\x63\x68\x65\x63\x6b\x43\x61\x73\x74\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls0;
jmethodID &mid = mth2;
D2C_RESOLVE_METHOD(clz, mid, "com/test/TestCompiler/Classes", "checkCast", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V");
jvalue args[] = {{.l = v0},{.l = v1},{.l = v2}};
env->CallVoidMethodA(v0, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v3 = 1;
LOGD("1e:invoke-virtual \x76\x31\x2c\x20\x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x6f\x72\x65\x43\x6c\x61\x73\x73\x65\x73\x3b\x2d\x3e\x73\x75\x62\x46\x75\x6e\x63\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
jclass &clz = cls1;
jmethodID &mid = mth3;
D2C_RESOLVE_METHOD(clz, mid, "com/test/TestCompiler/MoreClasses", "subFunc", "(Z)V");
jvalue args[] = {{.z = (jboolean) v3}};
env->CallVoidMethodA(v1, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v3 = 0;
LOGD("26:invoke-virtual \x76\x31\x2c\x20\x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x6f\x72\x65\x43\x6c\x61\x73\x73\x65\x73\x3b\x2d\x3e\x73\x75\x70\x65\x72\x46\x75\x6e\x63\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
jclass &clz = cls1;
jmethodID &mid = mth4;
D2C_RESOLVE_METHOD(clz, mid, "com/test/TestCompiler/MoreClasses", "superFunc", "(Z)V");
jvalue args[] = {{.z = (jboolean) v3}};
env->CallVoidMethodA(v1, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("2c:invoke-static \x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x43\x6c\x61\x73\x73\x65\x73\x3b\x2d\x3e\x61\x72\x72\x61\x79\x49\x6e\x73\x74\x61\x6e\x63\x65\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth5;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Classes", "arrayInstance", "()V");
jvalue args[] = {};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;
EX_UnwindBlock: return;
}
