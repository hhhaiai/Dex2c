#include "Dex2C.h"

/* Lcom/test/TestCompiler/GenSelect;->run()V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_GenSelect_run__(JNIEnv *env, jobject thiz){
jint v0;
jobject v1 = NULL;
jobject v2 = NULL;
jobject v3 = NULL;
jint v4;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL;
jmethodID mth0 = NULL, mth1 = NULL, mth2 = NULL;
L0:
v0 = 1;
LOGD("2:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x65\x6e\x53\x65\x6c\x65\x63\x74\x3b\x2d\x3e\x74\x65\x73\x74\x28\x5a\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/GenSelect", "test", "(Z)Ljava/lang/String;");
jvalue args[] = {{.z = (jboolean) v0}};
v1 = (jstring) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("8:move-result-object \x76\x30");
if (v2) {
LOGD("env->DeleteLocalRef(%p):v2", v2);
env->DeleteLocalRef(v2);
}
v2 = (jobject) v1;
LOGD("a:const-string \x76\x31\x2c\x20\x27\x74\x72\x75\x65\x27");
if (v3) {
LOGD("env->DeleteLocalRef(%p):v3", v3);
env->DeleteLocalRef(v3);
}
v3 = (jstring) env->NewStringUTF("\x74\x72\x75\x65");
LOGD("e:invoke-virtual \x76\x30\x2c\x20\x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x2d\x3e\x65\x71\x75\x61\x6c\x73\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b\x29\x5a");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v2);
jclass &clz = cls1;
jmethodID &mid = mth1;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/String", "equals", "(Ljava/lang/Object;)Z");
jvalue args[] = {{.l = v3}};
v4 = (jboolean) env->CallBooleanMethodA(v2, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("14:move-result \x76\x30");
v0 = (jint) v4;
LOGD("16:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v0}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v0 = 0;
LOGD("1e:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x65\x6e\x53\x65\x6c\x65\x63\x74\x3b\x2d\x3e\x74\x65\x73\x74\x28\x5a\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/GenSelect", "test", "(Z)Ljava/lang/String;");
jvalue args[] = {{.z = (jboolean) v0}};
v1 = (jstring) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("24:move-result-object \x76\x30");
if (v2) {
LOGD("env->DeleteLocalRef(%p):v2", v2);
env->DeleteLocalRef(v2);
}
v2 = (jobject) v1;
LOGD("26:const-string \x76\x31\x2c\x20\x27\x66\x61\x6c\x73\x65\x27");
if (v3) {
LOGD("env->DeleteLocalRef(%p):v3", v3);
env->DeleteLocalRef(v3);
}
v3 = (jstring) env->NewStringUTF("\x66\x61\x6c\x73\x65");
LOGD("2a:invoke-virtual \x76\x30\x2c\x20\x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x2d\x3e\x65\x71\x75\x61\x6c\x73\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b\x29\x5a");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v2);
jclass &clz = cls1;
jmethodID &mid = mth1;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/String", "equals", "(Ljava/lang/Object;)Z");
jvalue args[] = {{.l = v3}};
v4 = (jboolean) env->CallBooleanMethodA(v2, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("30:move-result \x76\x30");
v0 = (jint) v4;
LOGD("32:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v0}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;
EX_UnwindBlock: return;
}
