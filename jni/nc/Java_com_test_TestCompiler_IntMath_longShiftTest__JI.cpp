#include "Dex2C.h"

/* Lcom/test/TestCompiler/IntMath;->longShiftTest(JI)[J */
extern "C" JNIEXPORT jarray JNICALL
Java_com_test_TestCompiler_IntMath_longShiftTest__JI(JNIEnv *env, jobject thiz, jlong p4, jint p6){
jlong v0;
jint v1;
jobject v2 = NULL;
jobject v3 = NULL;
jint v4;
jlong v5;
jint v6;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL;
jfieldID fld0 = NULL;
jmethodID mth0 = NULL;
v0 = (jlong)p4;
v1 = (jint)p6;
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
LOGD("4:const-string \x76\x31\x2c\x20\x27\x49\x6e\x74\x4d\x61\x74\x68\x2e\x6c\x6f\x6e\x67\x53\x68\x69\x66\x74\x54\x65\x73\x74\x27");
if (v3) {
LOGD("env->DeleteLocalRef(%p):v3", v3);
env->DeleteLocalRef(v3);
}
v3 = (jstring) env->NewStringUTF("\x49\x6e\x74\x4d\x61\x74\x68\x2e\x6c\x6f\x6e\x67\x53\x68\x69\x66\x74\x54\x65\x73\x74");
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
v4 = 4;
LOGD("10:new-array \x76\x30\x2c\x20\x76\x30\x2c\x20\x5b\x4a");
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
v2 = (jarray) env->NewLongArray((jint) v4);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("14:shl-long \x76\x31\x2c\x20\x76\x34\x2c\x20\x76\x36");
v5 = (v0) << (v1 & 0x3f);
v6 = 0;
LOGD("1a:aput-wide \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v2);
{jlong val = v5;env->SetLongArrayRegion((jlongArray) v2, (jint) v6, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1e:shr-long \x76\x31\x2c\x20\x76\x34\x2c\x20\x76\x36");
v5 = (v0) >> (v1 & 0x3f);
v6 = 1;
LOGD("24:aput-wide \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v2);
{jlong val = v5;env->SetLongArrayRegion((jlongArray) v2, (jint) v6, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("28:ushr-long \x76\x31\x2c\x20\x76\x34\x2c\x20\x76\x36");
v5 = ((uint64_t) v0) >> (v1 & 0x3f);
v6 = 2;
LOGD("2e:aput-wide \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v2);
{jlong val = v5;env->SetLongArrayRegion((jlongArray) v2, (jint) v6, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("32:shl-long \x76\x31\x2c\x20\x76\x34\x2c\x20\x76\x36");
v5 = (v0) << (v1 & 0x3f);
LOGD("36:shr-long/2addr \x76\x31\x2c\x20\x76\x36");
v5 = (v5) >> (v1 & 0x3f);
LOGD("38:ushr-long/2addr \x76\x31\x2c\x20\x76\x36");
v5 = ((uint64_t) v5) >> (v1 & 0x3f);
LOGD("3a:shl-long/2addr \x76\x31\x2c\x20\x76\x36");
v5 = (v5) << (v1 & 0x3f);
v6 = 3;
LOGD("3e:aput-wide \x76\x31\x2c\x20\x76\x30\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v2);
{jlong val = v5;env->SetLongArrayRegion((jlongArray) v2, (jint) v6, 1, &val);}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return (jarray) v2;
EX_UnwindBlock: return (jarray)0;
}
