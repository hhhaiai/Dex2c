#include "Dex2C.h"

/* Lcom/test/TestCompiler/IntMath;->lit16Test(I)[I */
extern "C" JNIEXPORT jarray JNICALL
Java_com_test_TestCompiler_IntMath_lit16Test__I(JNIEnv *env, jobject thiz, jint p3){
jint v0;
jobject v1 = NULL;
jobject v2 = NULL;
jint v3;
jint v4;
jint v5;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL;
jfieldID fld0 = NULL;
jmethodID mth0 = NULL;
v0 = (jint)p3;
L0:
LOGD("0:sget-object \x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x79\x73\x74\x65\x6d\x3b\x2d\x3e\x6f\x75\x74\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x50\x72\x69\x6e\x74\x53\x74\x72\x65\x61\x6d\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
jclass &clz = cls0;
jfieldID &fld = fld0;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "java/lang/System", "out", "Ljava/io/PrintStream;");
v1 = (jobject) env->GetStaticObjectField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("4:const-string \x76\x31\x2c\x20\x27\x49\x6e\x74\x4d\x61\x74\x68\x2e\x6c\x69\x74\x31\x36\x54\x65\x73\x74\x27");
if (v2) {
LOGD("env->DeleteLocalRef(%p):v2", v2);
env->DeleteLocalRef(v2);
}
v2 = (jstring) env->NewStringUTF("\x49\x6e\x74\x4d\x61\x74\x68\x2e\x6c\x69\x74\x31\x36\x54\x65\x73\x74");
LOGD("8:invoke-virtual \x76\x30\x2c\x20\x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x50\x72\x69\x6e\x74\x53\x74\x72\x65\x61\x6d\x3b\x2d\x3e\x70\x72\x69\x6e\x74\x6c\x6e\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
jclass &clz = cls1;
jmethodID &mid = mth0;
D2C_RESOLVE_METHOD(clz, mid, "java/io/PrintStream", "println", "(Ljava/lang/String;)V");
jvalue args[] = {{.l = v2}};
env->CallVoidMethodA(v1, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v3 = 8;
LOGD("12:new-array \x76\x30\x2c\x20\x76\x30\x2c\x20\x5b\x49");
{
#define EX_HANDLE EX_UnwindBlock
if (v3 < 0) {
d2c_throw_exception(env, "java/lang/NegativeArraySizeException", "negative array size");
goto EX_HANDLE;
}
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jarray) env->NewIntArray((jint) v3);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("16:add-int/lit16 \x76\x31\x2c\x20\x76\x33\x2c\x20\x31\x30\x30\x30");
v4 = (v0 + 1000);
v5 = 0;
LOGD("1c:aput \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x32");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
{jint val = v4;env->SetIntArrayRegion((jintArray) v1, (jint) v5, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("20:rsub-int \x76\x31\x2c\x20\x76\x33\x2c\x20\x31\x30\x30\x30");
v4 = (1000 - v0);
v5 = 1;
LOGD("26:aput \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x32");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
{jint val = v4;env->SetIntArrayRegion((jintArray) v1, (jint) v5, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("2a:mul-int/lit16 \x76\x31\x2c\x20\x76\x33\x2c\x20\x31\x30\x30\x30");
v4 = (v0 * 1000);
v5 = 2;
LOGD("30:aput \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x32");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
{jint val = v4;env->SetIntArrayRegion((jintArray) v1, (jint) v5, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("34:div-int/lit16 \x76\x31\x2c\x20\x76\x33\x2c\x20\x31\x30\x30\x30");
{
#define EX_HANDLE EX_UnwindBlock
if (1000 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v4 = v0 / 1000;
}
v5 = 3;
LOGD("3a:aput \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x32");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
{jint val = v4;env->SetIntArrayRegion((jintArray) v1, (jint) v5, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("3e:rem-int/lit16 \x76\x31\x2c\x20\x76\x33\x2c\x20\x31\x30\x30\x30");
{
#define EX_HANDLE EX_UnwindBlock
if (1000 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v4 = v0 % 1000;
}
v5 = 4;
LOGD("44:aput \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x32");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
{jint val = v4;env->SetIntArrayRegion((jintArray) v1, (jint) v5, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("48:and-int/lit16 \x76\x31\x2c\x20\x76\x33\x2c\x20\x31\x30\x30\x30");
v4 = (v0 & 1000);
v5 = 5;
LOGD("4e:aput \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x32");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
{jint val = v4;env->SetIntArrayRegion((jintArray) v1, (jint) v5, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("52:or-int/lit16 \x76\x31\x2c\x20\x76\x33\x2c\x20\x2d\x31\x30\x30\x30");
v4 = (v0 | -1000);
v5 = 6;
LOGD("58:aput \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x32");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
{jint val = v4;env->SetIntArrayRegion((jintArray) v1, (jint) v5, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("5c:xor-int/lit16 \x76\x31\x2c\x20\x76\x33\x2c\x20\x2d\x31\x30\x30\x30");
v4 = (v0 ^ -1000);
v5 = 7;
LOGD("62:aput \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x32");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
{jint val = v4;env->SetIntArrayRegion((jintArray) v1, (jint) v5, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return (jarray) v1;
EX_UnwindBlock: return (jarray)0;
}
