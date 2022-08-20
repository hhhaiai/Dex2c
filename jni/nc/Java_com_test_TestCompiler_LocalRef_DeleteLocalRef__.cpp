#include "Dex2C.h"

/* Lcom/test/TestCompiler/LocalRef;->DeleteLocalRef()V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_LocalRef_DeleteLocalRef__(JNIEnv *env, jobject thiz){
jobject v0 = NULL;
jobject v1 = NULL;
jint v2;
jint v3;
jint v4;
jobject v5 = NULL;
jobject v6 = NULL;
jint v7;
jobject v8 = NULL;
jthrowable exception;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL,cls3 = NULL,cls4 = NULL;
jfieldID fld0 = NULL;
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
LOGD("4:const-string \x76\x31\x2c\x20\x27\x4c\x6f\x63\x61\x6c\x52\x65\x66\x2e\x44\x65\x6c\x65\x74\x65\x4c\x6f\x63\x61\x6c\x52\x65\x66\x27");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jstring) env->NewStringUTF("\x4c\x6f\x63\x61\x6c\x52\x65\x66\x2e\x44\x65\x6c\x65\x74\x65\x4c\x6f\x63\x61\x6c\x52\x65\x66");
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
v2 = 0;
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = 0;
v3 = 0;
L1:
v4 = 1024;
v4 = 1024;
LOGD("18:if-ge \x76\x32\x2c\x20\x76\x33\x2c\x20\x2b\x31\x36");
if(v3 >= v4) {
goto L8;
}
else {
goto L2;
}
L2:
LOGD("1c:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4c\x6f\x63\x61\x6c\x52\x65\x66\x3b\x2d\x3e\x66\x6f\x6f\x28\x49\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/LocalRef", "foo", "(I)Ljava/lang/String;");
jvalue args[] = {{.i = v3}};
v5 = (jstring) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v5) {
LOGD("env->DeleteLocalRef(%p):v5", v5);
env->DeleteLocalRef(v5);
}
LOGD("22:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4c\x6f\x63\x61\x6c\x52\x65\x66\x3b\x2d\x3e\x66\x6f\x6f\x28\x49\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/LocalRef", "foo", "(I)Ljava/lang/String;");
jvalue args[] = {{.i = v3}};
v5 = (jstring) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("28:move-result-object \x76\x31");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jobject) v5;
if (v6) {
LOGD("env->DeleteLocalRef(%p):v6", v6);
env->DeleteLocalRef(v6);
}
v6 = 0;
if (v6) {
LOGD("env->DeleteLocalRef(%p):v6", v6);
env->DeleteLocalRef(v6);
}
v6 = 0;
L3:
LOGD("2c:check-cast \x76\x33\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_LandingPad_3
jclass &clz = cls3;
D2C_RESOLVE_CLASS(clz,"java/lang/String");
D2C_CHECK_CAST(v6, clz, "java/lang/String");
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L4:
LOGD("30:invoke-virtual \x76\x33\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x2d\x3e\x6c\x65\x6e\x67\x74\x68\x28\x29\x49");
{
#define EX_HANDLE EX_LandingPad_3
D2C_NOT_NULL(v6);
jclass &clz = cls3;
jmethodID &mid = mth2;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/String", "length", "()I");
jvalue args[] = {};
v7 = (jint) env->CallIntMethodA(v6, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L5:
goto L7;
L6:
LOGD("38:move-exception \x76\x33");
if (v6) {
LOGD("env->DeleteLocalRef(%p):v6", v6);
env->DeleteLocalRef(v6);
}
v6 = exception;
LOGD("3a:add-int/lit8 \x76\x30\x2c\x20\x76\x30\x2c\x20\x31");
v2 = (v2 + 1);
L7:
LOGD("3e:add-int/lit8 \x76\x32\x2c\x20\x76\x32\x2c\x20\x31");
v3 = (v3 + 1);
goto L1;
L8:
LOGD("44:if-ne \x76\x30\x2c\x20\x76\x33\x2c\x20\x2b\x34");
if(v2 != v4) {
goto L10;
}
else {
goto L9;
}
L9:
v3 = 1;
goto L11;
L10:
v3 = 0;
L11:
LOGD("4e:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls4;
jmethodID &mid = mth3;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v3}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("54:const-string \x76\x32\x2c\x20\x27\x31\x30\x32\x33\x27");
if (v8) {
LOGD("env->DeleteLocalRef(%p):v8", v8);
env->DeleteLocalRef(v8);
}
v8 = (jstring) env->NewStringUTF("\x31\x30\x32\x33");
LOGD("58:invoke-virtual \x76\x31\x2c\x20\x76\x32\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x2d\x3e\x65\x71\x75\x61\x6c\x73\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b\x29\x5a");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
jclass &clz = cls3;
jmethodID &mid = mth4;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/String", "equals", "(Ljava/lang/Object;)Z");
jvalue args[] = {{.l = v8}};
v7 = (jboolean) env->CallBooleanMethodA(v1, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("5e:move-result \x76\x32");
v3 = (jint) v7;
LOGD("60:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls4;
jmethodID &mid = mth3;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v3}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;

EX_LandingPad_3:
D2C_GET_PENDING_EX
if(d2c_is_instance_of(env, exception, "java/lang/NullPointerException")) {
goto L6;
}
D2C_GOTO_UNWINDBLOCK
EX_UnwindBlock: return;
}
