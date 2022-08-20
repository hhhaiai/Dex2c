#include "Dex2C.h"

/* Lcom/test/TestCompiler/Array;->checkLongs([J)V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_Array_checkLongs___3J(JNIEnv *env, jobject thiz, jarray p7){
jobject v0 = NULL;
jint v1;
jlong v2;
jint v3;
jlong v4;
jint v5;
jint v6;
jclass cls0 = NULL;
jmethodID mth0 = NULL;
v0 = (jobject)env->NewLocalRef(p7);
L0:
v1 = 0;
v1 = 0;
LOGD("2:aget-wide \x76\x31\x2c\x20\x76\x37\x2c\x20\x76\x30");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jlong val;env->GetLongArrayRegion((jlongArray) v0, (jint) v1, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v3 = 1;
v4 = 1234605616436508552;
LOGD("12:cmp-long \x76\x36\x2c\x20\x76\x31\x2c\x20\x76\x34");
v5 = (v2 == v4) ? 0 : (v2 > v4) ? 1 : -1;
LOGD("16:if-nez \x76\x36\x2c\x20\x2b\x34");
if(v5 != 0){
goto L2;
}
else {
goto L1;
}
L1:
v6 = 1;
goto L3;
L2:
v6 = 0;
L3:
LOGD("20:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v6}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("26:aget-wide \x76\x31\x2c\x20\x76\x37\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jlong val;env->GetLongArrayRegion((jlongArray) v0, (jint) v3, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v4 = -8613303245920329199;
LOGD("34:cmp-long \x76\x36\x2c\x20\x76\x31\x2c\x20\x76\x34");
v5 = (v2 == v4) ? 0 : (v2 > v4) ? 1 : -1;
LOGD("38:if-nez \x76\x36\x2c\x20\x2b\x34");
if(v5 != 0){
goto L5;
}
else {
goto L4;
}
L4:
v6 = 1;
goto L6;
L5:
v6 = 0;
L6:
LOGD("42:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v6}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = 2;
LOGD("4a:aget-wide \x76\x31\x2c\x20\x76\x37\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jlong val;env->GetLongArrayRegion((jlongArray) v0, (jint) v6, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v4 = 0;
LOGD("52:cmp-long \x76\x36\x2c\x20\x76\x31\x2c\x20\x76\x34");
v5 = (v2 == v4) ? 0 : (v2 > v4) ? 1 : -1;
LOGD("56:if-nez \x76\x36\x2c\x20\x2b\x34");
if(v5 != 0){
goto L8;
}
else {
goto L7;
}
L7:
v6 = 1;
goto L9;
L8:
v6 = 0;
L9:
LOGD("60:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v6}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = 3;
LOGD("68:aget-wide \x76\x31\x2c\x20\x76\x37\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jlong val;env->GetLongArrayRegion((jlongArray) v0, (jint) v6, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v4 = 1;
LOGD("70:cmp-long \x76\x36\x2c\x20\x76\x31\x2c\x20\x76\x34");
v5 = (v2 == v4) ? 0 : (v2 > v4) ? 1 : -1;
LOGD("74:if-nez \x76\x36\x2c\x20\x2b\x34");
if(v5 != 0){
goto L11;
}
else {
goto L10;
}
L10:
v6 = 1;
goto L12;
L11:
v6 = 0;
L12:
LOGD("7e:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v6}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = 4;
LOGD("86:aget-wide \x76\x31\x2c\x20\x76\x37\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jlong val;env->GetLongArrayRegion((jlongArray) v0, (jint) v6, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v4 = -1;
LOGD("8e:cmp-long \x76\x36\x2c\x20\x76\x31\x2c\x20\x76\x34");
v5 = (v2 == v4) ? 0 : (v2 > v4) ? 1 : -1;
LOGD("92:if-nez \x76\x36\x2c\x20\x2b\x34");
if(v5 != 0){
goto L14;
}
else {
goto L13;
}
L13:
v1 = 1;
L14:
LOGD("9a:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
