#include "Dex2C.h"

/* Lcom/test/TestCompiler/MethodCall;->tryThing()I */
extern "C" JNIEXPORT jint JNICALL
Java_com_test_TestCompiler_MethodCall_tryThing__(JNIEnv *env, jobject thiz){
jobject v0 = NULL;
jint v1;
jint v2;
jint v3;
jclass cls0 = NULL,cls1 = NULL;
jmethodID mth0 = NULL, mth1 = NULL;
v0 = (jobject)env->NewLocalRef(thiz);
L0:
LOGD("0:invoke-super \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x65\x74\x68\x6f\x64\x43\x61\x6c\x6c\x42\x61\x73\x65\x3b\x2d\x3e\x74\x72\x79\x54\x68\x69\x6e\x67\x28\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_METHOD(clz, mid, "com/test/TestCompiler/MethodCallBase", "tryThing", "()I");
jvalue args[] = {};
v1 = (jint) env->CallNonvirtualIntMethodA(v0, clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("6:move-result \x76\x30");
v2 = (jint) v1;
v3 = 7;
LOGD("a:if-ne \x76\x30\x2c\x20\x76\x31\x2c\x20\x2b\x34");
if(v2 != v3) {
goto L2;
}
else {
goto L1;
}
L1:
v3 = 1;
goto L3;
L2:
v3 = 0;
L3:
LOGD("14:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls1;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v3}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return (jint) v2;
EX_UnwindBlock: return (jint)0;
}
