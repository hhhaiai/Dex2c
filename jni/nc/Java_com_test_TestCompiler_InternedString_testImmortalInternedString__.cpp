#include "Dex2C.h"

/* Lcom/test/TestCompiler/InternedString;->testImmortalInternedString()V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_InternedString_testImmortalInternedString__(JNIEnv *env, jobject thiz){
jobject v0 = NULL;
jobject v1 = NULL;
jobject v2 = NULL;
jobject v3 = NULL;
jint v4;
jint v5;
jobject v6 = NULL;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL,cls3 = NULL;
jmethodID mth0 = NULL, mth1 = NULL, mth2 = NULL, mth3 = NULL, mth4 = NULL, mth5 = NULL;
L0:
LOGD("0:new-instance \x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x72\x65\x66\x2f\x57\x65\x61\x6b\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
jclass &clz = cls0;
D2C_RESOLVE_CLASS(clz,"java/lang/ref/WeakReference");
v0 = (jobject) env->AllocObject(clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("4:const-string \x76\x31\x2c\x20\x27\x43\x6c\x61\x73\x73\x20\x49\x6e\x74\x65\x72\x6e\x65\x64\x53\x74\x72\x69\x6e\x67\x27");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jstring) env->NewStringUTF("\x43\x6c\x61\x73\x73\x20\x49\x6e\x74\x65\x72\x6e\x65\x64\x53\x74\x72\x69\x6e\x67");
LOGD("8:invoke-virtual \x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x2d\x3e\x69\x6e\x74\x65\x72\x6e\x28\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
jclass &clz = cls1;
jmethodID &mid = mth0;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/String", "intern", "()Ljava/lang/String;");
jvalue args[] = {};
v2 = (jstring) env->CallObjectMethodA(v1, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("e:move-result-object \x76\x31");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jobject) v2;
LOGD("10:invoke-direct \x76\x30\x2c\x20\x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x72\x65\x66\x2f\x57\x65\x61\x6b\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x3b\x2d\x3e\x3c\x69\x6e\x69\x74\x3e\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls0;
jmethodID &mid = mth1;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/ref/WeakReference", "<init>", "(Ljava/lang/Object;)V");
jvalue args[] = {{.l = v1}};
env->CallVoidMethodA(v0, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("16:invoke-static \x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x52\x75\x6e\x74\x69\x6d\x65\x3b\x2d\x3e\x67\x65\x74\x52\x75\x6e\x74\x69\x6d\x65\x28\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x52\x75\x6e\x74\x69\x6d\x65\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/Runtime", "getRuntime", "()Ljava/lang/Runtime;");
jvalue args[] = {};
v2 = (jobject) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1c:move-result-object \x76\x31");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jobject) v2;
LOGD("1e:invoke-virtual \x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x52\x75\x6e\x74\x69\x6d\x65\x3b\x2d\x3e\x67\x63\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
jclass &clz = cls2;
jmethodID &mid = mth3;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/Runtime", "gc", "()V");
jvalue args[] = {};
env->CallVoidMethodA(v1, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("24:const-string \x76\x31\x2c\x20\x27\x43\x6c\x61\x73\x73\x20\x49\x6e\x74\x65\x72\x6e\x65\x64\x53\x74\x72\x69\x6e\x67\x27");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jstring) env->NewStringUTF("\x43\x6c\x61\x73\x73\x20\x49\x6e\x74\x65\x72\x6e\x65\x64\x53\x74\x72\x69\x6e\x67");
LOGD("28:const-string \x76\x32\x2c\x20\x27\x43\x6c\x61\x73\x73\x20\x49\x6e\x74\x65\x72\x6e\x65\x64\x53\x74\x72\x69\x6e\x67\x27");
if (v3) {
LOGD("env->DeleteLocalRef(%p):v3", v3);
env->DeleteLocalRef(v3);
}
v3 = (jstring) env->NewStringUTF("\x43\x6c\x61\x73\x73\x20\x49\x6e\x74\x65\x72\x6e\x65\x64\x53\x74\x72\x69\x6e\x67");
LOGD("2c:invoke-virtual \x76\x32\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x2d\x3e\x69\x6e\x74\x65\x72\x6e\x28\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v3);
jclass &clz = cls1;
jmethodID &mid = mth0;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/String", "intern", "()Ljava/lang/String;");
jvalue args[] = {};
v2 = (jstring) env->CallObjectMethodA(v3, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("32:move-result-object \x76\x32");
if (v3) {
LOGD("env->DeleteLocalRef(%p):v3", v3);
env->DeleteLocalRef(v3);
}
v3 = (jobject) v2;
v4 = 1;
LOGD("38:if-ne \x76\x31\x2c\x20\x76\x32\x2c\x20\x2b\x34");
if(!d2c_is_same_object(env,v1,v3)) {
goto L2;
}
else {
goto L1;
}
L1:
v5 = 1;
goto L3;
L2:
v5 = 0;
L3:
LOGD("42:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth4;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v5}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("48:invoke-virtual \x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x72\x65\x66\x2f\x57\x65\x61\x6b\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x3b\x2d\x3e\x67\x65\x74\x28\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls0;
jmethodID &mid = mth5;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/ref/WeakReference", "get", "()Ljava/lang/Object;");
jvalue args[] = {};
v2 = (jobject) env->CallObjectMethodA(v0, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("4e:move-result-object \x76\x31");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jobject) v2;
LOGD("50:if-eqz \x76\x31\x2c\x20\x2b\x34");
if(v1 == NULL){
goto L5;
}
else {
goto L4;
}
L4:
v5 = 1;
goto L6;
L5:
v5 = 0;
L6:
LOGD("5a:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth4;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v5}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("60:const-string \x76\x31\x2c\x20\x27\x43\x6c\x61\x73\x73\x20\x49\x6e\x74\x65\x72\x6e\x65\x64\x53\x74\x72\x69\x6e\x67\x27");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jstring) env->NewStringUTF("\x43\x6c\x61\x73\x73\x20\x49\x6e\x74\x65\x72\x6e\x65\x64\x53\x74\x72\x69\x6e\x67");
LOGD("64:new-instance \x76\x32\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x72\x65\x66\x2f\x57\x65\x61\x6b\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v3) {
LOGD("env->DeleteLocalRef(%p):v3", v3);
env->DeleteLocalRef(v3);
}
jclass &clz = cls0;
D2C_RESOLVE_CLASS(clz,"java/lang/ref/WeakReference");
v3 = (jobject) env->AllocObject(clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("68:invoke-virtual \x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x2d\x3e\x69\x6e\x74\x65\x72\x6e\x28\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
jclass &clz = cls1;
jmethodID &mid = mth0;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/String", "intern", "()Ljava/lang/String;");
jvalue args[] = {};
v2 = (jstring) env->CallObjectMethodA(v1, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("6e:move-result-object \x76\x35");
if (v6) {
LOGD("env->DeleteLocalRef(%p):v6", v6);
env->DeleteLocalRef(v6);
}
v6 = (jobject) v2;
LOGD("70:invoke-direct \x76\x32\x2c\x20\x76\x35\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x72\x65\x66\x2f\x57\x65\x61\x6b\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x3b\x2d\x3e\x3c\x69\x6e\x69\x74\x3e\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v3);
jclass &clz = cls0;
jmethodID &mid = mth1;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/ref/WeakReference", "<init>", "(Ljava/lang/Object;)V");
jvalue args[] = {{.l = v6}};
env->CallVoidMethodA(v3, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) env->NewLocalRef(v3);
LOGD("78:const-string \x76\x31\x2c\x20\x27\x27");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jstring) env->NewStringUTF("");
LOGD("7c:invoke-static \x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x52\x75\x6e\x74\x69\x6d\x65\x3b\x2d\x3e\x67\x65\x74\x52\x75\x6e\x74\x69\x6d\x65\x28\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x52\x75\x6e\x74\x69\x6d\x65\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/Runtime", "getRuntime", "()Ljava/lang/Runtime;");
jvalue args[] = {};
v2 = (jobject) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("82:move-result-object \x76\x32");
if (v3) {
LOGD("env->DeleteLocalRef(%p):v3", v3);
env->DeleteLocalRef(v3);
}
v3 = (jobject) v2;
LOGD("84:invoke-virtual \x76\x32\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x52\x75\x6e\x74\x69\x6d\x65\x3b\x2d\x3e\x67\x63\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v3);
jclass &clz = cls2;
jmethodID &mid = mth3;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/Runtime", "gc", "()V");
jvalue args[] = {};
env->CallVoidMethodA(v3, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("8a:invoke-virtual \x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x72\x65\x66\x2f\x57\x65\x61\x6b\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x3b\x2d\x3e\x67\x65\x74\x28\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls0;
jmethodID &mid = mth5;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/ref/WeakReference", "get", "()Ljava/lang/Object;");
jvalue args[] = {};
v2 = (jobject) env->CallObjectMethodA(v0, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("90:move-result-object \x76\x32");
if (v3) {
LOGD("env->DeleteLocalRef(%p):v3", v3);
env->DeleteLocalRef(v3);
}
v3 = (jobject) v2;
LOGD("92:const-string \x76\x35\x2c\x20\x27\x43\x6c\x61\x73\x73\x20\x49\x6e\x74\x65\x72\x6e\x65\x64\x53\x74\x72\x69\x6e\x67\x27");
if (v6) {
LOGD("env->DeleteLocalRef(%p):v6", v6);
env->DeleteLocalRef(v6);
}
v6 = (jstring) env->NewStringUTF("\x43\x6c\x61\x73\x73\x20\x49\x6e\x74\x65\x72\x6e\x65\x64\x53\x74\x72\x69\x6e\x67");
LOGD("96:if-ne \x76\x32\x2c\x20\x76\x35\x2c\x20\x2b\x33");
if(!d2c_is_same_object(env,v3,v6)) {
goto L8;
}
else {
goto L7;
}
L7:
goto L9;
L8:
v4 = 0;
L9:
LOGD("9e:invoke-static \x76\x33\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth4;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v4}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;
EX_UnwindBlock: return;
}
