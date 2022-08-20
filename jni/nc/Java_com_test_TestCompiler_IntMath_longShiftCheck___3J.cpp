#include "Dex2C.h"

/* Lcom/test/TestCompiler/IntMath;->longShiftCheck([J)J */
extern "C" JNIEXPORT jlong JNICALL
Java_com_test_TestCompiler_IntMath_longShiftCheck___3J(JNIEnv *env, jobject thiz, jarray p7){
jobject v0 = NULL;
jobject v1 = NULL;
jobject v2 = NULL;
jint v3;
jlong v4;
jint v5;
jlong v6;
jint v7;
jint v8;
jint v9;
jlong v10;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL;
jfieldID fld0 = NULL;
jmethodID mth0 = NULL, mth1 = NULL;
v0 = (jobject)env->NewLocalRef(p7);
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
LOGD("4:const-string \x76\x31\x2c\x20\x27\x49\x6e\x74\x4d\x61\x74\x68\x2e\x6c\x6f\x6e\x67\x53\x68\x69\x66\x74\x43\x68\x65\x63\x6b\x27");
if (v2) {
LOGD("env->DeleteLocalRef(%p):v2", v2);
env->DeleteLocalRef(v2);
}
v2 = (jstring) env->NewStringUTF("\x49\x6e\x74\x4d\x61\x74\x68\x2e\x6c\x6f\x6e\x67\x53\x68\x69\x66\x74\x43\x68\x65\x63\x6b");
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
LOGD("10:aget-wide \x76\x31\x2c\x20\x76\x37\x2c\x20\x76\x30");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jlong val;env->GetLongArrayRegion((jlongArray) v0, (jint) v3, 1, &val);v4 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = 1;
v5 = 1;
v6 = -7575337144873320448;
LOGD("20:cmp-long \x76\x36\x2c\x20\x76\x31\x2c\x20\x76\x34");
v7 = (v4 == v6) ? 0 : (v4 > v6) ? 1 : -1;
LOGD("24:if-nez \x76\x36\x2c\x20\x2b\x34");
if(v7 != 0){
goto L2;
}
else {
goto L1;
}
L1:
v8 = 1;
goto L3;
L2:
v8 = 0;
L3:
LOGD("2e:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
LOGD("34:aget-wide \x76\x31\x2c\x20\x76\x37\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jlong val;env->GetLongArrayRegion((jlongArray) v0, (jint) v5, 1, &val);v4 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = -46546324357376;
LOGD("42:cmp-long \x76\x36\x2c\x20\x76\x31\x2c\x20\x76\x34");
v7 = (v4 == v6) ? 0 : (v4 > v6) ? 1 : -1;
LOGD("46:if-nez \x76\x36\x2c\x20\x2b\x34");
if(v7 != 0){
goto L5;
}
else {
goto L4;
}
L4:
v8 = 1;
goto L6;
L5:
v8 = 0;
L6:
LOGD("50:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
v8 = 2;
LOGD("58:aget-wide \x76\x31\x2c\x20\x76\x37\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jlong val;env->GetLongArrayRegion((jlongArray) v0, (jint) v8, 1, &val);v4 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = 234928652353280;
LOGD("66:cmp-long \x76\x36\x2c\x20\x76\x31\x2c\x20\x76\x34");
v7 = (v4 == v6) ? 0 : (v4 > v6) ? 1 : -1;
LOGD("6a:if-nez \x76\x36\x2c\x20\x2b\x34");
if(v7 != 0){
goto L8;
}
else {
goto L7;
}
L7:
v8 = 1;
goto L9;
L8:
v8 = 0;
L9:
LOGD("74:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
v8 = 3;
LOGD("7c:aget-wide \x76\x31\x2c\x20\x76\x37\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jlong val;env->GetLongArrayRegion((jlongArray) v0, (jint) v8, 1, &val);v4 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = -115590471614464;
LOGD("8a:cmp-long \x76\x36\x2c\x20\x76\x31\x2c\x20\x76\x34");
v7 = (v4 == v6) ? 0 : (v4 > v6) ? 1 : -1;
LOGD("8e:if-nez \x76\x36\x2c\x20\x2b\x34");
if(v7 != 0){
goto L11;
}
else {
goto L10;
}
L10:
v8 = 1;
goto L12;
L11:
v8 = 0;
L12:
LOGD("98:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
LOGD("9e:array-length \x76\x31\x2c\x20\x76\x37");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
v8 = env->GetArrayLength((jarray) v0);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v9 = 4;
LOGD("a2:if-ne \x76\x31\x2c\x20\x76\x32\x2c\x20\x2b\x33");
if(v8 != v9) {
goto L14;
}
else {
goto L13;
}
L13:
goto L15;
L14:
v5 = 0;
L15:
LOGD("aa:invoke-static \x76\x33\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
LOGD("b0:aget-wide \x76\x30\x2c\x20\x76\x37\x2c\x20\x76\x30");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jlong val;env->GetLongArrayRegion((jlongArray) v0, (jint) v3, 1, &val);v10 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return (jlong) v10;
EX_UnwindBlock: return (jlong)0;
}
