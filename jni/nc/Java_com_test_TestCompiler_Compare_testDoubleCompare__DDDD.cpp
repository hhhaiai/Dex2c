#include "Dex2C.h"

/* Lcom/test/TestCompiler/Compare;->testDoubleCompare(DDDD)V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_Compare_testDoubleCompare__DDDD(JNIEnv *env, jobject thiz, jdouble p2, jdouble p4, jdouble p6, jdouble p8){
jdouble v0;
jdouble v1;
jdouble v2;
jdouble v3;
jobject v4 = NULL;
jobject v5 = NULL;
jint v6;
jint v7;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL;
jfieldID fld0 = NULL;
jmethodID mth0 = NULL, mth1 = NULL;
v0 = (jdouble)p2;
v1 = (jdouble)p4;
v2 = (jdouble)p6;
v3 = (jdouble)p8;
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
LOGD("4:const-string \x76\x31\x2c\x20\x27\x49\x6e\x74\x4d\x61\x74\x68\x2e\x74\x65\x73\x74\x44\x6f\x75\x62\x6c\x65\x43\x6f\x6d\x70\x61\x72\x65\x27");
if (v5) {
LOGD("env->DeleteLocalRef(%p):v5", v5);
env->DeleteLocalRef(v5);
}
v5 = (jstring) env->NewStringUTF("\x49\x6e\x74\x4d\x61\x74\x68\x2e\x74\x65\x73\x74\x44\x6f\x75\x62\x6c\x65\x43\x6f\x6d\x70\x61\x72\x65");
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
LOGD("10:cmpl-double \x76\x31\x2c\x20\x76\x32\x2c\x20\x76\x34");
v7 = (v0 == v1) ? 0 : (v0 > v1) ? 1 : -1;
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
LOGD("22:cmpg-double \x76\x31\x2c\x20\x76\x34\x2c\x20\x76\x32");
v7 = (v1 == v0) ? 0 : (v1 < v0) ? -1 : 1;
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
LOGD("34:cmpl-double \x76\x31\x2c\x20\x76\x34\x2c\x20\x76\x32");
v7 = (v1 == v0) ? 0 : (v1 > v0) ? 1 : -1;
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
LOGD("46:cmpl-double \x76\x31\x2c\x20\x76\x34\x2c\x20\x76\x36");
v7 = (v1 == v2) ? 0 : (v1 > v2) ? 1 : -1;
LOGD("4a:if-eqz \x76\x31\x2c\x20\x2b\x36");
if(v7 == 0){
goto L11;
}
else {
goto L10;
}
L10:
LOGD("4e:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
LOGD("58:cmpg-double \x76\x31\x2c\x20\x76\x34\x2c\x20\x76\x38");
v7 = (v1 == v3) ? 0 : (v1 < v3) ? -1 : 1;
LOGD("5c:if-gtz \x76\x31\x2c\x20\x2b\x36");
if(v7 > 0){
goto L14;
}
else {
goto L13;
}
L13:
LOGD("60:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
LOGD("6a:cmpl-double \x76\x31\x2c\x20\x76\x34\x2c\x20\x76\x38");
v7 = (v1 == v3) ? 0 : (v1 > v3) ? 1 : -1;
LOGD("6e:if-ltz \x76\x31\x2c\x20\x2b\x36");
if(v7 < 0){
goto L17;
}
else {
goto L16;
}
L16:
LOGD("72:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
goto L18;
L17:
L18:
LOGD("7c:cmpg-double \x76\x31\x2c\x20\x76\x32\x2c\x20\x76\x38");
v7 = (v0 == v3) ? 0 : (v0 < v3) ? -1 : 1;
LOGD("80:if-gtz \x76\x31\x2c\x20\x2b\x36");
if(v7 > 0){
goto L20;
}
else {
goto L19;
}
L19:
LOGD("84:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
LOGD("8e:cmpl-double \x76\x31\x2c\x20\x76\x32\x2c\x20\x76\x38");
v7 = (v0 == v3) ? 0 : (v0 > v3) ? 1 : -1;
LOGD("92:if-ltz \x76\x31\x2c\x20\x2b\x36");
if(v7 < 0){
goto L23;
}
else {
goto L22;
}
L22:
LOGD("96:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
LOGD("a0:cmpl-double \x76\x31\x2c\x20\x76\x38\x2c\x20\x76\x34");
v7 = (v3 == v1) ? 0 : (v3 > v1) ? 1 : -1;
LOGD("a4:if-ltz \x76\x31\x2c\x20\x2b\x36");
if(v7 < 0){
goto L26;
}
else {
goto L25;
}
L25:
LOGD("a8:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
LOGD("b2:cmpg-double \x76\x31\x2c\x20\x76\x38\x2c\x20\x76\x34");
v7 = (v3 == v1) ? 0 : (v3 < v1) ? -1 : 1;
LOGD("b6:if-gtz \x76\x31\x2c\x20\x2b\x36");
if(v7 > 0){
goto L29;
}
else {
goto L28;
}
L28:
LOGD("ba:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
LOGD("c4:cmpl-double \x76\x31\x2c\x20\x76\x38\x2c\x20\x76\x38");
v7 = (v3 == v3) ? 0 : (v3 > v3) ? 1 : -1;
LOGD("c8:if-nez \x76\x31\x2c\x20\x2b\x36");
if(v7 != 0){
goto L32;
}
else {
goto L31;
}
L31:
LOGD("cc:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
return;
EX_UnwindBlock: return;
}
