#include "Dex2C.h"

/* Lcom/test/TestCompiler/IntMath;->jlmTests(IJ)V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_IntMath_jlmTests__IJ(JNIEnv *env, jobject thiz, jint p7, jlong p8){
jint v0;
jlong v1;
jobject v2 = NULL;
jobject v3 = NULL;
jint v4;
jint v5;
jint v6;
jint v7;
jlong v8;
jlong v9;
jlong v10;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL,cls3 = NULL;
jfieldID fld0 = NULL;
jmethodID mth0 = NULL, mth1 = NULL, mth2 = NULL, mth3 = NULL, mth4 = NULL, mth5 = NULL, mth6 = NULL, mth7 = NULL;
v0 = (jint)p7;
v1 = (jlong)p8;
L0:
LOGD("0:sget-object \x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x79\x73\x74\x65\x6d\x3b\x2d\x3e\x6f\x75\x74\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x50\x72\x69\x6e\x74\x53\x74\x72\x65\x61\x6d\x3b");
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
LOGD("4:const-string \x76\x31\x2c\x20\x27\x49\x6e\x74\x4d\x61\x74\x68\x2e\x6a\x6c\x6d\x54\x65\x73\x74\x73\x27");
if (v3) {
LOGD("env->DeleteLocalRef(%p):v3", v3);
env->DeleteLocalRef(v3);
}
v3 = (jstring) env->NewStringUTF("\x49\x6e\x74\x4d\x61\x74\x68\x2e\x6a\x6c\x6d\x54\x65\x73\x74\x73");
LOGD("8:invoke-virtual \x76\x30\x2c\x20\x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x50\x72\x69\x6e\x74\x53\x74\x72\x65\x61\x6d\x3b\x2d\x3e\x70\x72\x69\x6e\x74\x6c\x6e\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x29\x56");
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
LOGD("e:invoke-static \x76\x37\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4d\x61\x74\x68\x3b\x2d\x3e\x61\x62\x73\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/Math", "abs", "(I)I");
jvalue args[] = {{.i = v0}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("14:move-result \x76\x30");
v5 = (jint) v4;
v6 = 1;
LOGD("1a:if-ne \x76\x30\x2c\x20\x76\x37\x2c\x20\x2b\x34");
if(v5 != v0) {
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
LOGD("24:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v5}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("2a:neg-int \x76\x30\x2c\x20\x76\x37");
v5 = (- v0);
LOGD("2c:invoke-static \x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4d\x61\x74\x68\x3b\x2d\x3e\x61\x62\x73\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/Math", "abs", "(I)I");
jvalue args[] = {{.i = v5}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("32:move-result \x76\x30");
v5 = (jint) v4;
LOGD("34:if-ne \x76\x30\x2c\x20\x76\x37\x2c\x20\x2b\x34");
if(v5 != v0) {
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
LOGD("3e:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v5}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = -5;
v5 = -5;
v5 = -5;
LOGD("46:invoke-static \x76\x37\x2c\x20\x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4d\x61\x74\x68\x3b\x2d\x3e\x6d\x69\x6e\x28\x49\x20\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth3;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/Math", "min", "(II)I");
jvalue args[] = {{.i = v0},{.i = v5}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("4c:move-result \x76\x33");
v7 = (jint) v4;
LOGD("4e:if-ne \x76\x33\x2c\x20\x76\x30\x2c\x20\x2b\x34");
if(v7 != v5) {
goto L8;
}
else {
goto L7;
}
L7:
v7 = 1;
goto L9;
L8:
v7 = 0;
L9:
LOGD("58:invoke-static \x76\x33\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v7}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("5e:invoke-static \x76\x37\x2c\x20\x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4d\x61\x74\x68\x3b\x2d\x3e\x6d\x61\x78\x28\x49\x20\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth4;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/Math", "max", "(II)I");
jvalue args[] = {{.i = v0},{.i = v5}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("64:move-result \x76\x30");
v5 = (jint) v4;
LOGD("66:if-ne \x76\x30\x2c\x20\x76\x37\x2c\x20\x2b\x34");
if(v5 != v0) {
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
LOGD("70:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v5}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("76:invoke-static \x76\x38\x2c\x20\x76\x39\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4d\x61\x74\x68\x3b\x2d\x3e\x61\x62\x73\x28\x4a\x29\x4a");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth5;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/Math", "abs", "(J)J");
jvalue args[] = {{.j = (jlong) v1}};
v8 = (jlong) env->CallStaticLongMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("7c:move-result-wide \x76\x33");
v9 = (jlong) v8;
LOGD("7e:cmp-long \x76\x30\x2c\x20\x76\x33\x2c\x20\x76\x38");
v5 = (v9 == v1) ? 0 : (v9 > v1) ? 1 : -1;
LOGD("82:if-nez \x76\x30\x2c\x20\x2b\x34");
if(v5 != 0){
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
LOGD("8c:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v5}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("92:neg-long \x76\x33\x2c\x20\x76\x38");
v9 = (- v1);
LOGD("94:invoke-static \x76\x33\x2c\x20\x76\x34\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4d\x61\x74\x68\x3b\x2d\x3e\x61\x62\x73\x28\x4a\x29\x4a");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth5;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/Math", "abs", "(J)J");
jvalue args[] = {{.j = (jlong) v9}};
v8 = (jlong) env->CallStaticLongMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("9a:move-result-wide \x76\x33");
v9 = (jlong) v8;
LOGD("9c:cmp-long \x76\x30\x2c\x20\x76\x33\x2c\x20\x76\x38");
v5 = (v9 == v1) ? 0 : (v9 > v1) ? 1 : -1;
LOGD("a0:if-nez \x76\x30\x2c\x20\x2b\x34");
if(v5 != 0){
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
LOGD("aa:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v5}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v9 = -5;
v9 = -5;
v9 = -5;
LOGD("b4:invoke-static \x76\x38\x2c\x20\x76\x39\x2c\x20\x76\x33\x2c\x20\x76\x34\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4d\x61\x74\x68\x3b\x2d\x3e\x6d\x69\x6e\x28\x4a\x20\x4a\x29\x4a");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth6;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/Math", "min", "(JJ)J");
jvalue args[] = {{.j = (jlong) v1},{.j = (jlong) v9}};
v8 = (jlong) env->CallStaticLongMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("ba:move-result-wide \x76\x35");
v10 = (jlong) v8;
LOGD("bc:cmp-long \x76\x30\x2c\x20\x76\x35\x2c\x20\x76\x33");
v5 = (v10 == v9) ? 0 : (v10 > v9) ? 1 : -1;
LOGD("c0:if-nez \x76\x30\x2c\x20\x2b\x34");
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
LOGD("ca:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v5}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("d0:invoke-static \x76\x38\x2c\x20\x76\x39\x2c\x20\x76\x33\x2c\x20\x76\x34\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4d\x61\x74\x68\x3b\x2d\x3e\x6d\x61\x78\x28\x4a\x20\x4a\x29\x4a");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth7;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/Math", "max", "(JJ)J");
jvalue args[] = {{.j = (jlong) v1},{.j = (jlong) v9}};
v8 = (jlong) env->CallStaticLongMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("d6:move-result-wide \x76\x33");
v9 = (jlong) v8;
LOGD("d8:cmp-long \x76\x30\x2c\x20\x76\x33\x2c\x20\x76\x38");
v5 = (v9 == v1) ? 0 : (v9 > v1) ? 1 : -1;
LOGD("dc:if-nez \x76\x30\x2c\x20\x2b\x33");
if(v5 != 0){
goto L23;
}
else {
goto L22;
}
L22:
goto L24;
L23:
v6 = 0;
L24:
LOGD("e4:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v6}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;
EX_UnwindBlock: return;
}
