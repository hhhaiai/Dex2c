#include "Dex2C.h"

/* Lcom/test/TestCompiler/FillArrayData;->newLongArray()[J */
extern "C" JNIEXPORT jarray JNICALL
Java_com_test_TestCompiler_FillArrayData_newLongArray__(JNIEnv *env, jobject thiz){
jint v0;
jobject v1 = NULL;
jclass cls0 = NULL;
L0:
v0 = 3;
LOGD("2:new-array \x76\x30\x2c\x20\x76\x30\x2c\x20\x5b\x4a");
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
v1 = (jarray) env->NewLongArray((jint) v0);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("6:fill-array-data \x76\x30\x2c\x20\x2b\x35\x20\x28\x30\x78\x39\x29");
{
static const unsigned char data[] = {69, 87, 50, 192, 179, 207, 171, 64, 189, 207, 236, 97, 142, 221, 163, 104, 2, 39, 31, 34, 66, 173, 79, 169};
env->SetLongArrayRegion((jlongArray) v1, 0, 3, (const jlong *) data);
}
return (jarray) v1;
EX_UnwindBlock: return (jarray)0;
}
