#include "Dex2C.h"

/* Lcom/test/TestCompiler/FloatMath;->floatOperCheck([F)V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_FloatMath_floatOperCheck___3F(JNIEnv *env, jobject thiz, jarray p14){
jobject v0 = NULL;
jint v1;
jfloat v2;
jfloat v3;
jfloat v4;
jint v5;
jint v6;
jfloat v7;
jfloat v8;
jfloat v9;
jfloat v10;
jfloat v11;
jint v12;
jfloat v13;
jfloat v14;
jfloat v15;
jfloat v16;
jclass cls0 = NULL;
jmethodID mth0 = NULL;
v0 = (jobject)env->NewLocalRef(p14);
L0:
v1 = 0;
v1 = 0;
v1 = 0;
LOGD("2:aget \x76\x31\x2c\x20\x76\x31\x34\x2c\x20\x76\x30");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jfloat val;env->GetFloatArrayRegion((jfloatArray) v0, (jint) v1, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v3 = d2c_bitcast_to_float(1200141953);
v3 = d2c_bitcast_to_float(1200141953);
v4 = d2c_bitcast_to_float(1200141951);
v4 = d2c_bitcast_to_float(1200141951);
v5 = 1;
v5 = 1;
LOGD("14:cmpl-float \x76\x31\x2c\x20\x76\x31\x2c\x20\x76\x33");
v6 = (v2 == v4) ? 0 : (v2 > v4) ? 1 : -1;
LOGD("18:if-lez \x76\x31\x2c\x20\x2b\x61");
if(v6 <= 0){
goto L3;
}
else {
goto L1;
}
L1:
LOGD("1c:aget \x76\x31\x2c\x20\x76\x31\x34\x2c\x20\x76\x30");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jfloat val;env->GetFloatArrayRegion((jfloatArray) v0, (jint) v1, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("20:cmpg-float \x76\x31\x2c\x20\x76\x31\x2c\x20\x76\x32");
v6 = (v2 == v3) ? 0 : (v2 < v3) ? -1 : 1;
LOGD("24:if-gez \x76\x31\x2c\x20\x2b\x34");
if(v6 >= 0){
goto L3;
}
else {
goto L2;
}
L2:
v6 = 1;
goto L4;
L3:
v6 = 0;
L4:
LOGD("2e:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v6}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("34:aget \x76\x31\x2c\x20\x76\x31\x34\x2c\x20\x76\x34");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jfloat val;env->GetFloatArrayRegion((jfloatArray) v0, (jint) v5, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v7 = d2c_bitcast_to_float(1200142721);
v7 = d2c_bitcast_to_float(1200142721);
v8 = d2c_bitcast_to_float(1200142719);
v8 = d2c_bitcast_to_float(1200142719);
LOGD("44:cmpl-float \x76\x31\x2c\x20\x76\x31\x2c\x20\x76\x36");
v6 = (v2 == v8) ? 0 : (v2 > v8) ? 1 : -1;
LOGD("48:if-lez \x76\x31\x2c\x20\x2b\x61");
if(v6 <= 0){
goto L7;
}
else {
goto L5;
}
L5:
LOGD("4c:aget \x76\x31\x2c\x20\x76\x31\x34\x2c\x20\x76\x34");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jfloat val;env->GetFloatArrayRegion((jfloatArray) v0, (jint) v5, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("50:cmpg-float \x76\x31\x2c\x20\x76\x31\x2c\x20\x76\x35");
v6 = (v2 == v7) ? 0 : (v2 < v7) ? -1 : 1;
LOGD("54:if-gez \x76\x31\x2c\x20\x2b\x34");
if(v6 >= 0){
goto L7;
}
else {
goto L6;
}
L6:
v6 = 1;
goto L8;
L7:
v6 = 0;
L8:
LOGD("5e:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v6}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = 2;
v6 = 2;
LOGD("66:aget \x76\x37\x2c\x20\x76\x31\x34\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jfloat val;env->GetFloatArrayRegion((jfloatArray) v0, (jint) v6, 1, &val);v9 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v10 = d2c_bitcast_to_float(-934472705);
v10 = d2c_bitcast_to_float(-934472705);
v11 = d2c_bitcast_to_float(-934472703);
v11 = d2c_bitcast_to_float(-934472703);
LOGD("76:cmpl-float \x76\x37\x2c\x20\x76\x37\x2c\x20\x76\x39");
v12 = (v9 == v11) ? 0 : (v9 > v11) ? 1 : -1;
LOGD("7a:if-lez \x76\x37\x2c\x20\x2b\x61");
if(v12 <= 0){
goto L11;
}
else {
goto L9;
}
L9:
LOGD("7e:aget \x76\x31\x2c\x20\x76\x31\x34\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jfloat val;env->GetFloatArrayRegion((jfloatArray) v0, (jint) v6, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("82:cmpg-float \x76\x31\x2c\x20\x76\x31\x2c\x20\x76\x38");
v6 = (v2 == v10) ? 0 : (v2 < v10) ? -1 : 1;
LOGD("86:if-gez \x76\x31\x2c\x20\x2b\x34");
if(v6 >= 0){
goto L11;
}
else {
goto L10;
}
L10:
v6 = 1;
goto L12;
L11:
v6 = 0;
L12:
LOGD("90:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v6}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = 3;
v6 = 3;
LOGD("98:aget \x76\x37\x2c\x20\x76\x31\x34\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jfloat val;env->GetFloatArrayRegion((jfloatArray) v0, (jint) v6, 1, &val);v9 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v13 = d2c_bitcast_to_float(-961131868);
v13 = d2c_bitcast_to_float(-961131868);
v14 = d2c_bitcast_to_float(-961131858);
v14 = d2c_bitcast_to_float(-961131858);
LOGD("a8:cmpl-float \x76\x37\x2c\x20\x76\x37\x2c\x20\x76\x31\x31");
v12 = (v9 == v14) ? 0 : (v9 > v14) ? 1 : -1;
LOGD("ac:if-lez \x76\x37\x2c\x20\x2b\x61");
if(v12 <= 0){
goto L15;
}
else {
goto L13;
}
L13:
LOGD("b0:aget \x76\x31\x2c\x20\x76\x31\x34\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jfloat val;env->GetFloatArrayRegion((jfloatArray) v0, (jint) v6, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("b4:cmpg-float \x76\x31\x2c\x20\x76\x31\x2c\x20\x76\x31\x30");
v6 = (v2 == v13) ? 0 : (v2 < v13) ? -1 : 1;
LOGD("b8:if-gez \x76\x31\x2c\x20\x2b\x34");
if(v6 >= 0){
goto L15;
}
else {
goto L14;
}
L14:
v6 = 1;
goto L16;
L15:
v6 = 0;
L16:
LOGD("c2:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v6}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = 4;
v6 = 4;
LOGD("ca:aget \x76\x37\x2c\x20\x76\x31\x34\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jfloat val;env->GetFloatArrayRegion((jfloatArray) v0, (jint) v6, 1, &val);v9 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v15 = d2c_bitcast_to_float(1065361605);
v15 = d2c_bitcast_to_float(1065361605);
v16 = d2c_bitcast_to_float(1065336439);
v16 = d2c_bitcast_to_float(1065336439);
LOGD("da:cmpl-float \x76\x37\x2c\x20\x76\x37\x2c\x20\x76\x31\x33");
v12 = (v9 == v16) ? 0 : (v9 > v16) ? 1 : -1;
LOGD("de:if-lez \x76\x37\x2c\x20\x2b\x61");
if(v12 <= 0){
goto L19;
}
else {
goto L17;
}
L17:
LOGD("e2:aget \x76\x31\x2c\x20\x76\x31\x34\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jfloat val;env->GetFloatArrayRegion((jfloatArray) v0, (jint) v6, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("e6:cmpg-float \x76\x31\x2c\x20\x76\x31\x2c\x20\x76\x31\x32");
v6 = (v2 == v15) ? 0 : (v2 < v15) ? -1 : 1;
LOGD("ea:if-gez \x76\x31\x2c\x20\x2b\x34");
if(v6 >= 0){
goto L19;
}
else {
goto L18;
}
L18:
v6 = 1;
goto L20;
L19:
v6 = 0;
L20:
LOGD("f4:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v6}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = 5;
LOGD("fc:aget \x76\x31\x2c\x20\x76\x31\x34\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jfloat val;env->GetFloatArrayRegion((jfloatArray) v0, (jint) v6, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("100:cmpl-float \x76\x31\x2c\x20\x76\x31\x2c\x20\x76\x33");
v6 = (v2 == v4) ? 0 : (v2 > v4) ? 1 : -1;
LOGD("104:if-lez \x76\x31\x2c\x20\x2b\x62");
if(v6 <= 0){
goto L23;
}
else {
goto L21;
}
L21:
v6 = 5;
LOGD("10a:aget \x76\x31\x2c\x20\x76\x31\x34\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jfloat val;env->GetFloatArrayRegion((jfloatArray) v0, (jint) v6, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("10e:cmpg-float \x76\x31\x2c\x20\x76\x31\x2c\x20\x76\x32");
v6 = (v2 == v3) ? 0 : (v2 < v3) ? -1 : 1;
LOGD("112:if-gez \x76\x31\x2c\x20\x2b\x34");
if(v6 >= 0){
goto L23;
}
else {
goto L22;
}
L22:
v6 = 1;
goto L24;
L23:
v6 = 0;
L24:
LOGD("11c:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v6}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = 6;
LOGD("124:aget \x76\x31\x2c\x20\x76\x31\x34\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jfloat val;env->GetFloatArrayRegion((jfloatArray) v0, (jint) v6, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("128:cmpl-float \x76\x31\x2c\x20\x76\x31\x2c\x20\x76\x36");
v6 = (v2 == v8) ? 0 : (v2 > v8) ? 1 : -1;
LOGD("12c:if-lez \x76\x31\x2c\x20\x2b\x62");
if(v6 <= 0){
goto L27;
}
else {
goto L25;
}
L25:
v6 = 6;
LOGD("132:aget \x76\x31\x2c\x20\x76\x31\x34\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jfloat val;env->GetFloatArrayRegion((jfloatArray) v0, (jint) v6, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("136:cmpg-float \x76\x31\x2c\x20\x76\x31\x2c\x20\x76\x35");
v6 = (v2 == v7) ? 0 : (v2 < v7) ? -1 : 1;
LOGD("13a:if-gez \x76\x31\x2c\x20\x2b\x34");
if(v6 >= 0){
goto L27;
}
else {
goto L26;
}
L26:
v6 = 1;
goto L28;
L27:
v6 = 0;
L28:
LOGD("144:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v6}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = 7;
LOGD("14c:aget \x76\x31\x2c\x20\x76\x31\x34\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jfloat val;env->GetFloatArrayRegion((jfloatArray) v0, (jint) v6, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("150:cmpl-float \x76\x31\x2c\x20\x76\x31\x2c\x20\x76\x39");
v6 = (v2 == v11) ? 0 : (v2 > v11) ? 1 : -1;
LOGD("154:if-lez \x76\x31\x2c\x20\x2b\x62");
if(v6 <= 0){
goto L31;
}
else {
goto L29;
}
L29:
v6 = 7;
LOGD("15a:aget \x76\x31\x2c\x20\x76\x31\x34\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jfloat val;env->GetFloatArrayRegion((jfloatArray) v0, (jint) v6, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("15e:cmpg-float \x76\x31\x2c\x20\x76\x31\x2c\x20\x76\x38");
v6 = (v2 == v10) ? 0 : (v2 < v10) ? -1 : 1;
LOGD("162:if-gez \x76\x31\x2c\x20\x2b\x34");
if(v6 >= 0){
goto L31;
}
else {
goto L30;
}
L30:
v6 = 1;
goto L32;
L31:
v6 = 0;
L32:
LOGD("16c:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v6}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = 8;
LOGD("176:aget \x76\x31\x2c\x20\x76\x31\x34\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jfloat val;env->GetFloatArrayRegion((jfloatArray) v0, (jint) v6, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("17a:cmpl-float \x76\x31\x2c\x20\x76\x31\x2c\x20\x76\x31\x31");
v6 = (v2 == v14) ? 0 : (v2 > v14) ? 1 : -1;
LOGD("17e:if-lez \x76\x31\x2c\x20\x2b\x63");
if(v6 <= 0){
goto L35;
}
else {
goto L33;
}
L33:
v6 = 8;
LOGD("186:aget \x76\x31\x2c\x20\x76\x31\x34\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jfloat val;env->GetFloatArrayRegion((jfloatArray) v0, (jint) v6, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("18a:cmpg-float \x76\x31\x2c\x20\x76\x31\x2c\x20\x76\x31\x30");
v6 = (v2 == v13) ? 0 : (v2 < v13) ? -1 : 1;
LOGD("18e:if-gez \x76\x31\x2c\x20\x2b\x34");
if(v6 >= 0){
goto L35;
}
else {
goto L34;
}
L34:
v6 = 1;
goto L36;
L35:
v6 = 0;
L36:
LOGD("198:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v6}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = 9;
LOGD("1a2:aget \x76\x31\x2c\x20\x76\x31\x34\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jfloat val;env->GetFloatArrayRegion((jfloatArray) v0, (jint) v6, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1a6:cmpl-float \x76\x31\x2c\x20\x76\x31\x2c\x20\x76\x31\x33");
v6 = (v2 == v16) ? 0 : (v2 > v16) ? 1 : -1;
LOGD("1aa:if-lez \x76\x31\x2c\x20\x2b\x63");
if(v6 <= 0){
goto L39;
}
else {
goto L37;
}
L37:
v6 = 9;
LOGD("1b2:aget \x76\x31\x2c\x20\x76\x31\x34\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jfloat val;env->GetFloatArrayRegion((jfloatArray) v0, (jint) v6, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1b6:cmpg-float \x76\x31\x2c\x20\x76\x31\x2c\x20\x76\x31\x32");
v6 = (v2 == v15) ? 0 : (v2 < v15) ? -1 : 1;
LOGD("1ba:if-gez \x76\x31\x2c\x20\x2b\x34");
if(v6 >= 0){
goto L39;
}
else {
goto L38;
}
L38:
v1 = 1;
L39:
LOGD("1c2:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
