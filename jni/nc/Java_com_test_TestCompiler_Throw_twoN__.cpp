#include "Dex2C.h"

/* Lcom/test/TestCompiler/Throw;->twoN()V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_Throw_twoN__(JNIEnv *env, jobject thiz){
jobject v0 = NULL;
jobject v1 = NULL;
jobject v2 = NULL;
jint v3;
jint v4;
jint v5;
jobject v6 = NULL;
jint v7;
jint v8;
jthrowable exception;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL,cls3 = NULL;
jfieldID fld0 = NULL;
jmethodID mth0 = NULL, mth1 = NULL, mth2 = NULL;
v0 = (jobject)env->NewLocalRef(thiz);
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
LOGD("4:const-string \x76\x31\x2c\x20\x27\x54\x68\x72\x6f\x77\x2e\x74\x77\x6f\x4e\x27");
if (v2) {
LOGD("env->DeleteLocalRef(%p):v2", v2);
env->DeleteLocalRef(v2);
}
v2 = (jstring) env->NewStringUTF("\x54\x68\x72\x6f\x77\x2e\x74\x77\x6f\x4e");
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
v4 = 0;
v4 = 0;
v5 = 0;
v5 = 0;
L1:
LOGD("14:invoke-virtual \x76\x36\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x54\x68\x72\x6f\x77\x3b\x2d\x3e\x74\x68\x72\x6f\x77\x4e\x75\x6c\x6c\x50\x6f\x69\x6e\x74\x65\x72\x45\x78\x63\x65\x70\x74\x69\x6f\x6e\x28\x29\x56");
{
#define EX_HANDLE EX_LandingPad_1
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_METHOD(clz, mid, "com/test/TestCompiler/Throw", "throwNullPointerException", "()V");
jvalue args[] = {};
env->CallVoidMethodA(v0, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L2:
v5 = 1;
goto L5;
L3:
LOGD("1e:move-exception \x76\x33");
if (v6) {
LOGD("env->DeleteLocalRef(%p):v6", v6);
env->DeleteLocalRef(v6);
}
v6 = exception;
v3 = 1;
goto L6;
L4:
LOGD("24:move-exception \x76\x33");
if (v6) {
LOGD("env->DeleteLocalRef(%p):v6", v6);
env->DeleteLocalRef(v6);
}
v6 = exception;
v4 = 1;
L5:
L6:
v7 = 1;
LOGD("2e:if-nez \x76\x31\x2c\x20\x2b\x34");
if(v4 != 0){
goto L8;
}
else {
goto L7;
}
L7:
v8 = 1;
goto L9;
L8:
v8 = 0;
L9:
LOGD("38:invoke-static \x76\x35\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v8}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("3e:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v3}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("44:if-nez \x76\x32\x2c\x20\x2b\x33");
if(v5 != 0){
goto L11;
}
else {
goto L10;
}
L10:
goto L12;
L11:
v7 = 0;
L12:
LOGD("4c:invoke-static \x76\x33\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v7}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;

EX_LandingPad_1:
D2C_GET_PENDING_EX
if(d2c_is_instance_of(env, exception, "java/lang/ArithmeticException")) {
goto L4;
}
if(d2c_is_instance_of(env, exception, "java/lang/NullPointerException")) {
goto L3;
}
D2C_GOTO_UNWINDBLOCK
EX_UnwindBlock: return;
}
