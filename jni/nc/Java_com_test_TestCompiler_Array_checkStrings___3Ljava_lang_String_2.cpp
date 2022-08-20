#include "Dex2C.h"

/* Lcom/test/TestCompiler/Array;->checkStrings([Ljava/lang/String;)V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_Array_checkStrings___3Ljava_lang_String_2(JNIEnv *env, jobject thiz, jarray p2){
jobject v0 = NULL;
jint v1;
jobject v2 = NULL;
jobject v3 = NULL;
jobject v4 = NULL;
jint v5;
jclass cls0 = NULL,cls1 = NULL;
jmethodID mth0 = NULL, mth1 = NULL;
v0 = (jobject)env->NewLocalRef(p2);
L0:
v1 = 0;
LOGD("2:aget-object \x76\x30\x2c\x20\x76\x32\x2c\x20\x76\x30");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
v2 = (jstring) env->GetObjectArrayElement((jobjectArray) v0, (jint) v1);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v3) {
LOGD("env->DeleteLocalRef(%p):v3", v3);
env->DeleteLocalRef(v3);
}
v3 = (jobject) v2;
LOGD("6:const-string \x76\x31\x2c\x20\x27\x7a\x65\x72\x6f\x27");
if (v4) {
LOGD("env->DeleteLocalRef(%p):v4", v4);
env->DeleteLocalRef(v4);
}
v4 = (jstring) env->NewStringUTF("\x7a\x65\x72\x6f");
LOGD("a:invoke-virtual \x76\x30\x2c\x20\x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x2d\x3e\x65\x71\x75\x61\x6c\x73\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b\x29\x5a");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v3);
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/String", "equals", "(Ljava/lang/Object;)Z");
jvalue args[] = {{.l = v4}};
v5 = (jboolean) env->CallBooleanMethodA(v3, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("10:move-result \x76\x30");
v1 = (jint) v5;
LOGD("12:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls1;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v1}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v1 = 1;
LOGD("1a:aget-object \x76\x30\x2c\x20\x76\x32\x2c\x20\x76\x30");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
v2 = (jstring) env->GetObjectArrayElement((jobjectArray) v0, (jint) v1);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v3) {
LOGD("env->DeleteLocalRef(%p):v3", v3);
env->DeleteLocalRef(v3);
}
v3 = (jobject) v2;
LOGD("1e:const-string \x76\x31\x2c\x20\x27\x6f\x6e\x65\x27");
if (v4) {
LOGD("env->DeleteLocalRef(%p):v4", v4);
env->DeleteLocalRef(v4);
}
v4 = (jstring) env->NewStringUTF("\x6f\x6e\x65");
LOGD("22:invoke-virtual \x76\x30\x2c\x20\x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x2d\x3e\x65\x71\x75\x61\x6c\x73\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b\x29\x5a");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v3);
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/String", "equals", "(Ljava/lang/Object;)Z");
jvalue args[] = {{.l = v4}};
v5 = (jboolean) env->CallBooleanMethodA(v3, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("28:move-result \x76\x30");
v1 = (jint) v5;
LOGD("2a:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls1;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v1}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v1 = 2;
LOGD("32:aget-object \x76\x30\x2c\x20\x76\x32\x2c\x20\x76\x30");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
v2 = (jstring) env->GetObjectArrayElement((jobjectArray) v0, (jint) v1);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v3) {
LOGD("env->DeleteLocalRef(%p):v3", v3);
env->DeleteLocalRef(v3);
}
v3 = (jobject) v2;
LOGD("36:const-string \x76\x31\x2c\x20\x27\x74\x77\x6f\x27");
if (v4) {
LOGD("env->DeleteLocalRef(%p):v4", v4);
env->DeleteLocalRef(v4);
}
v4 = (jstring) env->NewStringUTF("\x74\x77\x6f");
LOGD("3a:invoke-virtual \x76\x30\x2c\x20\x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x2d\x3e\x65\x71\x75\x61\x6c\x73\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b\x29\x5a");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v3);
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/String", "equals", "(Ljava/lang/Object;)Z");
jvalue args[] = {{.l = v4}};
v5 = (jboolean) env->CallBooleanMethodA(v3, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("40:move-result \x76\x30");
v1 = (jint) v5;
LOGD("42:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls1;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v1}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v1 = 3;
LOGD("4a:aget-object \x76\x30\x2c\x20\x76\x32\x2c\x20\x76\x30");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
v2 = (jstring) env->GetObjectArrayElement((jobjectArray) v0, (jint) v1);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v3) {
LOGD("env->DeleteLocalRef(%p):v3", v3);
env->DeleteLocalRef(v3);
}
v3 = (jobject) v2;
LOGD("4e:const-string \x76\x31\x2c\x20\x27\x74\x68\x72\x65\x65\x27");
if (v4) {
LOGD("env->DeleteLocalRef(%p):v4", v4);
env->DeleteLocalRef(v4);
}
v4 = (jstring) env->NewStringUTF("\x74\x68\x72\x65\x65");
LOGD("52:invoke-virtual \x76\x30\x2c\x20\x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x2d\x3e\x65\x71\x75\x61\x6c\x73\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b\x29\x5a");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v3);
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/String", "equals", "(Ljava/lang/Object;)Z");
jvalue args[] = {{.l = v4}};
v5 = (jboolean) env->CallBooleanMethodA(v3, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("58:move-result \x76\x30");
v1 = (jint) v5;
LOGD("5a:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls1;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v1}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v1 = 4;
LOGD("62:aget-object \x76\x30\x2c\x20\x76\x32\x2c\x20\x76\x30");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
v2 = (jstring) env->GetObjectArrayElement((jobjectArray) v0, (jint) v1);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v3) {
LOGD("env->DeleteLocalRef(%p):v3", v3);
env->DeleteLocalRef(v3);
}
v3 = (jobject) v2;
LOGD("66:const-string \x76\x31\x2c\x20\x27\x66\x6f\x75\x72\x27");
if (v4) {
LOGD("env->DeleteLocalRef(%p):v4", v4);
env->DeleteLocalRef(v4);
}
v4 = (jstring) env->NewStringUTF("\x66\x6f\x75\x72");
LOGD("6a:invoke-virtual \x76\x30\x2c\x20\x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x2d\x3e\x65\x71\x75\x61\x6c\x73\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b\x29\x5a");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v3);
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/String", "equals", "(Ljava/lang/Object;)Z");
jvalue args[] = {{.l = v4}};
v5 = (jboolean) env->CallBooleanMethodA(v3, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("70:move-result \x76\x30");
v1 = (jint) v5;
LOGD("72:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls1;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v1}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;
EX_UnwindBlock: return;
}
