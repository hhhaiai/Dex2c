#include "Dex2C.h"

/* Lcom/test/TestCompiler/IntMath;->longOperCheck([J)V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_IntMath_longOperCheck___3J(JNIEnv *env, jobject thiz, jarray p18){
jobject v0 = NULL;
jobject v1 = NULL;
jobject v2 = NULL;
jobject v3 = NULL;
jlong v4;
jint v5;
jlong v6;
jlong v7;
jlong v8;
jint v9;
jint v10;
jint v11;
jlong v12;
jlong v13;
jint v14;
jlong v15;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL;
jfieldID fld0 = NULL;
jmethodID mth0 = NULL, mth1 = NULL;
v0 = (jobject)env->NewLocalRef(p18);
L0:
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jobject) env->NewLocalRef(v0);
LOGD("4:sget-object \x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x79\x73\x74\x65\x6d\x3b\x2d\x3e\x6f\x75\x74\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x50\x72\x69\x6e\x74\x53\x74\x72\x65\x61\x6d\x3b");
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
LOGD("8:const-string \x76\x32\x2c\x20\x27\x49\x6e\x74\x4d\x61\x74\x68\x2e\x6c\x6f\x6e\x67\x4f\x70\x65\x72\x43\x68\x65\x63\x6b\x27");
if (v3) {
LOGD("env->DeleteLocalRef(%p):v3", v3);
env->DeleteLocalRef(v3);
}
v3 = (jstring) env->NewStringUTF("\x49\x6e\x74\x4d\x61\x74\x68\x2e\x6c\x6f\x6e\x67\x4f\x70\x65\x72\x43\x68\x65\x63\x6b");
LOGD("c:invoke-virtual \x76\x31\x2c\x20\x76\x32\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x50\x72\x69\x6e\x74\x53\x74\x72\x65\x61\x6d\x3b\x2d\x3e\x70\x72\x69\x6e\x74\x6c\x6e\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x29\x56");
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
v4 = -9223372036854775808;
v4 = -9223372036854775808;
v5 = 5;
v5 = 5;
LOGD("18:aget-wide \x76\x34\x2c\x20\x76\x30\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
{jlong val;env->GetLongArrayRegion((jlongArray) v1, (jint) v5, 1, &val);v6 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1c:neg-long \x76\x34\x2c\x20\x76\x34");
v6 = (- v6);
v7 = 1;
v7 = 1;
LOGD("22:add-long \x76\x38\x2c\x20\x76\x31\x2c\x20\x76\x36");
v8 = (v4 + v7);
LOGD("26:sub-long/2addr \x76\x38\x2c\x20\x76\x36");
v8 = (v8 - v7);
LOGD("28:div-long/2addr \x76\x38\x2c\x20\x76\x34");
{
#define EX_HANDLE EX_UnwindBlock
if (v6 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v8 = v8 / v6;
}
LOGD("2a:div-long/2addr \x76\x38\x2c\x20\x76\x34");
{
#define EX_HANDLE EX_UnwindBlock
if (v6 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v8 = v8 / v6;
}
v9 = 1;
v9 = 1;
v10 = 0;
LOGD("30:cmp-long \x76\x31\x32\x2c\x20\x76\x38\x2c\x20\x76\x31");
v11 = (v8 == v4) ? 0 : (v8 > v4) ? 1 : -1;
LOGD("34:if-nez \x76\x31\x32\x2c\x20\x2b\x34");
if(v11 != 0){
goto L2;
}
else {
goto L1;
}
L1:
v11 = 1;
goto L3;
L2:
v11 = 0;
L3:
LOGD("3e:invoke-static \x76\x31\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v11}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("44:aget-wide \x76\x31\x32\x2c\x20\x76\x30\x2c\x20\x76\x31\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
{jlong val;env->GetLongArrayRegion((jlongArray) v1, (jint) v10, 1, &val);v12 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v13 = 69999999997;
LOGD("52:cmp-long \x76\x31\x36\x2c\x20\x76\x31\x32\x2c\x20\x76\x31\x34");
v14 = (v12 == v13) ? 0 : (v12 > v13) ? 1 : -1;
LOGD("56:if-nez \x76\x31\x36\x2c\x20\x2b\x34");
if(v14 != 0){
goto L5;
}
else {
goto L4;
}
L4:
v11 = 1;
goto L6;
L5:
v11 = 0;
L6:
LOGD("60:invoke-static \x76\x31\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v11}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("66:aget-wide \x76\x31\x32\x2c\x20\x76\x30\x2c\x20\x76\x31\x30");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
{jlong val;env->GetLongArrayRegion((jlongArray) v1, (jint) v9, 1, &val);v12 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v13 = 70000000003;
LOGD("74:cmp-long \x76\x31\x36\x2c\x20\x76\x31\x32\x2c\x20\x76\x31\x34");
v14 = (v12 == v13) ? 0 : (v12 > v13) ? 1 : -1;
LOGD("78:if-nez \x76\x31\x36\x2c\x20\x2b\x34");
if(v14 != 0){
goto L8;
}
else {
goto L7;
}
L7:
v11 = 1;
goto L9;
L8:
v11 = 0;
L9:
LOGD("82:invoke-static \x76\x31\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v11}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v11 = 2;
LOGD("8a:aget-wide \x76\x31\x32\x2c\x20\x76\x30\x2c\x20\x76\x31\x32");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
{jlong val;env->GetLongArrayRegion((jlongArray) v1, (jint) v11, 1, &val);v12 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v13 = -210000000000;
LOGD("98:cmp-long \x76\x31\x36\x2c\x20\x76\x31\x32\x2c\x20\x76\x31\x34");
v14 = (v12 == v13) ? 0 : (v12 > v13) ? 1 : -1;
LOGD("9c:if-nez \x76\x31\x36\x2c\x20\x2b\x34");
if(v14 != 0){
goto L11;
}
else {
goto L10;
}
L10:
v11 = 1;
goto L12;
L11:
v11 = 0;
L12:
LOGD("a6:invoke-static \x76\x31\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v11}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v11 = 3;
LOGD("ae:aget-wide \x76\x31\x32\x2c\x20\x76\x30\x2c\x20\x76\x31\x32");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
{jlong val;env->GetLongArrayRegion((jlongArray) v1, (jint) v11, 1, &val);v12 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v13 = -6833923606740729856;
LOGD("bc:cmp-long \x76\x31\x36\x2c\x20\x76\x31\x32\x2c\x20\x76\x31\x34");
v14 = (v12 == v13) ? 0 : (v12 > v13) ? 1 : -1;
LOGD("c0:if-nez \x76\x31\x36\x2c\x20\x2b\x34");
if(v14 != 0){
goto L14;
}
else {
goto L13;
}
L13:
v11 = 1;
goto L15;
L14:
v11 = 0;
L15:
LOGD("ca:invoke-static \x76\x31\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v11}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v11 = 4;
LOGD("d2:aget-wide \x76\x31\x32\x2c\x20\x76\x30\x2c\x20\x76\x31\x32");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
{jlong val;env->GetLongArrayRegion((jlongArray) v1, (jint) v11, 1, &val);v12 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v13 = -23333333333;
LOGD("e0:cmp-long \x76\x31\x36\x2c\x20\x76\x31\x32\x2c\x20\x76\x31\x34");
v14 = (v12 == v13) ? 0 : (v12 > v13) ? 1 : -1;
LOGD("e4:if-nez \x76\x31\x36\x2c\x20\x2b\x34");
if(v14 != 0){
goto L17;
}
else {
goto L16;
}
L16:
v11 = 1;
goto L18;
L17:
v11 = 0;
L18:
LOGD("ee:invoke-static \x76\x31\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v11}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("f4:aget-wide \x76\x31\x32\x2c\x20\x76\x30\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
{jlong val;env->GetLongArrayRegion((jlongArray) v1, (jint) v5, 1, &val);v12 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v13 = 1;
LOGD("fc:cmp-long \x76\x33\x2c\x20\x76\x31\x32\x2c\x20\x76\x31\x34");
v5 = (v12 == v13) ? 0 : (v12 > v13) ? 1 : -1;
LOGD("100:if-nez \x76\x33\x2c\x20\x2b\x34");
if(v5 != 0){
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
LOGD("10a:invoke-static \x76\x33\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v5}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = 6;
LOGD("112:aget-wide \x76\x31\x32\x2c\x20\x76\x30\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
{jlong val;env->GetLongArrayRegion((jlongArray) v1, (jint) v5, 1, &val);v12 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v13 = 70000000000;
v13 = 70000000000;
LOGD("120:cmp-long \x76\x33\x2c\x20\x76\x31\x32\x2c\x20\x76\x31\x34");
v5 = (v12 == v13) ? 0 : (v12 > v13) ? 1 : -1;
LOGD("124:if-nez \x76\x33\x2c\x20\x2b\x34");
if(v5 != 0){
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
LOGD("12e:invoke-static \x76\x33\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v5}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = 7;
LOGD("136:aget-wide \x76\x31\x32\x2c\x20\x76\x30\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
{jlong val;env->GetLongArrayRegion((jlongArray) v1, (jint) v5, 1, &val);v12 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v15 = -3;
LOGD("13e:cmp-long \x76\x33\x2c\x20\x76\x31\x32\x2c\x20\x76\x31\x36");
v5 = (v12 == v15) ? 0 : (v12 > v15) ? 1 : -1;
LOGD("142:if-nez \x76\x33\x2c\x20\x2b\x34");
if(v5 != 0){
goto L26;
}
else {
goto L25;
}
L25:
v5 = 1;
goto L27;
L26:
v5 = 0;
L27:
LOGD("14c:invoke-static \x76\x33\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v5}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = 8;
LOGD("156:aget-wide \x76\x31\x32\x2c\x20\x76\x30\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
{jlong val;env->GetLongArrayRegion((jlongArray) v1, (jint) v5, 1, &val);v12 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v15 = -70000000003;
LOGD("164:cmp-long \x76\x33\x2c\x20\x76\x31\x32\x2c\x20\x76\x31\x36");
v5 = (v12 == v15) ? 0 : (v12 > v15) ? 1 : -1;
LOGD("168:if-nez \x76\x33\x2c\x20\x2b\x34");
if(v5 != 0){
goto L29;
}
else {
goto L28;
}
L28:
v5 = 1;
goto L30;
L29:
v5 = 0;
L30:
LOGD("172:invoke-static \x76\x33\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v5}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = 9;
LOGD("17c:aget-wide \x76\x31\x32\x2c\x20\x76\x30\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
{jlong val;env->GetLongArrayRegion((jlongArray) v1, (jint) v5, 1, &val);v12 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("180:cmp-long \x76\x33\x2c\x20\x76\x31\x32\x2c\x20\x76\x31\x34");
v5 = (v12 == v13) ? 0 : (v12 > v13) ? 1 : -1;
LOGD("184:if-nez \x76\x33\x2c\x20\x2b\x34");
if(v5 != 0){
goto L32;
}
else {
goto L31;
}
L31:
v5 = 1;
goto L33;
L32:
v5 = 0;
L33:
LOGD("18e:invoke-static \x76\x33\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v5}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("194:array-length \x76\x33\x2c\x20\x76\x30");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
v5 = env->GetArrayLength((jarray) v1);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v11 = 10;
LOGD("19a:if-ne \x76\x33\x2c\x20\x76\x31\x32\x2c\x20\x2b\x33");
if(v5 != v11) {
goto L35;
}
else {
goto L34;
}
L34:
goto L36;
L35:
v9 = 0;
L36:
LOGD("1a2:invoke-static \x76\x31\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v9}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;
EX_UnwindBlock: return;
}
