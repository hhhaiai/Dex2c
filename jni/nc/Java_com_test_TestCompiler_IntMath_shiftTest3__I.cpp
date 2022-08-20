#include "Dex2C.h"

/* Lcom/test/TestCompiler/IntMath;->shiftTest3(I)V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_IntMath_shiftTest3__I(JNIEnv *env, jobject thiz, jint p9){
jint v0;
jobject v1 = NULL;
jobject v2 = NULL;
jint v3;
jint v4;
jint v5;
jint v6;
jint v7;
jint v8;
jint v9;
jint v10;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL;
jfieldID fld0 = NULL;
jmethodID mth0 = NULL, mth1 = NULL;
v0 = (jint)p9;
L0:
LOGD("0:sget-object \x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x79\x73\x74\x65\x6d\x3b\x2d\x3e\x6f\x75\x74\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x50\x72\x69\x6e\x74\x53\x74\x72\x65\x61\x6d\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
jclass &clz = cls0;
jfieldID &fld = fld0;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "java/lang/System", "out", "Ljava/io/PrintStream;");
v1 = (jobject) env->GetStaticObjectField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("4:const-string \x76\x31\x2c\x20\x27\x49\x6e\x74\x4d\x61\x74\x68\x2e\x73\x68\x69\x66\x74\x54\x65\x73\x74\x33\x27");
if (v2) {
LOGD("env->DeleteLocalRef(%p):v2", v2);
env->DeleteLocalRef(v2);
}
v2 = (jstring) env->NewStringUTF("\x49\x6e\x74\x4d\x61\x74\x68\x2e\x73\x68\x69\x66\x74\x54\x65\x73\x74\x33");
LOGD("8:invoke-virtual \x76\x30\x2c\x20\x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x50\x72\x69\x6e\x74\x53\x74\x72\x65\x61\x6d\x3b\x2d\x3e\x70\x72\x69\x6e\x74\x6c\x6e\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
jclass &clz = cls1;
jmethodID &mid = mth0;
D2C_RESOLVE_METHOD(clz, mid, "java/io/PrintStream", "println", "(Ljava/lang/String;)V");
jvalue args[] = {{.l = v2}};
env->CallVoidMethodA(v1, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("e:div-int/lit8 \x76\x30\x2c\x20\x76\x39\x2c\x20\x33\x32");
{
#define EX_HANDLE EX_UnwindBlock
if (32 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v3 = v0 / 32;
}
LOGD("12:div-int/lit8 \x76\x31\x2c\x20\x76\x39\x2c\x20\x32");
{
#define EX_HANDLE EX_UnwindBlock
if (2 == 0) {
d2c_throw_exception(env, "java/lang/ArithmeticException", "divide by zero");
goto EX_HANDLE;
}
#undef EX_HANDLE
v4 = v0 / 2;
}
LOGD("16:add-int/lit8 \x76\x32\x2c\x20\x76\x39\x2c\x20\x31");
v5 = (v0 + 1);
LOGD("1a:mul-int/lit8 \x76\x33\x2c\x20\x76\x39\x2c\x20\x32");
v6 = (v0 * 2);
v7 = 1;
v7 = 1;
v7 = 1;
v7 = 1;
v7 = 1;
v7 = 1;
v7 = 1;
v7 = 1;
v7 = 1;
v7 = 1;
v7 = 1;
v7 = 1;
v7 = 1;
v7 = 1;
v7 = 1;
v7 = 1;
v7 = 1;
v7 = 1;
v7 = 1;
v7 = 1;
v7 = 1;
v7 = 1;
v7 = 1;
v7 = 1;
v7 = 1;
v7 = 1;
LOGD("20:shl-int \x76\x35\x2c\x20\x76\x34\x2c\x20\x76\x39");
v8 = (v7) << (v0 & 0x1f);
LOGD("26:if-ne \x76\x35\x2c\x20\x76\x34\x2c\x20\x2b\x34");
if(v8 != v7) {
goto L2;
}
else {
goto L1;
}
L1:
v8 = 1;
goto L3;
L2:
v8 = 0;
L3:
LOGD("30:invoke-static \x76\x35\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v8}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("36:shl-int \x76\x35\x2c\x20\x76\x34\x2c\x20\x76\x31");
v8 = (v7) << (v4 & 0x1f);
LOGD("3a:shl-int/2addr \x76\x35\x2c\x20\x76\x31");
v8 = (v8) << (v4 & 0x1f);
LOGD("3c:if-nez \x76\x35\x2c\x20\x2b\x34");
if(v8 != 0){
goto L5;
}
else {
goto L4;
}
L4:
v8 = 1;
goto L6;
L5:
v8 = 0;
L6:
LOGD("46:invoke-static \x76\x35\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v8}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("4c:shl-int \x76\x35\x2c\x20\x76\x34\x2c\x20\x76\x32");
v8 = (v7) << (v5 & 0x1f);
v9 = 2;
v9 = 2;
LOGD("52:if-ne \x76\x35\x2c\x20\x76\x37\x2c\x20\x2b\x34");
if(v8 != v9) {
goto L8;
}
else {
goto L7;
}
L7:
v8 = 1;
goto L9;
L8:
v8 = 0;
L9:
LOGD("5c:invoke-static \x76\x35\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v8}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("62:neg-int \x76\x35\x2c\x20\x76\x30");
v8 = (- v3);
LOGD("64:shl-int \x76\x35\x2c\x20\x76\x34\x2c\x20\x76\x35");
v8 = (v7) << (v8 & 0x1f);
v10 = -2147483648;
v10 = -2147483648;
LOGD("6c:if-ne \x76\x35\x2c\x20\x76\x38\x2c\x20\x2b\x34");
if(v8 != v10) {
goto L11;
}
else {
goto L10;
}
L10:
v8 = 1;
goto L12;
L11:
v8 = 0;
L12:
LOGD("76:invoke-static \x76\x35\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v8}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("7c:neg-int \x76\x35\x2c\x20\x76\x39");
v8 = (- v0);
LOGD("7e:shl-int \x76\x35\x2c\x20\x76\x34\x2c\x20\x76\x35");
v8 = (v7) << (v8 & 0x1f);
LOGD("82:if-ne \x76\x35\x2c\x20\x76\x34\x2c\x20\x2b\x34");
if(v8 != v7) {
goto L14;
}
else {
goto L13;
}
L13:
v8 = 1;
goto L15;
L14:
v8 = 0;
L15:
LOGD("8c:invoke-static \x76\x35\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v8}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("92:neg-int \x76\x35\x2c\x20\x76\x32");
v8 = (- v5);
LOGD("94:shl-int \x76\x35\x2c\x20\x76\x34\x2c\x20\x76\x35");
v8 = (v7) << (v8 & 0x1f);
LOGD("98:if-ne \x76\x35\x2c\x20\x76\x38\x2c\x20\x2b\x34");
if(v8 != v10) {
goto L17;
}
else {
goto L16;
}
L16:
v8 = 1;
goto L18;
L17:
v8 = 0;
L18:
LOGD("a2:invoke-static \x76\x35\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v8}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("a8:shl-int \x76\x35\x2c\x20\x76\x34\x2c\x20\x76\x32");
v8 = (v7) << (v5 & 0x1f);
LOGD("ac:if-ne \x76\x35\x2c\x20\x76\x37\x2c\x20\x2b\x34");
if(v8 != v9) {
goto L20;
}
else {
goto L19;
}
L19:
v8 = 1;
goto L21;
L20:
v8 = 0;
L21:
LOGD("b6:invoke-static \x76\x35\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v8}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("bc:shr-int \x76\x35\x2c\x20\x76\x34\x2c\x20\x76\x39");
v8 = (v7) >> (v0 & 0x1f);
LOGD("c0:if-ne \x76\x35\x2c\x20\x76\x34\x2c\x20\x2b\x34");
if(v8 != v7) {
goto L23;
}
else {
goto L22;
}
L22:
v8 = 1;
goto L24;
L23:
v8 = 0;
L24:
LOGD("ca:invoke-static \x76\x35\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v8}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("d0:shr-int \x76\x35\x2c\x20\x76\x34\x2c\x20\x76\x31");
v8 = (v7) >> (v4 & 0x1f);
LOGD("d4:shr-int/2addr \x76\x35\x2c\x20\x76\x31");
v8 = (v8) >> (v4 & 0x1f);
LOGD("d6:if-nez \x76\x35\x2c\x20\x2b\x34");
if(v8 != 0){
goto L26;
}
else {
goto L25;
}
L25:
v8 = 1;
goto L27;
L26:
v8 = 0;
L27:
LOGD("e0:invoke-static \x76\x35\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v8}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("e6:shr-int \x76\x35\x2c\x20\x76\x34\x2c\x20\x76\x32");
v8 = (v7) >> (v5 & 0x1f);
LOGD("ea:if-nez \x76\x35\x2c\x20\x2b\x34");
if(v8 != 0){
goto L29;
}
else {
goto L28;
}
L28:
v8 = 1;
goto L30;
L29:
v8 = 0;
L30:
LOGD("f4:invoke-static \x76\x35\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v8}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("fa:neg-int \x76\x35\x2c\x20\x76\x30");
v8 = (- v3);
LOGD("fc:shr-int \x76\x35\x2c\x20\x76\x34\x2c\x20\x76\x35");
v8 = (v7) >> (v8 & 0x1f);
LOGD("100:if-nez \x76\x35\x2c\x20\x2b\x34");
if(v8 != 0){
goto L32;
}
else {
goto L31;
}
L31:
v8 = 1;
goto L33;
L32:
v8 = 0;
L33:
LOGD("10a:invoke-static \x76\x35\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v8}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("110:neg-int \x76\x35\x2c\x20\x76\x39");
v8 = (- v0);
LOGD("112:shr-int \x76\x35\x2c\x20\x76\x34\x2c\x20\x76\x35");
v8 = (v7) >> (v8 & 0x1f);
LOGD("116:if-ne \x76\x35\x2c\x20\x76\x34\x2c\x20\x2b\x34");
if(v8 != v7) {
goto L35;
}
else {
goto L34;
}
L34:
v8 = 1;
goto L36;
L35:
v8 = 0;
L36:
LOGD("120:invoke-static \x76\x35\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v8}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("126:neg-int \x76\x35\x2c\x20\x76\x32");
v8 = (- v5);
LOGD("128:shr-int \x76\x35\x2c\x20\x76\x34\x2c\x20\x76\x35");
v8 = (v7) >> (v8 & 0x1f);
LOGD("12c:if-nez \x76\x35\x2c\x20\x2b\x34");
if(v8 != 0){
goto L38;
}
else {
goto L37;
}
L37:
v8 = 1;
goto L39;
L38:
v8 = 0;
L39:
LOGD("136:invoke-static \x76\x35\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v8}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v8 = -4;
v8 = -4;
LOGD("13e:shr-int \x76\x37\x2c\x20\x76\x35\x2c\x20\x76\x32");
v9 = (v8) >> (v5 & 0x1f);
v10 = -2;
LOGD("144:if-ne \x76\x37\x2c\x20\x76\x38\x2c\x20\x2b\x34");
if(v9 != v10) {
goto L41;
}
else {
goto L40;
}
L40:
v9 = 1;
goto L42;
L41:
v9 = 0;
L42:
LOGD("14e:invoke-static \x76\x37\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v9}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("154:ushr-int \x76\x37\x2c\x20\x76\x34\x2c\x20\x76\x39");
v9 = ((uint32_t) v7) >> (v0 & 0x1f);
LOGD("158:if-ne \x76\x37\x2c\x20\x76\x34\x2c\x20\x2b\x34");
if(v9 != v7) {
goto L44;
}
else {
goto L43;
}
L43:
v9 = 1;
goto L45;
L44:
v9 = 0;
L45:
LOGD("162:invoke-static \x76\x37\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v9}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("168:ushr-int \x76\x37\x2c\x20\x76\x34\x2c\x20\x76\x31");
v9 = ((uint32_t) v7) >> (v4 & 0x1f);
LOGD("16c:ushr-int/2addr \x76\x37\x2c\x20\x76\x31");
v9 = ((uint32_t) v9) >> (v4 & 0x1f);
LOGD("16e:if-nez \x76\x37\x2c\x20\x2b\x34");
if(v9 != 0){
goto L47;
}
else {
goto L46;
}
L46:
v9 = 1;
goto L48;
L47:
v9 = 0;
L48:
LOGD("178:invoke-static \x76\x37\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v9}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("17e:ushr-int \x76\x37\x2c\x20\x76\x34\x2c\x20\x76\x32");
v9 = ((uint32_t) v7) >> (v5 & 0x1f);
LOGD("182:if-nez \x76\x37\x2c\x20\x2b\x34");
if(v9 != 0){
goto L50;
}
else {
goto L49;
}
L49:
v9 = 1;
goto L51;
L50:
v9 = 0;
L51:
LOGD("18c:invoke-static \x76\x37\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v9}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("192:neg-int \x76\x37\x2c\x20\x76\x30");
v9 = (- v3);
LOGD("194:ushr-int \x76\x37\x2c\x20\x76\x34\x2c\x20\x76\x37");
v9 = ((uint32_t) v7) >> (v9 & 0x1f);
LOGD("198:if-nez \x76\x37\x2c\x20\x2b\x34");
if(v9 != 0){
goto L53;
}
else {
goto L52;
}
L52:
v9 = 1;
goto L54;
L53:
v9 = 0;
L54:
LOGD("1a2:invoke-static \x76\x37\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v9}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1a8:neg-int \x76\x37\x2c\x20\x76\x39");
v9 = (- v0);
LOGD("1aa:ushr-int \x76\x37\x2c\x20\x76\x34\x2c\x20\x76\x37");
v9 = ((uint32_t) v7) >> (v9 & 0x1f);
LOGD("1ae:if-ne \x76\x37\x2c\x20\x76\x34\x2c\x20\x2b\x34");
if(v9 != v7) {
goto L56;
}
else {
goto L55;
}
L55:
v9 = 1;
goto L57;
L56:
v9 = 0;
L57:
LOGD("1b8:invoke-static \x76\x37\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v9}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1be:neg-int \x76\x37\x2c\x20\x76\x32");
v9 = (- v5);
LOGD("1c0:ushr-int \x76\x37\x2c\x20\x76\x34\x2c\x20\x76\x37");
v9 = ((uint32_t) v7) >> (v9 & 0x1f);
LOGD("1c4:if-nez \x76\x37\x2c\x20\x2b\x34");
if(v9 != 0){
goto L59;
}
else {
goto L58;
}
L58:
v9 = 1;
goto L60;
L59:
v9 = 0;
L60:
LOGD("1ce:invoke-static \x76\x37\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v9}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("1d4:ushr-int/2addr \x76\x35\x2c\x20\x76\x32");
v8 = ((uint32_t) v8) >> (v5 & 0x1f);
v9 = 2147483646;
LOGD("1dc:if-ne \x76\x35\x2c\x20\x76\x37\x2c\x20\x2b\x33");
if(v8 != v9) {
goto L62;
}
else {
goto L61;
}
L61:
goto L63;
L62:
v7 = 0;
L63:
LOGD("1e4:invoke-static \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
return;
EX_UnwindBlock: return;
}
