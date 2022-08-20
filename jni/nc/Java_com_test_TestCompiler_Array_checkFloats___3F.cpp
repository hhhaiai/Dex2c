#include "Dex2C.h"

/* Lcom/test/TestCompiler/Array;->checkFloats([F)V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_Array_checkFloats___3F(JNIEnv *env, jobject thiz, jarray p7){
jobject v0 = NULL;
jint v1;
jfloat v2;
jdouble v3;
jint v4;
jdouble v5;
jint v6;
jint v7;
jclass cls0 = NULL;
jmethodID mth0 = NULL;
v0 = (jobject)env->NewLocalRef(p7);
L0:
v1 = 0;
v1 = 0;
LOGD("2:aget \x76\x31\x2c\x20\x76\x37\x2c\x20\x76\x30");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jfloat val;env->GetFloatArrayRegion((jfloatArray) v0, (jint) v1, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v3 = (jdouble)(v2);
v4 = 1;
v5 = d2c_bitcast_to_double(-4613937818241073152);
LOGD("e:cmpl-double \x76\x36\x2c\x20\x76\x31\x2c\x20\x76\x34");
v6 = (v3 == v5) ? 0 : (v3 > v5) ? 1 : -1;
LOGD("12:if-nez \x76\x36\x2c\x20\x2b\x34");
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
LOGD("1c:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v7}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("22:aget \x76\x31\x2c\x20\x76\x37\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jfloat val;env->GetFloatArrayRegion((jfloatArray) v0, (jint) v4, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v3 = (jdouble)(v2);
v5 = d2c_bitcast_to_double(-4620693217682128896);
LOGD("2c:cmpl-double \x76\x36\x2c\x20\x76\x31\x2c\x20\x76\x34");
v6 = (v3 == v5) ? 0 : (v3 > v5) ? 1 : -1;
LOGD("30:if-nez \x76\x36\x2c\x20\x2b\x34");
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
LOGD("3a:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v7}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v7 = 2;
LOGD("42:aget \x76\x31\x2c\x20\x76\x37\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jfloat val;env->GetFloatArrayRegion((jfloatArray) v0, (jint) v7, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v3 = (jdouble)(v2);
v5 = d2c_bitcast_to_double(0);
LOGD("4c:cmpl-double \x76\x36\x2c\x20\x76\x31\x2c\x20\x76\x34");
v6 = (v3 == v5) ? 0 : (v3 > v5) ? 1 : -1;
LOGD("50:if-nez \x76\x36\x2c\x20\x2b\x34");
if(v6 != 0){
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
LOGD("5a:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v7}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v7 = 3;
LOGD("62:aget \x76\x31\x2c\x20\x76\x37\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jfloat val;env->GetFloatArrayRegion((jfloatArray) v0, (jint) v7, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v3 = (jdouble)(v2);
v5 = d2c_bitcast_to_double(4602678819172646912);
LOGD("6c:cmpl-double \x76\x36\x2c\x20\x76\x31\x2c\x20\x76\x34");
v6 = (v3 == v5) ? 0 : (v3 > v5) ? 1 : -1;
LOGD("70:if-nez \x76\x36\x2c\x20\x2b\x34");
if(v6 != 0){
goto L11;
}
else {
goto L10;
}
L10:
v7 = 1;
goto L12;
L11:
v7 = 0;
L12:
LOGD("7a:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v7}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v7 = 4;
LOGD("82:aget \x76\x31\x2c\x20\x76\x37\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jfloat val;env->GetFloatArrayRegion((jfloatArray) v0, (jint) v7, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v3 = (jdouble)(v2);
v5 = d2c_bitcast_to_double(4609434218613702656);
LOGD("8c:cmpl-double \x76\x36\x2c\x20\x76\x31\x2c\x20\x76\x34");
v6 = (v3 == v5) ? 0 : (v3 > v5) ? 1 : -1;
LOGD("90:if-nez \x76\x36\x2c\x20\x2b\x34");
if(v6 != 0){
goto L14;
}
else {
goto L13;
}
L13:
v1 = 1;
L14:
LOGD("98:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
