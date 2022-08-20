#include "Dex2C.h"

/* Lcom/test/TestCompiler/Monitor;->subTest()V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_Monitor_subTest__(JNIEnv *env, jobject thiz){
jobject v0 = NULL;
jobject v1 = NULL;
jint v2;
jint v3;
jobject v4 = NULL;
jobject v5 = NULL;
jthrowable exception;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL;
jfieldID fld0 = NULL;
jmethodID mth0 = NULL, mth1 = NULL;
v0 = (jobject)env->NewLocalRef(thiz);
L0:
LOGD("0:monitor-enter \x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
env->MonitorEnter(v0);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L1:
LOGD("2:new-instance \x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b");
{
#define EX_HANDLE EX_LandingPad_1
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
jclass &clz = cls0;
D2C_RESOLVE_CLASS(clz,"java/lang/Object");
v1 = (jobject) env->AllocObject(clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L2:
LOGD("6:invoke-direct \x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b\x2d\x3e\x3c\x69\x6e\x69\x74\x3e\x28\x29\x56");
{
#define EX_HANDLE EX_LandingPad_1
D2C_NOT_NULL(v1);
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/Object", "<init>", "()V");
jvalue args[] = {};
env->CallVoidMethodA(v1, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L3:
LOGD("c:monitor-enter \x76\x30");
{
#define EX_HANDLE EX_LandingPad_1
D2C_NOT_NULL(v1);
env->MonitorEnter(v1);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L4:
LOGD("e:sget \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x6f\x6e\x69\x74\x6f\x72\x3b\x2d\x3e\x6d\x56\x61\x6c\x20\x49");
{
#define EX_HANDLE EX_LandingPad_4
jclass &clz = cls1;
jfieldID &fld = fld0;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/Monitor", "mVal", "I");
v2 = (jint) env->GetStaticIntField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L5:
v3 = 1;
v3 = 1;
LOGD("14:add-int/2addr \x76\x31\x2c\x20\x76\x32");
v2 = (v2 + v3);
L6:
LOGD("16:sput \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x6f\x6e\x69\x74\x6f\x72\x3b\x2d\x3e\x6d\x56\x61\x6c\x20\x49");
{
#define EX_HANDLE EX_LandingPad_4
jclass &clz = cls1;
jfieldID &fld = fld0;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/Monitor", "mVal", "I");
env->SetStaticIntField(clz,fld,(jint) v2);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L7:
v2 = 0;
LOGD("1c:if-nez \x76\x31\x2c\x20\x2b\x33");
if(v2 != 0){
goto L9;
}
else {
goto L8;
}
L8:
goto L10;
L9:
v3 = 0;
L10:
LOGD("24:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_LandingPad_10
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v3}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L11:
{
#define EX_HANDLE EX_LandingPad_10
if (env->MonitorExit(v1) != JNI_OK) {
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
}
L12:
{
#define EX_HANDLE EX_UnwindBlock
if (env->MonitorExit(v0) != JNI_OK) {
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
}
return;
L13:
LOGD("30:move-exception \x76\x32");
if (v4) {
LOGD("env->DeleteLocalRef(%p):v4", v4);
env->DeleteLocalRef(v4);
}
v4 = exception;
if (v5) {
LOGD("env->DeleteLocalRef(%p):v5", v5);
env->DeleteLocalRef(v5);
}
v5 = (jobject) env->NewLocalRef(v1);
L14:
{
#define EX_HANDLE EX_LandingPad_14
if (env->MonitorExit(v1) != JNI_OK) {
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
}
L15:
LOGD("36:throw \x76\x32");
{
#define EX_HANDLE EX_LandingPad_15
D2C_NOT_NULL(v4);
env->Throw((jthrowable) v4);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L16:
LOGD("38:move-exception \x76\x32");
if (v4) {
LOGD("env->DeleteLocalRef(%p):v4", v4);
env->DeleteLocalRef(v4);
}
v4 = exception;
goto L14;
L17:
LOGD("3c:move-exception \x76\x30");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = exception;
{
#define EX_HANDLE EX_UnwindBlock
if (env->MonitorExit(v0) != JNI_OK) {
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
}
LOGD("40:throw \x76\x30");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
env->Throw((jthrowable) v1);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}

EX_LandingPad_1:
D2C_GET_PENDING_EX
if(d2c_is_instance_of(env, exception, "java/lang/Throwable")) {
goto L17;
}
D2C_GOTO_UNWINDBLOCK

EX_LandingPad_4:
D2C_GET_PENDING_EX
if(d2c_is_instance_of(env, exception, "java/lang/Throwable")) {
goto L13;
}
D2C_GOTO_UNWINDBLOCK

EX_LandingPad_14:
D2C_GET_PENDING_EX
if(d2c_is_instance_of(env, exception, "java/lang/Throwable")) {
goto L16;
}
D2C_GOTO_UNWINDBLOCK

EX_LandingPad_15:
D2C_GET_PENDING_EX
if(d2c_is_instance_of(env, exception, "java/lang/Throwable")) {
goto L17;
}
D2C_GOTO_UNWINDBLOCK

EX_LandingPad_10:
D2C_GET_PENDING_EX
if(d2c_is_instance_of(env, exception, "java/lang/Throwable")) {
goto L16;
}
D2C_GOTO_UNWINDBLOCK
EX_UnwindBlock: return;
}
