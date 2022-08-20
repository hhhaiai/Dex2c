#include "Dex2C.h"

/* Lcom/test/TestCompiler/FloatMath;->run()V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_FloatMath_run__(JNIEnv *env, jobject thiz){
jfloat v0;
jfloat v1;
jobject v2 = NULL;
jobject v3 = NULL;
jdouble v4;
jdouble v5;
jobject v6 = NULL;
jlong v7;
jfloat v8;
jdouble v9;
jfloat v10;
jobject v11 = NULL;
jint v12;
jdouble v13;
jobject v14 = NULL;
jlong v15;
jint v16;
jfloat v17;
jclass cls0 = NULL;
jmethodID mth0 = NULL, mth1 = NULL, mth2 = NULL, mth3 = NULL, mth4 = NULL, mth5 = NULL, mth6 = NULL, mth7 = NULL, mth8 = NULL, mth9 = NULL, mth10 = NULL, mth11 = NULL, mth12 = NULL, mth13 = NULL, mth14 = NULL, mth15 = NULL;
L0:
LOGD("0:invoke-static \x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x63\x6f\x6e\x76\x54\x65\x73\x74\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/FloatMath", "convTest", "()V");
jvalue args[] = {};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v0 = d2c_bitcast_to_float(1200142336);
v1 = d2c_bitcast_to_float(-1069547520);
LOGD("10:invoke-static \x76\x30\x2c\x20\x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x66\x6c\x6f\x61\x74\x4f\x70\x65\x72\x54\x65\x73\x74\x28\x46\x20\x46\x29\x5b\x46");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/FloatMath", "floatOperTest", "(FF)[F");
jvalue args[] = {{.f = v0},{.f = v1}};
v2 = (jarray) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("16:move-result-object \x76\x30");
if (v3) {
LOGD("env->DeleteLocalRef(%p):v3", v3);
env->DeleteLocalRef(v3);
}
v3 = (jobject) v2;
LOGD("18:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x66\x6c\x6f\x61\x74\x4f\x70\x65\x72\x43\x68\x65\x63\x6b\x28\x5b\x46\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/FloatMath", "floatOperCheck", "([F)V");
jvalue args[] = {{.l = v3}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v4 = d2c_bitcast_to_double(4679546776582094848);
v5 = d2c_bitcast_to_double(-4609434218613702656);
LOGD("2c:invoke-static \x76\x31\x2c\x20\x76\x32\x2c\x20\x76\x33\x2c\x20\x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x64\x6f\x75\x62\x6c\x65\x4f\x70\x65\x72\x54\x65\x73\x74\x28\x44\x20\x44\x29\x5b\x44");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth3;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/FloatMath", "doubleOperTest", "(DD)[D");
jvalue args[] = {{.d = v4},{.d = v5}};
v2 = (jarray) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("32:move-result-object \x76\x31");
if (v6) {
LOGD("env->DeleteLocalRef(%p):v6", v6);
env->DeleteLocalRef(v6);
}
v6 = (jobject) v2;
LOGD("34:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x64\x6f\x75\x62\x6c\x65\x4f\x70\x65\x72\x43\x68\x65\x63\x6b\x28\x5b\x44\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth4;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/FloatMath", "doubleOperCheck", "([D)V");
jvalue args[] = {{.l = v6}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v7 = -8613303245920329199;
v8 = d2c_bitcast_to_float(1123477881);
v8 = d2c_bitcast_to_float(1123477881);
v9 = d2c_bitcast_to_double(-4609115380302932156);
v9 = d2c_bitcast_to_double(-4609115380302932156);
v10 = d2c_bitcast_to_float(0);
LOGD("56:invoke-static/range \x76\x32\x20\x2e\x2e\x2e\x20\x76\x37\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x63\x6f\x6e\x76\x49\x28\x4a\x20\x46\x20\x44\x20\x46\x29\x5b\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth5;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/FloatMath", "convI", "(JFDF)[I");
jvalue args[] = {{.j = (jlong) v7},{.f = v8},{.d = v9},{.f = v10}};
v2 = (jarray) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("5c:move-result-object \x76\x32");
if (v11) {
LOGD("env->DeleteLocalRef(%p):v11", v11);
env->DeleteLocalRef(v11);
}
v11 = (jobject) v2;
LOGD("5e:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x63\x68\x65\x63\x6b\x43\x6f\x6e\x76\x49\x28\x5b\x49\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth6;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/FloatMath", "checkConvI", "([I)V");
jvalue args[] = {{.l = v11}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v12 = -2005440939;
v13 = d2c_bitcast_to_double(0);
LOGD("6e:invoke-static/range \x76\x33\x20\x2e\x2e\x2e\x20\x76\x38\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x63\x6f\x6e\x76\x4c\x28\x49\x20\x46\x20\x44\x20\x44\x29\x5b\x4a");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth7;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/FloatMath", "convL", "(IFDD)[J");
jvalue args[] = {{.i = v12},{.f = v8},{.d = v9},{.d = v13}};
v2 = (jarray) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("74:move-result-object \x76\x33");
if (v14) {
LOGD("env->DeleteLocalRef(%p):v14", v14);
env->DeleteLocalRef(v14);
}
v14 = (jobject) v2;
LOGD("76:invoke-static \x76\x33\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x63\x68\x65\x63\x6b\x43\x6f\x6e\x76\x4c\x28\x5b\x4a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth8;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/FloatMath", "checkConvL", "([J)V");
jvalue args[] = {{.l = v14}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v15 = -8613303245920329199;
v15 = -8613303245920329199;
v16 = -2005440939;
v16 = -2005440939;
v13 = d2c_bitcast_to_double(-4609115380302932156);
LOGD("96:invoke-static \x76\x36\x2c\x20\x76\x34\x2c\x20\x76\x35\x2c\x20\x76\x37\x2c\x20\x76\x38\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x63\x6f\x6e\x76\x46\x28\x49\x20\x4a\x20\x44\x29\x5b\x46");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth9;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/FloatMath", "convF", "(IJD)[F");
jvalue args[] = {{.i = v16},{.j = (jlong) v15},{.d = v13}};
v2 = (jarray) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("9c:move-result-object \x76\x30");
if (v3) {
LOGD("env->DeleteLocalRef(%p):v3", v3);
env->DeleteLocalRef(v3);
}
v3 = (jobject) v2;
LOGD("9e:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x63\x68\x65\x63\x6b\x43\x6f\x6e\x76\x46\x28\x5b\x46\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth10;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/FloatMath", "checkConvF", "([F)V");
jvalue args[] = {{.l = v3}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v10 = d2c_bitcast_to_float(1123477881);
v10 = d2c_bitcast_to_float(1123477881);
LOGD("aa:invoke-static \x76\x36\x2c\x20\x76\x34\x2c\x20\x76\x35\x2c\x20\x76\x37\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x63\x6f\x6e\x76\x44\x28\x49\x20\x4a\x20\x46\x29\x5b\x44");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth11;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/FloatMath", "convD", "(IJF)[D");
jvalue args[] = {{.i = v16},{.j = (jlong) v15},{.f = v10}};
v2 = (jarray) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("b0:move-result-object \x76\x31");
if (v6) {
LOGD("env->DeleteLocalRef(%p):v6", v6);
env->DeleteLocalRef(v6);
}
v6 = (jobject) v2;
LOGD("b2:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x63\x68\x65\x63\x6b\x43\x6f\x6e\x76\x44\x28\x5b\x44\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth12;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/FloatMath", "checkConvD", "([D)V");
jvalue args[] = {{.l = v6}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("b8:invoke-static \x76\x37\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x75\x6e\x6f\x70\x54\x65\x73\x74\x28\x46\x29\x46");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth13;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/FloatMath", "unopTest", "(F)F");
jvalue args[] = {{.f = v10}};
v17 = (jfloat) env->CallStaticFloatMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("be:invoke-static \x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x63\x68\x65\x63\x6b\x43\x6f\x6e\x73\x74\x73\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth14;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/FloatMath", "checkConsts", "()V");
jvalue args[] = {};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v8 = d2c_bitcast_to_float(1078530000);
v9 = d2c_bitcast_to_double(4683220299210397199);
LOGD("d4:invoke-static \x76\x34\x2c\x20\x76\x35\x2c\x20\x76\x36\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x6a\x6c\x6d\x54\x65\x73\x74\x73\x28\x46\x20\x44\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth15;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/FloatMath", "jlmTests", "(FD)V");
jvalue args[] = {{.f = v8},{.d = v9}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;
EX_UnwindBlock: return;
}
