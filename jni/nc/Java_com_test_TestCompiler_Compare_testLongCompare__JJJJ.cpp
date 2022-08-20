#include "Dex2C.h"

/* Lcom/test/TestCompiler/Compare;->testLongCompare(JJJJ)V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_Compare_testLongCompare__JJJJ(JNIEnv *env, jobject thiz, jlong p6, jlong p8, jlong p10, jlong p12){
jlong v0;
jlong v1;
jlong v2;
jlong v3;
jobject v4 = NULL;
jobject v5 = NULL;
jint v6;
jint v7;
jlong v8;
jlong v9;
jint v10;
jint v11;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL;
jfieldID fld0 = NULL;
jmethodID mth0 = NULL, mth1 = NULL;
v0 = (jlong)p6;
v1 = (jlong)p8;
v2 = (jlong)p10;
v3 = (jlong)p12;
L0:
LOGD("0:sget-object \x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x79\x73\x74\x65\x6d\x3b\x2d\x3e\x6f\x75\x74\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x50\x72\x69\x6e\x74\x53\x74\x72\x65\x61\x6d\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v4) {
LOGD("env->DeleteLocalRef(%p):v4", v4);
env->DeleteLocalRef(v4);
}
jclass &clz = cls0;
jfieldID &fld = fld0;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "java/lang/System", "out", "Ljava/io/PrintStream;");
v4 = (jobject) env->GetStaticObjectField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("4:const-string \x76\x31\x2c\x20\x27\x49\x6e\x74\x4d\x61\x74\x68\x2e\x74\x65\x73\x74\x4c\x6f\x6e\x67\x43\x6f\x6d\x70\x61\x72\x65\x27");
if (v5) {
LOGD("env->DeleteLocalRef(%p):v5", v5);
env->DeleteLocalRef(v5);
}
v5 = (jstring) env->NewStringUTF("\x49\x6e\x74\x4d\x61\x74\x68\x2e\x74\x65\x73\x74\x4c\x6f\x6e\x67\x43\x6f\x6d\x70\x61\x72\x65");
LOGD("8:invoke-virtual \x76\x30\x2c\x20\x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x50\x72\x69\x6e\x74\x53\x74\x72\x65\x61\x6d\x3b\x2d\x3e\x70\x72\x69\x6e\x74\x6c\x6e\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v4);
jclass &clz = cls1;
jmethodID &mid = mth0;
D2C_RESOLVE_METHOD(clz, mid, "java/io/PrintStream", "println", "(Ljava/lang/String;)V");
jvalue args[] = {{.l = v5}};
env->CallVoidMethodA(v4, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = 0;
v6 = 0;
v6 = 0;
v6 = 0;
v6 = 0;
v6 = 0;
v6 = 0;
v6 = 0;
v6 = 0;
v6 = 0;
v6 = 0;
v6 = 0;
LOGD("10:cmp-long \x76\x31\x2c\x20\x76\x36\x2c\x20\x76\x31\x30");
v7 = (v0 == v2) ? 0 : (v0 > v2) ? 1 : -1;
LOGD("14:if-lez \x76\x31\x2c\x20\x2b\x36");
if(v7 <= 0){
goto L2;
}
else {
goto L1;
}
L1:
LOGD("18:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v6}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
goto L3;
L2:
L3:
LOGD("22:cmp-long \x76\x31\x2c\x20\x76\x31\x30\x2c\x20\x76\x36");
v7 = (v2 == v0) ? 0 : (v2 > v0) ? 1 : -1;
LOGD("26:if-gez \x76\x31\x2c\x20\x2b\x36");
if(v7 >= 0){
goto L5;
}
else {
goto L4;
}
L4:
LOGD("2a:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v6}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
goto L6;
L5:
L6:
LOGD("34:cmp-long \x76\x31\x2c\x20\x76\x31\x30\x2c\x20\x76\x36");
v7 = (v2 == v0) ? 0 : (v2 > v0) ? 1 : -1;
LOGD("38:if-nez \x76\x31\x2c\x20\x2b\x36");
if(v7 != 0){
goto L8;
}
else {
goto L7;
}
L7:
LOGD("3c:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v6}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
goto L9;
L8:
L9:
v8 = 1;
v8 = 1;
LOGD("4a:add-long \x76\x33\x2c\x20\x76\x31\x30\x2c\x20\x76\x31");
v9 = (v2 + v8);
LOGD("4e:cmp-long \x76\x35\x2c\x20\x76\x31\x30\x2c\x20\x76\x33");
v10 = (v2 == v9) ? 0 : (v2 > v9) ? 1 : -1;
LOGD("52:if-ltz \x76\x35\x2c\x20\x2b\x36");
if(v10 < 0){
goto L11;
}
else {
goto L10;
}
L10:
LOGD("56:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v6}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
goto L12;
L11:
L12:
LOGD("60:add-long/2addr \x76\x31\x2c\x20\x76\x36");
v8 = (v8 + v0);
LOGD("62:cmp-long \x76\x33\x2c\x20\x76\x36\x2c\x20\x76\x31");
v11 = (v0 == v8) ? 0 : (v0 > v8) ? 1 : -1;
LOGD("66:if-ltz \x76\x33\x2c\x20\x2b\x36");
if(v11 < 0){
goto L14;
}
else {
goto L13;
}
L13:
LOGD("6a:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v6}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
goto L15;
L14:
L15:
LOGD("74:cmp-long \x76\x31\x2c\x20\x76\x31\x30\x2c\x20\x76\x36");
v7 = (v2 == v0) ? 0 : (v2 > v0) ? 1 : -1;
LOGD("78:if-eqz \x76\x31\x2c\x20\x2b\x37");
if(v7 == 0){
goto L17;
}
else {
goto L16;
}
L16:
v7 = 1;
LOGD("7e:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v7}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
goto L18;
L17:
LOGD("86:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v6}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L18:
LOGD("8c:cmp-long \x76\x31\x2c\x20\x76\x31\x30\x2c\x20\x76\x31\x32");
v7 = (v2 == v3) ? 0 : (v2 > v3) ? 1 : -1;
LOGD("90:if-lez \x76\x31\x2c\x20\x2b\x36");
if(v7 <= 0){
goto L20;
}
else {
goto L19;
}
L19:
LOGD("94:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v6}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
goto L21;
L20:
L21:
LOGD("9e:cmp-long \x76\x31\x2c\x20\x76\x31\x32\x2c\x20\x76\x31\x30");
v7 = (v3 == v2) ? 0 : (v3 > v2) ? 1 : -1;
LOGD("a2:if-gez \x76\x31\x2c\x20\x2b\x36");
if(v7 >= 0){
goto L23;
}
else {
goto L22;
}
L22:
LOGD("a6:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v6}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
goto L24;
L23:
L24:
LOGD("b0:cmp-long \x76\x31\x2c\x20\x76\x31\x32\x2c\x20\x76\x31\x30");
v7 = (v3 == v2) ? 0 : (v3 > v2) ? 1 : -1;
LOGD("b4:if-nez \x76\x31\x2c\x20\x2b\x36");
if(v7 != 0){
goto L26;
}
else {
goto L25;
}
L25:
LOGD("b8:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v6}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
goto L27;
L26:
L27:
LOGD("c2:cmp-long \x76\x31\x2c\x20\x76\x36\x2c\x20\x76\x38");
v7 = (v0 == v1) ? 0 : (v0 > v1) ? 1 : -1;
LOGD("c6:if-gez \x76\x31\x2c\x20\x2b\x36");
if(v7 >= 0){
goto L29;
}
else {
goto L28;
}
L28:
LOGD("ca:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v6}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
goto L30;
L29:
L30:
LOGD("d4:cmp-long \x76\x31\x2c\x20\x76\x38\x2c\x20\x76\x36");
v7 = (v1 == v0) ? 0 : (v1 > v0) ? 1 : -1;
LOGD("d8:if-lez \x76\x31\x2c\x20\x2b\x36");
if(v7 <= 0){
goto L32;
}
else {
goto L31;
}
L31:
LOGD("dc:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v6}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
goto L33;
L32:
L33:
LOGD("e6:cmp-long \x76\x31\x2c\x20\x76\x38\x2c\x20\x76\x36");
v7 = (v1 == v0) ? 0 : (v1 > v0) ? 1 : -1;
LOGD("ea:if-nez \x76\x31\x2c\x20\x2b\x36");
if(v7 != 0){
goto L35;
}
else {
goto L34;
}
L34:
LOGD("ee:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v6}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
goto L36;
L35:
L36:
return;
EX_UnwindBlock: return;
}
