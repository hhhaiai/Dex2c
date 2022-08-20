#include "Dex2C.h"

/* Lcom/test/TestCompiler/Compare;->run()V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_Compare_run__(JNIEnv *env, jobject thiz){
jint v0;
jint v1;
jint v2;
jlong v3;
jlong v4;
jlong v5;
jlong v6;
jfloat v7;
jfloat v8;
jfloat v9;
jdouble v10;
jdouble v11;
jdouble v12;
jdouble v13;
jclass cls0 = NULL;
jmethodID mth0 = NULL, mth1 = NULL, mth2 = NULL, mth3 = NULL;
L0:
v0 = 4;
v1 = -5;
v2 = 0;
LOGD("6:invoke-static \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x30\x2c\x20\x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x43\x6f\x6d\x70\x61\x72\x65\x3b\x2d\x3e\x74\x65\x73\x74\x49\x6e\x74\x43\x6f\x6d\x70\x61\x72\x65\x28\x49\x20\x49\x20\x49\x20\x49\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Compare", "testIntCompare", "(IIII)V");
jvalue args[] = {{.i = v1},{.i = v0},{.i = v0},{.i = v2}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v3 = -5;
v4 = -4294967287;
v5 = 4;
v6 = 8;
LOGD("22:invoke-static/range \x76\x33\x20\x2e\x2e\x2e\x20\x76\x31\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x43\x6f\x6d\x70\x61\x72\x65\x3b\x2d\x3e\x74\x65\x73\x74\x4c\x6f\x6e\x67\x43\x6f\x6d\x70\x61\x72\x65\x28\x4a\x20\x4a\x20\x4a\x20\x4a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Compare", "testLongCompare", "(JJJJ)V");
jvalue args[] = {{.j = (jlong) v3},{.j = (jlong) v4},{.j = (jlong) v5},{.j = (jlong) v6}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v7 = d2c_bitcast_to_float(1082130432);
v8 = d2c_bitcast_to_float(-1063256064);
v9 = d2c_bitcast_to_float(2143289344);
LOGD("34:invoke-static \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x30\x2c\x20\x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x43\x6f\x6d\x70\x61\x72\x65\x3b\x2d\x3e\x74\x65\x73\x74\x46\x6c\x6f\x61\x74\x43\x6f\x6d\x70\x61\x72\x65\x28\x46\x20\x46\x20\x46\x20\x46\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Compare", "testFloatCompare", "(FFFF)V");
jvalue args[] = {{.f = v8},{.f = v7},{.f = v7},{.f = v9}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v10 = d2c_bitcast_to_double(-4606056518893174784);
v11 = d2c_bitcast_to_double(4616189618054758400);
v12 = d2c_bitcast_to_double(4616189618054758400);
v13 = d2c_bitcast_to_double(9221120237041090560);
LOGD("4a:invoke-static/range \x76\x33\x20\x2e\x2e\x2e\x20\x76\x31\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x43\x6f\x6d\x70\x61\x72\x65\x3b\x2d\x3e\x74\x65\x73\x74\x44\x6f\x75\x62\x6c\x65\x43\x6f\x6d\x70\x61\x72\x65\x28\x44\x20\x44\x20\x44\x20\x44\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth3;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Compare", "testDoubleCompare", "(DDDD)V");
jvalue args[] = {{.d = v10},{.d = v11},{.d = v12},{.d = v13}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;
EX_UnwindBlock: return;
}
