#include "Dex2C.h"

/* Lcom/test/TestCompiler/IntMath;->unopCheck(I)V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_IntMath_unopCheck__I(JNIEnv *env, jobject thiz, jint p1){
jint v0;
jint v1;
jclass cls0 = NULL;
jmethodID mth0 = NULL;
v0 = (jint)p1;
L0:
v1 = 37;
LOGD("4:if-ne \x76\x31\x2c\x20\x76\x30\x2c\x20\x2b\x34");
if(v0 != v1) {
goto L2;
}
else {
goto L1;
}
L1:
v1 = 1;
goto L3;
L2:
v1 = 0;
L3:
LOGD("e:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v1}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;
EX_UnwindBlock: return;
}
