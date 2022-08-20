#include "Dex2C.h"

/* Lcom/test/TestCompiler/LocalRef;->foo(I)Ljava/lang/String; */
extern "C" JNIEXPORT jstring JNICALL
Java_com_test_TestCompiler_LocalRef_foo__I(JNIEnv *env, jobject thiz, jint p1){
jint v0;
jobject v1 = NULL;
jobject v2 = NULL;
jclass cls0 = NULL;
jmethodID mth0 = NULL;
v0 = (jint)p1;
L0:
LOGD("0:invoke-static \x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x2d\x3e\x76\x61\x6c\x75\x65\x4f\x66\x28\x49\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/String", "valueOf", "(I)Ljava/lang/String;");
jvalue args[] = {{.i = v0}};
v1 = (jstring) env->CallStaticObjectMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("6:move-result-object \x76\x30");
if (v2) {
LOGD("env->DeleteLocalRef(%p):v2", v2);
env->DeleteLocalRef(v2);
}
v2 = (jobject) v1;
return (jstring) v2;
EX_UnwindBlock: return NULL;
}
