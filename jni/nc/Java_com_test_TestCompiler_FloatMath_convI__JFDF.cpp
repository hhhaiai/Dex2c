#include "Dex2C.h"

/* Lcom/test/TestCompiler/FloatMath;->convI(JFDF)[I */
extern "C" JNIEXPORT jarray JNICALL
Java_com_test_TestCompiler_FloatMath_convI__JFDF(JNIEnv *env, jobject thiz, jlong p4, jfloat p6, jdouble p7, jfloat p9){
jlong v0;
jfloat v1;
jdouble v2;
jfloat v3;
jint v4;
jobject v5 = NULL;
jint v6;
jint v7;
jfloat v8;
jfloat v9;
jint v10;
jclass cls0 = NULL;
v0 = (jlong)p4;
v1 = (jfloat)p6;
v2 = (jdouble)p7;
v3 = (jfloat)p9;
L0:
v4 = 6;
LOGD("2:new-array \x76\x30\x2c\x20\x76\x30\x2c\x20\x5b\x49");
{
#define EX_HANDLE EX_UnwindBlock
if (v4 < 0) {
d2c_throw_exception(env, "java/lang/NegativeArraySizeException", "negative array size");
goto EX_HANDLE;
}
if (v5) {
LOGD("env->DeleteLocalRef(%p):v5", v5);
env->DeleteLocalRef(v5);
}
v5 = (jarray) env->NewIntArray((jint) v4);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = (jint)(v0);
v7 = 0;
LOGD("a:aput \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x32");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v5);
{jint val = v6;env->SetIntArrayRegion((jintArray) v5, (jint) v7, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = d2c_float_to_int(v1);
v7 = 1;
LOGD("12:aput \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x32");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v5);
{jint val = v6;env->SetIntArrayRegion((jintArray) v5, (jint) v7, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = d2c_double_to_int(v2);
v7 = 2;
LOGD("1a:aput \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x32");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v5);
{jint val = v6;env->SetIntArrayRegion((jintArray) v5, (jint) v7, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v8 = d2c_bitcast_to_float(1065353216);
v8 = d2c_bitcast_to_float(1065353216);
v8 = d2c_bitcast_to_float(1065353216);
LOGD("22:div-float \x76\x32\x2c\x20\x76\x31\x2c\x20\x76\x39");
{
v9 = v8 / v3;
}
v7 = d2c_float_to_int(v9);
v10 = 3;
LOGD("2a:aput \x76\x32\x2c\x20\x76\x30\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v5);
{jint val = v7;env->SetIntArrayRegion((jintArray) v5, (jint) v10, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v9 = d2c_bitcast_to_float(-1082130432);
LOGD("32:div-float/2addr \x76\x32\x2c\x20\x76\x39");
{
v9 = v9 / v3;
}
v7 = d2c_float_to_int(v9);
v10 = 4;
LOGD("38:aput \x76\x32\x2c\x20\x76\x30\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v5);
{jint val = v7;env->SetIntArrayRegion((jintArray) v5, (jint) v10, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("3c:div-float \x76\x32\x2c\x20\x76\x31\x2c\x20\x76\x39");
{
v9 = v8 / v3;
}
LOGD("40:div-float/2addr \x76\x31\x2c\x20\x76\x39");
{
v8 = v8 / v3;
}
LOGD("42:div-float/2addr \x76\x32\x2c\x20\x76\x31");
{
v9 = v9 / v8;
}
v6 = d2c_float_to_int(v9);
v7 = 5;
LOGD("48:aput \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x32");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v5);
{jint val = v6;env->SetIntArrayRegion((jintArray) v5, (jint) v7, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return (jarray) v5;
EX_UnwindBlock: return (jarray)0;
}
