#include "Dex2C.h"

/* Lcom/test/TestCompiler/Classes;->subFunc(Z)V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_Classes_subFunc__Z(JNIEnv *env, jobject thiz, jboolean p2){
jobject v0 = NULL;
jint v1;
jint v2;
jclass cls0 = NULL;
jmethodID mth0 = NULL;
v0 = (jobject)env->NewLocalRef(thiz);
v1 = (jint)p2;
L0:
LOGD("2:xor-int/lit8 \x76\x30\x2c\x20\x76\x32\x2c\x20\x31");
v2 = (v1 ^ 1);
LOGD("8:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v2}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;
EX_UnwindBlock: return;
}
