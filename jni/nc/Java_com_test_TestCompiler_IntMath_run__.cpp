#include "Dex2C.h"

/* Lcom/test/TestCompiler/IntMath;->run()V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_IntMath_run__(JNIEnv *env, jobject thiz){
jint v0;
jint v1;
jobject v2 = NULL;
jobject v3 = NULL;
jlong v4;
jlong v5;
jobject v6 = NULL;
jint v7;
jint v8;
jlong v9;
jint v10;
jlong v11;
jint v12;
jlong v13;
jint v14;
jint v15;
jobject v16 = NULL;
jlong v17;
jint v18;
jlong v19;
jint v20;
jclass cls0 = NULL,cls1 = NULL;
jmethodID mth0 = NULL, mth1 = NULL, mth2 = NULL, mth3 = NULL, mth4 = NULL, mth5 = NULL, mth6 = NULL, mth7 = NULL, mth8 = NULL, mth9 = NULL, mth10 = NULL, mth11 = NULL, mth12 = NULL, mth13 = NULL, mth14 = NULL, mth15 = NULL, mth16 = NULL, mth17 = NULL, mth18 = NULL, mth19 = NULL, mth20 = NULL, mth21 = NULL, mth22 = NULL, mth23 = NULL, mth24 = NULL, mth25 = NULL, mth26 = NULL, mth27 = NULL;
L0:
LOGD("0:invoke-static \x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x73\x68\x69\x66\x74\x54\x65\x73\x74\x31\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/IntMath", "shiftTest1", "()V");
jvalue args[] = {};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("6:invoke-static \x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x73\x68\x69\x66\x74\x54\x65\x73\x74\x32\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/IntMath", "shiftTest2", "()V");
jvalue args[] = {};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("c:invoke-static \x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x75\x6e\x73\x69\x67\x6e\x65\x64\x53\x68\x69\x66\x74\x54\x65\x73\x74\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/IntMath", "unsignedShiftTest", "()V");
jvalue args[] = {};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v0 = 32;
LOGD("16:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x73\x68\x69\x66\x74\x54\x65\x73\x74\x33\x28\x49\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth3;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/IntMath", "shiftTest3", "(I)V");
jvalue args[] = {{.i = v0}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1c:invoke-static \x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x63\x6f\x6e\x76\x54\x65\x73\x74\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth4;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/IntMath", "convTest", "()V");
jvalue args[] = {};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("22:invoke-static \x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x63\x68\x61\x72\x53\x75\x62\x54\x65\x73\x74\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth5;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/IntMath", "charSubTest", "()V");
jvalue args[] = {};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v0 = 70000;
v1 = -3;
LOGD("30:invoke-static \x76\x30\x2c\x20\x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x69\x6e\x74\x4f\x70\x65\x72\x54\x65\x73\x74\x28\x49\x20\x49\x29\x5b\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth6;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/IntMath", "intOperTest", "(II)[I");
jvalue args[] = {{.i = v0},{.i = v1}};
v2 = (jarray) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("36:move-result-object \x76\x30");
if (v3) {
LOGD("env->DeleteLocalRef(%p):v3", v3);
env->DeleteLocalRef(v3);
}
v3 = (jobject) v2;
LOGD("38:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x69\x6e\x74\x4f\x70\x65\x72\x43\x68\x65\x63\x6b\x28\x5b\x49\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth7;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/IntMath", "intOperCheck", "([I)V");
jvalue args[] = {{.l = v3}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v4 = 70000000000;
v5 = -3;
LOGD("4c:invoke-static \x76\x31\x2c\x20\x76\x32\x2c\x20\x76\x33\x2c\x20\x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x6c\x6f\x6e\x67\x4f\x70\x65\x72\x54\x65\x73\x74\x28\x4a\x20\x4a\x29\x5b\x4a");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth8;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/IntMath", "longOperTest", "(JJ)[J");
jvalue args[] = {{.j = (jlong) v4},{.j = (jlong) v5}};
v2 = (jarray) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("52:move-result-object \x76\x31");
if (v6) {
LOGD("env->DeleteLocalRef(%p):v6", v6);
env->DeleteLocalRef(v6);
}
v6 = (jobject) v2;
LOGD("54:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x6c\x6f\x6e\x67\x4f\x70\x65\x72\x43\x68\x65\x63\x6b\x28\x5b\x4a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth9;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/IntMath", "longOperCheck", "([J)V");
jvalue args[] = {{.l = v6}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v7 = 77777;
LOGD("60:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x6c\x69\x74\x31\x36\x54\x65\x73\x74\x28\x49\x29\x5b\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth10;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/IntMath", "lit16Test", "(I)[I");
jvalue args[] = {{.i = v7}};
v2 = (jarray) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("66:move-result-object \x76\x30");
if (v3) {
LOGD("env->DeleteLocalRef(%p):v3", v3);
env->DeleteLocalRef(v3);
}
v3 = (jobject) v2;
LOGD("68:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x6c\x69\x74\x31\x36\x43\x68\x65\x63\x6b\x28\x5b\x49\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth11;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/IntMath", "lit16Check", "([I)V");
jvalue args[] = {{.l = v3}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v7 = -55555;
LOGD("74:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x6c\x69\x74\x38\x54\x65\x73\x74\x28\x49\x29\x5b\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth12;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/IntMath", "lit8Test", "(I)[I");
jvalue args[] = {{.i = v7}};
v2 = (jarray) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("7a:move-result-object \x76\x30");
if (v3) {
LOGD("env->DeleteLocalRef(%p):v3", v3);
env->DeleteLocalRef(v3);
}
v3 = (jobject) v2;
LOGD("7c:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x6c\x69\x74\x38\x43\x68\x65\x63\x6b\x28\x5b\x49\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth13;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/IntMath", "lit8Check", "([I)V");
jvalue args[] = {{.l = v3}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("82:invoke-static \x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x64\x69\x76\x4c\x69\x74\x65\x72\x61\x6c\x54\x65\x73\x74\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth14;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/IntMath", "divLiteralTest", "()V");
jvalue args[] = {};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v7 = -16733695;
v8 = 8;
LOGD("92:invoke-static \x76\x32\x2c\x20\x76\x33\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x69\x6e\x74\x53\x68\x69\x66\x74\x54\x65\x73\x74\x28\x49\x20\x49\x29\x5b\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth15;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/IntMath", "intShiftTest", "(II)[I");
jvalue args[] = {{.i = v7},{.i = v8}};
v2 = (jarray) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("98:move-result-object \x76\x30");
if (v3) {
LOGD("env->DeleteLocalRef(%p):v3", v3);
env->DeleteLocalRef(v3);
}
v3 = (jobject) v2;
LOGD("9a:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x69\x6e\x74\x53\x68\x69\x66\x74\x43\x68\x65\x63\x6b\x28\x5b\x49\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth16;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/IntMath", "intShiftCheck", "([I)V");
jvalue args[] = {{.l = v3}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v9 = -3050459913084950015;
v10 = 16;
LOGD("ae:invoke-static \x76\x32\x2c\x20\x76\x33\x2c\x20\x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x6c\x6f\x6e\x67\x53\x68\x69\x66\x74\x54\x65\x73\x74\x28\x4a\x20\x49\x29\x5b\x4a");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth17;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/IntMath", "longShiftTest", "(JI)[J");
jvalue args[] = {{.j = (jlong) v9},{.i = v10}};
v2 = (jarray) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("b4:move-result-object \x76\x31");
if (v6) {
LOGD("env->DeleteLocalRef(%p):v6", v6);
env->DeleteLocalRef(v6);
}
v6 = (jobject) v2;
LOGD("b6:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x6c\x6f\x6e\x67\x53\x68\x69\x66\x74\x43\x68\x65\x63\x6b\x28\x5b\x4a\x29\x4a");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth18;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/IntMath", "longShiftCheck", "([J)J");
jvalue args[] = {{.l = v6}};
v11 = (jlong) env->CallStaticLongMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("bc:move-result-wide \x76\x32");
v9 = (jlong) v11;
v10 = 1;
v12 = 0;
v13 = -7575337144873320448;
LOGD("cc:cmp-long \x76\x38\x2c\x20\x76\x32\x2c\x20\x76\x36");
v14 = (v9 == v13) ? 0 : (v9 > v13) ? 1 : -1;
LOGD("d0:if-nez \x76\x38\x2c\x20\x2b\x34");
if(v14 != 0){
goto L2;
}
else {
goto L1;
}
L1:
v15 = 1;
goto L3;
L2:
v15 = 0;
L3:
LOGD("da:invoke-static \x76\x36\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls1;
jmethodID &mid = mth19;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v15}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v15 = -16717277;
LOGD("e6:invoke-static \x76\x36\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x74\x72\x75\x6e\x63\x61\x74\x65\x54\x65\x73\x74\x28\x49\x29\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x24\x53\x68\x6f\x72\x74\x79\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth20;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/IntMath", "truncateTest", "(I)Lcom/test/TestCompiler/IntMath$Shorty;");
jvalue args[] = {{.i = v15}};
v2 = (jobject) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("ec:move-result-object \x76\x36");
if (v16) {
LOGD("env->DeleteLocalRef(%p):v16", v16);
env->DeleteLocalRef(v16);
}
v16 = (jobject) v2;
LOGD("ee:invoke-static \x76\x36\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x74\x72\x75\x6e\x63\x61\x74\x65\x43\x68\x65\x63\x6b\x28\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x24\x53\x68\x6f\x72\x74\x79\x3b\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth21;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/IntMath", "truncateCheck", "(Lcom/test/TestCompiler/IntMath$Shorty;)V");
jvalue args[] = {{.l = v16}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("f4:invoke-static \x76\x35\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x64\x69\x76\x69\x64\x65\x42\x79\x5a\x65\x72\x6f\x28\x49\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth22;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/IntMath", "divideByZero", "(I)V");
jvalue args[] = {{.i = v12}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v12 = -1;
v17 = -1;
LOGD("100:invoke-static \x76\x35\x2c\x20\x76\x37\x2c\x20\x76\x38\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x62\x69\x67\x44\x69\x76\x69\x64\x65\x4f\x76\x65\x72\x66\x6c\x6f\x77\x28\x49\x20\x4a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth23;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/IntMath", "bigDivideOverflow", "(IJ)V");
jvalue args[] = {{.i = v12},{.j = (jlong) v17}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v12 = -256;
v18 = -88888;
v19 = -7412305668114843768;
LOGD("11a:invoke-static \x76\x34\x2c\x20\x76\x35\x2c\x20\x76\x37\x2c\x20\x76\x38\x2c\x20\x76\x39\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x63\x68\x65\x63\x6b\x43\x6f\x6e\x73\x74\x73\x28\x42\x20\x53\x20\x49\x20\x4a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth24;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/IntMath", "checkConsts", "(BSIJ)V");
jvalue args[] = {{.b = (jbyte) v10},{.s = (jshort) v12},{.i = v18},{.j = (jlong) v19}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v10 = 38;
LOGD("124:invoke-static \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x75\x6e\x6f\x70\x54\x65\x73\x74\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth25;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/IntMath", "unopTest", "(I)I");
jvalue args[] = {{.i = v10}};
v20 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("12a:move-result \x76\x34");
v10 = (jint) v20;
LOGD("12c:invoke-static \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x75\x6e\x6f\x70\x43\x68\x65\x63\x6b\x28\x49\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth26;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/IntMath", "unopCheck", "(I)V");
jvalue args[] = {{.i = v10}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v10 = 12345;
v17 = 1234605616436508552;
LOGD("140:invoke-static \x76\x34\x2c\x20\x76\x37\x2c\x20\x76\x38\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x6a\x6c\x6d\x54\x65\x73\x74\x73\x28\x49\x20\x4a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth27;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/IntMath", "jlmTests", "(IJ)V");
jvalue args[] = {{.i = v10},{.j = (jlong) v17}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;
EX_UnwindBlock: return;
}
