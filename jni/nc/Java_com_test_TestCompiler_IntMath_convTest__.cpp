#include "Dex2C.h"

/* Lcom/test/TestCompiler/IntMath;->convTest()V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_IntMath_convTest__(JNIEnv *env, jobject thiz){
jobject v0 = NULL;
jobject v1 = NULL;
jint v2;
jlong v3;
jint v4;
jlong v5;
jint v6;
jint v7;
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
LOGD("4:const-string \x76\x31\x2c\x20\x27\x49\x6e\x74\x4d\x61\x74\x68\x2e\x63\x6f\x6e\x76\x54\x65\x73\x74\x27");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jstring) env->NewStringUTF("\x49\x6e\x74\x4d\x61\x74\x68\x2e\x63\x6f\x6e\x76\x54\x65\x73\x74");
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
LOGD("e:const/16 \x76\x30\x2c\x20\x37\x36\x35\x34");
v2 = 7654;
v3 = (jlong)(v2);
v4 = 1;
v5 = 7654;
LOGD("1c:cmp-long \x76\x37\x2c\x20\x76\x31\x2c\x20\x76\x35");
v6 = (v3 == v5) ? 0 : (v3 > v5) ? 1 : -1;
LOGD("20:if-nez \x76\x37\x2c\x20\x2b\x34");
if(v6 != 0){
goto L2;
}
else {
goto L1;
}
L1:
v7 = 1;
goto L3;
L2:
v7 = 0;
L3:
LOGD("2a:invoke-static \x76\x35\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
LOGD("30:const/16 \x76\x30\x2c\x20\x2d\x37\x36\x35\x34");
v2 = -7654;
v3 = (jlong)(v2);
v5 = -7654;
LOGD("3a:cmp-long \x76\x37\x2c\x20\x76\x31\x2c\x20\x76\x35");
v6 = (v3 == v5) ? 0 : (v3 > v5) ? 1 : -1;
LOGD("3e:if-nez \x76\x37\x2c\x20\x2b\x34");
if(v6 != 0){
goto L5;
}
else {
goto L4;
}
L4:
v7 = 1;
goto L6;
L5:
v7 = 0;
L6:
LOGD("48:invoke-static \x76\x35\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
LOGD("4e:const-wide \x76\x31\x2c\x20\x35\x36\x37\x38\x39\x35\x36\x37\x38\x39\x20\x23\x20\x5b\x32\x2e\x38\x30\x35\x37\x37\x37\x34\x35\x33\x37\x65\x2d\x33\x31\x34\x5d");
v3 = 5678956789;
v2 = (jint)(v3);
v7 = 1383989493;
LOGD("60:if-ne \x76\x30\x2c\x20\x76\x35\x2c\x20\x2b\x34");
if(v2 != v7) {
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
LOGD("6a:invoke-static \x76\x35\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
LOGD("70:const-wide \x76\x31\x2c\x20\x2d\x35\x36\x37\x38\x39\x35\x36\x37\x38\x39\x20\x23\x20\x5b\x6e\x61\x6e\x5d");
v3 = -5678956789;
v2 = (jint)(v3);
v7 = -1383989493;
LOGD("82:if-ne \x76\x30\x2c\x20\x76\x35\x2c\x20\x2b\x33");
if(v2 != v7) {
goto L11;
}
else {
goto L10;
}
L10:
goto L12;
L11:
v4 = 0;
L12:
LOGD("8a:invoke-static \x76\x33\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
return;
EX_UnwindBlock: return;
}
