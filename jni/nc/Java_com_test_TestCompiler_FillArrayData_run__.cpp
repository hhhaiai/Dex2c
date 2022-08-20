#include "Dex2C.h"

/* Lcom/test/TestCompiler/FillArrayData;->run()V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_FillArrayData_run__(JNIEnv *env, jobject thiz){
jobject v0 = NULL;
jobject v1 = NULL;
jint v2;
jint v3;
jobject v4 = NULL;
jint v5;
jint v6;
jobject v7 = NULL;
jlong v8;
jlong v9;
jint v10;
jclass cls0 = NULL,cls1 = NULL;
jmethodID mth0 = NULL, mth1 = NULL, mth2 = NULL, mth3 = NULL;
L0:
LOGD("0:invoke-static \x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x46\x69\x6c\x6c\x41\x72\x72\x61\x79\x44\x61\x74\x61\x3b\x2d\x3e\x6e\x65\x77\x42\x79\x74\x65\x41\x72\x72\x61\x79\x28\x29\x5b\x42");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/FillArrayData", "newByteArray", "()[B");
jvalue args[] = {};
v0 = (jarray) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("6:move-result-object \x76\x30");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jobject) v0;
v2 = 1;
v2 = 1;
v2 = 1;
v2 = 1;
v2 = 1;
LOGD("a:aget-byte \x76\x32\x2c\x20\x76\x30\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
{jbyte val;env->GetByteArrayRegion((jbyteArray) v1, (jint) v2, 1, &val);v3 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("10:if-ne \x76\x32\x2c\x20\x76\x31\x2c\x20\x2b\x34");
if(v3 != v2) {
goto L2;
}
else {
goto L1;
}
L1:
v3 = 1;
goto L3;
L2:
v3 = 0;
L3:
LOGD("1a:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls1;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v3}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("20:invoke-static \x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x46\x69\x6c\x6c\x41\x72\x72\x61\x79\x44\x61\x74\x61\x3b\x2d\x3e\x6e\x65\x77\x43\x68\x61\x72\x41\x72\x72\x61\x79\x28\x29\x5b\x43");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/FillArrayData", "newCharArray", "()[C");
jvalue args[] = {};
v0 = (jarray) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("26:move-result-object \x76\x32");
if (v4) {
LOGD("env->DeleteLocalRef(%p):v4", v4);
env->DeleteLocalRef(v4);
}
v4 = (jobject) v0;
LOGD("28:aget-char \x76\x34\x2c\x20\x76\x32\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v4);
{jchar val;env->GetCharArrayRegion((jcharArray) v4, (jint) v2, 1, &val);v5 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = 17185;
LOGD("30:if-ne \x76\x34\x2c\x20\x76\x35\x2c\x20\x2b\x34");
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
LOGD("3a:invoke-static \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls1;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v5}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("40:invoke-static \x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x46\x69\x6c\x6c\x41\x72\x72\x61\x79\x44\x61\x74\x61\x3b\x2d\x3e\x6e\x65\x77\x4c\x6f\x6e\x67\x41\x72\x72\x61\x79\x28\x29\x5b\x4a");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth3;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/FillArrayData", "newLongArray", "()[J");
jvalue args[] = {};
v0 = (jarray) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("46:move-result-object \x76\x34");
if (v7) {
LOGD("env->DeleteLocalRef(%p):v7", v7);
env->DeleteLocalRef(v7);
}
v7 = (jobject) v0;
LOGD("48:aget-wide \x76\x35\x2c\x20\x76\x34\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v7);
{jlong val;env->GetLongArrayRegion((jlongArray) v7, (jint) v2, 1, &val);v8 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v9 = 7540113804746346429;
LOGD("56:cmp-long \x76\x39\x2c\x20\x76\x35\x2c\x20\x76\x37");
v10 = (v8 == v9) ? 0 : (v8 > v9) ? 1 : -1;
LOGD("5a:if-nez \x76\x39\x2c\x20\x2b\x33");
if(v10 != 0){
goto L8;
}
else {
goto L7;
}
L7:
goto L9;
L8:
v2 = 0;
L9:
LOGD("62:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls1;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v2}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;
EX_UnwindBlock: return;
}
