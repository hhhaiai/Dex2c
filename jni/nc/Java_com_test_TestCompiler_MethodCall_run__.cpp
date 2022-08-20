#include "Dex2C.h"

/* Lcom/test/TestCompiler/MethodCall;->run()V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_MethodCall_run__(JNIEnv *env, jobject thiz){
jobject v0 = NULL;
jobject v1 = NULL;
jint v2;
jobject v3 = NULL;
jint v4;
jint v5;
jlong v6;
jint v7;
jlong v8;
jint v9;
jlong v10;
jint v11;
jint v12;
jdouble v13;
jfloat v14;
jdouble v15;
jint v16;
jint v17;
jint v18;
jint v19;
jint v20;
jint v21;
jint v22;
jint v23;
jint v24;
jlong v25;
jlong v26;
jint v27;
jint v28;
jint v29;
jint v30;
jint v31;
jobject v32 = NULL;
jobject v33 = NULL;
jobject v34 = NULL;
jthrowable exception;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL,cls3 = NULL;
jmethodID mth0 = NULL, mth1 = NULL, mth2 = NULL, mth3 = NULL, mth4 = NULL, mth5 = NULL, mth6 = NULL;
L0:
LOGD("0:new-instance \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x65\x74\x68\x6f\x64\x43\x61\x6c\x6c\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
jclass &clz = cls0;
D2C_RESOLVE_CLASS(clz,"com/test/TestCompiler/MethodCall");
v0 = (jobject) env->AllocObject(clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("4:invoke-direct \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x65\x74\x68\x6f\x64\x43\x61\x6c\x6c\x3b\x2d\x3e\x3c\x69\x6e\x69\x74\x3e\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_METHOD(clz, mid, "com/test/TestCompiler/MethodCall", "<init>", "()V");
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
LOGD("c:invoke-virtual \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x65\x74\x68\x6f\x64\x43\x61\x6c\x6c\x42\x61\x73\x65\x3b\x2d\x3e\x74\x72\x79\x54\x68\x69\x6e\x67\x28\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
jclass &clz = cls1;
jmethodID &mid = mth1;
D2C_RESOLVE_METHOD(clz, mid, "com/test/TestCompiler/MethodCallBase", "tryThing", "()I");
jvalue args[] = {};
v2 = (jint) env->CallIntMethodA(v1, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("12:invoke-virtual \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x65\x74\x68\x6f\x64\x43\x61\x6c\x6c\x3b\x2d\x3e\x74\x72\x79\x54\x68\x69\x6e\x67\x28\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls0;
jmethodID &mid = mth2;
D2C_RESOLVE_METHOD(clz, mid, "com/test/TestCompiler/MethodCall", "tryThing", "()I");
jvalue args[] = {};
v2 = (jint) env->CallIntMethodA(v0, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("18:invoke-virtual \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x65\x74\x68\x6f\x64\x43\x61\x6c\x6c\x3b\x2d\x3e\x74\x65\x73\x74\x49\x6e\x74\x65\x72\x66\x61\x63\x65\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls0;
jmethodID &mid = mth3;
D2C_RESOLVE_METHOD(clz, mid, "com/test/TestCompiler/MethodCall", "testInterface", "()V");
jvalue args[] = {};
env->CallVoidMethodA(v0, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v3) {
LOGD("env->DeleteLocalRef(%p):v3", v3);
env->DeleteLocalRef(v3);
}
v3 = 0;
L1:
LOGD("20:invoke-direct \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x65\x74\x68\x6f\x64\x43\x61\x6c\x6c\x3b\x2d\x3e\x64\x69\x72\x65\x63\x74\x6c\x79\x28\x29\x56");
{
#define EX_HANDLE EX_LandingPad_1
D2C_NOT_NULL(v3);
jclass &clz = cls0;
jmethodID &mid = mth4;
D2C_RESOLVE_METHOD(clz, mid, "com/test/TestCompiler/MethodCall", "directly", "()V");
jvalue args[] = {};
env->CallVoidMethodA(v3, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L2:
v4 = 0;
L3:
LOGD("28:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_LandingPad_1
jclass &clz = cls2;
jmethodID &mid = mth5;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v4}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L4:
goto L6;
L5:
LOGD("30:move-exception \x76\x30");
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = exception;
L6:
v5 = 0;
v6 = 1;
v7 = 2;
v8 = 3;
v9 = 4;
v10 = 5;
v11 = 6;
v12 = 7;
v13 = d2c_bitcast_to_double(4620693217682128896);
v14 = d2c_bitcast_to_float(1091567616);
v15 = d2c_bitcast_to_double(4621819117588971520);
v16 = 11;
v17 = 12;
v18 = 13;
v19 = 14;
v20 = 15;
v21 = -16;
v22 = 1;
v23 = 18;
v24 = 19;
v25 = 20;
v26 = 21;
v27 = 22;
v28 = 23;
v29 = 24;
v30 = 25;
v31 = 26;
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = 0;
if (v32) {
LOGD("env->DeleteLocalRef(%p):v32", v32);
env->DeleteLocalRef(v32);
}
v32 = (jobject) env->NewLocalRef(v0);
LOGD("9a:check-cast \x76\x33\x37\x2c\x20\x5b\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
D2C_RESOLVE_CLASS(clz,"[[Ljava/lang/String;");
D2C_CHECK_CAST(v32, clz, "[[Ljava/lang/String;");
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v33) {
LOGD("env->DeleteLocalRef(%p):v33", v33);
env->DeleteLocalRef(v33);
}
v33 = 0;
LOGD("a2:const-string \x76\x33\x39\x2c\x20\x27\x74\x77\x65\x6e\x74\x79\x20\x6e\x69\x6e\x65\x27");
if (v34) {
LOGD("env->DeleteLocalRef(%p):v34", v34);
env->DeleteLocalRef(v34);
}
v34 = (jstring) env->NewStringUTF("\x74\x77\x65\x6e\x74\x79\x20\x6e\x69\x6e\x65");
LOGD("a6:invoke-static/range \x76\x33\x20\x2e\x2e\x2e\x20\x76\x33\x39\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x65\x74\x68\x6f\x64\x43\x61\x6c\x6c\x3b\x2d\x3e\x6d\x61\x6e\x79\x41\x72\x67\x73\x28\x49\x20\x4a\x20\x49\x20\x4a\x20\x49\x20\x4a\x20\x49\x20\x49\x20\x44\x20\x46\x20\x44\x20\x53\x20\x49\x20\x43\x20\x49\x20\x49\x20\x42\x20\x5a\x20\x49\x20\x49\x20\x4a\x20\x4a\x20\x49\x20\x49\x20\x49\x20\x49\x20\x49\x20\x5b\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x20\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth6;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/MethodCall", "manyArgs", "(IJIJIJIIDFDSICIIBZIIJJIIIII[[Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V");
jvalue args[] = {{.i = v5},{.j = (jlong) v6},{.i = v7},{.j = (jlong) v8},{.i = v9},{.j = (jlong) v10},{.i = v11},{.i = v12},{.d = v13},{.f = v14},{.d = v15},{.s = (jshort) v16},{.i = v17},{.c = (jchar) v18},{.i = v19},{.i = v20},{.b = (jbyte) v21},{.z = (jboolean) v22},{.i = v23},{.i = v24},{.j = (jlong) v25},{.j = (jlong) v26},{.i = v27},{.i = v28},{.i = v29},{.i = v30},{.i = v31},{.l = v32},{.l = v33},{.l = v34}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;

EX_LandingPad_1:
D2C_GET_PENDING_EX
if(d2c_is_instance_of(env, exception, "java/lang/NullPointerException")) {
goto L5;
}
D2C_GOTO_UNWINDBLOCK
EX_UnwindBlock: return;
}
