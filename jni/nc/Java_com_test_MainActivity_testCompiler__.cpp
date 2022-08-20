#include "Dex2C.h"

/* Lcom/test/MainActivity;->testCompiler()I */
extern "C" JNIEXPORT jint JNICALL
Java_com_test_MainActivity_testCompiler__(JNIEnv *env, jobject thiz){
jobject v0 = NULL;
jobject v1 = NULL;
jobject v2 = NULL;
jint v3;
jclass cls0 = NULL,cls1 = NULL;
jmethodID mth0 = NULL;
v0 = (jobject)env->NewLocalRef(thiz);
L0:
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = 0;
LOGD("2:filled-new-array \x76\x30\x2c\x20\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
D2C_RESOLVE_CLASS(clz,"java/lang/String");
v2 = env->NewObjectArray((jint) 1, clz, NULL);
d2c_filled_new_array(env, (jarray) v2, "Ljava/lang/String;", 1, v1);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("8:move-result-object \x76\x30");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jobject) v2;
LOGD("a:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x6d\x61\x69\x6e\x28\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls1;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "main", "([Ljava/lang/String;)V");
jvalue args[] = {{.l = v1}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v3 = 0;
return (jint) v3;
EX_UnwindBlock: return (jint)0;
}
