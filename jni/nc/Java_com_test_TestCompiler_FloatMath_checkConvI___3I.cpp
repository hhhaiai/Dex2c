#include "Dex2C.h"

/* Lcom/test/TestCompiler/FloatMath;->checkConvI([I)V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_FloatMath_checkConvI___3I(JNIEnv *env, jobject thiz, jarray p4){
jobject v0 = NULL;
jobject v1 = NULL;
jobject v2 = NULL;
jint v3;
jint v4;
jint v5;
jint v6;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL;
jfieldID fld0 = NULL;
jmethodID mth0 = NULL, mth1 = NULL;
v0 = (jobject)env->NewLocalRef(p4);
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
LOGD("4:const-string \x76\x31\x2c\x20\x27\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x2e\x63\x68\x65\x63\x6b\x43\x6f\x6e\x76\x49\x27");
if (v2) {
LOGD("env->DeleteLocalRef(%p):v2", v2);
env->DeleteLocalRef(v2);
}
v2 = (jstring) env->NewStringUTF("\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x2e\x63\x68\x65\x63\x6b\x43\x6f\x6e\x76\x49");
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
v3 = 0;
v3 = 0;
LOGD("10:aget \x76\x31\x2c\x20\x76\x34\x2c\x20\x76\x30");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v3, 1, &val);v4 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = 1;
v6 = 1144201745;
LOGD("1c:if-ne \x76\x31\x2c\x20\x76\x33\x2c\x20\x2b\x34");
if(v4 != v6) {
goto L2;
}
else {
goto L1;
}
L1:
v4 = 1;
goto L3;
L2:
v4 = 0;
L3:
LOGD("26:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v4}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("2c:aget \x76\x31\x2c\x20\x76\x34\x2c\x20\x76\x32");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v5, 1, &val);v4 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = 123;
LOGD("34:if-ne \x76\x31\x2c\x20\x76\x33\x2c\x20\x2b\x34");
if(v4 != v6) {
goto L5;
}
else {
goto L4;
}
L4:
v4 = 1;
goto L6;
L5:
v4 = 0;
L6:
LOGD("3e:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v4}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v4 = 2;
LOGD("46:aget \x76\x31\x2c\x20\x76\x34\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v4, 1, &val);v4 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = -3;
LOGD("4c:if-ne \x76\x31\x2c\x20\x76\x33\x2c\x20\x2b\x34");
if(v4 != v6) {
goto L8;
}
else {
goto L7;
}
L7:
v4 = 1;
goto L9;
L8:
v4 = 0;
L9:
LOGD("56:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v4}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v4 = 3;
LOGD("5e:aget \x76\x31\x2c\x20\x76\x34\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v4, 1, &val);v4 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = 2147483647;
LOGD("68:if-ne \x76\x31\x2c\x20\x76\x33\x2c\x20\x2b\x34");
if(v4 != v6) {
goto L11;
}
else {
goto L10;
}
L10:
v4 = 1;
goto L12;
L11:
v4 = 0;
L12:
LOGD("72:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v4}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v4 = 4;
LOGD("7a:aget \x76\x31\x2c\x20\x76\x34\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v4, 1, &val);v4 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = -2147483648;
LOGD("82:if-ne \x76\x31\x2c\x20\x76\x33\x2c\x20\x2b\x34");
if(v4 != v6) {
goto L14;
}
else {
goto L13;
}
L13:
v4 = 1;
goto L15;
L14:
v4 = 0;
L15:
LOGD("8c:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v4}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v4 = 5;
LOGD("94:aget \x76\x31\x2c\x20\x76\x34\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v4, 1, &val);v4 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("98:if-nez \x76\x31\x2c\x20\x2b\x34");
if(v4 != 0){
goto L17;
}
else {
goto L16;
}
L16:
v3 = 1;
L17:
LOGD("a0:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
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
