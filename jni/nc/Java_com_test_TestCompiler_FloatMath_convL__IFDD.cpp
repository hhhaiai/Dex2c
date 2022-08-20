#include "Dex2C.h"

/* Lcom/test/TestCompiler/FloatMath;->convL(IFDD)[J */
extern "C" JNIEXPORT jarray JNICALL
Java_com_test_TestCompiler_FloatMath_convL__IFDD(JNIEnv *env, jobject thiz, jint p6, jfloat p7, jdouble p8, jdouble p10){
jint v0;
jfloat v1;
jdouble v2;
jdouble v3;
jint v4;
jobject v5 = NULL;
jlong v6;
jint v7;
jdouble v8;
jdouble v9;
jlong v10;
jint v11;
jclass cls0 = NULL;
v0 = (jint)p6;
v1 = (jfloat)p7;
v2 = (jdouble)p8;
v3 = (jdouble)p10;
L0:
v4 = 6;
LOGD("2:new-array \x76\x30\x2c\x20\x76\x30\x2c\x20\x5b\x4a");
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
v5 = (jarray) env->NewLongArray((jint) v4);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = (jlong)(v0);
v7 = 0;
LOGD("a:aput-wide \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v5);
{jlong val = v6;env->SetLongArrayRegion((jlongArray) v5, (jint) v7, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = d2c_float_to_long(v1);
v7 = 1;
LOGD("12:aput-wide \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v5);
{jlong val = v6;env->SetLongArrayRegion((jlongArray) v5, (jint) v7, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = d2c_double_to_long(v2);
v7 = 2;
LOGD("1a:aput-wide \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v5);
{jlong val = v6;env->SetLongArrayRegion((jlongArray) v5, (jint) v7, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v8 = d2c_bitcast_to_double(4607182418800017408);
v8 = d2c_bitcast_to_double(4607182418800017408);
v8 = d2c_bitcast_to_double(4607182418800017408);
LOGD("22:div-double \x76\x33\x2c\x20\x76\x31\x2c\x20\x76\x31\x30");
{
v9 = v8 / v3;
}
v10 = d2c_double_to_long(v9);
v11 = 3;
LOGD("2a:aput-wide \x76\x33\x2c\x20\x76\x30\x2c\x20\x76\x35");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v5);
{jlong val = v10;env->SetLongArrayRegion((jlongArray) v5, (jint) v11, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v9 = d2c_bitcast_to_double(-4616189618054758400);
LOGD("32:div-double/2addr \x76\x33\x2c\x20\x76\x31\x30");
{
v9 = v9 / v3;
}
v10 = d2c_double_to_long(v9);
v11 = 4;
LOGD("38:aput-wide \x76\x33\x2c\x20\x76\x30\x2c\x20\x76\x35");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v5);
{jlong val = v10;env->SetLongArrayRegion((jlongArray) v5, (jint) v11, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("3c:div-double \x76\x33\x2c\x20\x76\x31\x2c\x20\x76\x31\x30");
{
v9 = v8 / v3;
}
LOGD("40:div-double/2addr \x76\x31\x2c\x20\x76\x31\x30");
{
v8 = v8 / v3;
}
LOGD("42:div-double/2addr \x76\x33\x2c\x20\x76\x31");
{
v9 = v9 / v8;
}
v6 = d2c_double_to_long(v9);
v7 = 5;
LOGD("48:aput-wide \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v5);
{jlong val = v6;env->SetLongArrayRegion((jlongArray) v5, (jint) v7, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return (jarray) v5;
EX_UnwindBlock: return (jarray)0;
}
