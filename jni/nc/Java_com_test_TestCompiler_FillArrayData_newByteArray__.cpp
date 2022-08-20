#include "Dex2C.h"

/* Lcom/test/TestCompiler/FillArrayData;->newByteArray()[B */
extern "C" JNIEXPORT jarray JNICALL
Java_com_test_TestCompiler_FillArrayData_newByteArray__(JNIEnv *env, jobject thiz){
jint v0;
jobject v1 = NULL;
jclass cls0 = NULL;
L0:
v0 = 15;
LOGD("4:new-array \x76\x30\x2c\x20\x76\x30\x2c\x20\x5b\x42");
{
#define EX_HANDLE EX_UnwindBlock
if (v0 < 0) {
d2c_throw_exception(env, "java/lang/NegativeArraySizeException", "negative array size");
goto EX_HANDLE;
}
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jarray) env->NewByteArray((jint) v0);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("8:fill-array-data \x76\x30\x2c\x20\x2b\x34\x20\x28\x30\x78\x37\x29");
{
static const unsigned char data[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 121};
env->SetByteArrayRegion((jbyteArray) v1, 0, 15, (const jbyte *) data);
}
return (jarray) v1;
EX_UnwindBlock: return (jarray)0;
}
