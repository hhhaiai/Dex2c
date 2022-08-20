#include "Dex2C.h"

/* Lcom/test/TestCompiler/MoreClasses;->superFunc(Z)V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_MoreClasses_superFunc__Z(JNIEnv *env, jobject thiz, jboolean p1){
jobject v0 = NULL;
jint v1;
jclass cls0 = NULL;
jmethodID mth0 = NULL;
v0 = (jobject)env->NewLocalRef(thiz);
v1 = (jint)p1;
L0:
LOGD("0:invoke-super \x76\x30\x2c\x20\x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x43\x6c\x61\x73\x73\x65\x73\x3b\x2d\x3e\x73\x75\x62\x46\x75\x6e\x63\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_METHOD(clz, mid, "com/test/TestCompiler/Classes", "subFunc", "(Z)V");
jvalue args[] = {{.z = (jboolean) v1}};
env->CallNonvirtualVoidMethodA(v0, clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;
EX_UnwindBlock: return;
}
