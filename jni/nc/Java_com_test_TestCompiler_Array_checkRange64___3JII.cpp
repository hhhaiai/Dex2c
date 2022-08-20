#include "Dex2C.h"

/* Lcom/test/TestCompiler/Array;->checkRange64([JII)V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_Array_checkRange64___3JII(JNIEnv *env, jobject thiz, jarray p7, jint p8, jint p9){
jobject v0 = NULL;
jint v1;
jint v2;
jobject v3 = NULL;
jobject v4 = NULL;
jlong v5;
jint v6;
jint v7;
jint v8;
jlong v9;
jobject v10 = NULL;
jlong v11;
jthrowable exception;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL;
jfieldID fld0 = NULL;
jmethodID mth0 = NULL, mth1 = NULL;
v0 = (jobject)env->NewLocalRef(p7);
v1 = (jint)p8;
v2 = (jint)p9;
L0:
LOGD("0:sget-object \x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x79\x73\x74\x65\x6d\x3b\x2d\x3e\x6f\x75\x74\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x50\x72\x69\x6e\x74\x53\x74\x72\x65\x61\x6d\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v3) {
LOGD("env->DeleteLocalRef(%p):v3", v3);
env->DeleteLocalRef(v3);
}
jclass &clz = cls0;
jfieldID &fld = fld0;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "java/lang/System", "out", "Ljava/io/PrintStream;");
v3 = (jobject) env->GetStaticObjectField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("4:const-string \x76\x31\x2c\x20\x27\x41\x72\x72\x61\x79\x2e\x63\x68\x65\x63\x6b\x52\x61\x6e\x67\x65\x36\x34\x27");
if (v4) {
LOGD("env->DeleteLocalRef(%p):v4", v4);
env->DeleteLocalRef(v4);
}
v4 = (jstring) env->NewStringUTF("\x41\x72\x72\x61\x79\x2e\x63\x68\x65\x63\x6b\x52\x61\x6e\x67\x65\x36\x34");
LOGD("8:invoke-virtual \x76\x30\x2c\x20\x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x50\x72\x69\x6e\x74\x53\x74\x72\x65\x61\x6d\x3b\x2d\x3e\x70\x72\x69\x6e\x74\x6c\x6e\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v3);
jclass &clz = cls1;
jmethodID &mid = mth0;
D2C_RESOLVE_METHOD(clz, mid, "java/io/PrintStream", "println", "(Ljava/lang/String;)V");
jvalue args[] = {{.l = v4}};
env->CallVoidMethodA(v3, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = 0;
LOGD("12:array-length \x76\x32\x2c\x20\x76\x37");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
v6 = env->GetArrayLength((jarray) v0);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v7 = 5;
v7 = 5;
v7 = 5;
v8 = 0;
v8 = 0;
v8 = 0;
v8 = 0;
v8 = 0;
v8 = 0;
LOGD("18:if-ne \x76\x32\x2c\x20\x76\x33\x2c\x20\x2b\x34");
if(v6 != v7) {
goto L2;
}
else {
goto L1;
}
L1:
v6 = 1;
goto L3;
L2:
v6 = 0;
L3:
LOGD("22:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v6}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L4:
LOGD("28:aget-wide \x76\x35\x2c\x20\x76\x37\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_LandingPad_4
D2C_NOT_NULL(v0);
{jlong val;env->GetLongArrayRegion((jlongArray) v0, (jint) v7, 1, &val);v9 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L5:
v5 = v9;
L6:
LOGD("2e:invoke-static \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_LandingPad_4
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v8}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L7:
goto L9;
L8:
LOGD("36:move-exception \x76\x32");
if (v10) {
LOGD("env->DeleteLocalRef(%p):v10", v10);
env->DeleteLocalRef(v10);
}
v10 = exception;
L9:
LOGD("38:aput-wide \x76\x30\x2c\x20\x76\x37\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_LandingPad_9
D2C_NOT_NULL(v0);
{jlong val = v5;env->SetLongArrayRegion((jlongArray) v0, (jint) v7, 1, &val);}
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
jvalue args[] = {{.z = (jboolean) v8}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L11:
goto L13;
L12:
LOGD("44:move-exception \x76\x32");
if (v10) {
LOGD("env->DeleteLocalRef(%p):v10", v10);
env->DeleteLocalRef(v10);
}
v10 = exception;
L13:
v6 = 6;
L14:
LOGD("48:aget-wide \x76\x32\x2c\x20\x76\x37\x2c\x20\x76\x32");
{
#define EX_HANDLE EX_LandingPad_14
D2C_NOT_NULL(v0);
{jlong val;env->GetLongArrayRegion((jlongArray) v0, (jint) v6, 1, &val);v11 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L15:
v5 = v11;
L16:
LOGD("4e:invoke-static \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_LandingPad_14
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v8}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L17:
goto L19;
L18:
LOGD("56:move-exception \x76\x32");
if (v10) {
LOGD("env->DeleteLocalRef(%p):v10", v10);
env->DeleteLocalRef(v10);
}
v10 = exception;
L19:
LOGD("58:aget-wide \x76\x32\x2c\x20\x76\x37\x2c\x20\x76\x38");
{
#define EX_HANDLE EX_LandingPad_19
D2C_NOT_NULL(v0);
{jlong val;env->GetLongArrayRegion((jlongArray) v0, (jint) v1, 1, &val);v11 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L20:
v5 = v11;
L21:
LOGD("5e:invoke-static \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_LandingPad_19
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v8}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L22:
goto L24;
L23:
LOGD("66:move-exception \x76\x32");
if (v10) {
LOGD("env->DeleteLocalRef(%p):v10", v10);
env->DeleteLocalRef(v10);
}
v10 = exception;
L24:
LOGD("68:aput-wide \x76\x30\x2c\x20\x76\x37\x2c\x20\x76\x38");
{
#define EX_HANDLE EX_LandingPad_24
D2C_NOT_NULL(v0);
{jlong val = v5;env->SetLongArrayRegion((jlongArray) v0, (jint) v1, 1, &val);}
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
jvalue args[] = {{.z = (jboolean) v8}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L26:
goto L28;
L27:
LOGD("74:move-exception \x76\x32");
if (v10) {
LOGD("env->DeleteLocalRef(%p):v10", v10);
env->DeleteLocalRef(v10);
}
v10 = exception;
L28:
LOGD("76:aget-wide \x76\x32\x2c\x20\x76\x37\x2c\x20\x76\x39");
{
#define EX_HANDLE EX_LandingPad_28
D2C_NOT_NULL(v0);
{jlong val;env->GetLongArrayRegion((jlongArray) v0, (jint) v2, 1, &val);v11 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L29:
v5 = v11;
L30:
LOGD("7c:invoke-static \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_LandingPad_28
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v8}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L31:
goto L33;
L32:
LOGD("84:move-exception \x76\x32");
if (v10) {
LOGD("env->DeleteLocalRef(%p):v10", v10);
env->DeleteLocalRef(v10);
}
v10 = exception;
L33:
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
EX_UnwindBlock: return;
}
