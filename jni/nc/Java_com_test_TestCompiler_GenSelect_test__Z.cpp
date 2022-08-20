#include "Dex2C.h"

/* Lcom/test/TestCompiler/GenSelect;->test(Z)Ljava/lang/String; */
extern "C" JNIEXPORT jstring JNICALL
Java_com_test_TestCompiler_GenSelect_test__Z(JNIEnv *env, jobject thiz, jboolean p3){
jint v0;
jobject v1 = NULL;
jobject v2 = NULL;
jobject v3 = NULL;
v0 = (jint)p3;
L0:
LOGD("0:const-string \x76\x30\x2c\x20\x27\x74\x72\x75\x65\x27");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jstring) env->NewStringUTF("\x74\x72\x75\x65");
LOGD("4:const-string \x76\x31\x2c\x20\x27\x66\x61\x6c\x73\x65\x27");
if (v2) {
LOGD("env->DeleteLocalRef(%p):v2", v2);
env->DeleteLocalRef(v2);
}
v2 = (jstring) env->NewStringUTF("\x66\x61\x6c\x73\x65");
LOGD("8:if-eqz \x76\x33\x2c\x20\x2b\x34");
if(v0 == 0){
goto L2;
}
else {
goto L1;
}
L1:
if (v3) {
LOGD("env->DeleteLocalRef(%p):v3", v3);
env->DeleteLocalRef(v3);
}
v3 = (jobject) env->NewLocalRef(v1);
goto L3;
L2:
if (v3) {
LOGD("env->DeleteLocalRef(%p):v3", v3);
env->DeleteLocalRef(v3);
}
v3 = (jobject) env->NewLocalRef(v2);
L3:
return (jstring) v3;
EX_UnwindBlock: return NULL;
}
