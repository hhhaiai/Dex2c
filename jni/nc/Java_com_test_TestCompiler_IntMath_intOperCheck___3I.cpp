#include "Dex2C.h"

/* Lcom/test/TestCompiler/IntMath;->intOperCheck([I)V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_IntMath_intOperCheck___3I(JNIEnv *env, jobject thiz, jarray p9){
jobject v0 = NULL;
jobject v1 = NULL;
jobject v2 = NULL;
jint v3;
jint v4;
jint v5;
jint v6;
jint v7;
jint v8;
jint v9;
jint v10;
jint v11;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL;
jfieldID fld0 = NULL;
jmethodID mth0 = NULL, mth1 = NULL;
v0 = (jobject)env->NewLocalRef(p9);
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
LOGD("4:const-string \x76\x31\x2c\x20\x27\x49\x6e\x74\x4d\x61\x74\x68\x2e\x69\x6e\x74\x4f\x70\x65\x72\x43\x68\x65\x63\x6b\x27");
if (v2) {
LOGD("env->DeleteLocalRef(%p):v2", v2);
env->DeleteLocalRef(v2);
}
v2 = (jstring) env->NewStringUTF("\x49\x6e\x74\x4d\x61\x74\x68\x2e\x69\x6e\x74\x4f\x70\x65\x72\x43\x68\x65\x63\x6b");
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
v3 = -2147483648;
v3 = -2147483648;
v4 = 5;
v4 = 5;
LOGD("14:aget \x76\x32\x2c\x20\x76\x39\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v4, 1, &val);v5 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("18:neg-int \x76\x32\x2c\x20\x76\x32");
v5 = (- v5);
v6 = 1;
v6 = 1;
LOGD("1c:add-int \x76\x34\x2c\x20\x76\x30\x2c\x20\x76\x33");
v7 = (v3 + v6);
LOGD("20:sub-int/2addr \x76\x34\x2c\x20\x76\x33");
v7 = (v7 - v6);
LOGD("22:div-int/2addr \x76\x34\x2c\x20\x76\x32");
{
#define EX_HANDLE EX_UnwindBlock
if (v5 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v7 = v7 / v5;
}
LOGD("24:div-int/2addr \x76\x34\x2c\x20\x76\x32");
{
#define EX_HANDLE EX_UnwindBlock
if (v5 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v7 = v7 / v5;
}
v8 = 0;
v8 = 0;
v9 = 1;
v9 = 1;
LOGD("2a:if-ne \x76\x34\x2c\x20\x76\x30\x2c\x20\x2b\x34");
if(v7 != v3) {
goto L2;
}
else {
goto L1;
}
L1:
v10 = 1;
goto L3;
L2:
v10 = 0;
L3:
LOGD("34:invoke-static \x76\x37\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v10}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("3a:aget \x76\x37\x2c\x20\x76\x39\x2c\x20\x76\x35");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v8, 1, &val);v10 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v11 = 69997;
LOGD("44:if-ne \x76\x37\x2c\x20\x76\x38\x2c\x20\x2b\x34");
if(v10 != v11) {
goto L5;
}
else {
goto L4;
}
L4:
v10 = 1;
goto L6;
L5:
v10 = 0;
L6:
LOGD("4e:invoke-static \x76\x37\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v10}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("54:aget \x76\x37\x2c\x20\x76\x39\x2c\x20\x76\x36");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v9, 1, &val);v10 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v11 = 70003;
LOGD("5e:if-ne \x76\x37\x2c\x20\x76\x38\x2c\x20\x2b\x34");
if(v10 != v11) {
goto L8;
}
else {
goto L7;
}
L7:
v10 = 1;
goto L9;
L8:
v10 = 0;
L9:
LOGD("68:invoke-static \x76\x37\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v10}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v10 = 2;
LOGD("70:aget \x76\x37\x2c\x20\x76\x39\x2c\x20\x76\x37");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v10, 1, &val);v10 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v11 = -210000;
LOGD("7a:if-ne \x76\x37\x2c\x20\x76\x38\x2c\x20\x2b\x34");
if(v10 != v11) {
goto L11;
}
else {
goto L10;
}
L10:
v10 = 1;
goto L12;
L11:
v10 = 0;
L12:
LOGD("84:invoke-static \x76\x37\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v10}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v10 = 3;
LOGD("8c:aget \x76\x37\x2c\x20\x76\x39\x2c\x20\x76\x37");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v10, 1, &val);v10 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v11 = 605032704;
LOGD("96:if-ne \x76\x37\x2c\x20\x76\x38\x2c\x20\x2b\x34");
if(v10 != v11) {
goto L14;
}
else {
goto L13;
}
L13:
v10 = 1;
goto L15;
L14:
v10 = 0;
L15:
LOGD("a0:invoke-static \x76\x37\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v10}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v10 = 4;
LOGD("a8:aget \x76\x37\x2c\x20\x76\x39\x2c\x20\x76\x37");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v10, 1, &val);v10 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v11 = -23333;
LOGD("b0:if-ne \x76\x37\x2c\x20\x76\x38\x2c\x20\x2b\x34");
if(v10 != v11) {
goto L17;
}
else {
goto L16;
}
L16:
v10 = 1;
goto L18;
L17:
v10 = 0;
L18:
LOGD("ba:invoke-static \x76\x37\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v10}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("c0:aget \x76\x31\x2c\x20\x76\x39\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v4, 1, &val);v4 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("c4:if-ne \x76\x31\x2c\x20\x76\x36\x2c\x20\x2b\x34");
if(v4 != v9) {
goto L20;
}
else {
goto L19;
}
L19:
v4 = 1;
goto L21;
L20:
v4 = 0;
L21:
LOGD("ce:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
v4 = 6;
LOGD("d6:aget \x76\x31\x2c\x20\x76\x39\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v4, 1, &val);v4 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v10 = 70000;
v10 = 70000;
LOGD("e0:if-ne \x76\x31\x2c\x20\x76\x37\x2c\x20\x2b\x34");
if(v4 != v10) {
goto L23;
}
else {
goto L22;
}
L22:
v4 = 1;
goto L24;
L23:
v4 = 0;
L24:
LOGD("ea:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
v4 = 7;
LOGD("f2:aget \x76\x31\x2c\x20\x76\x39\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v4, 1, &val);v4 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v11 = -3;
LOGD("f8:if-ne \x76\x31\x2c\x20\x76\x38\x2c\x20\x2b\x34");
if(v4 != v11) {
goto L26;
}
else {
goto L25;
}
L25:
v4 = 1;
goto L27;
L26:
v4 = 0;
L27:
LOGD("102:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
v4 = 8;
LOGD("10c:aget \x76\x31\x2c\x20\x76\x39\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v4, 1, &val);v4 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v11 = -70003;
LOGD("116:if-ne \x76\x31\x2c\x20\x76\x38\x2c\x20\x2b\x34");
if(v4 != v11) {
goto L29;
}
else {
goto L28;
}
L28:
v4 = 1;
goto L30;
L29:
v4 = 0;
L30:
LOGD("120:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
v4 = 9;
LOGD("12a:aget \x76\x31\x2c\x20\x76\x39\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jint val;env->GetIntArrayRegion((jintArray) v0, (jint) v4, 1, &val);v4 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("12e:if-ne \x76\x31\x2c\x20\x76\x37\x2c\x20\x2b\x34");
if(v4 != v10) {
goto L32;
}
else {
goto L31;
}
L31:
v8 = 1;
L32:
LOGD("136:invoke-static \x76\x35\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v8}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;
EX_UnwindBlock: return;
}
