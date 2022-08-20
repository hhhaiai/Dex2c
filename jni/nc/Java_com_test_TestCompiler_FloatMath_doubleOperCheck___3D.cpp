#include "Dex2C.h"

/* Lcom/test/TestCompiler/FloatMath;->doubleOperCheck([D)V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_FloatMath_doubleOperCheck___3D(JNIEnv *env, jobject thiz, jarray p26){
jobject v0 = NULL;
jint v1;
jdouble v2;
jdouble v3;
jdouble v4;
jint v5;
jint v6;
jint v7;
jdouble v8;
jdouble v9;
jint v10;
jdouble v11;
jdouble v12;
jdouble v13;
jint v14;
jdouble v15;
jdouble v16;
jdouble v17;
jdouble v18;
jint v19;
jint v20;
jclass cls0 = NULL;
jmethodID mth0 = NULL;
v0 = (jobject)env->NewLocalRef(p26);
L0:
v1 = 0;
v1 = 0;
v1 = 0;
LOGD("2:aget-wide \x76\x31\x2c\x20\x76\x32\x36\x2c\x20\x76\x30");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jdouble val;env->GetDoubleArrayRegion((jdoubleArray) v0, (jint) v1, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v3 = d2c_bitcast_to_double(4679546571110859407);
v3 = d2c_bitcast_to_double(4679546571110859407);
v4 = d2c_bitcast_to_double(4679546569736469873);
v4 = d2c_bitcast_to_double(4679546569736469873);
v5 = 1;
v5 = 1;
LOGD("1c:cmpl-double \x76\x38\x2c\x20\x76\x31\x2c\x20\x76\x35");
v6 = (v2 == v4) ? 0 : (v2 > v4) ? 1 : -1;
LOGD("20:if-lez \x76\x38\x2c\x20\x2b\x61");
if(v6 <= 0){
goto L3;
}
else {
goto L1;
}
L1:
LOGD("24:aget-wide \x76\x31\x2c\x20\x76\x32\x36\x2c\x20\x76\x30");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jdouble val;env->GetDoubleArrayRegion((jdoubleArray) v0, (jint) v1, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("28:cmpg-double \x76\x38\x2c\x20\x76\x31\x2c\x20\x76\x33");
v6 = (v2 == v3) ? 0 : (v2 < v3) ? -1 : 1;
LOGD("2c:if-gez \x76\x38\x2c\x20\x2b\x34");
if(v6 >= 0){
goto L3;
}
else {
goto L2;
}
L2:
v7 = 1;
goto L4;
L3:
v7 = 0;
L4:
LOGD("36:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v7}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("3c:aget-wide \x76\x31\x2c\x20\x76\x32\x36\x2c\x20\x76\x37");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jdouble val;env->GetDoubleArrayRegion((jdoubleArray) v0, (jint) v5, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v8 = d2c_bitcast_to_double(4679546983427719823);
v8 = d2c_bitcast_to_double(4679546983427719823);
v9 = d2c_bitcast_to_double(4679546982053330289);
v9 = d2c_bitcast_to_double(4679546982053330289);
LOGD("54:cmpl-double \x76\x31\x32\x2c\x20\x76\x31\x2c\x20\x76\x31\x30");
v10 = (v2 == v9) ? 0 : (v2 > v9) ? 1 : -1;
LOGD("58:if-lez \x76\x31\x32\x2c\x20\x2b\x61");
if(v10 <= 0){
goto L7;
}
else {
goto L5;
}
L5:
LOGD("5c:aget-wide \x76\x31\x2c\x20\x76\x32\x36\x2c\x20\x76\x37");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jdouble val;env->GetDoubleArrayRegion((jdoubleArray) v0, (jint) v5, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("60:cmpg-double \x76\x31\x32\x2c\x20\x76\x31\x2c\x20\x76\x38");
v10 = (v2 == v8) ? 0 : (v2 < v8) ? -1 : 1;
LOGD("64:if-gez \x76\x31\x32\x2c\x20\x2b\x34");
if(v10 >= 0){
goto L7;
}
else {
goto L6;
}
L6:
v7 = 1;
goto L8;
L7:
v7 = 0;
L8:
LOGD("6e:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v7}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v7 = 2;
v7 = 2;
LOGD("76:aget-wide \x76\x31\x32\x2c\x20\x76\x32\x36\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jdouble val;env->GetDoubleArrayRegion((jdoubleArray) v0, (jint) v7, 1, &val);v11 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v12 = d2c_bitcast_to_double(-4536916479303147848);
v12 = d2c_bitcast_to_double(-4536916479303147848);
v13 = d2c_bitcast_to_double(-4536916478615953080);
v13 = d2c_bitcast_to_double(-4536916478615953080);
LOGD("8e:cmpl-double \x76\x32\x2c\x20\x76\x31\x32\x2c\x20\x76\x31\x36");
v14 = (v11 == v13) ? 0 : (v11 > v13) ? 1 : -1;
LOGD("92:if-lez \x76\x32\x2c\x20\x2b\x61");
if(v14 <= 0){
goto L11;
}
else {
goto L9;
}
L9:
LOGD("96:aget-wide \x76\x31\x2c\x20\x76\x32\x36\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jdouble val;env->GetDoubleArrayRegion((jdoubleArray) v0, (jint) v7, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("9a:cmpg-double \x76\x31\x32\x2c\x20\x76\x31\x2c\x20\x76\x31\x34");
v10 = (v2 == v12) ? 0 : (v2 < v12) ? -1 : 1;
LOGD("9e:if-gez \x76\x31\x32\x2c\x20\x2b\x34");
if(v10 >= 0){
goto L11;
}
else {
goto L10;
}
L10:
v7 = 1;
goto L12;
L11:
v7 = 0;
L12:
LOGD("a8:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v7}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v7 = 3;
v7 = 3;
LOGD("b0:aget-wide \x76\x31\x32\x2c\x20\x76\x32\x36\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jdouble val;env->GetDoubleArrayRegion((jdoubleArray) v0, (jint) v7, 1, &val);v11 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v15 = d2c_bitcast_to_double(-4551229008735287378);
v15 = d2c_bitcast_to_double(-4551229008735287378);
v16 = d2c_bitcast_to_double(-4551229003237729239);
v16 = d2c_bitcast_to_double(-4551229003237729239);
LOGD("c8:cmpl-double \x76\x32\x2c\x20\x76\x31\x32\x2c\x20\x76\x32\x30");
v14 = (v11 == v16) ? 0 : (v11 > v16) ? 1 : -1;
LOGD("cc:if-lez \x76\x32\x2c\x20\x2b\x61");
if(v14 <= 0){
goto L15;
}
else {
goto L13;
}
L13:
LOGD("d0:aget-wide \x76\x31\x2c\x20\x76\x32\x36\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jdouble val;env->GetDoubleArrayRegion((jdoubleArray) v0, (jint) v7, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("d4:cmpg-double \x76\x31\x32\x2c\x20\x76\x31\x2c\x20\x76\x31\x38");
v10 = (v2 == v15) ? 0 : (v2 < v15) ? -1 : 1;
LOGD("d8:if-gez \x76\x31\x32\x2c\x20\x2b\x34");
if(v10 >= 0){
goto L15;
}
else {
goto L14;
}
L14:
v7 = 1;
goto L16;
L15:
v7 = 0;
L16:
LOGD("e2:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v7}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v7 = 4;
v7 = 4;
LOGD("ea:aget-wide \x76\x31\x32\x2c\x20\x76\x32\x36\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jdouble val;env->GetDoubleArrayRegion((jdoubleArray) v0, (jint) v7, 1, &val);v11 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v17 = d2c_bitcast_to_double(4607186922399644778);
v17 = d2c_bitcast_to_double(4607186922399644778);
v18 = d2c_bitcast_to_double(4607173411600762667);
v18 = d2c_bitcast_to_double(4607173411600762667);
LOGD("102:cmpl-double \x76\x32\x2c\x20\x76\x31\x32\x2c\x20\x76\x32\x34");
v14 = (v11 == v18) ? 0 : (v11 > v18) ? 1 : -1;
LOGD("106:if-lez \x76\x32\x2c\x20\x2b\x61");
if(v14 <= 0){
goto L19;
}
else {
goto L17;
}
L17:
LOGD("10a:aget-wide \x76\x31\x2c\x20\x76\x32\x36\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jdouble val;env->GetDoubleArrayRegion((jdoubleArray) v0, (jint) v7, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("10e:cmpg-double \x76\x31\x32\x2c\x20\x76\x31\x2c\x20\x76\x32\x32");
v10 = (v2 == v17) ? 0 : (v2 < v17) ? -1 : 1;
LOGD("112:if-gez \x76\x31\x32\x2c\x20\x2b\x34");
if(v10 >= 0){
goto L19;
}
else {
goto L18;
}
L18:
v7 = 1;
goto L20;
L19:
v7 = 0;
L20:
LOGD("11c:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v7}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v7 = 5;
LOGD("124:aget-wide \x76\x31\x2c\x20\x76\x32\x36\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jdouble val;env->GetDoubleArrayRegion((jdoubleArray) v0, (jint) v7, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("128:cmpl-double \x76\x31\x32\x2c\x20\x76\x31\x2c\x20\x76\x35");
v10 = (v2 == v4) ? 0 : (v2 > v4) ? 1 : -1;
LOGD("12c:if-lez \x76\x31\x32\x2c\x20\x2b\x62");
if(v10 <= 0){
goto L23;
}
else {
goto L21;
}
L21:
v7 = 5;
LOGD("132:aget-wide \x76\x31\x2c\x20\x76\x32\x36\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jdouble val;env->GetDoubleArrayRegion((jdoubleArray) v0, (jint) v7, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("136:cmpg-double \x76\x35\x2c\x20\x76\x31\x2c\x20\x76\x33");
v19 = (v2 == v3) ? 0 : (v2 < v3) ? -1 : 1;
LOGD("13a:if-gez \x76\x35\x2c\x20\x2b\x34");
if(v19 >= 0){
goto L23;
}
else {
goto L22;
}
L22:
v7 = 1;
goto L24;
L23:
v7 = 0;
L24:
LOGD("144:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v7}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v7 = 6;
LOGD("14c:aget-wide \x76\x31\x2c\x20\x76\x32\x36\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jdouble val;env->GetDoubleArrayRegion((jdoubleArray) v0, (jint) v7, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("150:cmpl-double \x76\x33\x2c\x20\x76\x31\x2c\x20\x76\x31\x30");
v20 = (v2 == v9) ? 0 : (v2 > v9) ? 1 : -1;
LOGD("154:if-lez \x76\x33\x2c\x20\x2b\x62");
if(v20 <= 0){
goto L27;
}
else {
goto L25;
}
L25:
v7 = 6;
LOGD("15a:aget-wide \x76\x31\x2c\x20\x76\x32\x36\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jdouble val;env->GetDoubleArrayRegion((jdoubleArray) v0, (jint) v7, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("15e:cmpg-double \x76\x33\x2c\x20\x76\x31\x2c\x20\x76\x38");
v20 = (v2 == v8) ? 0 : (v2 < v8) ? -1 : 1;
LOGD("162:if-gez \x76\x33\x2c\x20\x2b\x34");
if(v20 >= 0){
goto L27;
}
else {
goto L26;
}
L26:
v7 = 1;
goto L28;
L27:
v7 = 0;
L28:
LOGD("16c:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v7}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v7 = 7;
LOGD("174:aget-wide \x76\x31\x2c\x20\x76\x32\x36\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jdouble val;env->GetDoubleArrayRegion((jdoubleArray) v0, (jint) v7, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("178:cmpl-double \x76\x33\x2c\x20\x76\x31\x2c\x20\x76\x31\x36");
v20 = (v2 == v13) ? 0 : (v2 > v13) ? 1 : -1;
LOGD("17c:if-lez \x76\x33\x2c\x20\x2b\x62");
if(v20 <= 0){
goto L31;
}
else {
goto L29;
}
L29:
v7 = 7;
LOGD("182:aget-wide \x76\x31\x2c\x20\x76\x32\x36\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jdouble val;env->GetDoubleArrayRegion((jdoubleArray) v0, (jint) v7, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("186:cmpg-double \x76\x33\x2c\x20\x76\x31\x2c\x20\x76\x31\x34");
v20 = (v2 == v12) ? 0 : (v2 < v12) ? -1 : 1;
LOGD("18a:if-gez \x76\x33\x2c\x20\x2b\x34");
if(v20 >= 0){
goto L31;
}
else {
goto L30;
}
L30:
v7 = 1;
goto L32;
L31:
v7 = 0;
L32:
LOGD("194:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v7}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v7 = 8;
LOGD("19e:aget-wide \x76\x31\x2c\x20\x76\x32\x36\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jdouble val;env->GetDoubleArrayRegion((jdoubleArray) v0, (jint) v7, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1a2:cmpl-double \x76\x33\x2c\x20\x76\x31\x2c\x20\x76\x32\x30");
v20 = (v2 == v16) ? 0 : (v2 > v16) ? 1 : -1;
LOGD("1a6:if-lez \x76\x33\x2c\x20\x2b\x63");
if(v20 <= 0){
goto L35;
}
else {
goto L33;
}
L33:
v7 = 8;
LOGD("1ae:aget-wide \x76\x31\x2c\x20\x76\x32\x36\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jdouble val;env->GetDoubleArrayRegion((jdoubleArray) v0, (jint) v7, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1b2:cmpg-double \x76\x33\x2c\x20\x76\x31\x2c\x20\x76\x31\x38");
v20 = (v2 == v15) ? 0 : (v2 < v15) ? -1 : 1;
LOGD("1b6:if-gez \x76\x33\x2c\x20\x2b\x34");
if(v20 >= 0){
goto L35;
}
else {
goto L34;
}
L34:
v7 = 1;
goto L36;
L35:
v7 = 0;
L36:
LOGD("1c0:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v7}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v7 = 9;
LOGD("1ca:aget-wide \x76\x31\x2c\x20\x76\x32\x36\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jdouble val;env->GetDoubleArrayRegion((jdoubleArray) v0, (jint) v7, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1ce:cmpl-double \x76\x33\x2c\x20\x76\x31\x2c\x20\x76\x32\x34");
v20 = (v2 == v18) ? 0 : (v2 > v18) ? 1 : -1;
LOGD("1d2:if-lez \x76\x33\x2c\x20\x2b\x63");
if(v20 <= 0){
goto L39;
}
else {
goto L37;
}
L37:
v7 = 9;
LOGD("1da:aget-wide \x76\x31\x2c\x20\x76\x32\x36\x2c\x20\x76\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
{jdouble val;env->GetDoubleArrayRegion((jdoubleArray) v0, (jint) v7, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1de:cmpg-double \x76\x33\x2c\x20\x76\x31\x2c\x20\x76\x32\x32");
v20 = (v2 == v17) ? 0 : (v2 < v17) ? -1 : 1;
LOGD("1e2:if-gez \x76\x33\x2c\x20\x2b\x34");
if(v20 >= 0){
goto L39;
}
else {
goto L38;
}
L38:
v1 = 1;
L39:
LOGD("1ea:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
