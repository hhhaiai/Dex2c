#include "Dex2C.h"

/* Lcom/test/TestCompiler/FloatMath;->floatOperTest(FF)[F */
extern "C" JNIEXPORT jarray JNICALL
Java_com_test_TestCompiler_FloatMath_floatOperTest__FF(JNIEnv *env, jobject thiz, jfloat p3, jfloat p4){
jfloat v0;
jfloat v1;
jobject v2 = NULL;
jobject v3 = NULL;
jint v4;
jfloat v5;
jint v6;
jfloat v7;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL;
jfieldID fld0 = NULL;
jmethodID mth0 = NULL;
v0 = (jfloat)p3;
v1 = (jfloat)p4;
L0:
LOGD("0:sget-object \x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x79\x73\x74\x65\x6d\x3b\x2d\x3e\x6f\x75\x74\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x50\x72\x69\x6e\x74\x53\x74\x72\x65\x61\x6d\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v2) {
LOGD("env->DeleteLocalRef(%p):v2", v2);
env->DeleteLocalRef(v2);
}
jclass &clz = cls0;
jfieldID &fld = fld0;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "java/lang/System", "out", "Ljava/io/PrintStream;");
v2 = (jobject) env->GetStaticObjectField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("4:const-string \x76\x31\x2c\x20\x27\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x2e\x66\x6c\x6f\x61\x74\x4f\x70\x65\x72\x54\x65\x73\x74\x27");
if (v3) {
LOGD("env->DeleteLocalRef(%p):v3", v3);
env->DeleteLocalRef(v3);
}
v3 = (jstring) env->NewStringUTF("\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x2e\x66\x6c\x6f\x61\x74\x4f\x70\x65\x72\x54\x65\x73\x74");
LOGD("8:invoke-virtual \x76\x30\x2c\x20\x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x50\x72\x69\x6e\x74\x53\x74\x72\x65\x61\x6d\x3b\x2d\x3e\x70\x72\x69\x6e\x74\x6c\x6e\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v2);
jclass &clz = cls1;
jmethodID &mid = mth0;
D2C_RESOLVE_METHOD(clz, mid, "java/io/PrintStream", "println", "(Ljava/lang/String;)V");
jvalue args[] = {{.l = v3}};
env->CallVoidMethodA(v2, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v4 = 10;
LOGD("12:new-array \x76\x30\x2c\x20\x76\x30\x2c\x20\x5b\x46");
{
#define EX_HANDLE EX_UnwindBlock
if (v4 < 0) {
d2c_throw_exception(env, "java/lang/NegativeArraySizeException", "negative array size");
goto EX_HANDLE;
}
if (v2) {
LOGD("env->DeleteLocalRef(%p):v2", v2);
env->DeleteLocalRef(v2);
}
v2 = (jarray) env->NewFloatArray((jint) v4);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("16:add-float \x76\x31\x2c\x20\x76\x33\x2c\x20\x76\x34");
v5 = (v0 + v1);
v6 = 0;
LOGD("1c:aput \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x32");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v2);
{jfloat val = v5;env->SetFloatArrayRegion((jfloatArray) v2, (jint) v6, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("20:sub-float \x76\x31\x2c\x20\x76\x33\x2c\x20\x76\x34");
v5 = (v0 - v1);
v6 = 1;
LOGD("26:aput \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x32");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v2);
{jfloat val = v5;env->SetFloatArrayRegion((jfloatArray) v2, (jint) v6, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("2a:mul-float \x76\x31\x2c\x20\x76\x33\x2c\x20\x76\x34");
v5 = (v0 * v1);
v6 = 2;
LOGD("30:aput \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x32");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v2);
{jfloat val = v5;env->SetFloatArrayRegion((jfloatArray) v2, (jint) v6, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("34:div-float \x76\x31\x2c\x20\x76\x33\x2c\x20\x76\x34");
{
v5 = v0 / v1;
}
v6 = 3;
LOGD("3a:aput \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x32");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v2);
{jfloat val = v5;env->SetFloatArrayRegion((jfloatArray) v2, (jint) v6, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("3e:neg-float \x76\x31\x2c\x20\x76\x34");
v5 = (- v1);
LOGD("40:rem-float \x76\x31\x2c\x20\x76\x33\x2c\x20\x76\x31");
v5 = fmodf(v0, v5);
v6 = 4;
LOGD("46:aput \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x32");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v2);
{jfloat val = v5;env->SetFloatArrayRegion((jfloatArray) v2, (jint) v6, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = v0;
LOGD("4c:add-float/2addr \x76\x31\x2c\x20\x76\x34");
v5 = (v5 + v1);
v6 = 5;
LOGD("50:aput \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x32");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v2);
{jfloat val = v5;env->SetFloatArrayRegion((jfloatArray) v2, (jint) v6, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = v0;
LOGD("56:sub-float/2addr \x76\x31\x2c\x20\x76\x34");
v5 = (v5 - v1);
v6 = 6;
LOGD("5a:aput \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x32");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v2);
{jfloat val = v5;env->SetFloatArrayRegion((jfloatArray) v2, (jint) v6, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = v0;
LOGD("60:mul-float \x76\x31\x2c\x20\x76\x31\x2c\x20\x76\x34");
v5 = (v5 * v1);
v6 = 7;
LOGD("66:aput \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x32");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v2);
{jfloat val = v5;env->SetFloatArrayRegion((jfloatArray) v2, (jint) v6, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = v0;
LOGD("6c:div-float/2addr \x76\x31\x2c\x20\x76\x34");
{
v5 = v5 / v1;
}
v6 = 8;
LOGD("72:aput \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x32");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v2);
{jfloat val = v5;env->SetFloatArrayRegion((jfloatArray) v2, (jint) v6, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = v0;
LOGD("78:neg-float \x76\x32\x2c\x20\x76\x34");
v7 = (- v1);
LOGD("7a:rem-float/2addr \x76\x31\x2c\x20\x76\x32");
v5 = fmodf(v5, v7);
v6 = 9;
LOGD("80:aput \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x32");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v2);
{jfloat val = v5;env->SetFloatArrayRegion((jfloatArray) v2, (jint) v6, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return (jarray) v2;
EX_UnwindBlock: return (jarray)0;
}
