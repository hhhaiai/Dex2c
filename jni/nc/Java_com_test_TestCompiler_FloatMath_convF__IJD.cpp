#include "Dex2C.h"

/* Lcom/test/TestCompiler/FloatMath;->convF(IJD)[F */
extern "C" JNIEXPORT jarray JNICALL
Java_com_test_TestCompiler_FloatMath_convF__IJD(JNIEnv *env, jobject thiz, jint p3, jlong p4, jdouble p6){
jint v0;
jlong v1;
jdouble v2;
jint v3;
jobject v4 = NULL;
jfloat v5;
jint v6;
jclass cls0 = NULL;
v0 = (jint)p3;
v1 = (jlong)p4;
v2 = (jdouble)p6;
L0:
v3 = 3;
LOGD("2:new-array \x76\x30\x2c\x20\x76\x30\x2c\x20\x5b\x46");
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
v4 = (jarray) env->NewFloatArray((jint) v3);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = (jfloat)(v0);
v6 = 0;
LOGD("a:aput \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x32");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v4);
{jfloat val = v5;env->SetFloatArrayRegion((jfloatArray) v4, (jint) v6, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = (jfloat)(v1);
v6 = 1;
LOGD("12:aput \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x32");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v4);
{jfloat val = v5;env->SetFloatArrayRegion((jfloatArray) v4, (jint) v6, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = (jfloat)(v2);
v6 = 2;
LOGD("1a:aput \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x32");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v4);
{jfloat val = v5;env->SetFloatArrayRegion((jfloatArray) v4, (jint) v6, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return (jarray) v4;
EX_UnwindBlock: return (jarray)0;
}
