#include "Dex2C.h"

/* Lcom/test/TestCompiler/IntMath;->lit8Check([I)V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_IntMath_lit8Check___3I(JNIEnv *env, jobject thiz, jarray p6){
jobject v0 = NULL;
jint v1;
jint v2;
jint v3;
jint v4;
jint v5;
jint v6;
jclass cls0 = NULL;
jmethodID mth0 = NULL;
v0 = (jobject)env->NewLocalRef(p6);
L0:
v1 = -2147483648;
v1 = -2147483648;
LOGD("4:div-int/lit8 \x76\x31\x2c\x20\x76\x30\x2c\x20\x2d\x31");
{
#define EX_HANDLE EX_UnwindBlock
if (-1 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v2 = v1 / -1;
}
v3 = 1;
v3 = 1;
v4 = 0;
LOGD("c:if-ne \x76\x31\x2c\x20\x76\x30\x2c\x20\x2b\x34");
if(v2 != v1) {
goto L2;
}
else {
goto L1;
}
L1:
v5 = 1;
goto L3;
L2:
v5 = 0;
L3:
LOGD("16:invoke-static \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v5}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1c:aget \x76\x34\x2c\x20\x76\x36\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v4, 1, &val);v5 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = -55545;
LOGD("26:if-ne \x76\x34\x2c\x20\x76\x35\x2c\x20\x2b\x34");
if(v5 != v6) {
goto L5;
}
else {
goto L4;
}
L4:
v5 = 1;
goto L6;
L5:
v5 = 0;
L6:
LOGD("30:invoke-static \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v5}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("36:aget \x76\x34\x2c\x20\x76\x36\x2c\x20\x76\x32");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v3, 1, &val);v5 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = 55565;
LOGD("40:if-ne \x76\x34\x2c\x20\x76\x35\x2c\x20\x2b\x34");
if(v5 != v6) {
goto L8;
}
else {
goto L7;
}
L7:
v5 = 1;
goto L9;
L8:
v5 = 0;
L9:
LOGD("4a:invoke-static \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v5}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = 2;
LOGD("52:aget \x76\x34\x2c\x20\x76\x36\x2c\x20\x76\x34");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v5, 1, &val);v5 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = -555550;
LOGD("5c:if-ne \x76\x34\x2c\x20\x76\x35\x2c\x20\x2b\x34");
if(v5 != v6) {
goto L11;
}
else {
goto L10;
}
L10:
v5 = 1;
goto L12;
L11:
v5 = 0;
L12:
LOGD("66:invoke-static \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v5}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = 3;
LOGD("6e:aget \x76\x34\x2c\x20\x76\x36\x2c\x20\x76\x34");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v5, 1, &val);v5 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = -5555;
LOGD("76:if-ne \x76\x34\x2c\x20\x76\x35\x2c\x20\x2b\x34");
if(v5 != v6) {
goto L14;
}
else {
goto L13;
}
L13:
v5 = 1;
goto L15;
L14:
v5 = 0;
L15:
LOGD("80:invoke-static \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v5}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = 4;
LOGD("88:aget \x76\x34\x2c\x20\x76\x36\x2c\x20\x76\x34");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v5, 1, &val);v5 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = -5;
LOGD("8e:if-ne \x76\x34\x2c\x20\x76\x35\x2c\x20\x2b\x34");
if(v5 != v6) {
goto L17;
}
else {
goto L16;
}
L16:
v5 = 1;
goto L18;
L17:
v5 = 0;
L18:
LOGD("98:invoke-static \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v5}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = 5;
LOGD("a0:aget \x76\x34\x2c\x20\x76\x36\x2c\x20\x76\x34");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v5, 1, &val);v5 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = 8;
LOGD("a8:if-ne \x76\x34\x2c\x20\x76\x35\x2c\x20\x2b\x34");
if(v5 != v6) {
goto L20;
}
else {
goto L19;
}
L19:
v5 = 1;
goto L21;
L20:
v5 = 0;
L21:
LOGD("b2:invoke-static \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v5}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = 6;
LOGD("ba:aget \x76\x34\x2c\x20\x76\x36\x2c\x20\x76\x34");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v5, 1, &val);v5 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = -1;
LOGD("c0:if-ne \x76\x34\x2c\x20\x76\x35\x2c\x20\x2b\x34");
if(v5 != v6) {
goto L23;
}
else {
goto L22;
}
L22:
v5 = 1;
goto L24;
L23:
v5 = 0;
L24:
LOGD("ca:invoke-static \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v5}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = 7;
LOGD("d2:aget \x76\x34\x2c\x20\x76\x36\x2c\x20\x76\x34");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v5, 1, &val);v5 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = 55563;
LOGD("dc:if-ne \x76\x34\x2c\x20\x76\x35\x2c\x20\x2b\x33");
if(v5 != v6) {
goto L26;
}
else {
goto L25;
}
L25:
goto L27;
L26:
v3 = 0;
L27:
LOGD("e4:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v3}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;
EX_UnwindBlock: return;
}
