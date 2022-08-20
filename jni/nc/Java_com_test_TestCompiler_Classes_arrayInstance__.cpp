#include "Dex2C.h"

/* Lcom/test/TestCompiler/Classes;->arrayInstance()V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_Classes_arrayInstance__(JNIEnv *env, jobject thiz){
jobject v0 = NULL;
jobject v1 = NULL;
jint v2;
jobject v3 = NULL;
jobject v4 = NULL;
jobject v5 = NULL;
jobject v6 = NULL;
jint v7;
jint v8;
jobject v9 = NULL;
jobject v10 = NULL;
jobject v11 = NULL;
jobject v12 = NULL;
jobject v13 = NULL;
jobject v14 = NULL;
jobject v15 = NULL;
jobject v16 = NULL;
jint v17;
jobject v18 = NULL;
jobject v19 = NULL;
jint v20;
jobject v21 = NULL;
jobject v22 = NULL;
jobject v23 = NULL;
jint v24;
jint v25;
jint v26;
jint v27;
jint v28;
jint v29;
jint v30;
jint v31;
jobject v32 = NULL;
jint v33;
jobject v34 = NULL;
jobject v35 = NULL;
jint v36;
jthrowable exception;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL,cls3 = NULL,cls4 = NULL,cls5 = NULL,cls6 = NULL,cls7 = NULL,cls8 = NULL,cls9 = NULL,cls10 = NULL,cls11 = NULL,cls12 = NULL,cls13 = NULL,cls14 = NULL,cls15 = NULL,cls16 = NULL,cls17 = NULL,cls18 = NULL,cls19 = NULL,cls20 = NULL,cls21 = NULL,cls22 = NULL;
jfieldID fld0 = NULL;
jmethodID mth0 = NULL, mth1 = NULL, mth2 = NULL, mth3 = NULL, mth4 = NULL, mth5 = NULL, mth6 = NULL, mth7 = NULL, mth8 = NULL, mth9 = NULL, mth10 = NULL, mth11 = NULL, mth12 = NULL, mth13 = NULL;
L0:
LOGD("0:sget-object \x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x79\x73\x74\x65\x6d\x3b\x2d\x3e\x6f\x75\x74\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x50\x72\x69\x6e\x74\x53\x74\x72\x65\x61\x6d\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
jclass &clz = cls0;
jfieldID &fld = fld0;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "java/lang/System", "out", "Ljava/io/PrintStream;");
v0 = (jobject) env->GetStaticObjectField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("4:const-string \x76\x31\x2c\x20\x27\x43\x6c\x61\x73\x73\x65\x73\x2e\x61\x72\x72\x61\x79\x49\x6e\x73\x74\x61\x6e\x63\x65\x27");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jstring) env->NewStringUTF("\x43\x6c\x61\x73\x73\x65\x73\x2e\x61\x72\x72\x61\x79\x49\x6e\x73\x74\x61\x6e\x63\x65");
LOGD("8:invoke-virtual \x76\x30\x2c\x20\x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x50\x72\x69\x6e\x74\x53\x74\x72\x65\x61\x6d\x3b\x2d\x3e\x70\x72\x69\x6e\x74\x6c\x6e\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls1;
jmethodID &mid = mth0;
D2C_RESOLVE_METHOD(clz, mid, "java/io/PrintStream", "println", "(Ljava/lang/String;)V");
jvalue args[] = {{.l = v1}};
env->CallVoidMethodA(v0, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("e:new-instance \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x43\x6c\x61\x73\x73\x65\x73\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
jclass &clz = cls2;
D2C_RESOLVE_CLASS(clz,"com/test/TestCompiler/Classes");
v0 = (jobject) env->AllocObject(clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("12:invoke-direct \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x43\x6c\x61\x73\x73\x65\x73\x3b\x2d\x3e\x3c\x69\x6e\x69\x74\x3e\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_METHOD(clz, mid, "com/test/TestCompiler/Classes", "<init>", "()V");
jvalue args[] = {};
env->CallVoidMethodA(v0, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jobject) env->NewLocalRef(v0);
v2 = 1;
v2 = 1;
v2 = 1;
v2 = 1;
v2 = 1;
v2 = 1;
v2 = 1;
v2 = 1;
v2 = 1;
v2 = 1;
v2 = 1;
v2 = 1;
v2 = 1;
LOGD("1c:new-array \x76\x32\x2c\x20\x76\x30\x2c\x20\x5b\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x43\x6c\x61\x73\x73\x65\x73\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v2 < 0) {
d2c_throw_exception(env, "java/lang/NegativeArraySizeException", "negative array size");
goto EX_HANDLE;
}
if (v3) {
LOGD("env->DeleteLocalRef(%p):v3", v3);
env->DeleteLocalRef(v3);
}
jclass &clz = cls2;
D2C_RESOLVE_CLASS(clz,"com/test/TestCompiler/Classes");
v3 = env->NewObjectArray((jint) v2, clz, NULL);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("20:filled-new-array \x76\x30\x2c\x20\x76\x30\x2c\x20\x5b\x49");
{
#define EX_HANDLE EX_UnwindBlock
v4 = env->NewIntArray((jint) 2);
d2c_filled_new_array(env, (jarray) v4, "I", 2, v2, v2);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("26:move-result-object \x76\x33");
if (v5) {
LOGD("env->DeleteLocalRef(%p):v5", v5);
env->DeleteLocalRef(v5);
}
v5 = (jobject) v4;
LOGD("28:const-class \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x43\x6c\x61\x73\x73\x65\x73\x3b");
if (v6) {
LOGD("env->DeleteLocalRef(%p):v6", v6);
env->DeleteLocalRef(v6);
}
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls4;
D2C_RESOLVE_CLASS(clz,"\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x43\x6c\x61\x73\x73\x65\x73");
v6 = env->NewLocalRef(clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("2c:invoke-static \x76\x34\x2c\x20\x76\x33\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x72\x65\x66\x6c\x65\x63\x74\x2f\x41\x72\x72\x61\x79\x3b\x2d\x3e\x6e\x65\x77\x49\x6e\x73\x74\x61\x6e\x63\x65\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x43\x6c\x61\x73\x73\x3b\x20\x5b\x49\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls5;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/reflect/Array", "newInstance", "(Ljava/lang/Class;[I)Ljava/lang/Object;");
jvalue args[] = {{.l = v6},{.l = v5}};
v4 = (jobject) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("32:move-result-object \x76\x33");
if (v5) {
LOGD("env->DeleteLocalRef(%p):v5", v5);
env->DeleteLocalRef(v5);
}
v5 = (jobject) v4;
v7 = 3;
v7 = 3;
v7 = 3;
v7 = 3;
v7 = 3;
v7 = 3;
v7 = 3;
v8 = 2;
v8 = 2;
v8 = 2;
v8 = 2;
v8 = 2;
v8 = 2;
v8 = 2;
v8 = 2;
v8 = 2;
v8 = 2;
v8 = 2;
v8 = 2;
v8 = 2;
v8 = 2;
v8 = 2;
v8 = 2;
v8 = 2;
LOGD("38:filled-new-array \x76\x30\x2c\x20\x76\x35\x2c\x20\x76\x34\x2c\x20\x5b\x49");
{
#define EX_HANDLE EX_UnwindBlock
v4 = env->NewIntArray((jint) 3);
d2c_filled_new_array(env, (jarray) v4, "I", 3, v2, v8, v7);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("3e:move-result-object \x76\x36");
if (v9) {
LOGD("env->DeleteLocalRef(%p):v9", v9);
env->DeleteLocalRef(v9);
}
v9 = (jobject) v4;
LOGD("40:const-class \x76\x37\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x43\x6c\x61\x73\x73\x65\x73\x3b");
if (v10) {
LOGD("env->DeleteLocalRef(%p):v10", v10);
env->DeleteLocalRef(v10);
}
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls4;
D2C_RESOLVE_CLASS(clz,"\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x43\x6c\x61\x73\x73\x65\x73");
v10 = env->NewLocalRef(clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("44:invoke-static \x76\x37\x2c\x20\x76\x36\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x72\x65\x66\x6c\x65\x63\x74\x2f\x41\x72\x72\x61\x79\x3b\x2d\x3e\x6e\x65\x77\x49\x6e\x73\x74\x61\x6e\x63\x65\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x43\x6c\x61\x73\x73\x3b\x20\x5b\x49\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls5;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/reflect/Array", "newInstance", "(Ljava/lang/Class;[I)Ljava/lang/Object;");
jvalue args[] = {{.l = v10},{.l = v9}};
v4 = (jobject) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("4a:move-result-object \x76\x36");
if (v9) {
LOGD("env->DeleteLocalRef(%p):v9", v9);
env->DeleteLocalRef(v9);
}
v9 = (jobject) v4;
LOGD("4c:check-cast \x76\x36\x2c\x20\x5b\x5b\x5b\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x43\x6c\x61\x73\x73\x65\x73\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls6;
D2C_RESOLVE_CLASS(clz,"[[[Lcom/test/TestCompiler/Classes;");
D2C_CHECK_CAST(v9, clz, "[[[Lcom/test/TestCompiler/Classes;");
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("50:new-instance \x76\x37\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x6f\x72\x65\x43\x6c\x61\x73\x73\x65\x73\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v10) {
LOGD("env->DeleteLocalRef(%p):v10", v10);
env->DeleteLocalRef(v10);
}
jclass &clz = cls7;
D2C_RESOLVE_CLASS(clz,"com/test/TestCompiler/MoreClasses");
v10 = (jobject) env->AllocObject(clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("54:invoke-direct \x76\x37\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x6f\x72\x65\x43\x6c\x61\x73\x73\x65\x73\x3b\x2d\x3e\x3c\x69\x6e\x69\x74\x3e\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v10);
jclass &clz = cls7;
jmethodID &mid = mth3;
D2C_RESOLVE_METHOD(clz, mid, "com/test/TestCompiler/MoreClasses", "<init>", "()V");
jvalue args[] = {};
env->CallVoidMethodA(v10, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("5a:new-array \x76\x38\x2c\x20\x76\x34\x2c\x20\x5b\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x6f\x72\x65\x43\x6c\x61\x73\x73\x65\x73\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v7 < 0) {
d2c_throw_exception(env, "java/lang/NegativeArraySizeException", "negative array size");
goto EX_HANDLE;
}
if (v11) {
LOGD("env->DeleteLocalRef(%p):v11", v11);
env->DeleteLocalRef(v11);
}
jclass &clz = cls7;
D2C_RESOLVE_CLASS(clz,"com/test/TestCompiler/MoreClasses");
v11 = env->NewObjectArray((jint) v7, clz, NULL);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("5e:filled-new-array \x76\x35\x2c\x20\x76\x34\x2c\x20\x5b\x49");
{
#define EX_HANDLE EX_UnwindBlock
v4 = env->NewIntArray((jint) 2);
d2c_filled_new_array(env, (jarray) v4, "I", 2, v8, v7);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("64:move-result-object \x76\x39");
if (v12) {
LOGD("env->DeleteLocalRef(%p):v12", v12);
env->DeleteLocalRef(v12);
}
v12 = (jobject) v4;
LOGD("66:const-class \x76\x31\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x6f\x72\x65\x43\x6c\x61\x73\x73\x65\x73\x3b");
if (v13) {
LOGD("env->DeleteLocalRef(%p):v13", v13);
env->DeleteLocalRef(v13);
}
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls8;
D2C_RESOLVE_CLASS(clz,"\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x6f\x72\x65\x43\x6c\x61\x73\x73\x65\x73");
v13 = env->NewLocalRef(clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("6a:invoke-static \x76\x31\x30\x2c\x20\x76\x39\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x72\x65\x66\x6c\x65\x63\x74\x2f\x41\x72\x72\x61\x79\x3b\x2d\x3e\x6e\x65\x77\x49\x6e\x73\x74\x61\x6e\x63\x65\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x43\x6c\x61\x73\x73\x3b\x20\x5b\x49\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls5;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/reflect/Array", "newInstance", "(Ljava/lang/Class;[I)Ljava/lang/Object;");
jvalue args[] = {{.l = v13},{.l = v12}};
v4 = (jobject) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("70:move-result-object \x76\x39");
if (v12) {
LOGD("env->DeleteLocalRef(%p):v12", v12);
env->DeleteLocalRef(v12);
}
v12 = (jobject) v4;
LOGD("72:check-cast \x76\x39\x2c\x20\x5b\x5b\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x6f\x72\x65\x43\x6c\x61\x73\x73\x65\x73\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls9;
D2C_RESOLVE_CLASS(clz,"[[Lcom/test/TestCompiler/MoreClasses;");
D2C_CHECK_CAST(v12, clz, "[[Lcom/test/TestCompiler/MoreClasses;");
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("76:filled-new-array \x76\x30\x2c\x20\x76\x35\x2c\x20\x76\x34\x2c\x20\x5b\x49");
{
#define EX_HANDLE EX_UnwindBlock
v4 = env->NewIntArray((jint) 3);
d2c_filled_new_array(env, (jarray) v4, "I", 3, v2, v8, v7);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("7c:move-result-object \x76\x31\x30");
if (v13) {
LOGD("env->DeleteLocalRef(%p):v13", v13);
env->DeleteLocalRef(v13);
}
v13 = (jobject) v4;
LOGD("7e:const-class \x76\x31\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x6f\x72\x65\x43\x6c\x61\x73\x73\x65\x73\x3b");
if (v14) {
LOGD("env->DeleteLocalRef(%p):v14", v14);
env->DeleteLocalRef(v14);
}
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls8;
D2C_RESOLVE_CLASS(clz,"\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x6f\x72\x65\x43\x6c\x61\x73\x73\x65\x73");
v14 = env->NewLocalRef(clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("82:invoke-static \x76\x31\x31\x2c\x20\x76\x31\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x72\x65\x66\x6c\x65\x63\x74\x2f\x41\x72\x72\x61\x79\x3b\x2d\x3e\x6e\x65\x77\x49\x6e\x73\x74\x61\x6e\x63\x65\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x43\x6c\x61\x73\x73\x3b\x20\x5b\x49\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls5;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/reflect/Array", "newInstance", "(Ljava/lang/Class;[I)Ljava/lang/Object;");
jvalue args[] = {{.l = v14},{.l = v13}};
v4 = (jobject) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("88:move-result-object \x76\x31\x30");
if (v13) {
LOGD("env->DeleteLocalRef(%p):v13", v13);
env->DeleteLocalRef(v13);
}
v13 = (jobject) v4;
LOGD("8a:check-cast \x76\x31\x30\x2c\x20\x5b\x5b\x5b\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x6f\x72\x65\x43\x6c\x61\x73\x73\x65\x73\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls10;
D2C_RESOLVE_CLASS(clz,"[[[Lcom/test/TestCompiler/MoreClasses;");
D2C_CHECK_CAST(v13, clz, "[[[Lcom/test/TestCompiler/MoreClasses;");
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("8e:new-array \x76\x31\x31\x2c\x20\x76\x30\x2c\x20\x5b\x49");
{
#define EX_HANDLE EX_UnwindBlock
if (v2 < 0) {
d2c_throw_exception(env, "java/lang/NegativeArraySizeException", "negative array size");
goto EX_HANDLE;
}
if (v14) {
LOGD("env->DeleteLocalRef(%p):v14", v14);
env->DeleteLocalRef(v14);
}
v14 = (jarray) env->NewIntArray((jint) v2);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("92:filled-new-array \x76\x30\x2c\x20\x76\x30\x2c\x20\x5b\x49");
{
#define EX_HANDLE EX_UnwindBlock
v4 = env->NewIntArray((jint) 2);
d2c_filled_new_array(env, (jarray) v4, "I", 2, v2, v2);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("98:move-result-object \x76\x31\x32");
if (v15) {
LOGD("env->DeleteLocalRef(%p):v15", v15);
env->DeleteLocalRef(v15);
}
v15 = (jobject) v4;
LOGD("9a:const-class \x76\x31\x33\x2c\x20\x49");
if (v16) {
LOGD("env->DeleteLocalRef(%p):v16", v16);
env->DeleteLocalRef(v16);
}
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls11;
D2C_RESOLVE_CLASS(clz,"\x49\x6e\x74");
v16 = env->NewLocalRef(clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("9e:invoke-static \x76\x31\x33\x2c\x20\x76\x31\x32\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x72\x65\x66\x6c\x65\x63\x74\x2f\x41\x72\x72\x61\x79\x3b\x2d\x3e\x6e\x65\x77\x49\x6e\x73\x74\x61\x6e\x63\x65\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x43\x6c\x61\x73\x73\x3b\x20\x5b\x49\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls5;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/reflect/Array", "newInstance", "(Ljava/lang/Class;[I)Ljava/lang/Object;");
jvalue args[] = {{.l = v16},{.l = v15}};
v4 = (jobject) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("a4:move-result-object \x76\x31\x32");
if (v15) {
LOGD("env->DeleteLocalRef(%p):v15", v15);
env->DeleteLocalRef(v15);
}
v15 = (jobject) v4;
LOGD("a6:check-cast \x76\x31\x32\x2c\x20\x5b\x5b\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls12;
D2C_RESOLVE_CLASS(clz,"[[I");
D2C_CHECK_CAST(v15, clz, "[[I");
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("aa:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x43\x6c\x61\x73\x73\x65\x73\x3b\x2d\x3e\x78\x54\x65\x73\x74\x73\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth4;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Classes", "xTests", "(Ljava/lang/Object;)V");
jvalue args[] = {{.l = v1}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("b0:invoke-static \x76\x37\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x43\x6c\x61\x73\x73\x65\x73\x3b\x2d\x3e\x79\x54\x65\x73\x74\x73\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth5;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Classes", "yTests", "(Ljava/lang/Object;)V");
jvalue args[] = {{.l = v10}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("b6:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x43\x6c\x61\x73\x73\x65\x73\x3b\x2d\x3e\x78\x61\x72\x54\x65\x73\x74\x73\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth6;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Classes", "xarTests", "(Ljava/lang/Object;)V");
jvalue args[] = {{.l = v3}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("bc:invoke-static \x76\x38\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x43\x6c\x61\x73\x73\x65\x73\x3b\x2d\x3e\x79\x61\x72\x54\x65\x73\x74\x73\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth7;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Classes", "yarTests", "(Ljava/lang/Object;)V");
jvalue args[] = {{.l = v11}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("c2:invoke-static \x76\x36\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x43\x6c\x61\x73\x73\x65\x73\x3b\x2d\x3e\x78\x61\x72\x61\x72\x61\x72\x54\x65\x73\x74\x73\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth8;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Classes", "xarararTests", "(Ljava/lang/Object;)V");
jvalue args[] = {{.l = v9}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("c8:invoke-static \x76\x31\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x43\x6c\x61\x73\x73\x65\x73\x3b\x2d\x3e\x79\x61\x72\x61\x72\x61\x72\x54\x65\x73\x74\x73\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth9;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Classes", "yarararTests", "(Ljava/lang/Object;)V");
jvalue args[] = {{.l = v13}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("ce:invoke-static \x76\x31\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x43\x6c\x61\x73\x73\x65\x73\x3b\x2d\x3e\x69\x61\x72\x54\x65\x73\x74\x73\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth10;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Classes", "iarTests", "(Ljava/lang/Object;)V");
jvalue args[] = {{.l = v14}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("d4:invoke-static \x76\x31\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x43\x6c\x61\x73\x73\x65\x73\x3b\x2d\x3e\x69\x61\x72\x61\x72\x54\x65\x73\x74\x73\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth11;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Classes", "iararTests", "(Ljava/lang/Object;)V");
jvalue args[] = {{.l = v15}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v17 = 0;
v17 = 0;
v17 = 0;
v17 = 0;
v17 = 0;
v17 = 0;
v17 = 0;
v17 = 0;
v17 = 0;
v17 = 0;
v17 = 0;
v17 = 0;
v17 = 0;
v17 = 0;
v17 = 0;
v17 = 0;
v17 = 0;
v17 = 0;
v17 = 0;
LOGD("dc:aput-object \x76\x39\x2c\x20\x76\x31\x30\x2c\x20\x76\x31\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v13);
env->SetObjectArrayElement((jobjectArray) v13, (jint) v17, v12);D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("e0:aget-object \x76\x31\x34\x2c\x20\x76\x31\x30\x2c\x20\x76\x31\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v13);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v13, (jint) v17);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v18) {
LOGD("env->DeleteLocalRef(%p):v18", v18);
env->DeleteLocalRef(v18);
}
v18 = (jobject) v4;
LOGD("e4:aput-object \x76\x38\x2c\x20\x76\x31\x34\x2c\x20\x76\x31\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v18);
env->SetObjectArrayElement((jobjectArray) v18, (jint) v17, v11);D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("e8:aget-object \x76\x31\x34\x2c\x20\x76\x31\x30\x2c\x20\x76\x31\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v13);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v13, (jint) v17);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v18) {
LOGD("env->DeleteLocalRef(%p):v18", v18);
env->DeleteLocalRef(v18);
}
v18 = (jobject) v4;
LOGD("ec:aput-object \x76\x38\x2c\x20\x76\x31\x34\x2c\x20\x76\x30");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v18);
env->SetObjectArrayElement((jobjectArray) v18, (jint) v2, v11);D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("f0:aget-object \x76\x31\x34\x2c\x20\x76\x31\x30\x2c\x20\x76\x31\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v13);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v13, (jint) v17);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v18) {
LOGD("env->DeleteLocalRef(%p):v18", v18);
env->DeleteLocalRef(v18);
}
v18 = (jobject) v4;
LOGD("f4:aget-object \x76\x31\x34\x2c\x20\x76\x31\x34\x2c\x20\x76\x31\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v18);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v18, (jint) v17);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v18) {
LOGD("env->DeleteLocalRef(%p):v18", v18);
env->DeleteLocalRef(v18);
}
v18 = (jobject) v4;
LOGD("f8:aput-object \x76\x37\x2c\x20\x76\x31\x34\x2c\x20\x76\x31\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v18);
env->SetObjectArrayElement((jobjectArray) v18, (jint) v17, v10);D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("fc:aget-object \x76\x31\x34\x2c\x20\x76\x31\x30\x2c\x20\x76\x31\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v13);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v13, (jint) v17);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v18) {
LOGD("env->DeleteLocalRef(%p):v18", v18);
env->DeleteLocalRef(v18);
}
v18 = (jobject) v4;
LOGD("100:aget-object \x76\x31\x34\x2c\x20\x76\x31\x34\x2c\x20\x76\x31\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v18);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v18, (jint) v17);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v18) {
LOGD("env->DeleteLocalRef(%p):v18", v18);
env->DeleteLocalRef(v18);
}
v18 = (jobject) v4;
LOGD("104:aput-object \x76\x37\x2c\x20\x76\x31\x34\x2c\x20\x76\x30");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v18);
env->SetObjectArrayElement((jobjectArray) v18, (jint) v2, v10);D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("108:aget-object \x76\x31\x34\x2c\x20\x76\x31\x30\x2c\x20\x76\x31\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v13);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v13, (jint) v17);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v18) {
LOGD("env->DeleteLocalRef(%p):v18", v18);
env->DeleteLocalRef(v18);
}
v18 = (jobject) v4;
LOGD("10c:aget-object \x76\x31\x34\x2c\x20\x76\x31\x34\x2c\x20\x76\x31\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v18);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v18, (jint) v17);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v18) {
LOGD("env->DeleteLocalRef(%p):v18", v18);
env->DeleteLocalRef(v18);
}
v18 = (jobject) v4;
LOGD("110:aput-object \x76\x37\x2c\x20\x76\x31\x34\x2c\x20\x76\x35");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v18);
env->SetObjectArrayElement((jobjectArray) v18, (jint) v8, v10);D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("114:aget-object \x76\x31\x34\x2c\x20\x76\x31\x30\x2c\x20\x76\x31\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v13);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v13, (jint) v17);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v18) {
LOGD("env->DeleteLocalRef(%p):v18", v18);
env->DeleteLocalRef(v18);
}
v18 = (jobject) v4;
LOGD("118:aget-object \x76\x31\x34\x2c\x20\x76\x31\x34\x2c\x20\x76\x30");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v18);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v18, (jint) v2);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v18) {
LOGD("env->DeleteLocalRef(%p):v18", v18);
env->DeleteLocalRef(v18);
}
v18 = (jobject) v4;
LOGD("11c:aput-object \x76\x37\x2c\x20\x76\x31\x34\x2c\x20\x76\x31\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v18);
env->SetObjectArrayElement((jobjectArray) v18, (jint) v17, v10);D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("120:aget-object \x76\x31\x34\x2c\x20\x76\x31\x30\x2c\x20\x76\x31\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v13);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v13, (jint) v17);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v18) {
LOGD("env->DeleteLocalRef(%p):v18", v18);
env->DeleteLocalRef(v18);
}
v18 = (jobject) v4;
LOGD("124:aget-object \x76\x31\x34\x2c\x20\x76\x31\x34\x2c\x20\x76\x30");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v18);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v18, (jint) v2);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v18) {
LOGD("env->DeleteLocalRef(%p):v18", v18);
env->DeleteLocalRef(v18);
}
v18 = (jobject) v4;
LOGD("128:aput-object \x76\x37\x2c\x20\x76\x31\x34\x2c\x20\x76\x30");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v18);
env->SetObjectArrayElement((jobjectArray) v18, (jint) v2, v10);D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("12c:aget-object \x76\x31\x34\x2c\x20\x76\x31\x30\x2c\x20\x76\x31\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v13);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v13, (jint) v17);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v18) {
LOGD("env->DeleteLocalRef(%p):v18", v18);
env->DeleteLocalRef(v18);
}
v18 = (jobject) v4;
LOGD("130:aget-object \x76\x31\x34\x2c\x20\x76\x31\x34\x2c\x20\x76\x30");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v18);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v18, (jint) v2);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v18) {
LOGD("env->DeleteLocalRef(%p):v18", v18);
env->DeleteLocalRef(v18);
}
v18 = (jobject) v4;
LOGD("134:aput-object \x76\x37\x2c\x20\x76\x31\x34\x2c\x20\x76\x35");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v18);
env->SetObjectArrayElement((jobjectArray) v18, (jint) v8, v10);D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("138:filled-new-array \x76\x35\x2c\x20\x76\x34\x2c\x20\x76\x35\x2c\x20\x76\x30\x2c\x20\x5b\x49");
{
#define EX_HANDLE EX_UnwindBlock
v4 = env->NewIntArray((jint) 4);
d2c_filled_new_array(env, (jarray) v4, "I", 4, v8, v7, v8, v2);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("13e:move-result-object \x76\x31\x34");
if (v18) {
LOGD("env->DeleteLocalRef(%p):v18", v18);
env->DeleteLocalRef(v18);
}
v18 = (jobject) v4;
LOGD("140:const-class \x76\x31\x35\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
if (v19) {
LOGD("env->DeleteLocalRef(%p):v19", v19);
env->DeleteLocalRef(v19);
}
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls13;
D2C_RESOLVE_CLASS(clz,"\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67");
v19 = env->NewLocalRef(clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("144:invoke-static \x76\x31\x35\x2c\x20\x76\x31\x34\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x72\x65\x66\x6c\x65\x63\x74\x2f\x41\x72\x72\x61\x79\x3b\x2d\x3e\x6e\x65\x77\x49\x6e\x73\x74\x61\x6e\x63\x65\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x43\x6c\x61\x73\x73\x3b\x20\x5b\x49\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls5;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/reflect/Array", "newInstance", "(Ljava/lang/Class;[I)Ljava/lang/Object;");
jvalue args[] = {{.l = v19},{.l = v18}};
v4 = (jobject) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("14a:move-result-object \x76\x31\x34");
if (v18) {
LOGD("env->DeleteLocalRef(%p):v18", v18);
env->DeleteLocalRef(v18);
}
v18 = (jobject) v4;
LOGD("14c:check-cast \x76\x31\x34\x2c\x20\x5b\x5b\x5b\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls14;
D2C_RESOLVE_CLASS(clz,"[[[[Ljava/lang/String;");
D2C_CHECK_CAST(v18, clz, "[[[[Ljava/lang/String;");
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("150:filled-new-array \x76\x35\x2c\x20\x76\x34\x2c\x20\x76\x35\x2c\x20\x5b\x49");
{
#define EX_HANDLE EX_UnwindBlock
v4 = env->NewIntArray((jint) 3);
d2c_filled_new_array(env, (jarray) v4, "I", 3, v8, v7, v8);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("156:move-result-object \x76\x31\x35");
if (v19) {
LOGD("env->DeleteLocalRef(%p):v19", v19);
env->DeleteLocalRef(v19);
}
v19 = (jobject) v4;
LOGD("158:const-class \x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls13;
D2C_RESOLVE_CLASS(clz,"\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67");
v0 = env->NewLocalRef(clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("15c:invoke-static \x76\x30\x2c\x20\x76\x31\x35\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x72\x65\x66\x6c\x65\x63\x74\x2f\x41\x72\x72\x61\x79\x3b\x2d\x3e\x6e\x65\x77\x49\x6e\x73\x74\x61\x6e\x63\x65\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x43\x6c\x61\x73\x73\x3b\x20\x5b\x49\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls5;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/reflect/Array", "newInstance", "(Ljava/lang/Class;[I)Ljava/lang/Object;");
jvalue args[] = {{.l = v0},{.l = v19}};
v4 = (jobject) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("162:move-result-object \x76\x30");
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
LOGD("164:check-cast \x76\x30\x2c\x20\x5b\x5b\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls15;
D2C_RESOLVE_CLASS(clz,"[[[Ljava/lang/String;");
D2C_CHECK_CAST(v0, clz, "[[[Ljava/lang/String;");
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("168:aput-object \x76\x30\x2c\x20\x76\x31\x34\x2c\x20\x76\x31\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v18);
env->SetObjectArrayElement((jobjectArray) v18, (jint) v17, v0);D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("16c:aget-object \x76\x30\x2c\x20\x76\x31\x34\x2c\x20\x76\x31\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v18);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v18, (jint) v17);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
LOGD("170:filled-new-array \x76\x34\x2c\x20\x76\x35\x2c\x20\x5b\x49");
{
#define EX_HANDLE EX_UnwindBlock
v4 = env->NewIntArray((jint) 2);
d2c_filled_new_array(env, (jarray) v4, "I", 2, v7, v8);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("176:move-result-object \x76\x31\x35");
if (v19) {
LOGD("env->DeleteLocalRef(%p):v19", v19);
env->DeleteLocalRef(v19);
}
v19 = (jobject) v4;
LOGD("178:const-class \x76\x34\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
if (v6) {
LOGD("env->DeleteLocalRef(%p):v6", v6);
env->DeleteLocalRef(v6);
}
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls13;
D2C_RESOLVE_CLASS(clz,"\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67");
v6 = env->NewLocalRef(clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("17c:invoke-static \x76\x34\x2c\x20\x76\x31\x35\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x72\x65\x66\x6c\x65\x63\x74\x2f\x41\x72\x72\x61\x79\x3b\x2d\x3e\x6e\x65\x77\x49\x6e\x73\x74\x61\x6e\x63\x65\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x43\x6c\x61\x73\x73\x3b\x20\x5b\x49\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls5;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/reflect/Array", "newInstance", "(Ljava/lang/Class;[I)Ljava/lang/Object;");
jvalue args[] = {{.l = v6},{.l = v19}};
v4 = (jobject) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("182:move-result-object \x76\x34");
if (v6) {
LOGD("env->DeleteLocalRef(%p):v6", v6);
env->DeleteLocalRef(v6);
}
v6 = (jobject) v4;
LOGD("184:check-cast \x76\x34\x2c\x20\x5b\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls16;
D2C_RESOLVE_CLASS(clz,"[[Ljava/lang/String;");
D2C_CHECK_CAST(v6, clz, "[[Ljava/lang/String;");
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v20 = 1;
v20 = 1;
v20 = 1;
v20 = 1;
v20 = 1;
LOGD("18a:aput-object \x76\x34\x2c\x20\x76\x30\x2c\x20\x76\x31\x35");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
env->SetObjectArrayElement((jobjectArray) v0, (jint) v20, v6);D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("18e:aget-object \x76\x30\x2c\x20\x76\x31\x34\x2c\x20\x76\x31\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v18);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v18, (jint) v17);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
LOGD("192:aget-object \x76\x30\x2c\x20\x76\x30\x2c\x20\x76\x31\x35");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v0, (jint) v20);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
LOGD("196:new-array \x76\x34\x2c\x20\x76\x35\x2c\x20\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v8 < 0) {
d2c_throw_exception(env, "java/lang/NegativeArraySizeException", "negative array size");
goto EX_HANDLE;
}
if (v6) {
LOGD("env->DeleteLocalRef(%p):v6", v6);
env->DeleteLocalRef(v6);
}
jclass &clz = cls17;
D2C_RESOLVE_CLASS(clz,"java/lang/String");
v6 = env->NewObjectArray((jint) v8, clz, NULL);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("19a:aput-object \x76\x34\x2c\x20\x76\x30\x2c\x20\x76\x35");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
env->SetObjectArrayElement((jobjectArray) v0, (jint) v8, v6);D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("19e:aget-object \x76\x30\x2c\x20\x76\x31\x34\x2c\x20\x76\x31\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v18);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v18, (jint) v17);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
LOGD("1a2:aget-object \x76\x30\x2c\x20\x76\x30\x2c\x20\x76\x31\x35");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v0, (jint) v20);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
LOGD("1a6:aget-object \x76\x30\x2c\x20\x76\x30\x2c\x20\x76\x35");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v0, (jint) v8);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
LOGD("1aa:const-string \x76\x34\x2c\x20\x27\x48\x45\x4c\x4c\x4f\x2d\x31\x27");
if (v6) {
LOGD("env->DeleteLocalRef(%p):v6", v6);
env->DeleteLocalRef(v6);
}
v6 = (jstring) env->NewStringUTF("\x48\x45\x4c\x4c\x4f\x2d\x31");
LOGD("1ae:aput-object \x76\x34\x2c\x20\x76\x30\x2c\x20\x76\x31\x35");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
env->SetObjectArrayElement((jobjectArray) v0, (jint) v20, v6);D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1b2:invoke-static \x76\x31\x34\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x75\x74\x69\x6c\x2f\x41\x72\x72\x61\x79\x73\x3b\x2d\x3e\x64\x65\x65\x70\x54\x6f\x53\x74\x72\x69\x6e\x67\x28\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls18;
jmethodID &mid = mth12;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/util/Arrays", "deepToString", "([Ljava/lang/Object;)Ljava/lang/String;");
jvalue args[] = {{.l = v18}};
v4 = (jstring) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1b8:move-result-object \x76\x30");
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
v7 = 5;
v7 = 5;
if (v21) {
LOGD("env->DeleteLocalRef(%p):v21", v21);
env->DeleteLocalRef(v21);
}
v21 = (jobject) env->NewLocalRef(v0);
v17 = 3;
v17 = 3;
v17 = 3;
LOGD("1c2:filled-new-array \x76\x34\x2c\x20\x76\x35\x2c\x20\x76\x31\x33\x2c\x20\x76\x35\x2c\x20\x76\x31\x35\x2c\x20\x5b\x49");
{
#define EX_HANDLE EX_UnwindBlock
v4 = env->NewIntArray((jint) 5);
d2c_filled_new_array(env, (jarray) v4, "I", 5, v7, v8, v17, v8, v20);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1c8:move-result-object \x76\x30");
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
LOGD("1ca:const-class \x76\x31\x35\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
if (v19) {
LOGD("env->DeleteLocalRef(%p):v19", v19);
env->DeleteLocalRef(v19);
}
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls13;
D2C_RESOLVE_CLASS(clz,"\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67");
v19 = env->NewLocalRef(clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1ce:invoke-static \x76\x31\x35\x2c\x20\x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x72\x65\x66\x6c\x65\x63\x74\x2f\x41\x72\x72\x61\x79\x3b\x2d\x3e\x6e\x65\x77\x49\x6e\x73\x74\x61\x6e\x63\x65\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x43\x6c\x61\x73\x73\x3b\x20\x5b\x49\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls5;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/reflect/Array", "newInstance", "(Ljava/lang/Class;[I)Ljava/lang/Object;");
jvalue args[] = {{.l = v19},{.l = v0}};
v4 = (jobject) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1d4:move-result-object \x76\x30");
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
if (v19) {
LOGD("env->DeleteLocalRef(%p):v19", v19);
env->DeleteLocalRef(v19);
}
v19 = (jobject) env->NewLocalRef(v0);
LOGD("1d8:check-cast \x76\x31\x35\x2c\x20\x5b\x5b\x5b\x5b\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls19;
D2C_RESOLVE_CLASS(clz,"[[[[[Ljava/lang/String;");
D2C_CHECK_CAST(v19, clz, "[[[[[Ljava/lang/String;");
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1dc:filled-new-array \x76\x34\x2c\x20\x76\x35\x2c\x20\x76\x31\x33\x2c\x20\x76\x35\x2c\x20\x5b\x49");
{
#define EX_HANDLE EX_UnwindBlock
v4 = env->NewIntArray((jint) 4);
d2c_filled_new_array(env, (jarray) v4, "I", 4, v7, v8, v17, v8);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1e2:move-result-object \x76\x30");
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
LOGD("1e4:const-class \x76\x34\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
if (v6) {
LOGD("env->DeleteLocalRef(%p):v6", v6);
env->DeleteLocalRef(v6);
}
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls13;
D2C_RESOLVE_CLASS(clz,"\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67");
v6 = env->NewLocalRef(clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1e8:invoke-static \x76\x34\x2c\x20\x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x72\x65\x66\x6c\x65\x63\x74\x2f\x41\x72\x72\x61\x79\x3b\x2d\x3e\x6e\x65\x77\x49\x6e\x73\x74\x61\x6e\x63\x65\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x43\x6c\x61\x73\x73\x3b\x20\x5b\x49\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls5;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/reflect/Array", "newInstance", "(Ljava/lang/Class;[I)Ljava/lang/Object;");
jvalue args[] = {{.l = v6},{.l = v0}};
v4 = (jobject) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1ee:move-result-object \x76\x30");
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
LOGD("1f0:check-cast \x76\x30\x2c\x20\x5b\x5b\x5b\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls14;
D2C_RESOLVE_CLASS(clz,"[[[[Ljava/lang/String;");
D2C_CHECK_CAST(v0, clz, "[[[[Ljava/lang/String;");
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v7 = 0;
v7 = 0;
LOGD("1f6:aput-object \x76\x30\x2c\x20\x76\x31\x35\x2c\x20\x76\x34");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v19);
env->SetObjectArrayElement((jobjectArray) v19, (jint) v7, v0);D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1fa:aget-object \x76\x30\x2c\x20\x76\x31\x35\x2c\x20\x76\x34");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v19);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v19, (jint) v7);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
if (v22) {
LOGD("env->DeleteLocalRef(%p):v22", v22);
env->DeleteLocalRef(v22);
}
v22 = (jobject) env->NewLocalRef(v1);
v7 = 5;
v7 = 5;
LOGD("204:filled-new-array \x76\x34\x2c\x20\x76\x35\x2c\x20\x76\x31\x33\x2c\x20\x5b\x49");
{
#define EX_HANDLE EX_UnwindBlock
v4 = env->NewIntArray((jint) 3);
d2c_filled_new_array(env, (jarray) v4, "I", 3, v7, v8, v17);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("20a:move-result-object \x76\x31");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jobject) v4;
LOGD("20c:const-class \x76\x31\x33\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
if (v16) {
LOGD("env->DeleteLocalRef(%p):v16", v16);
env->DeleteLocalRef(v16);
}
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls13;
D2C_RESOLVE_CLASS(clz,"\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67");
v16 = env->NewLocalRef(clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("210:invoke-static \x76\x31\x33\x2c\x20\x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x72\x65\x66\x6c\x65\x63\x74\x2f\x41\x72\x72\x61\x79\x3b\x2d\x3e\x6e\x65\x77\x49\x6e\x73\x74\x61\x6e\x63\x65\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x43\x6c\x61\x73\x73\x3b\x20\x5b\x49\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls5;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/reflect/Array", "newInstance", "(Ljava/lang/Class;[I)Ljava/lang/Object;");
jvalue args[] = {{.l = v16},{.l = v1}};
v4 = (jobject) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("216:move-result-object \x76\x31");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jobject) v4;
LOGD("218:check-cast \x76\x31\x2c\x20\x5b\x5b\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls15;
D2C_RESOLVE_CLASS(clz,"[[[Ljava/lang/String;");
D2C_CHECK_CAST(v1, clz, "[[[Ljava/lang/String;");
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v17 = 1;
v17 = 1;
LOGD("21e:aput-object \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x31\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
env->SetObjectArrayElement((jobjectArray) v0, (jint) v17, v1);D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v2 = 0;
v2 = 0;
v2 = 0;
LOGD("224:aget-object \x76\x31\x2c\x20\x76\x31\x35\x2c\x20\x76\x30");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v19);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v19, (jint) v2);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jobject) v4;
LOGD("228:aget-object \x76\x31\x2c\x20\x76\x31\x2c\x20\x76\x31\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v1, (jint) v17);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jobject) v4;
LOGD("22c:filled-new-array \x76\x34\x2c\x20\x76\x35\x2c\x20\x5b\x49");
{
#define EX_HANDLE EX_UnwindBlock
v4 = env->NewIntArray((jint) 2);
d2c_filled_new_array(env, (jarray) v4, "I", 2, v7, v8);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("232:move-result-object \x76\x31\x33");
if (v16) {
LOGD("env->DeleteLocalRef(%p):v16", v16);
env->DeleteLocalRef(v16);
}
v16 = (jobject) v4;
LOGD("234:const-class \x76\x34\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
if (v6) {
LOGD("env->DeleteLocalRef(%p):v6", v6);
env->DeleteLocalRef(v6);
}
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls13;
D2C_RESOLVE_CLASS(clz,"\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67");
v6 = env->NewLocalRef(clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("238:invoke-static \x76\x34\x2c\x20\x76\x31\x33\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x72\x65\x66\x6c\x65\x63\x74\x2f\x41\x72\x72\x61\x79\x3b\x2d\x3e\x6e\x65\x77\x49\x6e\x73\x74\x61\x6e\x63\x65\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x43\x6c\x61\x73\x73\x3b\x20\x5b\x49\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls5;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/reflect/Array", "newInstance", "(Ljava/lang/Class;[I)Ljava/lang/Object;");
jvalue args[] = {{.l = v6},{.l = v16}};
v4 = (jobject) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("23e:move-result-object \x76\x34");
if (v6) {
LOGD("env->DeleteLocalRef(%p):v6", v6);
env->DeleteLocalRef(v6);
}
v6 = (jobject) v4;
LOGD("240:check-cast \x76\x34\x2c\x20\x5b\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls16;
D2C_RESOLVE_CLASS(clz,"[[Ljava/lang/String;");
D2C_CHECK_CAST(v6, clz, "[[Ljava/lang/String;");
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("244:aput-object \x76\x34\x2c\x20\x76\x31\x2c\x20\x76\x35");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
env->SetObjectArrayElement((jobjectArray) v1, (jint) v8, v6);D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("248:aget-object \x76\x31\x2c\x20\x76\x31\x35\x2c\x20\x76\x30");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v19);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v19, (jint) v2);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jobject) v4;
v7 = 1;
v7 = 1;
v7 = 1;
v7 = 1;
LOGD("24e:aget-object \x76\x31\x2c\x20\x76\x31\x2c\x20\x76\x34");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v1, (jint) v7);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jobject) v4;
LOGD("252:aget-object \x76\x31\x2c\x20\x76\x31\x2c\x20\x76\x35");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v1, (jint) v8);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jobject) v4;
v17 = 5;
LOGD("258:new-array \x76\x35\x2c\x20\x76\x31\x33\x2c\x20\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v17 < 0) {
d2c_throw_exception(env, "java/lang/NegativeArraySizeException", "negative array size");
goto EX_HANDLE;
}
if (v23) {
LOGD("env->DeleteLocalRef(%p):v23", v23);
env->DeleteLocalRef(v23);
}
jclass &clz = cls17;
D2C_RESOLVE_CLASS(clz,"java/lang/String");
v23 = env->NewObjectArray((jint) v17, clz, NULL);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("25c:aput-object \x76\x35\x2c\x20\x76\x31\x2c\x20\x76\x34");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
env->SetObjectArrayElement((jobjectArray) v1, (jint) v7, v23);D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("260:aget-object \x76\x31\x2c\x20\x76\x31\x35\x2c\x20\x76\x30");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v19);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v19, (jint) v2);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jobject) v4;
LOGD("264:aget-object \x76\x30\x2c\x20\x76\x31\x2c\x20\x76\x34");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v1, (jint) v7);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
v24 = 2;
LOGD("26a:aget-object \x76\x30\x2c\x20\x76\x30\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v0, (jint) v24);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
LOGD("26e:aget-object \x76\x30\x2c\x20\x76\x30\x2c\x20\x76\x34");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v0, (jint) v7);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
LOGD("272:const-string \x76\x31\x2c\x20\x27\x48\x45\x4c\x4c\x4f\x2d\x32\x27");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jstring) env->NewStringUTF("\x48\x45\x4c\x4c\x4f\x2d\x32");
v7 = 4;
LOGD("278:aput-object \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x34");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
env->SetObjectArrayElement((jobjectArray) v0, (jint) v7, v1);D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("27c:invoke-static \x76\x31\x35\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x75\x74\x69\x6c\x2f\x41\x72\x72\x61\x79\x73\x3b\x2d\x3e\x64\x65\x65\x70\x54\x6f\x53\x74\x72\x69\x6e\x67\x28\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls18;
jmethodID &mid = mth12;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/util/Arrays", "deepToString", "([Ljava/lang/Object;)Ljava/lang/String;");
jvalue args[] = {{.l = v19}};
v4 = (jstring) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("282:move-result-object \x76\x30");
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
v25 = 2;
v26 = 5;
v27 = 2;
v28 = 3;
v29 = 2;
v30 = 1;
LOGD("29c:filled-new-array/range \x76\x32\x31\x20\x2e\x2e\x2e\x20\x76\x32\x36\x2c\x20\x5b\x49");
{
#define EX_HANDLE EX_UnwindBlock
v4 = env->NewIntArray((jint) 6);
d2c_filled_new_array(env, (jarray) v4, "I", 6, v25, v26, v27, v28, v29, v30);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("2a2:move-result-object \x76\x31");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jobject) v4;
LOGD("2a4:const-class \x76\x35\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
if (v23) {
LOGD("env->DeleteLocalRef(%p):v23", v23);
env->DeleteLocalRef(v23);
}
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls13;
D2C_RESOLVE_CLASS(clz,"\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67");
v23 = env->NewLocalRef(clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("2a8:invoke-static \x76\x35\x2c\x20\x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x72\x65\x66\x6c\x65\x63\x74\x2f\x41\x72\x72\x61\x79\x3b\x2d\x3e\x6e\x65\x77\x49\x6e\x73\x74\x61\x6e\x63\x65\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x43\x6c\x61\x73\x73\x3b\x20\x5b\x49\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls5;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/reflect/Array", "newInstance", "(Ljava/lang/Class;[I)Ljava/lang/Object;");
jvalue args[] = {{.l = v23},{.l = v1}};
v4 = (jobject) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("2ae:move-result-object \x76\x31");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jobject) v4;
LOGD("2b0:check-cast \x76\x31\x2c\x20\x5b\x5b\x5b\x5b\x5b\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls20;
D2C_RESOLVE_CLASS(clz,"[[[[[[Ljava/lang/String;");
D2C_CHECK_CAST(v1, clz, "[[[[[[Ljava/lang/String;");
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v8 = 2;
LOGD("2b6:new-array \x76\x31\x33\x2c\x20\x76\x35\x2c\x20\x5b\x5b\x5b\x5b\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v8 < 0) {
d2c_throw_exception(env, "java/lang/NegativeArraySizeException", "negative array size");
goto EX_HANDLE;
}
if (v16) {
LOGD("env->DeleteLocalRef(%p):v16", v16);
env->DeleteLocalRef(v16);
}
jclass &clz = cls14;
D2C_RESOLVE_CLASS(clz,"[[[[Ljava/lang/String;");
v16 = env->NewObjectArray((jint) v8, clz, NULL);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v31 = 0;
v31 = 0;
v31 = 0;
v31 = 0;
v31 = 0;
v31 = 0;
LOGD("2be:aput-object \x76\x31\x33\x2c\x20\x76\x31\x2c\x20\x76\x31\x38");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
env->SetObjectArrayElement((jobjectArray) v1, (jint) v31, v16);D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("2c2:aget-object \x76\x31\x33\x2c\x20\x76\x31\x2c\x20\x76\x31\x38");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v1, (jint) v31);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v16) {
LOGD("env->DeleteLocalRef(%p):v16", v16);
env->DeleteLocalRef(v16);
}
v16 = (jobject) v4;
v7 = 3;
LOGD("2c8:new-array \x76\x35\x2c\x20\x76\x34\x2c\x20\x5b\x5b\x5b\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v7 < 0) {
d2c_throw_exception(env, "java/lang/NegativeArraySizeException", "negative array size");
goto EX_HANDLE;
}
if (v23) {
LOGD("env->DeleteLocalRef(%p):v23", v23);
env->DeleteLocalRef(v23);
}
jclass &clz = cls15;
D2C_RESOLVE_CLASS(clz,"[[[Ljava/lang/String;");
v23 = env->NewObjectArray((jint) v7, clz, NULL);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v7 = 1;
v7 = 1;
LOGD("2ce:aput-object \x76\x35\x2c\x20\x76\x31\x33\x2c\x20\x76\x34");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v16);
env->SetObjectArrayElement((jobjectArray) v16, (jint) v7, v23);D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("2d2:aget-object \x76\x35\x2c\x20\x76\x31\x2c\x20\x76\x31\x38");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v1, (jint) v31);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v23) {
LOGD("env->DeleteLocalRef(%p):v23", v23);
env->DeleteLocalRef(v23);
}
v23 = (jobject) v4;
LOGD("2d6:aget-object \x76\x35\x2c\x20\x76\x35\x2c\x20\x76\x34");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v23);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v23, (jint) v7);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v23) {
LOGD("env->DeleteLocalRef(%p):v23", v23);
env->DeleteLocalRef(v23);
}
v23 = (jobject) v4;
v17 = 2;
v17 = 2;
v17 = 2;
LOGD("2dc:new-array \x76\x34\x2c\x20\x76\x31\x33\x2c\x20\x5b\x5b\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v17 < 0) {
d2c_throw_exception(env, "java/lang/NegativeArraySizeException", "negative array size");
goto EX_HANDLE;
}
if (v6) {
LOGD("env->DeleteLocalRef(%p):v6", v6);
env->DeleteLocalRef(v6);
}
jclass &clz = cls16;
D2C_RESOLVE_CLASS(clz,"[[Ljava/lang/String;");
v6 = env->NewObjectArray((jint) v17, clz, NULL);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("2e0:aput-object \x76\x34\x2c\x20\x76\x35\x2c\x20\x76\x31\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v23);
env->SetObjectArrayElement((jobjectArray) v23, (jint) v17, v6);D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("2e4:aget-object \x76\x34\x2c\x20\x76\x31\x2c\x20\x76\x31\x38");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v1, (jint) v31);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v6) {
LOGD("env->DeleteLocalRef(%p):v6", v6);
env->DeleteLocalRef(v6);
}
v6 = (jobject) v4;
v8 = 1;
v8 = 1;
v8 = 1;
v8 = 1;
v8 = 1;
v8 = 1;
v8 = 1;
v8 = 1;
LOGD("2ea:aget-object \x76\x34\x2c\x20\x76\x34\x2c\x20\x76\x35");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v6);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v6, (jint) v8);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v6) {
LOGD("env->DeleteLocalRef(%p):v6", v6);
env->DeleteLocalRef(v6);
}
v6 = (jobject) v4;
LOGD("2ee:aget-object \x76\x34\x2c\x20\x76\x34\x2c\x20\x76\x31\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v6);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v6, (jint) v17);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v6) {
LOGD("env->DeleteLocalRef(%p):v6", v6);
env->DeleteLocalRef(v6);
}
v6 = (jobject) v4;
if (v32) {
LOGD("env->DeleteLocalRef(%p):v32", v32);
env->DeleteLocalRef(v32);
}
v32 = (jobject) env->NewLocalRef(v0);
v17 = 5;
LOGD("2f8:new-array \x76\x30\x2c\x20\x76\x31\x33\x2c\x20\x5b\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v17 < 0) {
d2c_throw_exception(env, "java/lang/NegativeArraySizeException", "negative array size");
goto EX_HANDLE;
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
jclass &clz = cls21;
D2C_RESOLVE_CLASS(clz,"[Ljava/lang/String;");
v0 = env->NewObjectArray((jint) v17, clz, NULL);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("2fc:aput-object \x76\x30\x2c\x20\x76\x34\x2c\x20\x76\x35");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v6);
env->SetObjectArrayElement((jobjectArray) v6, (jint) v8, v0);D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("300:aget-object \x76\x30\x2c\x20\x76\x31\x2c\x20\x76\x31\x38");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v1, (jint) v31);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
LOGD("304:aget-object \x76\x30\x2c\x20\x76\x30\x2c\x20\x76\x35");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v0, (jint) v8);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
v7 = 2;
v7 = 2;
v7 = 2;
v7 = 2;
LOGD("30a:aget-object \x76\x30\x2c\x20\x76\x30\x2c\x20\x76\x34");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v0, (jint) v7);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
LOGD("30e:aget-object \x76\x30\x2c\x20\x76\x30\x2c\x20\x76\x35");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v0, (jint) v8);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
LOGD("312:new-array \x76\x31\x33\x2c\x20\x76\x34\x2c\x20\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v7 < 0) {
d2c_throw_exception(env, "java/lang/NegativeArraySizeException", "negative array size");
goto EX_HANDLE;
}
if (v16) {
LOGD("env->DeleteLocalRef(%p):v16", v16);
env->DeleteLocalRef(v16);
}
jclass &clz = cls17;
D2C_RESOLVE_CLASS(clz,"java/lang/String");
v16 = env->NewObjectArray((jint) v7, clz, NULL);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v33 = 4;
v33 = 4;
LOGD("31a:aput-object \x76\x31\x33\x2c\x20\x76\x30\x2c\x20\x76\x31\x39");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
env->SetObjectArrayElement((jobjectArray) v0, (jint) v33, v16);D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("31e:aget-object \x76\x30\x2c\x20\x76\x31\x2c\x20\x76\x31\x38");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v1, (jint) v31);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
LOGD("322:aget-object \x76\x30\x2c\x20\x76\x30\x2c\x20\x76\x35");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v0, (jint) v8);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
LOGD("326:aget-object \x76\x30\x2c\x20\x76\x30\x2c\x20\x76\x34");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v0, (jint) v7);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
LOGD("32a:aget-object \x76\x30\x2c\x20\x76\x30\x2c\x20\x76\x35");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v0, (jint) v8);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
LOGD("32e:aget-object \x76\x30\x2c\x20\x76\x30\x2c\x20\x76\x31\x39");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v0, (jint) v33);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
LOGD("332:const-string \x76\x31\x33\x2c\x20\x27\x48\x45\x4c\x4c\x4f\x2d\x33\x27");
if (v16) {
LOGD("env->DeleteLocalRef(%p):v16", v16);
env->DeleteLocalRef(v16);
}
v16 = (jstring) env->NewStringUTF("\x48\x45\x4c\x4c\x4f\x2d\x33");
LOGD("336:aput-object \x76\x31\x33\x2c\x20\x76\x30\x2c\x20\x76\x35");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
env->SetObjectArrayElement((jobjectArray) v0, (jint) v8, v16);D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("33a:invoke-static \x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x75\x74\x69\x6c\x2f\x41\x72\x72\x61\x79\x73\x3b\x2d\x3e\x64\x65\x65\x70\x54\x6f\x53\x74\x72\x69\x6e\x67\x28\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls18;
jmethodID &mid = mth12;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/util/Arrays", "deepToString", "([Ljava/lang/Object;)Ljava/lang/String;");
jvalue args[] = {{.l = v1}};
v4 = (jstring) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("340:move-result-object \x76\x30");
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
LOGD("342:new-array \x76\x31\x33\x2c\x20\x76\x35\x2c\x20\x5b\x5b\x5b\x5b\x5b\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v8 < 0) {
d2c_throw_exception(env, "java/lang/NegativeArraySizeException", "negative array size");
goto EX_HANDLE;
}
if (v16) {
LOGD("env->DeleteLocalRef(%p):v16", v16);
env->DeleteLocalRef(v16);
}
jclass &clz = cls19;
D2C_RESOLVE_CLASS(clz,"[[[[[Ljava/lang/String;");
v16 = env->NewObjectArray((jint) v8, clz, NULL);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("346:new-array \x76\x35\x2c\x20\x76\x34\x2c\x20\x5b\x5b\x5b\x5b\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v7 < 0) {
d2c_throw_exception(env, "java/lang/NegativeArraySizeException", "negative array size");
goto EX_HANDLE;
}
if (v23) {
LOGD("env->DeleteLocalRef(%p):v23", v23);
env->DeleteLocalRef(v23);
}
jclass &clz = cls14;
D2C_RESOLVE_CLASS(clz,"[[[[Ljava/lang/String;");
v23 = env->NewObjectArray((jint) v7, clz, NULL);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v31 = 0;
v31 = 0;
v31 = 0;
v31 = 0;
v31 = 0;
v31 = 0;
LOGD("34e:aput-object \x76\x35\x2c\x20\x76\x31\x33\x2c\x20\x76\x31\x38");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v16);
env->SetObjectArrayElement((jobjectArray) v16, (jint) v31, v23);D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("352:aget-object \x76\x35\x2c\x20\x76\x31\x33\x2c\x20\x76\x31\x38");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v16);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v16, (jint) v31);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v23) {
LOGD("env->DeleteLocalRef(%p):v23", v23);
env->DeleteLocalRef(v23);
}
v23 = (jobject) v4;
if (v34) {
LOGD("env->DeleteLocalRef(%p):v34", v34);
env->DeleteLocalRef(v34);
}
v34 = (jobject) env->NewLocalRef(v0);
v7 = 3;
LOGD("35c:new-array \x76\x30\x2c\x20\x76\x34\x2c\x20\x5b\x5b\x5b\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v7 < 0) {
d2c_throw_exception(env, "java/lang/NegativeArraySizeException", "negative array size");
goto EX_HANDLE;
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
jclass &clz = cls15;
D2C_RESOLVE_CLASS(clz,"[[[Ljava/lang/String;");
v0 = env->NewObjectArray((jint) v7, clz, NULL);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v7 = 1;
v7 = 1;
LOGD("362:aput-object \x76\x30\x2c\x20\x76\x35\x2c\x20\x76\x34");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v23);
env->SetObjectArrayElement((jobjectArray) v23, (jint) v7, v0);D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("366:aget-object \x76\x30\x2c\x20\x76\x31\x33\x2c\x20\x76\x31\x38");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v16);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v16, (jint) v31);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
LOGD("36a:aget-object \x76\x30\x2c\x20\x76\x30\x2c\x20\x76\x34");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v0, (jint) v7);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
v8 = 2;
v8 = 2;
v8 = 2;
LOGD("370:new-array \x76\x34\x2c\x20\x76\x35\x2c\x20\x5b\x5b\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v8 < 0) {
d2c_throw_exception(env, "java/lang/NegativeArraySizeException", "negative array size");
goto EX_HANDLE;
}
if (v6) {
LOGD("env->DeleteLocalRef(%p):v6", v6);
env->DeleteLocalRef(v6);
}
jclass &clz = cls16;
D2C_RESOLVE_CLASS(clz,"[[Ljava/lang/String;");
v6 = env->NewObjectArray((jint) v8, clz, NULL);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("374:aput-object \x76\x34\x2c\x20\x76\x30\x2c\x20\x76\x35");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
env->SetObjectArrayElement((jobjectArray) v0, (jint) v8, v6);D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("378:aget-object \x76\x30\x2c\x20\x76\x31\x33\x2c\x20\x76\x31\x38");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v16);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v16, (jint) v31);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
v7 = 1;
v7 = 1;
v7 = 1;
v7 = 1;
v7 = 1;
v7 = 1;
v7 = 1;
LOGD("37e:aget-object \x76\x30\x2c\x20\x76\x30\x2c\x20\x76\x34");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v0, (jint) v7);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
LOGD("382:aget-object \x76\x30\x2c\x20\x76\x30\x2c\x20\x76\x35");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v0, (jint) v8);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
if (v32) {
LOGD("env->DeleteLocalRef(%p):v32", v32);
env->DeleteLocalRef(v32);
}
v32 = (jobject) env->NewLocalRef(v1);
v8 = 5;
LOGD("38c:new-array \x76\x31\x2c\x20\x76\x35\x2c\x20\x5b\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v8 < 0) {
d2c_throw_exception(env, "java/lang/NegativeArraySizeException", "negative array size");
goto EX_HANDLE;
}
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
jclass &clz = cls21;
D2C_RESOLVE_CLASS(clz,"[Ljava/lang/String;");
v1 = env->NewObjectArray((jint) v8, clz, NULL);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("390:aput-object \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x34");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
env->SetObjectArrayElement((jobjectArray) v0, (jint) v7, v1);D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("394:aget-object \x76\x30\x2c\x20\x76\x31\x33\x2c\x20\x76\x31\x38");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v16);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v16, (jint) v31);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
LOGD("398:aget-object \x76\x30\x2c\x20\x76\x30\x2c\x20\x76\x34");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v0, (jint) v7);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
v24 = 2;
v24 = 2;
v24 = 2;
v24 = 2;
LOGD("39e:aget-object \x76\x30\x2c\x20\x76\x30\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v0, (jint) v24);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
LOGD("3a2:aget-object \x76\x30\x2c\x20\x76\x30\x2c\x20\x76\x34");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v0, (jint) v7);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
LOGD("3a6:new-array \x76\x35\x2c\x20\x76\x31\x2c\x20\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v24 < 0) {
d2c_throw_exception(env, "java/lang/NegativeArraySizeException", "negative array size");
goto EX_HANDLE;
}
if (v23) {
LOGD("env->DeleteLocalRef(%p):v23", v23);
env->DeleteLocalRef(v23);
}
jclass &clz = cls17;
D2C_RESOLVE_CLASS(clz,"java/lang/String");
v23 = env->NewObjectArray((jint) v24, clz, NULL);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v33 = 4;
v33 = 4;
LOGD("3ae:aput-object \x76\x35\x2c\x20\x76\x30\x2c\x20\x76\x31\x39");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
env->SetObjectArrayElement((jobjectArray) v0, (jint) v33, v23);D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("3b2:aget-object \x76\x30\x2c\x20\x76\x31\x33\x2c\x20\x76\x31\x38");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v16);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v16, (jint) v31);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
LOGD("3b6:aget-object \x76\x30\x2c\x20\x76\x30\x2c\x20\x76\x34");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v0, (jint) v7);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
LOGD("3ba:aget-object \x76\x30\x2c\x20\x76\x30\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v0, (jint) v24);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
LOGD("3be:aget-object \x76\x30\x2c\x20\x76\x30\x2c\x20\x76\x34");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v0, (jint) v7);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
LOGD("3c2:aget-object \x76\x30\x2c\x20\x76\x30\x2c\x20\x76\x31\x39");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
v4 = (jarray) env->GetObjectArrayElement((jobjectArray) v0, (jint) v33);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
LOGD("3c6:const-string \x76\x35\x2c\x20\x27\x48\x45\x4c\x4c\x4f\x2d\x34\x27");
if (v23) {
LOGD("env->DeleteLocalRef(%p):v23", v23);
env->DeleteLocalRef(v23);
}
v23 = (jstring) env->NewStringUTF("\x48\x45\x4c\x4c\x4f\x2d\x34");
LOGD("3ca:aput-object \x76\x35\x2c\x20\x76\x30\x2c\x20\x76\x34");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
env->SetObjectArrayElement((jobjectArray) v0, (jint) v7, v23);D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("3ce:invoke-static \x76\x31\x33\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x75\x74\x69\x6c\x2f\x41\x72\x72\x61\x79\x73\x3b\x2d\x3e\x64\x65\x65\x70\x54\x6f\x53\x74\x72\x69\x6e\x67\x28\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls18;
jmethodID &mid = mth12;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/util/Arrays", "deepToString", "([Ljava/lang/Object;)Ljava/lang/String;");
jvalue args[] = {{.l = v16}};
v4 = (jstring) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("3d4:move-result-object \x76\x34");
if (v6) {
LOGD("env->DeleteLocalRef(%p):v6", v6);
env->DeleteLocalRef(v6);
}
v6 = (jobject) v4;
v2 = 1073921584;
if (v35) {
LOGD("env->DeleteLocalRef(%p):v35", v35);
env->DeleteLocalRef(v35);
}
v35 = (jobject) env->NewLocalRef(v3);
v36 = 5;
v8 = 3;
L1:
LOGD("3e4:filled-new-array \x76\x32\x2c\x20\x76\x31\x2c\x20\x76\x35\x2c\x20\x76\x31\x2c\x20\x76\x30\x2c\x20\x5b\x49");
{
#define EX_HANDLE EX_LandingPad_1
v4 = env->NewIntArray((jint) 5);
d2c_filled_new_array(env, (jarray) v4, "I", 5, v36, v24, v8, v24, v2);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L2:
LOGD("3ea:move-result-object \x76\x30");
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
L3:
LOGD("3ec:const-class \x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
{
#define EX_HANDLE EX_LandingPad_1
jclass &clz = cls13;
D2C_RESOLVE_CLASS(clz,"\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67");
v1 = env->NewLocalRef(clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L4:
LOGD("3f0:invoke-static \x76\x31\x2c\x20\x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x72\x65\x66\x6c\x65\x63\x74\x2f\x41\x72\x72\x61\x79\x3b\x2d\x3e\x6e\x65\x77\x49\x6e\x73\x74\x61\x6e\x63\x65\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x43\x6c\x61\x73\x73\x3b\x20\x5b\x49\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b");
{
#define EX_HANDLE EX_LandingPad_1
jclass &clz = cls5;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/reflect/Array", "newInstance", "(Ljava/lang/Class;[I)Ljava/lang/Object;");
jvalue args[] = {{.l = v1},{.l = v0}};
v4 = (jobject) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L5:
LOGD("3f6:move-result-object \x76\x30");
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) v4;
L6:
LOGD("3f8:check-cast \x76\x30\x2c\x20\x5b\x5b\x5b\x5b\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_LandingPad_1
jclass &clz = cls19;
D2C_RESOLVE_CLASS(clz,"[[[[[Ljava/lang/String;");
D2C_CHECK_CAST(v0, clz, "[[[[[Ljava/lang/String;");
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L7:
v24 = 0;
L8:
LOGD("3fe:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_LandingPad_1
jclass &clz = cls22;
jmethodID &mid = mth13;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v24}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L9:
goto L11;
L10:
LOGD("406:move-exception \x76\x30");
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = exception;
L11:
return;

EX_LandingPad_1:
D2C_GET_PENDING_EX
if(d2c_is_instance_of(env, exception, "java/lang/Error")) {
goto L10;
}
D2C_GOTO_UNWINDBLOCK
EX_UnwindBlock: return;
}
