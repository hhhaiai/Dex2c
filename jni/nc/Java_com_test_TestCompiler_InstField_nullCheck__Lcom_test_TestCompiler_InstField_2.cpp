#include "Dex2C.h"

/* Lcom/test/TestCompiler/InstField;->nullCheck(Lcom/test/TestCompiler/InstField;)V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_InstField_nullCheck__Lcom_test_TestCompiler_InstField_2(JNIEnv *env, jobject thiz, jobject p3){
jobject v0 = NULL;
jobject v1 = NULL;
jobject v2 = NULL;
jint v3;
jint v4;
jlong v5;
jthrowable exception;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL,cls3 = NULL;
jfieldID fld0 = NULL,fld1 = NULL,fld2 = NULL;
jmethodID mth0 = NULL, mth1 = NULL;
v0 = (jobject)env->NewLocalRef(p3);
L0:
LOGD("0:sget-object \x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x79\x73\x74\x65\x6d\x3b\x2d\x3e\x6f\x75\x74\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x50\x72\x69\x6e\x74\x53\x74\x72\x65\x61\x6d\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
jclass &clz = cls0;
jfieldID &fld = fld0;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "java/lang/System", "out", "Ljava/io/PrintStream;");
v1 = (jobject) env->GetStaticObjectField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("4:const-string \x76\x31\x2c\x20\x27\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x2e\x6e\x75\x6c\x6c\x43\x68\x65\x63\x6b\x27");
if (v2) {
LOGD("env->DeleteLocalRef(%p):v2", v2);
env->DeleteLocalRef(v2);
}
v2 = (jstring) env->NewStringUTF("\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x2e\x6e\x75\x6c\x6c\x43\x68\x65\x63\x6b");
LOGD("8:invoke-virtual \x76\x30\x2c\x20\x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x50\x72\x69\x6e\x74\x53\x74\x72\x65\x61\x6d\x3b\x2d\x3e\x70\x72\x69\x6e\x74\x6c\x6e\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
jclass &clz = cls1;
jmethodID &mid = mth0;
D2C_RESOLVE_METHOD(clz, mid, "java/io/PrintStream", "println", "(Ljava/lang/String;)V");
jvalue args[] = {{.l = v2}};
env->CallVoidMethodA(v1, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v3 = 0;
v3 = 0;
v3 = 0;
v3 = 0;
L1:
LOGD("10:iget \x76\x31\x2c\x20\x76\x33\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x49\x6e\x74\x31\x20\x49");
{
#define EX_HANDLE EX_LandingPad_1
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld1;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mInt1", "I");
v4 = (jint) env->GetIntField(v0,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L2:
LOGD("14:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_LandingPad_1
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v3}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L3:
goto L5;
L4:
LOGD("1c:move-exception \x76\x31");
if (v2) {
LOGD("env->DeleteLocalRef(%p):v2", v2);
env->DeleteLocalRef(v2);
}
v2 = exception;
L5:
LOGD("1e:iget-wide \x76\x31\x2c\x20\x76\x33\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x4c\x6f\x6e\x67\x31\x20\x4a");
{
#define EX_HANDLE EX_LandingPad_5
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld2;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mLong1", "J");
v5 = (jlong) env->GetLongField(v0,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L6:
LOGD("22:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_LandingPad_5
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v3}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L7:
goto L9;
L8:
LOGD("2a:move-exception \x76\x31");
if (v2) {
LOGD("env->DeleteLocalRef(%p):v2", v2);
env->DeleteLocalRef(v2);
}
v2 = exception;
L9:
v4 = 5;
L10:
LOGD("2e:iput \x76\x31\x2c\x20\x76\x33\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x49\x6e\x74\x31\x20\x49");
{
#define EX_HANDLE EX_LandingPad_10
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld1;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mInt1", "I");
env->SetIntField(v0,fld,(jint) v4);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L11:
LOGD("32:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_LandingPad_10
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v3}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L12:
goto L14;
L13:
LOGD("3a:move-exception \x76\x31");
if (v2) {
LOGD("env->DeleteLocalRef(%p):v2", v2);
env->DeleteLocalRef(v2);
}
v2 = exception;
L14:
v5 = 17;
L15:
LOGD("40:iput-wide \x76\x31\x2c\x20\x76\x33\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x4c\x6f\x6e\x67\x31\x20\x4a");
{
#define EX_HANDLE EX_LandingPad_15
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld2;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mLong1", "J");
env->SetLongField(v0,fld,(jlong) v5);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L16:
LOGD("44:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_LandingPad_15
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v3}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L17:
goto L19;
L18:
LOGD("4c:move-exception \x76\x30");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = exception;
L19:
return;

EX_LandingPad_1:
D2C_GET_PENDING_EX
if(d2c_is_instance_of(env, exception, "java/lang/NullPointerException")) {
goto L4;
}
D2C_GOTO_UNWINDBLOCK

EX_LandingPad_5:
D2C_GET_PENDING_EX
if(d2c_is_instance_of(env, exception, "java/lang/NullPointerException")) {
goto L8;
}
D2C_GOTO_UNWINDBLOCK

EX_LandingPad_10:
D2C_GET_PENDING_EX
if(d2c_is_instance_of(env, exception, "java/lang/NullPointerException")) {
goto L13;
}
D2C_GOTO_UNWINDBLOCK

EX_LandingPad_15:
D2C_GET_PENDING_EX
if(d2c_is_instance_of(env, exception, "java/lang/NullPointerException")) {
goto L18;
}
D2C_GOTO_UNWINDBLOCK
EX_UnwindBlock: return;
}
