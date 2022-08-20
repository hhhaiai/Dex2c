#include "Dex2C.h"

/* Lcom/test/TestCompiler/IntMath;->bigDivideOverflow(IJ)V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_IntMath_bigDivideOverflow__IJ(JNIEnv *env, jobject thiz, jint p14, jlong p15){
jint v0;
jlong v1;
jobject v2 = NULL;
jobject v3 = NULL;
jint v4;
jlong v5;
jint v6;
jint v7;
jlong v8;
jlong v9;
jint v10;
jint v11;
jlong v12;
jint v13;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL;
jfieldID fld0 = NULL;
jmethodID mth0 = NULL, mth1 = NULL;
v0 = (jint)p14;
v1 = (jlong)p15;
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
LOGD("4:const-string \x76\x31\x2c\x20\x27\x49\x6e\x74\x4d\x61\x74\x68\x2e\x62\x69\x67\x44\x69\x76\x69\x64\x65\x4f\x76\x65\x72\x66\x6c\x6f\x77\x27");
if (v3) {
LOGD("env->DeleteLocalRef(%p):v3", v3);
env->DeleteLocalRef(v3);
}
v3 = (jstring) env->NewStringUTF("\x49\x6e\x74\x4d\x61\x74\x68\x2e\x62\x69\x67\x44\x69\x76\x69\x64\x65\x4f\x76\x65\x72\x66\x6c\x6f\x77");
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
v4 = -2147483648;
v4 = -2147483648;
v4 = -2147483648;
v5 = -9223372036854775808;
v5 = -9223372036854775808;
v5 = -9223372036854775808;
LOGD("16:div-int \x76\x33\x2c\x20\x76\x30\x2c\x20\x76\x31\x34");
{
#define EX_HANDLE EX_UnwindBlock
if (v0 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v6 = v4 / v0;
}
LOGD("1a:rem-int \x76\x34\x2c\x20\x76\x30\x2c\x20\x76\x31\x34");
{
#define EX_HANDLE EX_UnwindBlock
if (v0 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v7 = v4 % v0;
}
LOGD("1e:div-long \x76\x35\x2c\x20\x76\x31\x2c\x20\x76\x31\x35");
{
#define EX_HANDLE EX_UnwindBlock
if (v1 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v8 = v5 / v1;
}
LOGD("22:rem-long \x76\x37\x2c\x20\x76\x31\x2c\x20\x76\x31\x35");
{
#define EX_HANDLE EX_UnwindBlock
if (v1 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v9 = v5 % v1;
}
v10 = 1;
LOGD("2a:if-ne \x76\x33\x2c\x20\x76\x30\x2c\x20\x2b\x34");
if(v6 != v4) {
goto L2;
}
else {
goto L1;
}
L1:
v11 = 1;
goto L3;
L2:
v11 = 0;
L3:
LOGD("34:invoke-static \x76\x31\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v11}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("3a:if-nez \x76\x34\x2c\x20\x2b\x34");
if(v7 != 0){
goto L5;
}
else {
goto L4;
}
L4:
v11 = 1;
goto L6;
L5:
v11 = 0;
L6:
LOGD("44:invoke-static \x76\x31\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v11}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("4a:cmp-long \x76\x31\x31\x2c\x20\x76\x35\x2c\x20\x76\x31");
v11 = (v8 == v5) ? 0 : (v8 > v5) ? 1 : -1;
LOGD("4e:if-nez \x76\x31\x31\x2c\x20\x2b\x34");
if(v11 != 0){
goto L8;
}
else {
goto L7;
}
L7:
v11 = 1;
goto L9;
L8:
v11 = 0;
L9:
LOGD("58:invoke-static \x76\x31\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v11}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v12 = 0;
LOGD("62:cmp-long \x76\x31\x33\x2c\x20\x76\x37\x2c\x20\x76\x31\x31");
v13 = (v9 == v12) ? 0 : (v9 > v12) ? 1 : -1;
LOGD("66:if-nez \x76\x31\x33\x2c\x20\x2b\x33");
if(v13 != 0){
goto L11;
}
else {
goto L10;
}
L10:
goto L12;
L11:
v10 = 0;
L12:
LOGD("6e:invoke-static \x76\x39\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v10}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;
EX_UnwindBlock: return;
}
