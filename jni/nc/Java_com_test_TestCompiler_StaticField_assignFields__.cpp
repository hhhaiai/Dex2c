#include "Dex2C.h"

/* Lcom/test/TestCompiler/StaticField;->assignFields()V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_StaticField_assignFields__(JNIEnv *env, jobject thiz){
jobject v0 = NULL;
jobject v1 = NULL;
jint v2;
jint v3;
jfloat v4;
jlong v5;
jdouble v6;
jlong v7;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL;
jfieldID fld0 = NULL,fld1 = NULL,fld2 = NULL,fld3 = NULL,fld4 = NULL,fld5 = NULL,fld6 = NULL,fld7 = NULL,fld8 = NULL,fld9 = NULL,fld10 = NULL,fld11 = NULL,fld12 = NULL,fld13 = NULL,fld14 = NULL,fld15 = NULL,fld16 = NULL,fld17 = NULL,fld18 = NULL,fld19 = NULL;
jmethodID mth0 = NULL;
L0:
LOGD("0:sget-object \x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x79\x73\x74\x65\x6d\x3b\x2d\x3e\x6f\x75\x74\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x50\x72\x69\x6e\x74\x53\x74\x72\x65\x61\x6d\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
jclass &clz = cls0;
jfieldID &fld = fld0;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "java/lang/System", "out", "Ljava/io/PrintStream;");
v0 = (jobject) env->GetStaticObjectField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("4:const-string \x76\x31\x2c\x20\x27\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x20\x61\x73\x73\x69\x67\x6e\x2e\x2e\x2e\x27");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jstring) env->NewStringUTF("\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x20\x61\x73\x73\x69\x67\x6e\x2e\x2e\x2e");
LOGD("8:invoke-virtual \x76\x30\x2c\x20\x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x50\x72\x69\x6e\x74\x53\x74\x72\x65\x61\x6d\x3b\x2d\x3e\x70\x72\x69\x6e\x74\x6c\x6e\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls1;
jmethodID &mid = mth0;
D2C_RESOLVE_METHOD(clz, mid, "java/io/PrintStream", "println", "(Ljava/lang/String;)V");
jvalue args[] = {{.l = v1}};
env->CallVoidMethodA(v0, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v2 = 1;
LOGD("10:sput-boolean \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x42\x6f\x6f\x6c\x65\x61\x6e\x31\x20\x5a");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld1;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mBoolean1", "Z");
env->SetStaticBooleanField(clz,fld,(jboolean) v2);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v2 = 0;
LOGD("16:sput-boolean \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x42\x6f\x6f\x6c\x65\x61\x6e\x32\x20\x5a");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld2;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mBoolean2", "Z");
env->SetStaticBooleanField(clz,fld,(jboolean) v2);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v2 = 127;
LOGD("1e:sput-byte \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x42\x79\x74\x65\x31\x20\x42");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld3;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mByte1", "B");
env->SetStaticByteField(clz,fld,(jbyte) v2);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v2 = -128;
LOGD("26:sput-byte \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x42\x79\x74\x65\x32\x20\x42");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld4;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mByte2", "B");
env->SetStaticByteField(clz,fld,(jbyte) v2);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v2 = 32767;
v2 = 32767;
LOGD("2e:sput-char \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x43\x68\x61\x72\x31\x20\x43");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld5;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mChar1", "C");
env->SetStaticCharField(clz,fld,(jchar) v2);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v3 = 65535;
LOGD("38:sput-char \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x43\x68\x61\x72\x32\x20\x43");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld6;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mChar2", "C");
env->SetStaticCharField(clz,fld,(jchar) v3);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("3c:sput-short \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x53\x68\x6f\x72\x74\x31\x20\x53");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld7;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mShort1", "S");
env->SetStaticShortField(clz,fld,(jshort) v2);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v2 = -32768;
LOGD("44:sput-short \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x53\x68\x6f\x72\x74\x32\x20\x53");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld8;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mShort2", "S");
env->SetStaticShortField(clz,fld,(jshort) v2);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v2 = 65537;
LOGD("4e:sput \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x49\x6e\x74\x31\x20\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld9;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mInt1", "I");
env->SetStaticIntField(clz,fld,(jint) v2);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v2 = -65537;
LOGD("58:sput \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x49\x6e\x74\x32\x20\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld10;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mInt2", "I");
env->SetStaticIntField(clz,fld,(jint) v2);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v4 = d2c_bitcast_to_float(1078529622);
LOGD("62:sput \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x46\x6c\x6f\x61\x74\x31\x20\x46");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld11;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mFloat1", "F");
env->SetStaticFloatField(clz,fld,(jfloat) v4);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v4 = d2c_bitcast_to_float(-8388608);
LOGD("6a:sput \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x46\x6c\x6f\x61\x74\x32\x20\x46");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld12;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mFloat2", "F");
env->SetStaticFloatField(clz,fld,(jfloat) v4);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = 1234605616436508552;
LOGD("78:sput-wide \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x4c\x6f\x6e\x67\x31\x20\x4a");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld13;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mLong1", "J");
env->SetStaticLongField(clz,fld,(jlong) v5);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = -1234605616436508552;
LOGD("86:sput-wide \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x4c\x6f\x6e\x67\x32\x20\x4a");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld14;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mLong2", "J");
env->SetStaticLongField(clz,fld,(jlong) v5);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = d2c_bitcast_to_double(4614256656551843652);
LOGD("94:sput-wide \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x44\x6f\x75\x62\x6c\x65\x31\x20\x44");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld15;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mDouble1", "D");
env->SetStaticDoubleField(clz,fld,(jdouble) v6);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = d2c_bitcast_to_double(9218868437227405312);
LOGD("9c:sput-wide \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x44\x6f\x75\x62\x6c\x65\x32\x20\x44");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld16;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mDouble2", "D");
env->SetStaticDoubleField(clz,fld,(jdouble) v6);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("a0:sget-wide \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x4c\x6f\x6e\x67\x31\x20\x4a");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld13;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mLong1", "J");
v5 = (jlong) env->GetStaticLongField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v7 = 1;
v7 = 1;
LOGD("a8:sub-long/2addr \x76\x30\x2c\x20\x76\x32");
v5 = (v5 - v7);
LOGD("aa:sput-wide \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x56\x6f\x6c\x61\x74\x69\x6c\x65\x4c\x6f\x6e\x67\x31\x20\x4a");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld17;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mVolatileLong1", "J");
env->SetStaticLongField(clz,fld,(jlong) v5);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("ae:sget-wide \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x4c\x6f\x6e\x67\x32\x20\x4a");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld14;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mLong2", "J");
v5 = (jlong) env->GetStaticLongField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("b2:add-long/2addr \x76\x30\x2c\x20\x76\x32");
v5 = (v5 + v7);
LOGD("b4:sput-wide \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x56\x6f\x6c\x61\x74\x69\x6c\x65\x4c\x6f\x6e\x67\x32\x20\x4a");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld18;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mVolatileLong2", "J");
env->SetStaticLongField(clz,fld,(jlong) v5);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("b8:const-string \x76\x30\x2c\x20\x27\x41\x41\x27");
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jstring) env->NewStringUTF("\x41\x41");
LOGD("bc:sput-object \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x53\x74\x72\x69\x6e\x67\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld19;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mString", "Ljava/lang/String;");
env->SetStaticObjectField(clz,fld,(jstring) v0);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;
EX_UnwindBlock: return;
}
