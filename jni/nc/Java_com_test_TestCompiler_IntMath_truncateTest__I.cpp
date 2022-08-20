#include "Dex2C.h"

/* Lcom/test/TestCompiler/IntMath;->truncateTest(I)Lcom/test/TestCompiler/IntMath$Shorty; */
extern "C" JNIEXPORT jobject JNICALL
Java_com_test_TestCompiler_IntMath_truncateTest__I(JNIEnv *env, jobject thiz, jint p2){
jint v0;
jobject v1 = NULL;
jobject v2 = NULL;
jint v3;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL;
jfieldID fld0 = NULL,fld1 = NULL,fld2 = NULL,fld3 = NULL;
jmethodID mth0 = NULL, mth1 = NULL;
v0 = (jint)p2;
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
LOGD("4:const-string \x76\x31\x2c\x20\x27\x49\x6e\x74\x4d\x61\x74\x68\x2e\x74\x72\x75\x6e\x63\x61\x74\x65\x54\x65\x73\x74\x27");
if (v2) {
LOGD("env->DeleteLocalRef(%p):v2", v2);
env->DeleteLocalRef(v2);
}
v2 = (jstring) env->NewStringUTF("\x49\x6e\x74\x4d\x61\x74\x68\x2e\x74\x72\x75\x6e\x63\x61\x74\x65\x54\x65\x73\x74");
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
LOGD("e:new-instance \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x24\x53\x68\x6f\x72\x74\x79\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
jclass &clz = cls2;
D2C_RESOLVE_CLASS(clz,"com/test/TestCompiler/IntMath$Shorty");
v1 = (jobject) env->AllocObject(clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("12:invoke-direct \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x24\x53\x68\x6f\x72\x74\x79\x3b\x2d\x3e\x3c\x69\x6e\x69\x74\x3e\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_METHOD(clz, mid, "com/test/TestCompiler/IntMath$Shorty", "<init>", "()V");
jvalue args[] = {};
env->CallVoidMethodA(v1, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v3 = (jshort)(v0);
LOGD("1a:iput-short \x76\x31\x2c\x20\x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x24\x53\x68\x6f\x72\x74\x79\x3b\x2d\x3e\x6d\x53\x68\x6f\x72\x74\x20\x53");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
jclass &clz = cls2;
jfieldID &fld = fld1;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/IntMath$Shorty", "mShort", "S");
env->SetShortField(v1,fld,(jshort) v3);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v3 = (jchar)(v0);
LOGD("20:iput-char \x76\x31\x2c\x20\x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x24\x53\x68\x6f\x72\x74\x79\x3b\x2d\x3e\x6d\x43\x68\x61\x72\x20\x43");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
jclass &clz = cls2;
jfieldID &fld = fld2;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/IntMath$Shorty", "mChar", "C");
env->SetCharField(v1,fld,(jchar) v3);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v3 = (jbyte)(v0);
LOGD("26:iput-byte \x76\x31\x2c\x20\x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x24\x53\x68\x6f\x72\x74\x79\x3b\x2d\x3e\x6d\x42\x79\x74\x65\x20\x42");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
jclass &clz = cls2;
jfieldID &fld = fld3;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/IntMath$Shorty", "mByte", "B");
env->SetByteField(v1,fld,(jbyte) v3);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return (jobject) v1;
EX_UnwindBlock: return NULL;
}
