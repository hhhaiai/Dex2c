#include "Dex2C.h"

/* Lcom/test/TestCompiler/IntMath;->checkConsts(BSIJ)V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_IntMath_checkConsts__BSIJ(JNIEnv *env, jobject thiz, jbyte p7, jshort p8, jint p9, jlong p10){
jint v0;
jint v1;
jint v2;
jlong v3;
jobject v4 = NULL;
jobject v5 = NULL;
jint v6;
jint v7;
jint v8;
jlong v9;
jlong v10;
jint v11;
jint v12;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL;
jfieldID fld0 = NULL;
jmethodID mth0 = NULL, mth1 = NULL;
v0 = (jint)p7;
v1 = (jint)p8;
v2 = (jint)p9;
v3 = (jlong)p10;
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
LOGD("4:const-string \x76\x31\x2c\x20\x27\x49\x6e\x74\x4d\x61\x74\x68\x2e\x63\x68\x65\x63\x6b\x43\x6f\x6e\x73\x74\x73\x27");
if (v5) {
LOGD("env->DeleteLocalRef(%p):v5", v5);
env->DeleteLocalRef(v5);
}
v5 = (jstring) env->NewStringUTF("\x49\x6e\x74\x4d\x61\x74\x68\x2e\x63\x68\x65\x63\x6b\x43\x6f\x6e\x73\x74\x73");
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
v7 = 1;
LOGD("12:if-ne \x76\x37\x2c\x20\x76\x31\x2c\x20\x2b\x34");
if(v0 != v7) {
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
LOGD("1c:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
v8 = -256;
LOGD("26:if-ne \x76\x38\x2c\x20\x76\x32\x2c\x20\x2b\x34");
if(v1 != v8) {
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
LOGD("30:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
v9 = (jlong)(v1);
v10 = -256;
LOGD("3c:cmp-long \x76\x36\x2c\x20\x76\x32\x2c\x20\x76\x34");
v11 = (v9 == v10) ? 0 : (v9 > v10) ? 1 : -1;
LOGD("40:if-nez \x76\x36\x2c\x20\x2b\x34");
if(v11 != 0){
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
LOGD("4a:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
v8 = -88888;
LOGD("56:if-ne \x76\x39\x2c\x20\x76\x32\x2c\x20\x2b\x34");
if(v2 != v8) {
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
LOGD("60:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
v9 = (jlong)(v2);
v10 = -88888;
LOGD("6e:cmp-long \x76\x36\x2c\x20\x76\x32\x2c\x20\x76\x34");
v11 = (v9 == v10) ? 0 : (v9 > v10) ? 1 : -1;
LOGD("72:if-nez \x76\x36\x2c\x20\x2b\x34");
if(v11 != 0){
goto L14;
}
else {
goto L13;
}
L13:
v8 = 1;
goto L15;
L14:
v8 = 0;
L15:
LOGD("7c:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
v9 = -7412305668114843768;
LOGD("8c:cmp-long \x76\x34\x2c\x20\x76\x31\x30\x2c\x20\x76\x32");
v12 = (v3 == v9) ? 0 : (v3 > v9) ? 1 : -1;
LOGD("90:if-nez \x76\x34\x2c\x20\x2b\x34");
if(v12 != 0){
goto L17;
}
else {
goto L16;
}
L16:
v6 = 1;
L17:
LOGD("98:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
return;
EX_UnwindBlock: return;
}
