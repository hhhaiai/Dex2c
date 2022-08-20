#include "Dex2C.h"

/* Lcom/test/TestCompiler/FloatMath;->convD(IJF)[D */
extern "C" JNIEXPORT jarray JNICALL
Java_com_test_TestCompiler_FloatMath_convD__IJF(JNIEnv *env, jobject thiz, jint p4, jlong p5, jfloat p7){
jint v0;
jlong v1;
jfloat v2;
jint v3;
jobject v4 = NULL;
jdouble v5;
jint v6;
jclass cls0 = NULL;
v0 = (jint)p4;
v1 = (jlong)p5;
v2 = (jfloat)p7;
L0:
v3 = 3;
LOGD("2:new-array \x76\x30\x2c\x20\x76\x30\x2c\x20\x5b\x44");
{
#define EX_HANDLE EX_UnwindBlock
if (v3 < 0) {
d2c_throw_exception(env, "java/lang/NegativeArraySizeException", "negative array size");
goto EX_HANDLE;
}
if (v4) {
LOGD("env->DeleteLocalRef(%p):v4", v4);
env->DeleteLocalRef(v4);
}
v4 = (jarray) env->NewDoubleArray((jint) v3);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = (jdouble)(v0);
v6 = 0;
LOGD("a:aput-wide \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v4);
{jdouble val = v5;env->SetDoubleArrayRegion((jdoubleArray) v4, (jint) v6, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = (jdouble)(v1);
v6 = 1;
LOGD("12:aput-wide \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v4);
{jdouble val = v5;env->SetDoubleArrayRegion((jdoubleArray) v4, (jint) v6, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = (jdouble)(v2);
v6 = 2;
LOGD("1a:aput-wide \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v4);
{jdouble val = v5;env->SetDoubleArrayRegion((jdoubleArray) v4, (jint) v6, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return (jarray) v4;
EX_UnwindBlock: return (jarray)0;
}
