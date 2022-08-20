#include "Dex2C.h"

/* Lcom/test/TestCompiler/Main;->assertTrue(Z)V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_Main_assertTrue__Z(JNIEnv *env, jobject thiz, jboolean p1){
jint v0;
jobject v1 = NULL;
jclass cls0 = NULL;
jmethodID mth0 = NULL;
v0 = (jint)p1;
L0:
LOGD("0:if-eqz \x76\x31\x2c\x20\x2b\x33");
if(v0 == 0){
goto L2;
}
else {
goto L1;
}
L1:
return;
L2:
LOGD("6:new-instance \x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x45\x72\x72\x6f\x72\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
jclass &clz = cls0;
D2C_RESOLVE_CLASS(clz,"java/lang/Error");
v1 = (jobject) env->AllocObject(clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("a:invoke-direct \x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x45\x72\x72\x6f\x72\x3b\x2d\x3e\x3c\x69\x6e\x69\x74\x3e\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/Error", "<init>", "()V");
jvalue args[] = {};
env->CallVoidMethodA(v1, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("10:throw \x76\x30");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
env->Throw((jthrowable) v1);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
EX_UnwindBlock: return;
}
