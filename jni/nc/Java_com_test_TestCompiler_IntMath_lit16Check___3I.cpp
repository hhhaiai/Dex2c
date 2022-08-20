#include "Dex2C.h"

/* Lcom/test/TestCompiler/IntMath;->lit16Check([I)V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_IntMath_lit16Check___3I(JNIEnv *env, jobject thiz, jarray p4){
jobject v0 = NULL;
jint v1;
jint v2;
jint v3;
jint v4;
jclass cls0 = NULL;
jmethodID mth0 = NULL;
v0 = (jobject)env->NewLocalRef(p4);
L0:
v1 = 0;
v1 = 0;
LOGD("2:aget \x76\x31\x2c\x20\x76\x34\x2c\x20\x76\x30");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v1, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v3 = 1;
v4 = 78777;
LOGD("e:if-ne \x76\x31\x2c\x20\x76\x33\x2c\x20\x2b\x34");
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
LOGD("18:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v2}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1e:aget \x76\x31\x2c\x20\x76\x34\x2c\x20\x76\x32");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v3, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v4 = -76777;
LOGD("28:if-ne \x76\x31\x2c\x20\x76\x33\x2c\x20\x2b\x34");
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
LOGD("32:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v2}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v2 = 2;
LOGD("3a:aget \x76\x31\x2c\x20\x76\x34\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v2, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v4 = 77777000;
LOGD("44:if-ne \x76\x31\x2c\x20\x76\x33\x2c\x20\x2b\x34");
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
LOGD("4e:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v2}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v2 = 3;
LOGD("56:aget \x76\x31\x2c\x20\x76\x34\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v2, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v4 = 77;
LOGD("5e:if-ne \x76\x31\x2c\x20\x76\x33\x2c\x20\x2b\x34");
if(v2 != v4) {
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
LOGD("68:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v2}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v2 = 4;
LOGD("70:aget \x76\x31\x2c\x20\x76\x34\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v2, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v4 = 777;
LOGD("78:if-ne \x76\x31\x2c\x20\x76\x33\x2c\x20\x2b\x34");
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
LOGD("82:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v2}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v2 = 5;
LOGD("8a:aget \x76\x31\x2c\x20\x76\x34\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v2, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v4 = 960;
LOGD("92:if-ne \x76\x31\x2c\x20\x76\x33\x2c\x20\x2b\x34");
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
LOGD("9c:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v2}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v2 = 6;
LOGD("a4:aget \x76\x31\x2c\x20\x76\x34\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v2, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v4 = -39;
LOGD("ac:if-ne \x76\x31\x2c\x20\x76\x33\x2c\x20\x2b\x34");
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
LOGD("b6:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v2}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v2 = 7;
LOGD("be:aget \x76\x31\x2c\x20\x76\x34\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v2, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v4 = -76855;
LOGD("c8:if-ne \x76\x31\x2c\x20\x76\x33\x2c\x20\x2b\x34");
if(v2 != v4) {
goto L23;
}
else {
goto L22;
}
L22:
v1 = 1;
L23:
LOGD("d0:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v1}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;
EX_UnwindBlock: return;
}
