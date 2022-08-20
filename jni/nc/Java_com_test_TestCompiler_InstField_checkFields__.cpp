#include "Dex2C.h"

/* Lcom/test/TestCompiler/InstField;->checkFields()V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_InstField_checkFields__(JNIEnv *env, jobject thiz){
jobject v0 = NULL;
jobject v1 = NULL;
jobject v2 = NULL;
jint v3;
jint v4;
jint v5;
jint v6;
jfloat v7;
jfloat v8;
jlong v9;
jlong v10;
jdouble v11;
jdouble v12;
jobject v13 = NULL;
jint v14;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL,cls3 = NULL,cls4 = NULL;
jfieldID fld0 = NULL,fld1 = NULL,fld2 = NULL,fld3 = NULL,fld4 = NULL,fld5 = NULL,fld6 = NULL,fld7 = NULL,fld8 = NULL,fld9 = NULL,fld10 = NULL,fld11 = NULL,fld12 = NULL,fld13 = NULL,fld14 = NULL,fld15 = NULL,fld16 = NULL,fld17 = NULL,fld18 = NULL,fld19 = NULL,fld20 = NULL;
jmethodID mth0 = NULL, mth1 = NULL, mth2 = NULL;
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
LOGD("4:const-string \x76\x31\x2c\x20\x27\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x20\x63\x68\x65\x63\x6b\x2e\x2e\x2e\x27");
if (v2) {
LOGD("env->DeleteLocalRef(%p):v2", v2);
env->DeleteLocalRef(v2);
}
v2 = (jstring) env->NewStringUTF("\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x20\x63\x68\x65\x63\x6b\x2e\x2e\x2e");
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
LOGD("e:iget-boolean \x76\x30\x2c\x20\x76\x38\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x42\x6f\x6f\x6c\x65\x61\x6e\x31\x20\x5a");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld1;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mBoolean1", "Z");
v3 = (jboolean) env->GetBooleanField(v0,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("12:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
LOGD("18:iget-boolean \x76\x30\x2c\x20\x76\x38\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x42\x6f\x6f\x6c\x65\x61\x6e\x32\x20\x5a");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld2;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mBoolean2", "Z");
v3 = (jboolean) env->GetBooleanField(v0,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v4 = 1;
v4 = 1;
LOGD("1e:xor-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 ^ v4);
LOGD("20:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
LOGD("26:iget-byte \x76\x30\x2c\x20\x76\x38\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x42\x79\x74\x65\x31\x20\x42");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld3;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mByte1", "B");
v3 = (jbyte) env->GetByteField(v0,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = 127;
LOGD("30:if-ne \x76\x30\x2c\x20\x76\x32\x2c\x20\x2b\x34");
if(v3 != v5) {
goto L2;
}
else {
goto L1;
}
L1:
v3 = 1;
goto L3;
L2:
v3 = 0;
L3:
LOGD("3a:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
LOGD("40:iget-byte \x76\x30\x2c\x20\x76\x38\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x42\x79\x74\x65\x32\x20\x42");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld4;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mByte2", "B");
v3 = (jbyte) env->GetByteField(v0,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = -128;
LOGD("48:if-ne \x76\x30\x2c\x20\x76\x32\x2c\x20\x2b\x34");
if(v3 != v5) {
goto L5;
}
else {
goto L4;
}
L4:
v3 = 1;
goto L6;
L5:
v3 = 0;
L6:
LOGD("52:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
LOGD("58:iget-char \x76\x30\x2c\x20\x76\x38\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x43\x68\x61\x72\x31\x20\x43");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld5;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mChar1", "C");
v3 = (jchar) env->GetCharField(v0,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = 32767;
v5 = 32767;
LOGD("60:if-ne \x76\x30\x2c\x20\x76\x32\x2c\x20\x2b\x34");
if(v3 != v5) {
goto L8;
}
else {
goto L7;
}
L7:
v3 = 1;
goto L9;
L8:
v3 = 0;
L9:
LOGD("6a:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
LOGD("70:iget-char \x76\x30\x2c\x20\x76\x38\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x43\x68\x61\x72\x32\x20\x43");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld6;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mChar2", "C");
v3 = (jchar) env->GetCharField(v0,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = 65535;
LOGD("7a:if-ne \x76\x30\x2c\x20\x76\x34\x2c\x20\x2b\x34");
if(v3 != v6) {
goto L11;
}
else {
goto L10;
}
L10:
v3 = 1;
goto L12;
L11:
v3 = 0;
L12:
LOGD("84:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
LOGD("8a:iget-short \x76\x30\x2c\x20\x76\x38\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x53\x68\x6f\x72\x74\x31\x20\x53");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld7;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mShort1", "S");
v3 = (jshort) env->GetShortField(v0,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("8e:if-ne \x76\x30\x2c\x20\x76\x32\x2c\x20\x2b\x34");
if(v3 != v5) {
goto L14;
}
else {
goto L13;
}
L13:
v3 = 1;
goto L15;
L14:
v3 = 0;
L15:
LOGD("98:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
LOGD("9e:iget-short \x76\x30\x2c\x20\x76\x38\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x53\x68\x6f\x72\x74\x32\x20\x53");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld8;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mShort2", "S");
v3 = (jshort) env->GetShortField(v0,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = -32768;
LOGD("a6:if-ne \x76\x30\x2c\x20\x76\x32\x2c\x20\x2b\x34");
if(v3 != v5) {
goto L17;
}
else {
goto L16;
}
L16:
v3 = 1;
goto L18;
L17:
v3 = 0;
L18:
LOGD("b0:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
LOGD("b6:iget \x76\x30\x2c\x20\x76\x38\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x49\x6e\x74\x31\x20\x49");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld9;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mInt1", "I");
v3 = (jint) env->GetIntField(v0,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = 65537;
LOGD("c0:if-ne \x76\x30\x2c\x20\x76\x32\x2c\x20\x2b\x34");
if(v3 != v5) {
goto L20;
}
else {
goto L19;
}
L19:
v3 = 1;
goto L21;
L20:
v3 = 0;
L21:
LOGD("ca:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
LOGD("d0:iget \x76\x30\x2c\x20\x76\x38\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x49\x6e\x74\x32\x20\x49");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld10;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mInt2", "I");
v3 = (jint) env->GetIntField(v0,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = -65537;
LOGD("da:if-ne \x76\x30\x2c\x20\x76\x32\x2c\x20\x2b\x34");
if(v3 != v5) {
goto L23;
}
else {
goto L22;
}
L22:
v3 = 1;
goto L24;
L23:
v3 = 0;
L24:
LOGD("e4:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
LOGD("ea:iget \x76\x30\x2c\x20\x76\x38\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x46\x6c\x6f\x61\x74\x31\x20\x46");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld11;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mFloat1", "F");
v7 = (jfloat) env->GetFloatField(v0,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v8 = d2c_bitcast_to_float(1078527525);
LOGD("f4:cmpl-float \x76\x32\x2c\x20\x76\x30\x2c\x20\x76\x32");
v5 = (v7 == v8) ? 0 : (v7 > v8) ? 1 : -1;
LOGD("f8:if-lez \x76\x32\x2c\x20\x2b\x62");
if(v5 <= 0){
goto L27;
}
else {
goto L25;
}
L25:
v8 = d2c_bitcast_to_float(1078531719);
LOGD("102:cmpg-float \x76\x30\x2c\x20\x76\x30\x2c\x20\x76\x32");
v3 = (v7 == v8) ? 0 : (v7 < v8) ? -1 : 1;
LOGD("106:if-gez \x76\x30\x2c\x20\x2b\x34");
if(v3 >= 0){
goto L27;
}
else {
goto L26;
}
L26:
v3 = 1;
goto L28;
L27:
v3 = 0;
L28:
LOGD("110:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
LOGD("116:iget \x76\x30\x2c\x20\x76\x38\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x46\x6c\x6f\x61\x74\x32\x20\x46");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld12;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mFloat2", "F");
v7 = (jfloat) env->GetFloatField(v0,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("11a:iget \x76\x32\x2c\x20\x76\x38\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x46\x6c\x6f\x61\x74\x31\x20\x46");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld11;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mFloat1", "F");
v8 = (jfloat) env->GetFloatField(v0,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("11e:cmpg-float \x76\x30\x2c\x20\x76\x30\x2c\x20\x76\x32");
v3 = (v7 == v8) ? 0 : (v7 < v8) ? -1 : 1;
LOGD("122:if-gez \x76\x30\x2c\x20\x2b\x34");
if(v3 >= 0){
goto L30;
}
else {
goto L29;
}
L29:
v3 = 1;
goto L31;
L30:
v3 = 0;
L31:
LOGD("12c:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
LOGD("132:iget-wide \x76\x34\x2c\x20\x76\x38\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x4c\x6f\x6e\x67\x31\x20\x4a");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld13;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mLong1", "J");
v9 = (jlong) env->GetLongField(v0,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v10 = 1234605616436508552;
LOGD("140:cmp-long \x76\x30\x2c\x20\x76\x34\x2c\x20\x76\x36");
v3 = (v9 == v10) ? 0 : (v9 > v10) ? 1 : -1;
LOGD("144:if-nez \x76\x30\x2c\x20\x2b\x34");
if(v3 != 0){
goto L33;
}
else {
goto L32;
}
L32:
v3 = 1;
goto L34;
L33:
v3 = 0;
L34:
LOGD("14e:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
LOGD("154:iget-wide \x76\x34\x2c\x20\x76\x38\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x4c\x6f\x6e\x67\x32\x20\x4a");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld14;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mLong2", "J");
v9 = (jlong) env->GetLongField(v0,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v10 = -1234605616436508552;
LOGD("162:cmp-long \x76\x30\x2c\x20\x76\x34\x2c\x20\x76\x36");
v3 = (v9 == v10) ? 0 : (v9 > v10) ? 1 : -1;
LOGD("166:if-nez \x76\x30\x2c\x20\x2b\x34");
if(v3 != 0){
goto L36;
}
else {
goto L35;
}
L35:
v3 = 1;
goto L37;
L36:
v3 = 0;
L37:
LOGD("170:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
LOGD("176:iget-wide \x76\x34\x2c\x20\x76\x38\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x44\x6f\x75\x62\x6c\x65\x31\x20\x44");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld15;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mDouble1", "D");
v11 = (jdouble) env->GetDoubleField(v0,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v12 = d2c_bitcast_to_double(4614256656550717752);
LOGD("184:cmpl-double \x76\x30\x2c\x20\x76\x34\x2c\x20\x76\x36");
v3 = (v11 == v12) ? 0 : (v11 > v12) ? 1 : -1;
LOGD("188:if-lez \x76\x30\x2c\x20\x2b\x64");
if(v3 <= 0){
goto L40;
}
else {
goto L38;
}
L38:
v12 = d2c_bitcast_to_double(4614256656552969552);
LOGD("196:cmpg-double \x76\x30\x2c\x20\x76\x34\x2c\x20\x76\x36");
v3 = (v11 == v12) ? 0 : (v11 < v12) ? -1 : 1;
LOGD("19a:if-gez \x76\x30\x2c\x20\x2b\x34");
if(v3 >= 0){
goto L40;
}
else {
goto L39;
}
L39:
v3 = 1;
goto L41;
L40:
v3 = 0;
L41:
LOGD("1a4:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
LOGD("1aa:iget-wide \x76\x34\x2c\x20\x76\x38\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x44\x6f\x75\x62\x6c\x65\x32\x20\x44");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld16;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mDouble2", "D");
v11 = (jdouble) env->GetDoubleField(v0,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1ae:iget-wide \x76\x36\x2c\x20\x76\x38\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x44\x6f\x75\x62\x6c\x65\x31\x20\x44");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld15;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mDouble1", "D");
v12 = (jdouble) env->GetDoubleField(v0,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1b2:cmpl-double \x76\x30\x2c\x20\x76\x34\x2c\x20\x76\x36");
v3 = (v11 == v12) ? 0 : (v11 > v12) ? 1 : -1;
LOGD("1b6:if-lez \x76\x30\x2c\x20\x2b\x34");
if(v3 <= 0){
goto L43;
}
else {
goto L42;
}
L42:
v3 = 1;
goto L44;
L43:
v3 = 0;
L44:
LOGD("1c0:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
LOGD("1c6:iget-wide \x76\x34\x2c\x20\x76\x38\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x56\x6f\x6c\x61\x74\x69\x6c\x65\x4c\x6f\x6e\x67\x31\x20\x4a");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld17;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mVolatileLong1", "J");
v9 = (jlong) env->GetLongField(v0,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v10 = 1234605616436508551;
LOGD("1d4:cmp-long \x76\x30\x2c\x20\x76\x34\x2c\x20\x76\x36");
v3 = (v9 == v10) ? 0 : (v9 > v10) ? 1 : -1;
LOGD("1d8:if-nez \x76\x30\x2c\x20\x2b\x34");
if(v3 != 0){
goto L46;
}
else {
goto L45;
}
L45:
v3 = 1;
goto L47;
L46:
v3 = 0;
L47:
LOGD("1e2:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
LOGD("1e8:iget-wide \x76\x34\x2c\x20\x76\x38\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x56\x6f\x6c\x61\x74\x69\x6c\x65\x4c\x6f\x6e\x67\x32\x20\x4a");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld18;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mVolatileLong2", "J");
v9 = (jlong) env->GetLongField(v0,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v10 = -1234605616436508551;
LOGD("1f6:cmp-long \x76\x30\x2c\x20\x76\x34\x2c\x20\x76\x36");
v3 = (v9 == v10) ? 0 : (v9 > v10) ? 1 : -1;
LOGD("1fa:if-nez \x76\x30\x2c\x20\x2b\x33");
if(v3 != 0){
goto L49;
}
else {
goto L48;
}
L48:
goto L50;
L49:
v4 = 0;
L50:
LOGD("202:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v4}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("208:iget-object \x76\x30\x2c\x20\x76\x38\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x53\x74\x72\x69\x6e\x67\x31\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld19;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mString1", "Ljava/lang/String;");
v13 = (jstring) env->GetObjectField(v0,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jobject) v13;
LOGD("20c:const-string \x76\x31\x2c\x20\x27\x41\x41\x27");
if (v2) {
LOGD("env->DeleteLocalRef(%p):v2", v2);
env->DeleteLocalRef(v2);
}
v2 = (jstring) env->NewStringUTF("\x41\x41");
LOGD("210:invoke-virtual \x76\x30\x2c\x20\x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x2d\x3e\x65\x71\x75\x61\x6c\x73\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b\x29\x5a");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
jclass &clz = cls4;
jmethodID &mid = mth2;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/String", "equals", "(Ljava/lang/Object;)Z");
jvalue args[] = {{.l = v2}};
v14 = (jboolean) env->CallBooleanMethodA(v1, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("216:move-result \x76\x30");
v3 = (jint) v14;
LOGD("218:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
LOGD("21e:iget-object \x76\x30\x2c\x20\x76\x38\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x73\x74\x46\x69\x65\x6c\x64\x3b\x2d\x3e\x6d\x53\x74\x72\x69\x6e\x67\x32\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jfieldID &fld = fld20;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/InstField", "mString2", "Ljava/lang/String;");
v13 = (jstring) env->GetObjectField(v0,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jobject) v13;
LOGD("222:const-string \x76\x31\x2c\x20\x27\x42\x42\x27");
if (v2) {
LOGD("env->DeleteLocalRef(%p):v2", v2);
env->DeleteLocalRef(v2);
}
v2 = (jstring) env->NewStringUTF("\x42\x42");
LOGD("226:invoke-virtual \x76\x30\x2c\x20\x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x2d\x3e\x65\x71\x75\x61\x6c\x73\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b\x29\x5a");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
jclass &clz = cls4;
jmethodID &mid = mth2;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/String", "equals", "(Ljava/lang/Object;)Z");
jvalue args[] = {{.l = v2}};
v14 = (jboolean) env->CallBooleanMethodA(v1, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("22c:move-result \x76\x30");
v3 = (jint) v14;
LOGD("22e:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
return;
EX_UnwindBlock: return;
}
