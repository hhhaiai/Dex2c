#include "Dex2C.h"

/* Lcom/test/TestCompiler/InstField;->assignFields()V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_InstField_assignFields__(JNIEnv *env, jobject thiz){
jobject v0 = NULL;
jobject v1 = NULL;
jobject v2 = NULL;
jint v3;
jint v4;
jfloat v5;
jlong v6;
jdouble v7;
jlong v8;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL;
jfieldID fld0 = NULL,fld1 = NULL,fld2 = NULL,fld3 = NULL,fld4 = NULL,fld5 = NULL,fld6 = NULL,fld7 = NULL,fld8 = NULL,fld9 = NULL,fld10 = NULL,fld11 = NULL,fld12 = NULL,fld13 = NULL,fld14 = NULL,fld15 = NULL,fld16 = NULL,fld17 = NULL,fld18 = NULL,fld19 = NULL,fld20 = NULL;
jmethodID mth0 = NULL;
v0 = (jobject)env->NewLocalRef(thiz);
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
LOGD("4:const-string \x76\x31\x2c\x20\x27\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x20\x61\x73\x73\x69\x67\x6e\x2e\x2e\x2e\x27");
if (v2) {
LOGD("env->DeleteLocalRef(%p):v2", v2);
env->DeleteLocalRef(v2);
}
v2 = (jstring) env->NewStringUTF("\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x20\x61\x73\x73\x69\x67\x6e\x2e\x2e\x2e");
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
v3 = 1;
LOGD("10:iput-boolean \x76\x30\x2c\x20\x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x42\x6f\x6f\x6c\x65\x61\x6e\x31\x20\x5a");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld1;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mBoolean1", "Z");
env->SetBooleanField(v0,fld,(jboolean) v3);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v3 = 0;
LOGD("16:iput-boolean \x76\x30\x2c\x20\x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x42\x6f\x6f\x6c\x65\x61\x6e\x32\x20\x5a");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld2;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mBoolean2", "Z");
env->SetBooleanField(v0,fld,(jboolean) v3);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v3 = 127;
LOGD("1e:iput-byte \x76\x30\x2c\x20\x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x42\x79\x74\x65\x31\x20\x42");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld3;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mByte1", "B");
env->SetByteField(v0,fld,(jbyte) v3);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v3 = -128;
LOGD("26:iput-byte \x76\x30\x2c\x20\x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x42\x79\x74\x65\x32\x20\x42");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld4;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mByte2", "B");
env->SetByteField(v0,fld,(jbyte) v3);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v3 = 32767;
v3 = 32767;
LOGD("2e:iput-char \x76\x30\x2c\x20\x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x43\x68\x61\x72\x31\x20\x43");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld5;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mChar1", "C");
env->SetCharField(v0,fld,(jchar) v3);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v4 = 65535;
LOGD("38:iput-char \x76\x31\x2c\x20\x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x43\x68\x61\x72\x32\x20\x43");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld6;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mChar2", "C");
env->SetCharField(v0,fld,(jchar) v4);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("3c:iput-short \x76\x30\x2c\x20\x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x53\x68\x6f\x72\x74\x31\x20\x53");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld7;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mShort1", "S");
env->SetShortField(v0,fld,(jshort) v3);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v3 = -32768;
LOGD("44:iput-short \x76\x30\x2c\x20\x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x53\x68\x6f\x72\x74\x32\x20\x53");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld8;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mShort2", "S");
env->SetShortField(v0,fld,(jshort) v3);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v3 = 65537;
LOGD("4e:iput \x76\x30\x2c\x20\x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x49\x6e\x74\x31\x20\x49");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld9;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mInt1", "I");
env->SetIntField(v0,fld,(jint) v3);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v3 = -65537;
LOGD("58:iput \x76\x30\x2c\x20\x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x49\x6e\x74\x32\x20\x49");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld10;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mInt2", "I");
env->SetIntField(v0,fld,(jint) v3);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = d2c_bitcast_to_float(1078529622);
LOGD("62:iput \x76\x30\x2c\x20\x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x46\x6c\x6f\x61\x74\x31\x20\x46");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld11;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mFloat1", "F");
env->SetFloatField(v0,fld,(jfloat) v5);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = d2c_bitcast_to_float(-8388608);
LOGD("6a:iput \x76\x30\x2c\x20\x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x46\x6c\x6f\x61\x74\x32\x20\x46");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld12;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mFloat2", "F");
env->SetFloatField(v0,fld,(jfloat) v5);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = 1234605616436508552;
LOGD("78:iput-wide \x76\x30\x2c\x20\x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x4c\x6f\x6e\x67\x31\x20\x4a");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld13;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mLong1", "J");
env->SetLongField(v0,fld,(jlong) v6);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = -1234605616436508552;
LOGD("86:iput-wide \x76\x30\x2c\x20\x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x4c\x6f\x6e\x67\x32\x20\x4a");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld14;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mLong2", "J");
env->SetLongField(v0,fld,(jlong) v6);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v7 = d2c_bitcast_to_double(4614256656551843652);
LOGD("94:iput-wide \x76\x30\x2c\x20\x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x44\x6f\x75\x62\x6c\x65\x31\x20\x44");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld15;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mDouble1", "D");
env->SetDoubleField(v0,fld,(jdouble) v7);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v7 = d2c_bitcast_to_double(9218868437227405312);
LOGD("9c:iput-wide \x76\x30\x2c\x20\x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x44\x6f\x75\x62\x6c\x65\x32\x20\x44");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld16;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mDouble2", "D");
env->SetDoubleField(v0,fld,(jdouble) v7);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("a0:iget-wide \x76\x30\x2c\x20\x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x4c\x6f\x6e\x67\x31\x20\x4a");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld13;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mLong1", "J");
v6 = (jlong) env->GetLongField(v0,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v8 = 1;
v8 = 1;
LOGD("a8:sub-long/2addr \x76\x30\x2c\x20\x76\x32");
v6 = (v6 - v8);
LOGD("aa:iput-wide \x76\x30\x2c\x20\x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x56\x6f\x6c\x61\x74\x69\x6c\x65\x4c\x6f\x6e\x67\x31\x20\x4a");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld17;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mVolatileLong1", "J");
env->SetLongField(v0,fld,(jlong) v6);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("ae:iget-wide \x76\x30\x2c\x20\x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x4c\x6f\x6e\x67\x32\x20\x4a");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld14;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mLong2", "J");
v6 = (jlong) env->GetLongField(v0,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("b2:add-long/2addr \x76\x30\x2c\x20\x76\x32");
v6 = (v6 + v8);
LOGD("b4:iput-wide \x76\x30\x2c\x20\x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x56\x6f\x6c\x61\x74\x69\x6c\x65\x4c\x6f\x6e\x67\x32\x20\x4a");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld18;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mVolatileLong2", "J");
env->SetLongField(v0,fld,(jlong) v6);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("b8:const-string \x76\x30\x2c\x20\x27\x41\x41\x27");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jstring) env->NewStringUTF("\x41\x41");
LOGD("bc:iput-object \x76\x30\x2c\x20\x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x53\x74\x72\x69\x6e\x67\x31\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld19;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mString1", "Ljava/lang/String;");
env->SetObjectField(v0,fld,(jstring) v1);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("c0:const-string \x76\x30\x2c\x20\x27\x42\x42\x27");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jstring) env->NewStringUTF("\x42\x42");
LOGD("c4:iput-object \x76\x30\x2c\x20\x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x53\x74\x72\x69\x6e\x67\x32\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld20;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mString2", "Ljava/lang/String;");
env->SetObjectField(v0,fld,(jstring) v1);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;
EX_UnwindBlock: return;
}
