#include "Dex2C.h"

/* Lcom/test/TestCompiler/Throw;->throwNullPointerException()V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_Throw_throwNullPointerException__(JNIEnv *env, jobject thiz){
jobject v0 = NULL;
jobject v1 = NULL;
jobject v2 = NULL;
jclass cls0 = NULL;
jmethodID mth0 = NULL;
v0 = (jobject)env->NewLocalRef(thiz);
L0:
LOGD("0:new-instance \x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4e\x75\x6c\x6c\x50\x6f\x69\x6e\x74\x65\x72\x45\x78\x63\x65\x70\x74\x69\x6f\x6e\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
jclass &clz = cls0;
D2C_RESOLVE_CLASS(clz,"java/lang/NullPointerException");
v1 = (jobject) env->AllocObject(clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("4:const-string \x76\x31\x2c\x20\x27\x6e\x70\x65\x21\x27");
if (v2) {
LOGD("env->DeleteLocalRef(%p):v2", v2);
env->DeleteLocalRef(v2);
}
v2 = (jstring) env->NewStringUTF("\x6e\x70\x65\x21");
LOGD("8:invoke-direct \x76\x30\x2c\x20\x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4e\x75\x6c\x6c\x50\x6f\x69\x6e\x74\x65\x72\x45\x78\x63\x65\x70\x74\x69\x6f\x6e\x3b\x2d\x3e\x3c\x69\x6e\x69\x74\x3e\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/NullPointerException", "<init>", "(Ljava/lang/String;)V");
jvalue args[] = {{.l = v2}};
env->CallVoidMethodA(v1, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("e:throw \x76\x30");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
env->Throw((jthrowable) v1);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
EX_UnwindBlock: return;
}
