#include "Dex2C.h"

/* Lcom/test/TestCompiler/FillArrayData;->newCharArray()[C */
extern "C" JNIEXPORT jarray JNICALL
Java_com_test_TestCompiler_FillArrayData_newCharArray__(JNIEnv *env, jobject thiz){
jint v0;
jobject v1 = NULL;
jclass cls0 = NULL;
L0:
v0 = 7;
LOGD("2:new-array \x76\x30\x2c\x20\x76\x30\x2c\x20\x5b\x43");
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
v1 = (jarray) env->NewCharArray((jint) v0);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("6:fill-array-data \x76\x30\x2c\x20\x2b\x35\x20\x28\x30\x78\x39\x29");
{
static const unsigned char data[] = {255, 255, 33, 67, 205, 171, 0, 0, 97, 0, 98, 0, 99, 0};
env->SetCharArrayRegion((jcharArray) v1, 0, 7, (const jchar *) data);
}
return (jarray) v1;
EX_UnwindBlock: return (jarray)0;
}
