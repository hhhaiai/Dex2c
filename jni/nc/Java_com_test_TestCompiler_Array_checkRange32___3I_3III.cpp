#include "Dex2C.h"

/* Lcom/test/TestCompiler/Array;->checkRange32([I[III)V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_Array_checkRange32___3I_3III(JNIEnv *env, jobject thiz, jarray p5, jarray p6, jint p7, jint p8){
jobject v0 = NULL;
jobject v1 = NULL;
jint v2;
jint v3;
jobject v4 = NULL;
jobject v5 = NULL;
jint v6;
jint v7;
jint v8;
jint v9;
jint v10;
jthrowable exception;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL;
jfieldID fld0 = NULL;
jmethodID mth0 = NULL, mth1 = NULL;
v0 = (jobject)env->NewLocalRef(p5);
v1 = (jobject)env->NewLocalRef(p6);
v2 = (jint)p7;
v3 = (jint)p8;
L0:
LOGD("0:sget-object \x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x79\x73\x74\x65\x6d\x3b\x2d\x3e\x6f\x75\x74\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x50\x72\x69\x6e\x74\x53\x74\x72\x65\x61\x6d\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v4) {
LOGD("env->DeleteLocalRef(%p):v4", v4);
env->DeleteLocalRef(v4);
}
jclass &clz = cls0;
jfieldID &fld = fld0;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "java/lang/System", "out", "Ljava/io/PrintStream;");
v4 = (jobject) env->GetStaticObjectField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("4:const-string \x76\x31\x2c\x20\x27\x41\x72\x72\x61\x79\x2e\x63\x68\x65\x63\x6b\x52\x61\x6e\x67\x65\x33\x32\x27");
if (v5) {
LOGD("env->DeleteLocalRef(%p):v5", v5);
env->DeleteLocalRef(v5);
}
v5 = (jstring) env->NewStringUTF("\x41\x72\x72\x61\x79\x2e\x63\x68\x65\x63\x6b\x52\x61\x6e\x67\x65\x33\x32");
LOGD("8:invoke-virtual \x76\x30\x2c\x20\x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x50\x72\x69\x6e\x74\x53\x74\x72\x65\x61\x6d\x3b\x2d\x3e\x70\x72\x69\x6e\x74\x6c\x6e\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v4);
jclass &clz = cls1;
jmethodID &mid = mth0;
D2C_RESOLVE_METHOD(clz, mid, "java/io/PrintStream", "println", "(Ljava/lang/String;)V");
jvalue args[] = {{.l = v5}};
env->CallVoidMethodA(v4, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = 0;
LOGD("10:array-length \x76\x31\x2c\x20\x76\x35");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
v7 = env->GetArrayLength((jarray) v0);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v8 = 1;
v9 = 5;
v9 = 5;
v9 = 5;
v10 = 0;
v10 = 0;
v10 = 0;
v10 = 0;
v10 = 0;
v10 = 0;
v10 = 0;
LOGD("18:if-ne \x76\x31\x2c\x20\x76\x33\x2c\x20\x2b\x34");
if(v7 != v9) {
goto L2;
}
else {
goto L1;
}
L1:
v7 = 1;
goto L3;
L2:
v7 = 0;
L3:
LOGD("22:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v7}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L4:
LOGD("28:aget \x76\x31\x2c\x20\x76\x35\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_LandingPad_4
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v9, 1, &val);v7 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L5:
v6 = v7;
L6:
LOGD("2e:invoke-static \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_LandingPad_4
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v10}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L7:
goto L9;
L8:
LOGD("36:move-exception \x76\x31");
if (v5) {
LOGD("env->DeleteLocalRef(%p):v5", v5);
env->DeleteLocalRef(v5);
}
v5 = exception;
L9:
LOGD("38:aput \x76\x30\x2c\x20\x76\x35\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_LandingPad_9
D2C_NOT_NULL(v0);
{jint val = v6;env->SetIntArrayRegion((jintArray) v0, (jint) v9, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L10:
LOGD("3c:invoke-static \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_LandingPad_9
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v10}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L11:
goto L13;
L12:
LOGD("44:move-exception \x76\x31");
if (v5) {
LOGD("env->DeleteLocalRef(%p):v5", v5);
env->DeleteLocalRef(v5);
}
v5 = exception;
L13:
v7 = 6;
L14:
LOGD("48:aget \x76\x31\x2c\x20\x76\x35\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_LandingPad_14
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v7, 1, &val);v7 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L15:
v6 = v7;
L16:
LOGD("4e:invoke-static \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_LandingPad_14
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v10}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L17:
goto L19;
L18:
LOGD("56:move-exception \x76\x31");
if (v5) {
LOGD("env->DeleteLocalRef(%p):v5", v5);
env->DeleteLocalRef(v5);
}
v5 = exception;
L19:
LOGD("58:aget \x76\x31\x2c\x20\x76\x35\x2c\x20\x76\x37");
{
#define EX_HANDLE EX_LandingPad_19
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v2, 1, &val);v7 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L20:
v6 = v7;
L21:
LOGD("5e:invoke-static \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_LandingPad_19
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v10}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L22:
goto L24;
L23:
LOGD("66:move-exception \x76\x31");
if (v5) {
LOGD("env->DeleteLocalRef(%p):v5", v5);
env->DeleteLocalRef(v5);
}
v5 = exception;
L24:
LOGD("68:aput \x76\x30\x2c\x20\x76\x35\x2c\x20\x76\x37");
{
#define EX_HANDLE EX_LandingPad_24
D2C_NOT_NULL(v0);
{jint val = v6;env->SetIntArrayRegion((jintArray) v0, (jint) v2, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L25:
LOGD("6c:invoke-static \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_LandingPad_24
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v10}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L26:
goto L28;
L27:
LOGD("74:move-exception \x76\x31");
if (v5) {
LOGD("env->DeleteLocalRef(%p):v5", v5);
env->DeleteLocalRef(v5);
}
v5 = exception;
L28:
LOGD("76:aget \x76\x31\x2c\x20\x76\x35\x2c\x20\x76\x38");
{
#define EX_HANDLE EX_LandingPad_28
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v3, 1, &val);v7 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L29:
v6 = v7;
L30:
LOGD("7c:invoke-static \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_LandingPad_28
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v10}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L31:
goto L33;
L32:
LOGD("84:move-exception \x76\x31");
if (v5) {
LOGD("env->DeleteLocalRef(%p):v5", v5);
env->DeleteLocalRef(v5);
}
v5 = exception;
L33:
LOGD("86:aget \x76\x31\x2c\x20\x76\x36\x2c\x20\x76\x32");
{
#define EX_HANDLE EX_LandingPad_33
D2C_NOT_NULL(v1);
{jint val;env->GetIntArrayRegion((jintArray) v1, (jint) v8, 1, &val);v7 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L34:
v6 = v7;
L35:
LOGD("8c:invoke-static \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_LandingPad_33
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v10}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L36:
goto L38;
L37:
LOGD("94:move-exception \x76\x31");
if (v5) {
LOGD("env->DeleteLocalRef(%p):v5", v5);
env->DeleteLocalRef(v5);
}
v5 = exception;
L38:
return;

EX_LandingPad_4:
D2C_GET_PENDING_EX
if(d2c_is_instance_of(env, exception, "java/lang/ArrayIndexOutOfBoundsException")) {
goto L8;
}
D2C_GOTO_UNWINDBLOCK

EX_LandingPad_9:
D2C_GET_PENDING_EX
if(d2c_is_instance_of(env, exception, "java/lang/ArrayIndexOutOfBoundsException")) {
goto L12;
}
D2C_GOTO_UNWINDBLOCK

EX_LandingPad_14:
D2C_GET_PENDING_EX
if(d2c_is_instance_of(env, exception, "java/lang/ArrayIndexOutOfBoundsException")) {
goto L18;
}
D2C_GOTO_UNWINDBLOCK

EX_LandingPad_19:
D2C_GET_PENDING_EX
if(d2c_is_instance_of(env, exception, "java/lang/ArrayIndexOutOfBoundsException")) {
goto L23;
}
D2C_GOTO_UNWINDBLOCK

EX_LandingPad_24:
D2C_GET_PENDING_EX
if(d2c_is_instance_of(env, exception, "java/lang/ArrayIndexOutOfBoundsException")) {
goto L27;
}
D2C_GOTO_UNWINDBLOCK

EX_LandingPad_28:
D2C_GET_PENDING_EX
if(d2c_is_instance_of(env, exception, "java/lang/ArrayIndexOutOfBoundsException")) {
goto L32;
}
D2C_GOTO_UNWINDBLOCK

EX_LandingPad_33:
D2C_GET_PENDING_EX
if(d2c_is_instance_of(env, exception, "java/lang/ArrayIndexOutOfBoundsException")) {
goto L37;
}
D2C_GOTO_UNWINDBLOCK
EX_UnwindBlock: return;
}
