#include "Dex2C.h"

/* Lcom/test/TestCompiler/Monitor;->run()V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_Monitor_run__(JNIEnv *env, jobject thiz){
jobject v0 = NULL;
jobject v1 = NULL;
jint v2;
jint v3;
jint v4;
jobject v5 = NULL;
jint v6;
jthrowable exception;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL,cls3 = NULL,cls4 = NULL;
jfieldID fld0 = NULL,fld1 = NULL;
jmethodID mth0 = NULL, mth1 = NULL, mth2 = NULL, mth3 = NULL, mth4 = NULL;
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
LOGD("4:const-string \x76\x31\x2c\x20\x27\x4d\x6f\x6e\x69\x74\x6f\x72\x2e\x72\x75\x6e\x27");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jstring) env->NewStringUTF("\x4d\x6f\x6e\x69\x74\x6f\x72\x2e\x72\x75\x6e");
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
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = 0;
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = 0;
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = 0;
v2 = 0;
v2 = 0;
v3 = 1;
v3 = 1;
L1:
LOGD("14:monitor-enter \x76\x30");
{
#define EX_HANDLE EX_LandingPad_1
D2C_NOT_NULL(v0);
env->MonitorEnter(v0);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L2:
LOGD("16:sget \x76\x33\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x6f\x6e\x69\x74\x6f\x72\x3b\x2d\x3e\x6d\x56\x61\x6c\x20\x49");
{
#define EX_HANDLE EX_LandingPad_2
jclass &clz = cls2;
jfieldID &fld = fld1;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/Monitor", "mVal", "I");
v4 = (jint) env->GetStaticIntField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L3:
LOGD("1a:add-int/2addr \x76\x33\x2c\x20\x76\x32");
v4 = (v4 + v3);
L4:
LOGD("1c:sput \x76\x33\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x6f\x6e\x69\x74\x6f\x72\x3b\x2d\x3e\x6d\x56\x61\x6c\x20\x49");
{
#define EX_HANDLE EX_LandingPad_2
jclass &clz = cls2;
jfieldID &fld = fld1;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/Monitor", "mVal", "I");
env->SetStaticIntField(clz,fld,(jint) v4);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L5:
{
#define EX_HANDLE EX_LandingPad_2
if (env->MonitorExit(v0) != JNI_OK) {
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
}
L6:
LOGD("22:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_LandingPad_6
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v2}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L7:
goto L12;
L8:
LOGD("2a:move-exception \x76\x33");
if (v5) {
LOGD("env->DeleteLocalRef(%p):v5", v5);
env->DeleteLocalRef(v5);
}
v5 = exception;
L9:
{
#define EX_HANDLE EX_LandingPad_9
if (env->MonitorExit(v0) != JNI_OK) {
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
}
L10:
LOGD("2e:throw \x76\x33");
{
#define EX_HANDLE EX_LandingPad_10
D2C_NOT_NULL(v5);
env->Throw((jthrowable) v5);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L11:
LOGD("30:move-exception \x76\x33");
if (v5) {
LOGD("env->DeleteLocalRef(%p):v5", v5);
env->DeleteLocalRef(v5);
}
v5 = exception;
L12:
LOGD("32:new-instance \x76\x33\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v5) {
LOGD("env->DeleteLocalRef(%p):v5", v5);
env->DeleteLocalRef(v5);
}
jclass &clz = cls4;
D2C_RESOLVE_CLASS(clz,"java/lang/Object");
v5 = (jobject) env->AllocObject(clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("36:invoke-direct \x76\x33\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b\x2d\x3e\x3c\x69\x6e\x69\x74\x3e\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v5);
jclass &clz = cls4;
jmethodID &mid = mth2;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/Object", "<init>", "()V");
jvalue args[] = {};
env->CallVoidMethodA(v5, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jobject) env->NewLocalRef(v5);
LOGD("3e:monitor-enter \x76\x30");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
env->MonitorEnter(v0);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L13:
LOGD("40:sget \x76\x33\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x6f\x6e\x69\x74\x6f\x72\x3b\x2d\x3e\x6d\x56\x61\x6c\x20\x49");
{
#define EX_HANDLE EX_LandingPad_13
jclass &clz = cls2;
jfieldID &fld = fld1;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/Monitor", "mVal", "I");
v4 = (jint) env->GetStaticIntField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L14:
LOGD("44:add-int/2addr \x76\x33\x2c\x20\x76\x32");
v4 = (v4 + v3);
L15:
LOGD("46:sput \x76\x33\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x6f\x6e\x69\x74\x6f\x72\x3b\x2d\x3e\x6d\x56\x61\x6c\x20\x49");
{
#define EX_HANDLE EX_LandingPad_13
jclass &clz = cls2;
jfieldID &fld = fld1;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/Monitor", "mVal", "I");
env->SetStaticIntField(clz,fld,(jint) v4);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L16:
{
#define EX_HANDLE EX_LandingPad_13
if (env->MonitorExit(v0) != JNI_OK) {
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
}
L17:
LOGD("4c:new-instance \x76\x33\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x6f\x6e\x69\x74\x6f\x72\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v5) {
LOGD("env->DeleteLocalRef(%p):v5", v5);
env->DeleteLocalRef(v5);
}
jclass &clz = cls2;
D2C_RESOLVE_CLASS(clz,"com/test/TestCompiler/Monitor");
v5 = (jobject) env->AllocObject(clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("50:invoke-direct \x76\x33\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x6f\x6e\x69\x74\x6f\x72\x3b\x2d\x3e\x3c\x69\x6e\x69\x74\x3e\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v5);
jclass &clz = cls2;
jmethodID &mid = mth3;
D2C_RESOLVE_METHOD(clz, mid, "com/test/TestCompiler/Monitor", "<init>", "()V");
jvalue args[] = {};
env->CallVoidMethodA(v5, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("56:invoke-virtual \x76\x33\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x6f\x6e\x69\x74\x6f\x72\x3b\x2d\x3e\x73\x75\x62\x54\x65\x73\x74\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v5);
jclass &clz = cls2;
jmethodID &mid = mth4;
D2C_RESOLVE_METHOD(clz, mid, "com/test/TestCompiler/Monitor", "subTest", "()V");
jvalue args[] = {};
env->CallVoidMethodA(v5, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("5c:sget \x76\x33\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x6f\x6e\x69\x74\x6f\x72\x3b\x2d\x3e\x6d\x56\x61\x6c\x20\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld1;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/Monitor", "mVal", "I");
v4 = (jint) env->GetStaticIntField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = 2;
LOGD("62:if-ne \x76\x33\x2c\x20\x76\x34\x2c\x20\x2b\x34");
if(v4 != v6) {
goto L19;
}
else {
goto L18;
}
L18:
v2 = 1;
L19:
LOGD("6a:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v2}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;
L20:
LOGD("72:move-exception \x76\x31");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = exception;
L21:
{
#define EX_HANDLE EX_LandingPad_21
if (env->MonitorExit(v0) != JNI_OK) {
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
}
L22:
LOGD("76:throw \x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
env->Throw((jthrowable) v1);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}

EX_LandingPad_1:
D2C_GET_PENDING_EX
if(d2c_is_instance_of(env, exception, "java/lang/NullPointerException")) {
goto L11;
}
D2C_GOTO_UNWINDBLOCK

EX_LandingPad_2:
D2C_GET_PENDING_EX
if(d2c_is_instance_of(env, exception, "java/lang/Throwable")) {
goto L8;
}
D2C_GOTO_UNWINDBLOCK

EX_LandingPad_13:
D2C_GET_PENDING_EX
if(d2c_is_instance_of(env, exception, "java/lang/Throwable")) {
goto L20;
}
D2C_GOTO_UNWINDBLOCK

EX_LandingPad_9:
D2C_GET_PENDING_EX
if(d2c_is_instance_of(env, exception, "java/lang/Throwable")) {
goto L8;
}
D2C_GOTO_UNWINDBLOCK

EX_LandingPad_10:
D2C_GET_PENDING_EX
if(d2c_is_instance_of(env, exception, "java/lang/NullPointerException")) {
goto L11;
}
D2C_GOTO_UNWINDBLOCK

EX_LandingPad_21:
D2C_GET_PENDING_EX
if(d2c_is_instance_of(env, exception, "java/lang/Throwable")) {
goto L20;
}
D2C_GOTO_UNWINDBLOCK

EX_LandingPad_6:
D2C_GET_PENDING_EX
if(d2c_is_instance_of(env, exception, "java/lang/NullPointerException")) {
goto L11;
}
D2C_GOTO_UNWINDBLOCK
EX_UnwindBlock: return;
}
