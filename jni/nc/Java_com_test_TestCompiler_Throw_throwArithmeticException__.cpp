#include "Dex2C.h"

/* Lcom/test/TestCompiler/Throw;->throwArithmeticException()V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_Throw_throwArithmeticException__(JNIEnv *env, jobject thiz){
jobject v0 = NULL;
jobject v1 = NULL;
jclass cls0 = NULL;
jmethodID mth0 = NULL;
v0 = (jobject)env->NewLocalRef(thiz);
L0:
LOGD("0:new-instance \x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x41\x72\x69\x74\x68\x6d\x65\x74\x69\x63\x45\x78\x63\x65\x70\x74\x69\x6f\x6e\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
jclass &clz = cls0;
D2C_RESOLVE_CLASS(clz,"java/lang/ArithmeticException");
v1 = (jobject) env->AllocObject(clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("4:invoke-direct \x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x41\x72\x69\x74\x68\x6d\x65\x74\x69\x63\x45\x78\x63\x65\x70\x74\x69\x6f\x6e\x3b\x2d\x3e\x3c\x69\x6e\x69\x74\x3e\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/ArithmeticException", "<init>", "()V");
jvalue args[] = {};
env->CallVoidMethodA(v1, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("a:throw \x76\x30");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
env->Throw((jthrowable) v1);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
EX_UnwindBlock: return;
}
