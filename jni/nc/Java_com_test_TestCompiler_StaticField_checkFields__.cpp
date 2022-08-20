#include "Dex2C.h"

/* Lcom/test/TestCompiler/StaticField;->checkFields()V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_StaticField_checkFields__(JNIEnv *env, jobject thiz){
jobject v0 = NULL;
jobject v1 = NULL;
jint v2;
jint v3;
jint v4;
jint v5;
jfloat v6;
jfloat v7;
jlong v8;
jlong v9;
jdouble v10;
jdouble v11;
jint v12;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL,cls3 = NULL,cls4 = NULL;
jfieldID fld0 = NULL,fld1 = NULL,fld2 = NULL,fld3 = NULL,fld4 = NULL,fld5 = NULL,fld6 = NULL,fld7 = NULL,fld8 = NULL,fld9 = NULL,fld10 = NULL,fld11 = NULL,fld12 = NULL,fld13 = NULL,fld14 = NULL,fld15 = NULL,fld16 = NULL,fld17 = NULL,fld18 = NULL,fld19 = NULL;
jmethodID mth0 = NULL, mth1 = NULL, mth2 = NULL;
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
LOGD("4:const-string \x76\x31\x2c\x20\x27\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x20\x63\x68\x65\x63\x6b\x2e\x2e\x2e\x27");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jstring) env->NewStringUTF("\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x20\x63\x68\x65\x63\x6b\x2e\x2e\x2e");
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
LOGD("e:sget-boolean \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x42\x6f\x6f\x6c\x65\x61\x6e\x31\x20\x5a");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld1;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mBoolean1", "Z");
v2 = (jboolean) env->GetStaticBooleanField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("12:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v2}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("18:sget-boolean \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x42\x6f\x6f\x6c\x65\x61\x6e\x32\x20\x5a");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld2;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mBoolean2", "Z");
v2 = (jboolean) env->GetStaticBooleanField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v3 = 1;
v3 = 1;
LOGD("1e:xor-int/2addr \x76\x30\x2c\x20\x76\x31");
v2 = (v2 ^ v3);
LOGD("20:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v2}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("26:sget-byte \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x42\x79\x74\x65\x31\x20\x42");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld3;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mByte1", "B");
v2 = (jbyte) env->GetStaticByteField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v4 = 127;
LOGD("30:if-ne \x76\x30\x2c\x20\x76\x32\x2c\x20\x2b\x34");
if(v2 != v4) {
goto L2;
}
else {
goto L1;
}
L1:
v2 = 1;
goto L3;
L2:
v2 = 0;
L3:
LOGD("3a:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v2}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("40:sget-byte \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x42\x79\x74\x65\x32\x20\x42");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld4;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mByte2", "B");
v2 = (jbyte) env->GetStaticByteField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v4 = -128;
LOGD("48:if-ne \x76\x30\x2c\x20\x76\x32\x2c\x20\x2b\x34");
if(v2 != v4) {
goto L5;
}
else {
goto L4;
}
L4:
v2 = 1;
goto L6;
L5:
v2 = 0;
L6:
LOGD("52:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v2}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("58:sget-char \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x43\x68\x61\x72\x31\x20\x43");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld5;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mChar1", "C");
v2 = (jchar) env->GetStaticCharField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v4 = 32767;
v4 = 32767;
LOGD("60:if-ne \x76\x30\x2c\x20\x76\x32\x2c\x20\x2b\x34");
if(v2 != v4) {
goto L8;
}
else {
goto L7;
}
L7:
v2 = 1;
goto L9;
L8:
v2 = 0;
L9:
LOGD("6a:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v2}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("70:sget-char \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x43\x68\x61\x72\x32\x20\x43");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld6;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mChar2", "C");
v2 = (jchar) env->GetStaticCharField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = 65535;
LOGD("7a:if-ne \x76\x30\x2c\x20\x76\x34\x2c\x20\x2b\x34");
if(v2 != v5) {
goto L11;
}
else {
goto L10;
}
L10:
v2 = 1;
goto L12;
L11:
v2 = 0;
L12:
LOGD("84:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v2}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("8a:sget-short \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x53\x68\x6f\x72\x74\x31\x20\x53");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld7;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mShort1", "S");
v2 = (jshort) env->GetStaticShortField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("8e:if-ne \x76\x30\x2c\x20\x76\x32\x2c\x20\x2b\x34");
if(v2 != v4) {
goto L14;
}
else {
goto L13;
}
L13:
v2 = 1;
goto L15;
L14:
v2 = 0;
L15:
LOGD("98:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v2}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("9e:sget-short \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x53\x68\x6f\x72\x74\x32\x20\x53");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld8;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mShort2", "S");
v2 = (jshort) env->GetStaticShortField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v4 = -32768;
LOGD("a6:if-ne \x76\x30\x2c\x20\x76\x32\x2c\x20\x2b\x34");
if(v2 != v4) {
goto L17;
}
else {
goto L16;
}
L16:
v2 = 1;
goto L18;
L17:
v2 = 0;
L18:
LOGD("b0:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v2}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("b6:sget \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x49\x6e\x74\x31\x20\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld9;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mInt1", "I");
v2 = (jint) env->GetStaticIntField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v4 = 65537;
LOGD("c0:if-ne \x76\x30\x2c\x20\x76\x32\x2c\x20\x2b\x34");
if(v2 != v4) {
goto L20;
}
else {
goto L19;
}
L19:
v2 = 1;
goto L21;
L20:
v2 = 0;
L21:
LOGD("ca:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v2}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("d0:sget \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x49\x6e\x74\x32\x20\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld10;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mInt2", "I");
v2 = (jint) env->GetStaticIntField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v4 = -65537;
LOGD("da:if-ne \x76\x30\x2c\x20\x76\x32\x2c\x20\x2b\x34");
if(v2 != v4) {
goto L23;
}
else {
goto L22;
}
L22:
v2 = 1;
goto L24;
L23:
v2 = 0;
L24:
LOGD("e4:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v2}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("ea:sget \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x46\x6c\x6f\x61\x74\x31\x20\x46");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld11;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mFloat1", "F");
v6 = (jfloat) env->GetStaticFloatField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v7 = d2c_bitcast_to_float(1078527525);
LOGD("f4:cmpl-float \x76\x30\x2c\x20\x76\x30\x2c\x20\x76\x32");
v2 = (v6 == v7) ? 0 : (v6 > v7) ? 1 : -1;
LOGD("f8:if-lez \x76\x30\x2c\x20\x2b\x64");
if(v2 <= 0){
goto L27;
}
else {
goto L25;
}
L25:
LOGD("fc:sget \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x46\x6c\x6f\x61\x74\x32\x20\x46");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld12;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mFloat2", "F");
v6 = (jfloat) env->GetStaticFloatField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v7 = d2c_bitcast_to_float(1078531719);
LOGD("106:cmpg-float \x76\x30\x2c\x20\x76\x30\x2c\x20\x76\x32");
v2 = (v6 == v7) ? 0 : (v6 < v7) ? -1 : 1;
LOGD("10a:if-gez \x76\x30\x2c\x20\x2b\x34");
if(v2 >= 0){
goto L27;
}
else {
goto L26;
}
L26:
v2 = 1;
goto L28;
L27:
v2 = 0;
L28:
LOGD("114:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v2}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("11a:sget \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x46\x6c\x6f\x61\x74\x32\x20\x46");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld12;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mFloat2", "F");
v6 = (jfloat) env->GetStaticFloatField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("11e:sget \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x46\x6c\x6f\x61\x74\x31\x20\x46");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld11;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mFloat1", "F");
v7 = (jfloat) env->GetStaticFloatField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("122:cmpg-float \x76\x30\x2c\x20\x76\x30\x2c\x20\x76\x32");
v2 = (v6 == v7) ? 0 : (v6 < v7) ? -1 : 1;
LOGD("126:if-gez \x76\x30\x2c\x20\x2b\x34");
if(v2 >= 0){
goto L30;
}
else {
goto L29;
}
L29:
v2 = 1;
goto L31;
L30:
v2 = 0;
L31:
LOGD("130:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v2}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("136:sget-wide \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x4c\x6f\x6e\x67\x31\x20\x4a");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld13;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mLong1", "J");
v8 = (jlong) env->GetStaticLongField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v9 = 1234605616436508552;
LOGD("144:cmp-long \x76\x30\x2c\x20\x76\x34\x2c\x20\x76\x36");
v2 = (v8 == v9) ? 0 : (v8 > v9) ? 1 : -1;
LOGD("148:if-nez \x76\x30\x2c\x20\x2b\x34");
if(v2 != 0){
goto L33;
}
else {
goto L32;
}
L32:
v2 = 1;
goto L34;
L33:
v2 = 0;
L34:
LOGD("152:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v2}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("158:sget-wide \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x4c\x6f\x6e\x67\x32\x20\x4a");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld14;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mLong2", "J");
v8 = (jlong) env->GetStaticLongField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v9 = -1234605616436508552;
LOGD("166:cmp-long \x76\x30\x2c\x20\x76\x34\x2c\x20\x76\x36");
v2 = (v8 == v9) ? 0 : (v8 > v9) ? 1 : -1;
LOGD("16a:if-nez \x76\x30\x2c\x20\x2b\x34");
if(v2 != 0){
goto L36;
}
else {
goto L35;
}
L35:
v2 = 1;
goto L37;
L36:
v2 = 0;
L37:
LOGD("174:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v2}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("17a:sget-wide \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x44\x6f\x75\x62\x6c\x65\x31\x20\x44");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld15;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mDouble1", "D");
v10 = (jdouble) env->GetStaticDoubleField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v11 = d2c_bitcast_to_double(4614256656550717752);
LOGD("188:cmpl-double \x76\x30\x2c\x20\x76\x34\x2c\x20\x76\x36");
v2 = (v10 == v11) ? 0 : (v10 > v11) ? 1 : -1;
LOGD("18c:if-lez \x76\x30\x2c\x20\x2b\x64");
if(v2 <= 0){
goto L40;
}
else {
goto L38;
}
L38:
v11 = d2c_bitcast_to_double(4614256656552969552);
LOGD("19a:cmpg-double \x76\x30\x2c\x20\x76\x34\x2c\x20\x76\x36");
v2 = (v10 == v11) ? 0 : (v10 < v11) ? -1 : 1;
LOGD("19e:if-gez \x76\x30\x2c\x20\x2b\x34");
if(v2 >= 0){
goto L40;
}
else {
goto L39;
}
L39:
v2 = 1;
goto L41;
L40:
v2 = 0;
L41:
LOGD("1a8:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v2}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1ae:sget-wide \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x44\x6f\x75\x62\x6c\x65\x32\x20\x44");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld16;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mDouble2", "D");
v10 = (jdouble) env->GetStaticDoubleField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1b2:sget-wide \x76\x36\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x44\x6f\x75\x62\x6c\x65\x31\x20\x44");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld15;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mDouble1", "D");
v11 = (jdouble) env->GetStaticDoubleField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1b6:cmpl-double \x76\x30\x2c\x20\x76\x34\x2c\x20\x76\x36");
v2 = (v10 == v11) ? 0 : (v10 > v11) ? 1 : -1;
LOGD("1ba:if-lez \x76\x30\x2c\x20\x2b\x34");
if(v2 <= 0){
goto L43;
}
else {
goto L42;
}
L42:
v2 = 1;
goto L44;
L43:
v2 = 0;
L44:
LOGD("1c4:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v2}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1ca:sget-wide \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x56\x6f\x6c\x61\x74\x69\x6c\x65\x4c\x6f\x6e\x67\x31\x20\x4a");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld17;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mVolatileLong1", "J");
v8 = (jlong) env->GetStaticLongField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v9 = 1234605616436508551;
LOGD("1d8:cmp-long \x76\x30\x2c\x20\x76\x34\x2c\x20\x76\x36");
v2 = (v8 == v9) ? 0 : (v8 > v9) ? 1 : -1;
LOGD("1dc:if-nez \x76\x30\x2c\x20\x2b\x34");
if(v2 != 0){
goto L46;
}
else {
goto L45;
}
L45:
v2 = 1;
goto L47;
L46:
v2 = 0;
L47:
LOGD("1e6:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v2}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1ec:sget-wide \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x56\x6f\x6c\x61\x74\x69\x6c\x65\x4c\x6f\x6e\x67\x32\x20\x4a");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jfieldID &fld = fld18;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mVolatileLong2", "J");
v8 = (jlong) env->GetStaticLongField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v9 = -1234605616436508551;
LOGD("1fa:cmp-long \x76\x30\x2c\x20\x76\x34\x2c\x20\x76\x36");
v2 = (v8 == v9) ? 0 : (v8 > v9) ? 1 : -1;
LOGD("1fe:if-nez \x76\x30\x2c\x20\x2b\x33");
if(v2 != 0){
goto L49;
}
else {
goto L48;
}
L48:
goto L50;
L49:
v3 = 0;
L50:
LOGD("206:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v3}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("20c:sget-object \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x53\x74\x61\x74\x69\x63\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x53\x74\x72\x69\x6e\x67\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
jclass &clz = cls2;
jfieldID &fld = fld19;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "com/test/TestCompiler/StaticField", "mString", "Ljava/lang/String;");
v0 = (jstring) env->GetStaticObjectField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("210:const-string \x76\x31\x2c\x20\x27\x41\x41\x27");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jstring) env->NewStringUTF("\x41\x41");
LOGD("214:invoke-virtual \x76\x30\x2c\x20\x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x2d\x3e\x65\x71\x75\x61\x6c\x73\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b\x29\x5a");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls4;
jmethodID &mid = mth2;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/String", "equals", "(Ljava/lang/Object;)Z");
jvalue args[] = {{.l = v1}};
v12 = (jboolean) env->CallBooleanMethodA(v0, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("21a:move-result \x76\x30");
v2 = (jint) v12;
LOGD("21c:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v2}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;
EX_UnwindBlock: return;
}
