#include "Dex2C.h"

/* Lcom/test/TestCompiler/InternedString;->makeWeakString()Ljava/lang/ref/WeakReference; */
extern "C" JNIEXPORT jobject JNICALL
Java_com_test_TestCompiler_InternedString_makeWeakString__(JNIEnv *env, jobject thiz){
jobject v0 = NULL;
jobject v1 = NULL;
jobject v2 = NULL;
jobject v3 = NULL;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL;
jmethodID mth0 = NULL, mth1 = NULL, mth2 = NULL, mth3 = NULL, mth4 = NULL;
L0:
LOGD("0:const-string \x76\x30\x2c\x20\x27\x62\x6c\x61\x68\x27");
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jstring) env->NewStringUTF("\x62\x6c\x61\x68");
LOGD("4:new-instance \x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x42\x75\x69\x6c\x64\x65\x72\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
jclass &clz = cls0;
D2C_RESOLVE_CLASS(clz,"java/lang/StringBuilder");
v1 = (jobject) env->AllocObject(clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("8:invoke-direct \x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x42\x75\x69\x6c\x64\x65\x72\x3b\x2d\x3e\x3c\x69\x6e\x69\x74\x3e\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/StringBuilder", "<init>", "()V");
jvalue args[] = {};
env->CallVoidMethodA(v1, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("e:invoke-virtual \x76\x31\x2c\x20\x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x42\x75\x69\x6c\x64\x65\x72\x3b\x2d\x3e\x61\x70\x70\x65\x6e\x64\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x42\x75\x69\x6c\x64\x65\x72\x3b");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
jclass &clz = cls0;
jmethodID &mid = mth1;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/StringBuilder", "append", "(Ljava/lang/String;)Ljava/lang/StringBuilder;");
jvalue args[] = {{.l = v0}};
v2 = (jobject) env->CallObjectMethodA(v1, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v2) {
LOGD("env->DeleteLocalRef(%p):v2", v2);
env->DeleteLocalRef(v2);
}
LOGD("14:invoke-virtual \x76\x31\x2c\x20\x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x42\x75\x69\x6c\x64\x65\x72\x3b\x2d\x3e\x61\x70\x70\x65\x6e\x64\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x42\x75\x69\x6c\x64\x65\x72\x3b");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
jclass &clz = cls0;
jmethodID &mid = mth1;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/StringBuilder", "append", "(Ljava/lang/String;)Ljava/lang/StringBuilder;");
jvalue args[] = {{.l = v0}};
v2 = (jobject) env->CallObjectMethodA(v1, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v2) {
LOGD("env->DeleteLocalRef(%p):v2", v2);
env->DeleteLocalRef(v2);
}
LOGD("1a:invoke-virtual \x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x42\x75\x69\x6c\x64\x65\x72\x3b\x2d\x3e\x74\x6f\x53\x74\x72\x69\x6e\x67\x28\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
jclass &clz = cls0;
jmethodID &mid = mth2;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/StringBuilder", "toString", "()Ljava/lang/String;");
jvalue args[] = {};
v2 = (jstring) env->CallObjectMethodA(v1, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("20:move-result-object \x76\x30");
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v2;
LOGD("22:new-instance \x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x72\x65\x66\x2f\x57\x65\x61\x6b\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
jclass &clz = cls1;
D2C_RESOLVE_CLASS(clz,"java/lang/ref/WeakReference");
v1 = (jobject) env->AllocObject(clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("26:invoke-virtual \x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x2d\x3e\x69\x6e\x74\x65\x72\x6e\x28\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jmethodID &mid = mth3;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/String", "intern", "()Ljava/lang/String;");
jvalue args[] = {};
v2 = (jstring) env->CallObjectMethodA(v0, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("2c:move-result-object \x76\x32");
if (v3) {
LOGD("env->DeleteLocalRef(%p):v3", v3);
env->DeleteLocalRef(v3);
}
v3 = (jobject) v2;
LOGD("2e:invoke-direct \x76\x31\x2c\x20\x76\x32\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x72\x65\x66\x2f\x57\x65\x61\x6b\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x3b\x2d\x3e\x3c\x69\x6e\x69\x74\x3e\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
jclass &clz = cls1;
jmethodID &mid = mth4;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/ref/WeakReference", "<init>", "(Ljava/lang/Object;)V");
jvalue args[] = {{.l = v3}};
env->CallVoidMethodA(v1, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return (jobject) v1;
EX_UnwindBlock: return NULL;
}
