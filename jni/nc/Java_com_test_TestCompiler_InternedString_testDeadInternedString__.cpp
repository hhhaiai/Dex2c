#include "Dex2C.h"

/* Lcom/test/TestCompiler/InternedString;->testDeadInternedString()V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_InternedString_testDeadInternedString__(JNIEnv *env, jobject thiz){
jobject v0 = NULL;
jobject v1 = NULL;
jobject v2 = NULL;
jint v3;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL,cls3 = NULL;
jmethodID mth0 = NULL, mth1 = NULL, mth2 = NULL, mth3 = NULL, mth4 = NULL;
L0:
LOGD("0:invoke-static \x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x65\x72\x6e\x65\x64\x53\x74\x72\x69\x6e\x67\x3b\x2d\x3e\x6d\x61\x6b\x65\x57\x65\x61\x6b\x53\x74\x72\x69\x6e\x67\x28\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x72\x65\x66\x2f\x57\x65\x61\x6b\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/InternedString", "makeWeakString", "()Ljava/lang/ref/WeakReference;");
jvalue args[] = {};
v0 = (jobject) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("6:move-result-object \x76\x30");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jobject) v0;
LOGD("8:invoke-static \x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x52\x75\x6e\x74\x69\x6d\x65\x3b\x2d\x3e\x67\x65\x74\x52\x75\x6e\x74\x69\x6d\x65\x28\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x52\x75\x6e\x74\x69\x6d\x65\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls1;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/Runtime", "getRuntime", "()Ljava/lang/Runtime;");
jvalue args[] = {};
v0 = (jobject) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("e:move-result-object \x76\x31");
if (v2) {
LOGD("env->DeleteLocalRef(%p):v2", v2);
env->DeleteLocalRef(v2);
}
v2 = (jobject) v0;
LOGD("10:invoke-virtual \x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x52\x75\x6e\x74\x69\x6d\x65\x3b\x2d\x3e\x67\x63\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v2);
jclass &clz = cls1;
jmethodID &mid = mth2;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/Runtime", "gc", "()V");
jvalue args[] = {};
env->CallVoidMethodA(v2, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("16:invoke-virtual \x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x72\x65\x66\x2f\x57\x65\x61\x6b\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x3b\x2d\x3e\x67\x65\x74\x28\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
jclass &clz = cls2;
jmethodID &mid = mth3;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/ref/WeakReference", "get", "()Ljava/lang/Object;");
jvalue args[] = {};
v0 = (jobject) env->CallObjectMethodA(v1, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1c:move-result-object \x76\x31");
if (v2) {
LOGD("env->DeleteLocalRef(%p):v2", v2);
env->DeleteLocalRef(v2);
}
v2 = (jobject) v0;
LOGD("1e:if-nez \x76\x31\x2c\x20\x2b\x34");
if(v2 != NULL){
goto L2;
}
else {
goto L1;
}
L1:
v3 = 1;
goto L3;
L2:
v3 = 0;
L3:
LOGD("28:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth4;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v3}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;
EX_UnwindBlock: return;
}
