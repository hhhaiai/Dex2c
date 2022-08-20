#include "Dex2C.h"

/* Lcom/test/TestCompiler/Goto;->smallGoto(Z)I */
extern "C" JNIEXPORT jint JNICALL
Java_com_test_TestCompiler_Goto_smallGoto__Z(JNIEnv *env, jobject thiz, jboolean p2){
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
LOGD("4:const-string \x76\x31\x2c\x20\x27\x47\x6f\x74\x6f\x2e\x73\x6d\x61\x6c\x6c\x47\x6f\x74\x6f\x27");
if (v2) {
LOGD("env->DeleteLocalRef(%p):v2", v2);
env->DeleteLocalRef(v2);
}
v2 = (jstring) env->NewStringUTF("\x47\x6f\x74\x6f\x2e\x73\x6d\x61\x6c\x6c\x47\x6f\x74\x6f");
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
LOGD("10:if-eqz \x76\x32\x2c\x20\x2b\x38");
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
LOGD("20:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x47\x6f\x74\x6f\x3b\x2d\x3e\x66\x69\x6c\x6c\x65\x72\x28\x49\x29\x49");
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
LOGD("26:move-result \x76\x31");
v5 = (jint) v4;
LOGD("28:sub-int/2addr \x76\x30\x2c\x20\x76\x31");
v3 = (v3 - v5);
L3:
return (jint) v3;
EX_UnwindBlock: return (jint)0;
}
