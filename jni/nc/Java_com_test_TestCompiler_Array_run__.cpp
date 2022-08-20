#include "Dex2C.h"

/* Lcom/test/TestCompiler/Array;->run()V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_Array_run__(JNIEnv *env, jobject thiz){
jobject v0 = NULL;
jobject v1 = NULL;
jint v2;
jobject v3 = NULL;
jobject v4 = NULL;
jobject v5 = NULL;
jobject v6 = NULL;
jobject v7 = NULL;
jobject v8 = NULL;
jobject v9 = NULL;
jobject v10 = NULL;
jobject v11 = NULL;
jobject v12 = NULL;
jobject v13 = NULL;
jint v14;
jint v15;
jint v16;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL,cls3 = NULL,cls4 = NULL,cls5 = NULL,cls6 = NULL,cls7 = NULL,cls8 = NULL,cls9 = NULL,cls10 = NULL;
jfieldID fld0 = NULL;
jmethodID mth0 = NULL, mth1 = NULL, mth2 = NULL, mth3 = NULL, mth4 = NULL, mth5 = NULL, mth6 = NULL, mth7 = NULL, mth8 = NULL, mth9 = NULL, mth10 = NULL, mth11 = NULL;
L0:
LOGD("0:sget-object \x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x79\x73\x74\x65\x6d\x3b\x2d\x3e\x6f\x75\x74\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x50\x72\x69\x6e\x74\x53\x74\x72\x65\x61\x6d\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
jclass &clz = cls0;
jfieldID &fld = fld0;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "java/lang/System", "out", "Ljava/io/PrintStream;");
v0 = (jobject) env->GetStaticObjectField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("4:const-string \x76\x31\x2c\x20\x27\x41\x72\x72\x61\x79\x20\x63\x68\x65\x63\x6b\x2e\x2e\x2e\x27");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jstring) env->NewStringUTF("\x41\x72\x72\x61\x79\x20\x63\x68\x65\x63\x6b\x2e\x2e\x2e");
LOGD("8:invoke-virtual \x76\x30\x2c\x20\x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x50\x72\x69\x6e\x74\x53\x74\x72\x65\x61\x6d\x3b\x2d\x3e\x70\x72\x69\x6e\x74\x6c\x6e\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls1;
jmethodID &mid = mth0;
D2C_RESOLVE_METHOD(clz, mid, "java/io/PrintStream", "println", "(Ljava/lang/String;)V");
jvalue args[] = {{.l = v1}};
env->CallVoidMethodA(v0, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v2 = 5;
v2 = 5;
v2 = 5;
v2 = 5;
v2 = 5;
v2 = 5;
v2 = 5;
LOGD("10:new-array \x76\x31\x2c\x20\x76\x30\x2c\x20\x5b\x42");
{
#define EX_HANDLE EX_UnwindBlock
if (v2 < 0) {
d2c_throw_exception(env, "java/lang/NegativeArraySizeException", "negative array size");
goto EX_HANDLE;
}
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jarray) env->NewByteArray((jint) v2);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("14:fill-array-data \x76\x31\x2c\x20\x2b\x35\x38\x20\x28\x30\x78\x61\x66\x29");
{
static const unsigned char data[] = {0, 255, 254, 253, 252};
env->SetByteArrayRegion((jbyteArray) v1, 0, 5, (const jbyte *) data);
}
LOGD("1a:new-array \x76\x32\x2c\x20\x76\x30\x2c\x20\x5b\x53");
{
#define EX_HANDLE EX_UnwindBlock
if (v2 < 0) {
d2c_throw_exception(env, "java/lang/NegativeArraySizeException", "negative array size");
goto EX_HANDLE;
}
if (v3) {
LOGD("env->DeleteLocalRef(%p):v3", v3);
env->DeleteLocalRef(v3);
}
v3 = (jarray) env->NewShortArray((jint) v2);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1e:fill-array-data \x76\x32\x2c\x20\x2b\x35\x62\x20\x28\x30\x78\x62\x35\x29");
{
static const unsigned char data[] = {20, 0, 10, 0, 0, 0, 246, 255, 236, 255};
env->SetShortArrayRegion((jshortArray) v3, 0, 5, (const jshort *) data);
}
LOGD("24:new-array \x76\x33\x2c\x20\x76\x30\x2c\x20\x5b\x43");
{
#define EX_HANDLE EX_UnwindBlock
if (v2 < 0) {
d2c_throw_exception(env, "java/lang/NegativeArraySizeException", "negative array size");
goto EX_HANDLE;
}
if (v4) {
LOGD("env->DeleteLocalRef(%p):v4", v4);
env->DeleteLocalRef(v4);
}
v4 = (jarray) env->NewCharArray((jint) v2);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("28:fill-array-data \x76\x33\x2c\x20\x2b\x36\x30\x20\x28\x30\x78\x62\x66\x29");
{
static const unsigned char data[] = {64, 156, 65, 156, 66, 156, 67, 156, 68, 156};
env->SetCharArrayRegion((jcharArray) v4, 0, 5, (const jchar *) data);
}
LOGD("2e:new-array \x76\x34\x2c\x20\x76\x30\x2c\x20\x5b\x49");
{
#define EX_HANDLE EX_UnwindBlock
if (v2 < 0) {
d2c_throw_exception(env, "java/lang/NegativeArraySizeException", "negative array size");
goto EX_HANDLE;
}
if (v5) {
LOGD("env->DeleteLocalRef(%p):v5", v5);
env->DeleteLocalRef(v5);
}
v5 = (jarray) env->NewIntArray((jint) v2);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("32:fill-array-data \x76\x34\x2c\x20\x2b\x36\x35\x20\x28\x30\x78\x63\x39\x29");
{
static const unsigned char data[] = {112, 17, 1, 0, 113, 17, 1, 0, 114, 17, 1, 0, 115, 17, 1, 0, 116, 17, 1, 0};
env->SetIntArrayRegion((jintArray) v5, 0, 5, (const jint *) data);
}
LOGD("38:new-array \x76\x35\x2c\x20\x76\x30\x2c\x20\x5b\x5a");
{
#define EX_HANDLE EX_UnwindBlock
if (v2 < 0) {
d2c_throw_exception(env, "java/lang/NegativeArraySizeException", "negative array size");
goto EX_HANDLE;
}
if (v6) {
LOGD("env->DeleteLocalRef(%p):v6", v6);
env->DeleteLocalRef(v6);
}
v6 = (jarray) env->NewBooleanArray((jint) v2);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("3c:fill-array-data \x76\x35\x2c\x20\x2b\x36\x65\x20\x28\x30\x78\x64\x62\x29");
{
static const unsigned char data[] = {1, 1, 0, 1, 0};
env->SetBooleanArrayRegion((jbooleanArray) v6, 0, 5, (const jboolean *) data);
}
LOGD("42:new-array \x76\x36\x2c\x20\x76\x30\x2c\x20\x5b\x46");
{
#define EX_HANDLE EX_UnwindBlock
if (v2 < 0) {
d2c_throw_exception(env, "java/lang/NegativeArraySizeException", "negative array size");
goto EX_HANDLE;
}
if (v7) {
LOGD("env->DeleteLocalRef(%p):v7", v7);
env->DeleteLocalRef(v7);
}
v7 = (jarray) env->NewFloatArray((jint) v2);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("46:fill-array-data \x76\x36\x2c\x20\x2b\x37\x31\x20\x28\x30\x78\x65\x31\x29");
{
static const unsigned char data[] = {0, 0, 192, 191, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 192, 63};
env->SetFloatArrayRegion((jfloatArray) v7, 0, 5, (const jfloat *) data);
}
LOGD("4c:new-array \x76\x30\x2c\x20\x76\x30\x2c\x20\x5b\x4a");
{
#define EX_HANDLE EX_UnwindBlock
if (v2 < 0) {
d2c_throw_exception(env, "java/lang/NegativeArraySizeException", "negative array size");
goto EX_HANDLE;
}
if (v0) {
LOGD("env->DeleteLocalRef(%p):v0", v0);
env->DeleteLocalRef(v0);
}
v0 = (jarray) env->NewLongArray((jint) v2);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("50:fill-array-data \x76\x30\x2c\x20\x2b\x37\x61\x20\x28\x30\x78\x66\x33\x29");
{
static const unsigned char data[] = {136, 119, 102, 85, 68, 51, 34, 17, 17, 34, 51, 68, 85, 102, 119, 136, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255};
env->SetLongArrayRegion((jlongArray) v0, 0, 5, (const jlong *) data);
}
LOGD("56:const-string \x76\x37\x2c\x20\x27\x7a\x65\x72\x6f\x27");
if (v8) {
LOGD("env->DeleteLocalRef(%p):v8", v8);
env->DeleteLocalRef(v8);
}
v8 = (jstring) env->NewStringUTF("\x7a\x65\x72\x6f");
LOGD("5a:const-string \x76\x38\x2c\x20\x27\x6f\x6e\x65\x27");
if (v9) {
LOGD("env->DeleteLocalRef(%p):v9", v9);
env->DeleteLocalRef(v9);
}
v9 = (jstring) env->NewStringUTF("\x6f\x6e\x65");
LOGD("5e:const-string \x76\x39\x2c\x20\x27\x74\x77\x6f\x27");
if (v10) {
LOGD("env->DeleteLocalRef(%p):v10", v10);
env->DeleteLocalRef(v10);
}
v10 = (jstring) env->NewStringUTF("\x74\x77\x6f");
LOGD("62:const-string \x76\x31\x30\x2c\x20\x27\x74\x68\x72\x65\x65\x27");
if (v11) {
LOGD("env->DeleteLocalRef(%p):v11", v11);
env->DeleteLocalRef(v11);
}
v11 = (jstring) env->NewStringUTF("\x74\x68\x72\x65\x65");
LOGD("66:const-string \x76\x31\x31\x2c\x20\x27\x66\x6f\x75\x72\x27");
if (v12) {
LOGD("env->DeleteLocalRef(%p):v12", v12);
env->DeleteLocalRef(v12);
}
v12 = (jstring) env->NewStringUTF("\x66\x6f\x75\x72");
LOGD("6a:filled-new-array \x76\x37\x2c\x20\x76\x38\x2c\x20\x76\x39\x2c\x20\x76\x31\x30\x2c\x20\x76\x31\x31\x2c\x20\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls9;
D2C_RESOLVE_CLASS(clz,"java/lang/String");
v13 = env->NewObjectArray((jint) 5, clz, NULL);
d2c_filled_new_array(env, (jarray) v13, "Ljava/lang/String;", 5, v8, v9, v10, v11, v12);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("70:move-result-object \x76\x37");
if (v8) {
LOGD("env->DeleteLocalRef(%p):v8", v8);
env->DeleteLocalRef(v8);
}
v8 = (jobject) v13;
v14 = 0;
LOGD("74:new-array \x76\x38\x2c\x20\x76\x38\x2c\x20\x5b\x49");
{
#define EX_HANDLE EX_UnwindBlock
if (v14 < 0) {
d2c_throw_exception(env, "java/lang/NegativeArraySizeException", "negative array size");
goto EX_HANDLE;
}
if (v9) {
LOGD("env->DeleteLocalRef(%p):v9", v9);
env->DeleteLocalRef(v9);
}
v9 = (jarray) env->NewIntArray((jint) v14);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("78:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x41\x72\x72\x61\x79\x3b\x2d\x3e\x63\x68\x65\x63\x6b\x42\x79\x74\x65\x73\x28\x5b\x42\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls10;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Array", "checkBytes", "([B)V");
jvalue args[] = {{.l = v1}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("7e:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x41\x72\x72\x61\x79\x3b\x2d\x3e\x63\x68\x65\x63\x6b\x53\x68\x6f\x72\x74\x73\x28\x5b\x53\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls10;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Array", "checkShorts", "([S)V");
jvalue args[] = {{.l = v3}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("84:invoke-static \x76\x33\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x41\x72\x72\x61\x79\x3b\x2d\x3e\x63\x68\x65\x63\x6b\x43\x68\x61\x72\x73\x28\x5b\x43\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls10;
jmethodID &mid = mth3;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Array", "checkChars", "([C)V");
jvalue args[] = {{.l = v4}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("8a:invoke-static \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x41\x72\x72\x61\x79\x3b\x2d\x3e\x63\x68\x65\x63\x6b\x49\x6e\x74\x73\x28\x5b\x49\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls10;
jmethodID &mid = mth4;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Array", "checkInts", "([I)V");
jvalue args[] = {{.l = v5}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("90:invoke-static \x76\x35\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x41\x72\x72\x61\x79\x3b\x2d\x3e\x63\x68\x65\x63\x6b\x42\x6f\x6f\x6c\x65\x61\x6e\x73\x28\x5b\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls10;
jmethodID &mid = mth5;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Array", "checkBooleans", "([Z)V");
jvalue args[] = {{.l = v6}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("96:invoke-static \x76\x36\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x41\x72\x72\x61\x79\x3b\x2d\x3e\x63\x68\x65\x63\x6b\x46\x6c\x6f\x61\x74\x73\x28\x5b\x46\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls10;
jmethodID &mid = mth6;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Array", "checkFloats", "([F)V");
jvalue args[] = {{.l = v7}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("9c:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x41\x72\x72\x61\x79\x3b\x2d\x3e\x63\x68\x65\x63\x6b\x4c\x6f\x6e\x67\x73\x28\x5b\x4a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls10;
jmethodID &mid = mth7;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Array", "checkLongs", "([J)V");
jvalue args[] = {{.l = v0}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("a2:invoke-static \x76\x37\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x41\x72\x72\x61\x79\x3b\x2d\x3e\x63\x68\x65\x63\x6b\x53\x74\x72\x69\x6e\x67\x73\x28\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls10;
jmethodID &mid = mth8;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Array", "checkStrings", "([Ljava/lang/String;)V");
jvalue args[] = {{.l = v8}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v15 = -2147483648;
v15 = -2147483648;
v16 = -1;
v16 = -1;
v16 = -1;
LOGD("ae:invoke-static \x76\x34\x2c\x20\x76\x38\x2c\x20\x76\x31\x30\x2c\x20\x76\x39\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x41\x72\x72\x61\x79\x3b\x2d\x3e\x63\x68\x65\x63\x6b\x52\x61\x6e\x67\x65\x33\x32\x28\x5b\x49\x20\x5b\x49\x20\x49\x20\x49\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls10;
jmethodID &mid = mth9;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Array", "checkRange32", "([I[III)V");
jvalue args[] = {{.l = v5},{.l = v9},{.i = v16},{.i = v15}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("b4:invoke-static \x76\x30\x2c\x20\x76\x31\x30\x2c\x20\x76\x39\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x41\x72\x72\x61\x79\x3b\x2d\x3e\x63\x68\x65\x63\x6b\x52\x61\x6e\x67\x65\x36\x34\x28\x5b\x4a\x20\x49\x20\x49\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls10;
jmethodID &mid = mth10;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Array", "checkRange64", "([JII)V");
jvalue args[] = {{.l = v0},{.i = v16},{.i = v15}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("ba:invoke-static \x76\x31\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x41\x72\x72\x61\x79\x3b\x2d\x3e\x63\x68\x65\x63\x6b\x4e\x65\x67\x41\x6c\x6c\x6f\x63\x28\x49\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls10;
jmethodID &mid = mth11;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Array", "checkNegAlloc", "(I)V");
jvalue args[] = {{.i = v16}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;
EX_UnwindBlock: return;
}
