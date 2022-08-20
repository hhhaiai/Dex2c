#include "Dex2C.h"

/* Lcom/test/MainActivity;->onCreate(Landroid/os/Bundle;)V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_MainActivity_onCreate__Landroid_os_Bundle_2(JNIEnv *env, jobject thiz, jobject p1){
jobject v0 = NULL;
jobject v1 = NULL;
jint v2;
jclass cls0 = NULL,cls1 = NULL;
jmethodID mth0 = NULL, mth1 = NULL;
v0 = (jobject)env->NewLocalRef(thiz);
v1 = (jobject)env->NewLocalRef(p1);
L0:
LOGD("0:invoke-super \x76\x30\x2c\x20\x76\x31\x2c\x20\x4c\x61\x6e\x64\x72\x6f\x69\x64\x2f\x61\x70\x70\x2f\x41\x63\x74\x69\x76\x69\x74\x79\x3b\x2d\x3e\x6f\x6e\x43\x72\x65\x61\x74\x65\x28\x4c\x61\x6e\x64\x72\x6f\x69\x64\x2f\x6f\x73\x2f\x42\x75\x6e\x64\x6c\x65\x3b\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_METHOD(clz, mid, "android/app/Activity", "onCreate", "(Landroid/os/Bundle;)V");
jvalue args[] = {{.l = v1}};
env->CallNonvirtualVoidMethodA(v0, clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("6:invoke-direct \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x4d\x61\x69\x6e\x41\x63\x74\x69\x76\x69\x74\x79\x3b\x2d\x3e\x74\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x28\x29\x49");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls1;
jmethodID &mid = mth1;
D2C_RESOLVE_METHOD(clz, mid, "com/test/MainActivity", "testCompiler", "()I");
jvalue args[] = {};
v2 = (jint) env->CallIntMethodA(v0, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;
EX_UnwindBlock: return;
}
