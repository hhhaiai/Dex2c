#include "Dex2C.h"

/* Lcom/test/TestCompiler/IntMath;->divLiteralTestBody(II)V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_IntMath_divLiteralTestBody__II(JNIEnv *env, jobject thiz, jint p5, jint p6){
jint v0;
jint v1;
jint v2;
jint v3;
jint v4;
jint v5;
jint v6;
jclass cls0 = NULL;
jmethodID mth0 = NULL;
v0 = (jint)p5;
v1 = (jint)p6;
L0:
v2 = 0;
v3 = 0;
v4 = 0;
L1:
LOGD("6:if-ge \x76\x32\x2c\x20\x76\x36\x2c\x20\x2b\x39\x32");
if(v4 >= v1) {
goto L24;
}
else {
goto L2;
}
L2:
v5 = 3;
L3:
v6 = 16;
LOGD("10:if-ge \x76\x33\x2c\x20\x76\x34\x2c\x20\x2b\x38\x39");
if(v5 >= v6) {
goto L23;
}
else {
goto L4;
}
L4:
switch (v5) {
case 3: goto L18;
case 4: goto L17;
case 5: goto L16;
case 6: goto L15;
case 7: goto L14;
case 8: goto L13;
case 9: goto L12;
case 10: goto L11;
case 11: goto L10;
case 12: goto L9;
case 13: goto L8;
case 14: goto L7;
case 15: goto L6;
}
L5:
goto L19;
L6:
LOGD("1e:add-int \x76\x34\x2c\x20\x76\x35\x2c\x20\x76\x32");
v6 = (v0 + v4);
LOGD("22:div-int \x76\x30\x2c\x20\x76\x34\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
if (v5 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v2 = v6 / v5;
}
LOGD("26:add-int \x76\x34\x2c\x20\x76\x35\x2c\x20\x76\x32");
v6 = (v0 + v4);
LOGD("2a:div-int/lit8 \x76\x31\x2c\x20\x76\x34\x2c\x20\x31\x35");
{
#define EX_HANDLE EX_UnwindBlock
if (15 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v3 = v6 / 15;
}
goto L19;
L7:
LOGD("32:add-int \x76\x34\x2c\x20\x76\x35\x2c\x20\x76\x32");
v6 = (v0 + v4);
LOGD("36:div-int \x76\x30\x2c\x20\x76\x34\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
if (v5 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v2 = v6 / v5;
}
LOGD("3a:add-int \x76\x34\x2c\x20\x76\x35\x2c\x20\x76\x32");
v6 = (v0 + v4);
LOGD("3e:div-int/lit8 \x76\x31\x2c\x20\x76\x34\x2c\x20\x31\x34");
{
#define EX_HANDLE EX_UnwindBlock
if (14 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v3 = v6 / 14;
}
goto L19;
L8:
LOGD("44:add-int \x76\x34\x2c\x20\x76\x35\x2c\x20\x76\x32");
v6 = (v0 + v4);
LOGD("48:div-int \x76\x30\x2c\x20\x76\x34\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
if (v5 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v2 = v6 / v5;
}
LOGD("4c:add-int \x76\x34\x2c\x20\x76\x35\x2c\x20\x76\x32");
v6 = (v0 + v4);
LOGD("50:div-int/lit8 \x76\x31\x2c\x20\x76\x34\x2c\x20\x31\x33");
{
#define EX_HANDLE EX_UnwindBlock
if (13 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v3 = v6 / 13;
}
goto L19;
L9:
LOGD("56:add-int \x76\x34\x2c\x20\x76\x35\x2c\x20\x76\x32");
v6 = (v0 + v4);
LOGD("5a:div-int \x76\x30\x2c\x20\x76\x34\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
if (v5 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v2 = v6 / v5;
}
LOGD("5e:add-int \x76\x34\x2c\x20\x76\x35\x2c\x20\x76\x32");
v6 = (v0 + v4);
LOGD("62:div-int/lit8 \x76\x31\x2c\x20\x76\x34\x2c\x20\x31\x32");
{
#define EX_HANDLE EX_UnwindBlock
if (12 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v3 = v6 / 12;
}
goto L19;
L10:
LOGD("68:add-int \x76\x34\x2c\x20\x76\x35\x2c\x20\x76\x32");
v6 = (v0 + v4);
LOGD("6c:div-int \x76\x30\x2c\x20\x76\x34\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
if (v5 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v2 = v6 / v5;
}
LOGD("70:add-int \x76\x34\x2c\x20\x76\x35\x2c\x20\x76\x32");
v6 = (v0 + v4);
LOGD("74:div-int/lit8 \x76\x31\x2c\x20\x76\x34\x2c\x20\x31\x31");
{
#define EX_HANDLE EX_UnwindBlock
if (11 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v3 = v6 / 11;
}
goto L19;
L11:
LOGD("7a:add-int \x76\x34\x2c\x20\x76\x35\x2c\x20\x76\x32");
v6 = (v0 + v4);
LOGD("7e:div-int \x76\x30\x2c\x20\x76\x34\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
if (v5 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v2 = v6 / v5;
}
LOGD("82:add-int \x76\x34\x2c\x20\x76\x35\x2c\x20\x76\x32");
v6 = (v0 + v4);
LOGD("86:div-int/lit8 \x76\x31\x2c\x20\x76\x34\x2c\x20\x31\x30");
{
#define EX_HANDLE EX_UnwindBlock
if (10 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v3 = v6 / 10;
}
goto L19;
L12:
LOGD("8c:add-int \x76\x34\x2c\x20\x76\x35\x2c\x20\x76\x32");
v6 = (v0 + v4);
LOGD("90:div-int \x76\x30\x2c\x20\x76\x34\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
if (v5 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v2 = v6 / v5;
}
LOGD("94:add-int \x76\x34\x2c\x20\x76\x35\x2c\x20\x76\x32");
v6 = (v0 + v4);
LOGD("98:div-int/lit8 \x76\x31\x2c\x20\x76\x34\x2c\x20\x39");
{
#define EX_HANDLE EX_UnwindBlock
if (9 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v3 = v6 / 9;
}
goto L19;
L13:
LOGD("9e:add-int \x76\x34\x2c\x20\x76\x35\x2c\x20\x76\x32");
v6 = (v0 + v4);
LOGD("a2:div-int \x76\x30\x2c\x20\x76\x34\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
if (v5 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v2 = v6 / v5;
}
LOGD("a6:add-int \x76\x34\x2c\x20\x76\x35\x2c\x20\x76\x32");
v6 = (v0 + v4);
LOGD("aa:div-int/lit8 \x76\x31\x2c\x20\x76\x34\x2c\x20\x38");
{
#define EX_HANDLE EX_UnwindBlock
if (8 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v3 = v6 / 8;
}
goto L19;
L14:
LOGD("b0:add-int \x76\x34\x2c\x20\x76\x35\x2c\x20\x76\x32");
v6 = (v0 + v4);
LOGD("b4:div-int \x76\x30\x2c\x20\x76\x34\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
if (v5 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v2 = v6 / v5;
}
LOGD("b8:add-int \x76\x34\x2c\x20\x76\x35\x2c\x20\x76\x32");
v6 = (v0 + v4);
LOGD("bc:div-int/lit8 \x76\x31\x2c\x20\x76\x34\x2c\x20\x37");
{
#define EX_HANDLE EX_UnwindBlock
if (7 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v3 = v6 / 7;
}
goto L19;
L15:
LOGD("c2:add-int \x76\x34\x2c\x20\x76\x35\x2c\x20\x76\x32");
v6 = (v0 + v4);
LOGD("c6:div-int \x76\x30\x2c\x20\x76\x34\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
if (v5 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v2 = v6 / v5;
}
LOGD("ca:add-int \x76\x34\x2c\x20\x76\x35\x2c\x20\x76\x32");
v6 = (v0 + v4);
LOGD("ce:div-int/lit8 \x76\x31\x2c\x20\x76\x34\x2c\x20\x36");
{
#define EX_HANDLE EX_UnwindBlock
if (6 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v3 = v6 / 6;
}
goto L19;
L16:
LOGD("d4:add-int \x76\x34\x2c\x20\x76\x35\x2c\x20\x76\x32");
v6 = (v0 + v4);
LOGD("d8:div-int \x76\x30\x2c\x20\x76\x34\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
if (v5 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v2 = v6 / v5;
}
LOGD("dc:add-int \x76\x34\x2c\x20\x76\x35\x2c\x20\x76\x32");
v6 = (v0 + v4);
LOGD("e0:div-int/lit8 \x76\x31\x2c\x20\x76\x34\x2c\x20\x35");
{
#define EX_HANDLE EX_UnwindBlock
if (5 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v3 = v6 / 5;
}
goto L19;
L17:
LOGD("e6:add-int \x76\x34\x2c\x20\x76\x35\x2c\x20\x76\x32");
v6 = (v0 + v4);
LOGD("ea:div-int \x76\x30\x2c\x20\x76\x34\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
if (v5 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v2 = v6 / v5;
}
LOGD("ee:add-int \x76\x34\x2c\x20\x76\x35\x2c\x20\x76\x32");
v6 = (v0 + v4);
LOGD("f2:div-int/lit8 \x76\x31\x2c\x20\x76\x34\x2c\x20\x34");
{
#define EX_HANDLE EX_UnwindBlock
if (4 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v3 = v6 / 4;
}
goto L19;
L18:
LOGD("f8:add-int \x76\x34\x2c\x20\x76\x35\x2c\x20\x76\x32");
v6 = (v0 + v4);
LOGD("fc:div-int \x76\x30\x2c\x20\x76\x34\x2c\x20\x76\x33");
{
#define EX_HANDLE EX_UnwindBlock
if (v5 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v2 = v6 / v5;
}
LOGD("100:add-int \x76\x34\x2c\x20\x76\x35\x2c\x20\x76\x32");
v6 = (v0 + v4);
LOGD("104:div-int/lit8 \x76\x31\x2c\x20\x76\x34\x2c\x20\x33");
{
#define EX_HANDLE EX_UnwindBlock
if (3 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v3 = v6 / 3;
}
L19:
LOGD("10a:if-ne \x76\x30\x2c\x20\x76\x31\x2c\x20\x2b\x34");
if(v2 != v3) {
goto L21;
}
else {
goto L20;
}
L20:
v6 = 1;
goto L22;
L21:
v6 = 0;
L22:
LOGD("114:invoke-static \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
LOGD("11a:add-int/lit8 \x76\x33\x2c\x20\x76\x33\x2c\x20\x31");
v5 = (v5 + 1);
goto L3;
L23:
LOGD("122:add-int/lit8 \x76\x32\x2c\x20\x76\x32\x2c\x20\x31");
v4 = (v4 + 1);
goto L1;
L24:
return;
EX_UnwindBlock: return;
}
