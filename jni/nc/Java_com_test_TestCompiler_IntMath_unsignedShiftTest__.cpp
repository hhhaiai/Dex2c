#include "Dex2C.h"

/* Lcom/test/TestCompiler/IntMath;->unsignedShiftTest()V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_IntMath_unsignedShiftTest__(JNIEnv *env, jobject thiz){
jobject v0 = NULL;
jobject v1 = NULL;
jint v2;
jint v3;
jint v4;
jint v5;
jint v6;
jint v7;
jint v8;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL;
jfieldID fld0 = NULL;
jmethodID mth0 = NULL, mth1 = NULL;
L0:
LOGD("0:sget-object \x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x79\x73\x74\x65\x6d\x3b\x2d\x3e\x6f\x75\x74\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x50\x72\x69\x6e\x74\x53\x74\x72\x65\x61\x6d\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
jclass &clz = cls0;
jfieldID &fld = fld0;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "java/lang/System", "out", "Ljava/io/PrintStream;");
v0 = (jobject) env->GetStaticObjectField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("4:const-string \x76\x31\x2c\x20\x27\x49\x6e\x74\x4d\x61\x74\x68\x2e\x75\x6e\x73\x69\x67\x6e\x65\x64\x53\x68\x69\x66\x74\x54\x65\x73\x74\x27");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jstring) env->NewStringUTF("\x49\x6e\x74\x4d\x61\x74\x68\x2e\x75\x6e\x73\x69\x67\x6e\x65\x64\x53\x68\x69\x66\x74\x54\x65\x73\x74");
LOGD("8:invoke-virtual \x76\x30\x2c\x20\x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x50\x72\x69\x6e\x74\x53\x74\x72\x65\x61\x6d\x3b\x2d\x3e\x70\x72\x69\x6e\x74\x6c\x6e\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls1;
jmethodID &mid = mth0;
D2C_RESOLVE_METHOD(clz, mid, "java/io/PrintStream", "println", "(Ljava/lang/String;)V");
jvalue args[] = {{.l = v1}};
env->CallVoidMethodA(v0, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v2 = -4;
v3 = -4;
v4 = 65532;
v5 = -4;
LOGD("1a:ushr-int/lit8 \x76\x34\x2c\x20\x76\x30\x2c\x20\x34");
v6 = ((uint32_t) v2) >> (4 & 0x1f);
v2 = (jbyte)(v6);
LOGD("20:ushr-int/lit8 \x76\x34\x2c\x20\x76\x31\x2c\x20\x34");
v6 = ((uint32_t) v3) >> (4 & 0x1f);
v3 = (jshort)(v6);
LOGD("26:ushr-int/lit8 \x76\x34\x2c\x20\x76\x32\x2c\x20\x34");
v6 = ((uint32_t) v4) >> (4 & 0x1f);
v4 = (jchar)(v6);
LOGD("2c:ushr-int/lit8 \x76\x33\x2c\x20\x76\x33\x2c\x20\x34");
v5 = ((uint32_t) v5) >> (4 & 0x1f);
v6 = -1;
v6 = -1;
v7 = 1;
LOGD("36:if-ne \x76\x30\x2c\x20\x76\x34\x2c\x20\x2b\x34");
if(v2 != v6) {
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
LOGD("40:invoke-static \x76\x37\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
LOGD("46:if-ne \x76\x31\x2c\x20\x76\x34\x2c\x20\x2b\x34");
if(v3 != v6) {
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
LOGD("50:invoke-static \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
v6 = 4095;
LOGD("5a:if-ne \x76\x32\x2c\x20\x76\x34\x2c\x20\x2b\x34");
if(v4 != v6) {
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
LOGD("64:invoke-static \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
v6 = 268435455;
LOGD("70:if-ne \x76\x33\x2c\x20\x76\x34\x2c\x20\x2b\x33");
if(v5 != v6) {
goto L11;
}
else {
goto L10;
}
L10:
goto L12;
L11:
v7 = 0;
L12:
LOGD("78:invoke-static \x76\x35\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
return;
EX_UnwindBlock: return;
}
