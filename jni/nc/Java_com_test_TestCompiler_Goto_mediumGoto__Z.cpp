#include "Dex2C.h"

/* Lcom/test/TestCompiler/Goto;->mediumGoto(Z)I */
extern "C" JNIEXPORT jint JNICALL
Java_com_test_TestCompiler_Goto_mediumGoto__Z(JNIEnv *env, jobject thiz, jboolean p2){
jint v0;
jobject v1 = NULL;
jobject v2 = NULL;
jint v3;
jint v4;
jint v5;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL;
jfieldID fld0 = NULL;
jmethodID mth0 = NULL, mth1 = NULL;
v0 = (jint)p2;
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
LOGD("4:const-string \x76\x31\x2c\x20\x27\x47\x6f\x74\x6f\x2e\x6d\x65\x64\x69\x75\x6d\x47\x6f\x74\x6f\x27");
if (v2) {
LOGD("env->DeleteLocalRef(%p):v2", v2);
env->DeleteLocalRef(v2);
}
v2 = (jstring) env->NewStringUTF("\x47\x6f\x74\x6f\x2e\x6d\x65\x64\x69\x75\x6d\x47\x6f\x74\x6f");
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
v3 = 0;
v3 = 0;
LOGD("10:if-eqz \x76\x32\x2c\x20\x2b\x39");
if(v0 == 0){
goto L2;
}
else {
goto L1;
}
L1:
LOGD("14:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1a:move-result \x76\x31");
v5 = (jint) v4;
LOGD("1c:add-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 + v5);
goto L3;
L2:
LOGD("22:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("28:move-result \x76\x31");
v5 = (jint) v4;
LOGD("2a:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("2c:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("32:move-result \x76\x31");
v5 = (jint) v4;
LOGD("34:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("36:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("3c:move-result \x76\x31");
v5 = (jint) v4;
LOGD("3e:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("40:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("46:move-result \x76\x31");
v5 = (jint) v4;
LOGD("48:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("4a:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("50:move-result \x76\x31");
v5 = (jint) v4;
LOGD("52:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("54:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("5a:move-result \x76\x31");
v5 = (jint) v4;
LOGD("5c:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("5e:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("64:move-result \x76\x31");
v5 = (jint) v4;
LOGD("66:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("68:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("6e:move-result \x76\x31");
v5 = (jint) v4;
LOGD("70:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("72:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("78:move-result \x76\x31");
v5 = (jint) v4;
LOGD("7a:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("7c:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("82:move-result \x76\x31");
v5 = (jint) v4;
LOGD("84:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("86:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("8c:move-result \x76\x31");
v5 = (jint) v4;
LOGD("8e:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("90:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("96:move-result \x76\x31");
v5 = (jint) v4;
LOGD("98:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("9a:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("a0:move-result \x76\x31");
v5 = (jint) v4;
LOGD("a2:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("a4:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("aa:move-result \x76\x31");
v5 = (jint) v4;
LOGD("ac:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("ae:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("b4:move-result \x76\x31");
v5 = (jint) v4;
LOGD("b6:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("b8:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("be:move-result \x76\x31");
v5 = (jint) v4;
LOGD("c0:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("c2:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("c8:move-result \x76\x31");
v5 = (jint) v4;
LOGD("ca:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("cc:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("d2:move-result \x76\x31");
v5 = (jint) v4;
LOGD("d4:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("d6:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("dc:move-result \x76\x31");
v5 = (jint) v4;
LOGD("de:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("e0:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("e6:move-result \x76\x31");
v5 = (jint) v4;
LOGD("e8:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("ea:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("f0:move-result \x76\x31");
v5 = (jint) v4;
LOGD("f2:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("f4:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("fa:move-result \x76\x31");
v5 = (jint) v4;
LOGD("fc:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("fe:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("104:move-result \x76\x31");
v5 = (jint) v4;
LOGD("106:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("108:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("10e:move-result \x76\x31");
v5 = (jint) v4;
LOGD("110:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("112:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("118:move-result \x76\x31");
v5 = (jint) v4;
LOGD("11a:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("11c:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("122:move-result \x76\x31");
v5 = (jint) v4;
LOGD("124:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("126:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("12c:move-result \x76\x31");
v5 = (jint) v4;
LOGD("12e:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("130:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("136:move-result \x76\x31");
v5 = (jint) v4;
LOGD("138:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("13a:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("140:move-result \x76\x31");
v5 = (jint) v4;
LOGD("142:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("144:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("14a:move-result \x76\x31");
v5 = (jint) v4;
LOGD("14c:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("14e:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("154:move-result \x76\x31");
v5 = (jint) v4;
LOGD("156:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("158:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("15e:move-result \x76\x31");
v5 = (jint) v4;
LOGD("160:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("162:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("168:move-result \x76\x31");
v5 = (jint) v4;
LOGD("16a:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("16c:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("172:move-result \x76\x31");
v5 = (jint) v4;
LOGD("174:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("176:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("17c:move-result \x76\x31");
v5 = (jint) v4;
LOGD("17e:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("180:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("186:move-result \x76\x31");
v5 = (jint) v4;
LOGD("188:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("18a:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("190:move-result \x76\x31");
v5 = (jint) v4;
LOGD("192:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("194:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("19a:move-result \x76\x31");
v5 = (jint) v4;
LOGD("19c:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("19e:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1a4:move-result \x76\x31");
v5 = (jint) v4;
LOGD("1a6:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
LOGD("1a8:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Goto", "filler", "(I)I");
jvalue args[] = {{.i = v3}};
v4 = (jint) env->CallStaticIntMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1ae:move-result \x76\x31");
v5 = (jint) v4;
LOGD("1b0:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
L3:
return (jint) v3;
EX_UnwindBlock: return (jint)0;
}
