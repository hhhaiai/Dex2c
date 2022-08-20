#include "Dex2C.h"

/* Lcom/test/TestCompiler/FloatMath;->convTest()V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_FloatMath_convTest__(JNIEnv *env, jobject thiz){
jobject v0 = NULL;
jobject v1 = NULL;
jfloat v2;
jint v3;
jint v4;
jint v5;
jint v6;
jint v7;
jlong v8;
jlong v9;
jint v10;
jint v11;
jdouble v12;
jdouble v13;
jdouble v14;
jint v15;
jlong v16;
jlong v17;
jdouble v18;
jdouble v19;
jlong v20;
jfloat v21;
jdouble v22;
jdouble v23;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL;
jfieldID fld0 = NULL;
jmethodID mth0 = NULL, mth1 = NULL;
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
LOGD("4:const-string \x76\x31\x2c\x20\x27\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x2e\x63\x6f\x6e\x76\x54\x65\x73\x74\x27");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jstring) env->NewStringUTF("\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x2e\x63\x6f\x6e\x76\x54\x65\x73\x74");
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
LOGD("e:const \x76\x30\x2c\x20\x31\x31\x35\x30\x39\x36\x34\x32\x36\x37\x20\x23\x20\x5b\x31\x32\x33\x34\x2e\x35\x36\x37\x37\x34\x39\x30\x32\x33\x34\x33\x37\x35\x5d");
v2 = d2c_bitcast_to_float(1150964267);
v3 = d2c_float_to_int(v2);
v4 = 1234;
v4 = 1234;
v5 = 1;
LOGD("1e:if-ne \x76\x31\x2c\x20\x76\x32\x2c\x20\x2b\x34");
if(v3 != v4) {
goto L2;
}
else {
goto L1;
}
L1:
v6 = 1;
goto L3;
L2:
v6 = 0;
L3:
LOGD("28:invoke-static \x76\x35\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v6}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("2e:const \x76\x30\x2c\x20\x2d\x39\x39\x36\x35\x31\x39\x33\x38\x31\x20\x23\x20\x5b\x2d\x31\x32\x33\x34\x2e\x35\x36\x37\x37\x34\x39\x30\x32\x33\x34\x33\x37\x35\x5d");
v2 = d2c_bitcast_to_float(-996519381);
v3 = d2c_float_to_int(v2);
v6 = -1234;
v6 = -1234;
LOGD("3a:if-ne \x76\x31\x2c\x20\x76\x35\x2c\x20\x2b\x34");
if(v3 != v6) {
goto L5;
}
else {
goto L4;
}
L4:
v7 = 1;
goto L6;
L5:
v7 = 0;
L6:
LOGD("44:invoke-static \x76\x36\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v7}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("4a:const \x76\x30\x2c\x20\x31\x31\x35\x30\x39\x39\x37\x30\x33\x35\x20\x23\x20\x5b\x31\x32\x33\x38\x2e\x35\x36\x37\x37\x34\x39\x30\x32\x33\x34\x33\x37\x35\x5d");
v2 = d2c_bitcast_to_float(1150997035);
v8 = d2c_float_to_long(v2);
v9 = 1238;
LOGD("56:cmp-long \x76\x31\x30\x2c\x20\x76\x36\x2c\x20\x76\x38");
v10 = (v8 == v9) ? 0 : (v8 > v9) ? 1 : -1;
LOGD("5a:if-nez \x76\x31\x30\x2c\x20\x2b\x34");
if(v10 != 0){
goto L8;
}
else {
goto L7;
}
L7:
v11 = 1;
goto L9;
L8:
v11 = 0;
L9:
LOGD("64:invoke-static \x76\x38\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v11}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("6a:const \x76\x30\x2c\x20\x2d\x39\x39\x36\x34\x38\x36\x36\x31\x33\x20\x23\x20\x5b\x2d\x31\x32\x33\x38\x2e\x35\x36\x37\x37\x34\x39\x30\x32\x33\x34\x33\x37\x35\x5d");
v2 = d2c_bitcast_to_float(-996486613);
v8 = d2c_float_to_long(v2);
v9 = -1238;
LOGD("76:cmp-long \x76\x31\x30\x2c\x20\x76\x36\x2c\x20\x76\x38");
v10 = (v8 == v9) ? 0 : (v8 > v9) ? 1 : -1;
LOGD("7a:if-nez \x76\x31\x30\x2c\x20\x2b\x34");
if(v10 != 0){
goto L11;
}
else {
goto L10;
}
L10:
v11 = 1;
goto L12;
L11:
v11 = 0;
L12:
LOGD("84:invoke-static \x76\x38\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v11}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("8a:const \x76\x30\x2c\x20\x31\x31\x35\x30\x39\x39\x37\x30\x33\x35\x20\x23\x20\x5b\x31\x32\x33\x38\x2e\x35\x36\x37\x37\x34\x39\x30\x32\x33\x34\x33\x37\x35\x5d");
v2 = d2c_bitcast_to_float(1150997035);
v12 = (jdouble)(v2);
v13 = d2c_bitcast_to_double(4653162095117516931);
v13 = d2c_bitcast_to_double(4653162095117516931);
v14 = d2c_bitcast_to_double(4653162090719470420);
v14 = d2c_bitcast_to_double(4653162090719470420);
LOGD("a6:cmpl-double \x76\x31\x34\x2c\x20\x76\x38\x2c\x20\x76\x31\x32");
v15 = (v12 == v14) ? 0 : (v12 > v14) ? 1 : -1;
LOGD("aa:if-lez \x76\x31\x34\x2c\x20\x2b\x38");
if(v15 <= 0){
goto L15;
}
else {
goto L13;
}
L13:
LOGD("ae:cmpg-double \x76\x31\x34\x2c\x20\x76\x38\x2c\x20\x76\x31\x30");
v15 = (v12 == v13) ? 0 : (v12 < v13) ? -1 : 1;
LOGD("b2:if-gez \x76\x31\x34\x2c\x20\x2b\x34");
if(v15 >= 0){
goto L15;
}
else {
goto L14;
}
L14:
v15 = 1;
goto L16;
L15:
v15 = 0;
L16:
LOGD("bc:invoke-static \x76\x31\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v15}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("c2:const-wide \x76\x38\x2c\x20\x34\x36\x35\x33\x31\x34\x34\x35\x30\x32\x30\x35\x31\x38\x36\x33\x32\x31\x33\x20\x23\x20\x5b\x31\x32\x33\x34\x2e\x35\x36\x37\x38\x5d");
v12 = d2c_bitcast_to_double(4653144502051863213);
v3 = d2c_double_to_int(v12);
LOGD("ce:if-ne \x76\x31\x2c\x20\x76\x32\x2c\x20\x2b\x34");
if(v3 != v4) {
goto L18;
}
else {
goto L17;
}
L17:
v4 = 1;
goto L19;
L18:
v4 = 0;
L19:
LOGD("d8:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v4}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("de:const-wide \x76\x38\x2c\x20\x2d\x34\x35\x37\x30\x32\x32\x37\x35\x33\x34\x38\x30\x32\x39\x31\x32\x35\x39\x35\x20\x23\x20\x5b\x2d\x31\x32\x33\x34\x2e\x35\x36\x37\x38\x5d");
v12 = d2c_bitcast_to_double(-4570227534802912595);
v3 = d2c_double_to_int(v12);
LOGD("ea:if-ne \x76\x31\x2c\x20\x76\x35\x2c\x20\x2b\x34");
if(v3 != v6) {
goto L21;
}
else {
goto L20;
}
L20:
v4 = 1;
goto L22;
L21:
v4 = 0;
L22:
LOGD("f4:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v4}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("fa:const-wide \x76\x38\x2c\x20\x34\x37\x35\x32\x37\x34\x38\x38\x32\x35\x30\x34\x32\x34\x39\x38\x31\x34\x35\x20\x23\x20\x5b\x35\x36\x37\x38\x39\x35\x36\x37\x38\x39\x2e\x30\x31\x32\x33\x5d");
v12 = d2c_bitcast_to_double(4752748825042498145);
v16 = d2c_double_to_long(v12);
v17 = 5678956789;
LOGD("110:cmp-long \x76\x32\x2c\x20\x76\x35\x2c\x20\x76\x31\x34");
v4 = (v16 == v17) ? 0 : (v16 > v17) ? 1 : -1;
LOGD("114:if-nez \x76\x32\x2c\x20\x2b\x34");
if(v4 != 0){
goto L24;
}
else {
goto L23;
}
L23:
v4 = 1;
goto L25;
L24:
v4 = 0;
L25:
LOGD("11e:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v4}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("124:const-wide \x76\x37\x2c\x20\x2d\x34\x34\x37\x30\x36\x32\x33\x32\x31\x31\x38\x31\x32\x32\x37\x37\x36\x36\x33\x20\x23\x20\x5b\x2d\x35\x36\x37\x38\x39\x35\x36\x37\x38\x39\x2e\x30\x31\x32\x33\x5d");
v18 = d2c_bitcast_to_double(-4470623211812277663);
v16 = d2c_double_to_long(v18);
v17 = -5678956789;
LOGD("13a:cmp-long \x76\x32\x2c\x20\x76\x35\x2c\x20\x76\x31\x34");
v4 = (v16 == v17) ? 0 : (v16 > v17) ? 1 : -1;
LOGD("13e:if-nez \x76\x32\x2c\x20\x2b\x34");
if(v4 != 0){
goto L27;
}
else {
goto L26;
}
L26:
v4 = 1;
goto L28;
L27:
v4 = 0;
L28:
LOGD("148:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v4}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("14e:const-wide \x76\x37\x2c\x20\x34\x36\x35\x33\x31\x36\x32\x30\x39\x34\x32\x33\x37\x39\x30\x37\x36\x32\x39\x20\x23\x20\x5b\x31\x32\x33\x38\x2e\x35\x36\x37\x38\x5d");
v18 = d2c_bitcast_to_double(4653162094237907629);
v2 = (jfloat)(v18);
v19 = (jdouble)(v2);
LOGD("15c:cmpl-double \x76\x32\x2c\x20\x76\x31\x34\x2c\x20\x76\x31\x32");
v4 = (v19 == v14) ? 0 : (v19 > v14) ? 1 : -1;
LOGD("160:if-lez \x76\x32\x2c\x20\x2b\x39");
if(v4 <= 0){
goto L31;
}
else {
goto L29;
}
L29:
v14 = (jdouble)(v2);
LOGD("166:cmpg-double \x76\x32\x2c\x20\x76\x31\x32\x2c\x20\x76\x31\x30");
v4 = (v14 == v13) ? 0 : (v14 < v13) ? -1 : 1;
LOGD("16a:if-gez \x76\x32\x2c\x20\x2b\x34");
if(v4 >= 0){
goto L31;
}
else {
goto L30;
}
L30:
v4 = 1;
goto L32;
L31:
v4 = 0;
L32:
LOGD("174:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v4}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("17a:const/16 \x76\x31\x2c\x20\x37\x36\x35\x34");
v3 = 7654;
v16 = (jlong)(v3);
v20 = 7654;
LOGD("184:cmp-long \x76\x32\x2c\x20\x76\x35\x2c\x20\x76\x39");
v4 = (v16 == v20) ? 0 : (v16 > v20) ? 1 : -1;
LOGD("188:if-nez \x76\x32\x2c\x20\x2b\x34");
if(v4 != 0){
goto L34;
}
else {
goto L33;
}
L33:
v4 = 1;
goto L35;
L34:
v4 = 0;
L35:
LOGD("192:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v4}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("198:const/16 \x76\x31\x2c\x20\x2d\x37\x36\x35\x34");
v3 = -7654;
v16 = (jlong)(v3);
v20 = -7654;
LOGD("1a2:cmp-long \x76\x32\x2c\x20\x76\x35\x2c\x20\x76\x39");
v4 = (v16 == v20) ? 0 : (v16 > v20) ? 1 : -1;
LOGD("1a6:if-nez \x76\x32\x2c\x20\x2b\x34");
if(v4 != 0){
goto L37;
}
else {
goto L36;
}
L36:
v4 = 1;
goto L38;
L37:
v4 = 0;
L38:
LOGD("1b0:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v4}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1b6:const/16 \x76\x31\x2c\x20\x31\x32\x33\x34");
v3 = 1234;
v2 = (jfloat)(v3);
v21 = d2c_bitcast_to_float(1150958797);
LOGD("1c2:cmpl-float \x76\x32\x2c\x20\x76\x30\x2c\x20\x76\x32");
v4 = (v2 == v21) ? 0 : (v2 > v21) ? 1 : -1;
LOGD("1c6:if-lez \x76\x32\x2c\x20\x2b\x62");
if(v4 <= 0){
goto L41;
}
else {
goto L39;
}
L39:
v21 = d2c_bitcast_to_float(1150960435);
LOGD("1d0:cmpg-float \x76\x32\x2c\x20\x76\x30\x2c\x20\x76\x32");
v4 = (v2 == v21) ? 0 : (v2 < v21) ? -1 : 1;
LOGD("1d4:if-gez \x76\x32\x2c\x20\x2b\x34");
if(v4 >= 0){
goto L41;
}
else {
goto L40;
}
L40:
v4 = 1;
goto L42;
L41:
v4 = 0;
L42:
LOGD("1de:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v4}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1e4:const/16 \x76\x31\x2c\x20\x2d\x31\x32\x33\x34");
v3 = -1234;
v2 = (jfloat)(v3);
v21 = d2c_bitcast_to_float(-996524851);
LOGD("1f0:cmpg-float \x76\x32\x2c\x20\x76\x30\x2c\x20\x76\x32");
v4 = (v2 == v21) ? 0 : (v2 < v21) ? -1 : 1;
LOGD("1f4:if-gez \x76\x32\x2c\x20\x2b\x62");
if(v4 >= 0){
goto L45;
}
else {
goto L43;
}
L43:
v21 = d2c_bitcast_to_float(-996523213);
LOGD("1fe:cmpl-float \x76\x32\x2c\x20\x76\x30\x2c\x20\x76\x32");
v4 = (v2 == v21) ? 0 : (v2 > v21) ? 1 : -1;
LOGD("202:if-lez \x76\x32\x2c\x20\x2b\x34");
if(v4 <= 0){
goto L45;
}
else {
goto L44;
}
L44:
v4 = 1;
goto L46;
L45:
v4 = 0;
L46:
LOGD("20c:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v4}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("212:const/16 \x76\x31\x2c\x20\x31\x32\x33\x38");
v3 = 1238;
v18 = (jdouble)(v3);
v22 = d2c_bitcast_to_double(4653159157329821696);
LOGD("222:cmpl-double \x76\x32\x2c\x20\x76\x37\x2c\x20\x76\x39");
v4 = (v18 == v22) ? 0 : (v18 > v22) ? 1 : -1;
LOGD("226:if-lez \x76\x32\x2c\x20\x2b\x64");
if(v4 <= 0){
goto L49;
}
else {
goto L47;
}
L47:
v22 = d2c_bitcast_to_double(4653160036724375552);
LOGD("234:cmpg-double \x76\x32\x2c\x20\x76\x37\x2c\x20\x76\x39");
v4 = (v18 == v22) ? 0 : (v18 < v22) ? -1 : 1;
LOGD("238:if-gez \x76\x32\x2c\x20\x2b\x34");
if(v4 >= 0){
goto L49;
}
else {
goto L48;
}
L48:
v4 = 1;
goto L50;
L49:
v4 = 0;
L50:
LOGD("242:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v4}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("248:const/16 \x76\x31\x2c\x20\x2d\x31\x32\x33\x38");
v3 = -1238;
v18 = (jdouble)(v3);
v22 = d2c_bitcast_to_double(-4570212879524954112);
LOGD("258:cmpg-double \x76\x32\x2c\x20\x76\x37\x2c\x20\x76\x39");
v4 = (v18 == v22) ? 0 : (v18 < v22) ? -1 : 1;
LOGD("25c:if-gez \x76\x32\x2c\x20\x2b\x64");
if(v4 >= 0){
goto L53;
}
else {
goto L51;
}
L51:
v22 = d2c_bitcast_to_double(-4570212000130400256);
LOGD("26a:cmpl-double \x76\x32\x2c\x20\x76\x37\x2c\x20\x76\x39");
v4 = (v18 == v22) ? 0 : (v18 > v22) ? 1 : -1;
LOGD("26e:if-lez \x76\x32\x2c\x20\x2b\x34");
if(v4 <= 0){
goto L53;
}
else {
goto L52;
}
L52:
v4 = 1;
goto L54;
L53:
v4 = 0;
L54:
LOGD("278:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v4}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("27e:const-wide \x76\x35\x2c\x20\x35\x36\x37\x38\x39\x35\x36\x37\x38\x39\x20\x23\x20\x5b\x32\x2e\x38\x30\x35\x37\x37\x37\x34\x35\x33\x37\x65\x2d\x33\x31\x34\x5d");
v16 = 5678956789;
v3 = (jint)(v16);
v4 = 1383989493;
LOGD("290:if-ne \x76\x31\x2c\x20\x76\x32\x2c\x20\x2b\x34");
if(v3 != v4) {
goto L56;
}
else {
goto L55;
}
L55:
v4 = 1;
goto L57;
L56:
v4 = 0;
L57:
LOGD("29a:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v4}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("2a0:const-wide \x76\x35\x2c\x20\x2d\x35\x36\x37\x38\x39\x35\x36\x37\x38\x39\x20\x23\x20\x5b\x6e\x61\x6e\x5d");
v16 = -5678956789;
v3 = (jint)(v16);
v4 = -1383989493;
LOGD("2b2:if-ne \x76\x31\x2c\x20\x76\x32\x2c\x20\x2b\x34");
if(v3 != v4) {
goto L59;
}
else {
goto L58;
}
L58:
v4 = 1;
goto L60;
L59:
v4 = 0;
L60:
LOGD("2bc:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v4}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("2c2:const-wide \x76\x35\x2c\x20\x35\x36\x37\x38\x39\x35\x36\x37\x38\x39\x20\x23\x20\x5b\x32\x2e\x38\x30\x35\x37\x37\x37\x34\x35\x33\x37\x65\x2d\x33\x31\x34\x5d");
v16 = 5678956789;
v2 = (jfloat)(v16);
v22 = (jdouble)(v2);
v23 = d2c_bitcast_to_double(4752748824634589184);
LOGD("2da:cmpl-double \x76\x32\x2c\x20\x76\x39\x2c\x20\x76\x31\x31");
v4 = (v22 == v23) ? 0 : (v22 > v23) ? 1 : -1;
LOGD("2de:if-lez \x76\x32\x2c\x20\x2b\x65");
if(v4 <= 0){
goto L63;
}
else {
goto L61;
}
L61:
v22 = (jdouble)(v2);
v23 = d2c_bitcast_to_double(4752748824844304384);
LOGD("2ee:cmpg-double \x76\x32\x2c\x20\x76\x39\x2c\x20\x76\x31\x31");
v4 = (v22 == v23) ? 0 : (v22 < v23) ? -1 : 1;
LOGD("2f2:if-gez \x76\x32\x2c\x20\x2b\x34");
if(v4 >= 0){
goto L63;
}
else {
goto L62;
}
L62:
v4 = 1;
goto L64;
L63:
v4 = 0;
L64:
LOGD("2fc:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v4}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("302:const-wide \x76\x35\x2c\x20\x2d\x35\x36\x37\x38\x39\x35\x36\x37\x38\x39\x20\x23\x20\x5b\x6e\x61\x6e\x5d");
v16 = -5678956789;
v2 = (jfloat)(v16);
v22 = (jdouble)(v2);
v23 = d2c_bitcast_to_double(-4470623212220186624);
LOGD("31a:cmpg-double \x76\x32\x2c\x20\x76\x39\x2c\x20\x76\x31\x31");
v4 = (v22 == v23) ? 0 : (v22 < v23) ? -1 : 1;
LOGD("31e:if-gez \x76\x32\x2c\x20\x2b\x65");
if(v4 >= 0){
goto L67;
}
else {
goto L65;
}
L65:
v22 = (jdouble)(v2);
v23 = d2c_bitcast_to_double(-4470623212010471424);
LOGD("32e:cmpl-double \x76\x32\x2c\x20\x76\x39\x2c\x20\x76\x31\x31");
v4 = (v22 == v23) ? 0 : (v22 > v23) ? 1 : -1;
LOGD("332:if-lez \x76\x32\x2c\x20\x2b\x34");
if(v4 <= 0){
goto L67;
}
else {
goto L66;
}
L66:
v4 = 1;
goto L68;
L67:
v4 = 0;
L68:
LOGD("33c:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v4}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("342:const-wide \x76\x35\x2c\x20\x36\x36\x37\x38\x39\x35\x36\x37\x38\x39\x20\x23\x20\x5b\x33\x2e\x32\x39\x39\x38\x34\x33\x30\x39\x39\x35\x65\x2d\x33\x31\x34\x5d");
v16 = 6678956789;
v18 = (jdouble)(v16);
v22 = d2c_bitcast_to_double(4753797400949161984);
LOGD("358:cmpl-double \x76\x32\x2c\x20\x76\x37\x2c\x20\x76\x39");
v4 = (v18 == v22) ? 0 : (v18 > v22) ? 1 : -1;
LOGD("35c:if-lez \x76\x32\x2c\x20\x2b\x64");
if(v4 <= 0){
goto L71;
}
else {
goto L69;
}
L69:
v22 = d2c_bitcast_to_double(4753797401054019584);
LOGD("36a:cmpg-double \x76\x32\x2c\x20\x76\x37\x2c\x20\x76\x39");
v4 = (v18 == v22) ? 0 : (v18 < v22) ? -1 : 1;
LOGD("36e:if-gez \x76\x32\x2c\x20\x2b\x34");
if(v4 >= 0){
goto L71;
}
else {
goto L70;
}
L70:
v4 = 1;
goto L72;
L71:
v4 = 0;
L72:
LOGD("378:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v4}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("37e:const-wide \x76\x35\x2c\x20\x2d\x36\x36\x37\x38\x39\x35\x36\x37\x38\x39\x20\x23\x20\x5b\x6e\x61\x6e\x5d");
v16 = -6678956789;
v18 = (jdouble)(v16);
v22 = d2c_bitcast_to_double(-4469574635905613824);
LOGD("394:cmpg-double \x76\x32\x2c\x20\x76\x37\x2c\x20\x76\x39");
v4 = (v18 == v22) ? 0 : (v18 < v22) ? -1 : 1;
LOGD("398:if-gez \x76\x32\x2c\x20\x2b\x63");
if(v4 >= 0){
goto L75;
}
else {
goto L73;
}
L73:
v22 = d2c_bitcast_to_double(-4469574635800756224);
LOGD("3a6:cmpl-double \x76\x32\x2c\x20\x76\x37\x2c\x20\x76\x39");
v4 = (v18 == v22) ? 0 : (v18 > v22) ? 1 : -1;
LOGD("3aa:if-lez \x76\x32\x2c\x20\x2b\x33");
if(v4 <= 0){
goto L75;
}
else {
goto L74;
}
L74:
goto L76;
L75:
v5 = 0;
L76:
LOGD("3b2:invoke-static \x76\x33\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v5}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;
EX_UnwindBlock: return;
}
