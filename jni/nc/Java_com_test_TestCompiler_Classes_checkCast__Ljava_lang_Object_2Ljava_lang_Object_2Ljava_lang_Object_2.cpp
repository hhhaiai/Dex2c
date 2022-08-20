#include "Dex2C.h"

/* Lcom/test/TestCompiler/Classes;->checkCast(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_Classes_checkCast__Ljava_lang_Object_2Ljava_lang_Object_2Ljava_lang_Object_2(JNIEnv *env, jobject thiz, jobject p9, jobject p10, jobject p11){
jobject v0 = NULL;
jobject v1 = NULL;
jobject v2 = NULL;
jobject v3 = NULL;
jobject v4 = NULL;
jobject v5 = NULL;
jint v6;
jint v7;
jint v8;
jint v9;
jobject v10 = NULL;
jobject v11 = NULL;
jobject v12 = NULL;
jobject v13 = NULL;
jobject v14 = NULL;
jthrowable exception;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL,cls3 = NULL,cls4 = NULL,cls5 = NULL,cls6 = NULL,cls7 = NULL,cls8 = NULL;
jfieldID fld0 = NULL;
jmethodID mth0 = NULL, mth1 = NULL, mth2 = NULL, mth3 = NULL, mth4 = NULL, mth5 = NULL;
v0 = (jobject)env->NewLocalRef(thiz);
v1 = (jobject)env->NewLocalRef(p9);
v2 = (jobject)env->NewLocalRef(p10);
v3 = (jobject)env->NewLocalRef(p11);
L0:
LOGD("0:sget-object \x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x79\x73\x74\x65\x6d\x3b\x2d\x3e\x6f\x75\x74\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x50\x72\x69\x6e\x74\x53\x74\x72\x65\x61\x6d\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v4) {
LOGD("env->DeleteLocalRef(%p):v4", v4);
env->DeleteLocalRef(v4);
}
jclass &clz = cls0;
jfieldID &fld = fld0;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "java/lang/System", "out", "Ljava/io/PrintStream;");
v4 = (jobject) env->GetStaticObjectField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("4:const-string \x76\x31\x2c\x20\x27\x43\x6c\x61\x73\x73\x65\x73\x2e\x63\x68\x65\x63\x6b\x43\x61\x73\x74\x27");
if (v5) {
LOGD("env->DeleteLocalRef(%p):v5", v5);
env->DeleteLocalRef(v5);
}
v5 = (jstring) env->NewStringUTF("\x43\x6c\x61\x73\x73\x65\x73\x2e\x63\x68\x65\x63\x6b\x43\x61\x73\x74");
LOGD("8:invoke-virtual \x76\x30\x2c\x20\x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x50\x72\x69\x6e\x74\x53\x74\x72\x65\x61\x6d\x3b\x2d\x3e\x70\x72\x69\x6e\x74\x6c\x6e\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v4);
jclass &clz = cls1;
jmethodID &mid = mth0;
D2C_RESOLVE_METHOD(clz, mid, "java/io/PrintStream", "println", "(Ljava/lang/String;)V");
jvalue args[] = {{.l = v5}};
env->CallVoidMethodA(v4, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v4) {
LOGD("env->DeleteLocalRef(%p):v4", v4);
env->DeleteLocalRef(v4);
}
v4 = (jobject) env->NewLocalRef(v1);
LOGD("10:instance-of \x76\x31\x2c\x20\x76\x39\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x43\x6c\x61\x73\x73\x65\x73\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
D2C_RESOLVE_CLASS(clz,"com/test/TestCompiler/Classes");
v6 = d2c_is_instance_of(env, v1, clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("14:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v6}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v4) {
LOGD("env->DeleteLocalRef(%p):v4", v4);
env->DeleteLocalRef(v4);
}
v4 = (jobject) env->NewLocalRef(v2);
LOGD("1c:instance-of \x76\x31\x2c\x20\x76\x31\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x43\x6c\x61\x73\x73\x65\x73\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
D2C_RESOLVE_CLASS(clz,"com/test/TestCompiler/Classes");
v6 = d2c_is_instance_of(env, v2, clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("20:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v6}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v5) {
LOGD("env->DeleteLocalRef(%p):v5", v5);
env->DeleteLocalRef(v5);
}
v5 = (jobject) env->NewLocalRef(v2);
LOGD("28:check-cast \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x6f\x72\x65\x43\x6c\x61\x73\x73\x65\x73\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls4;
D2C_RESOLVE_CLASS(clz,"com/test/TestCompiler/MoreClasses");
D2C_CHECK_CAST(v5, clz, "com/test/TestCompiler/MoreClasses");
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("2c:instance-of \x76\x32\x2c\x20\x76\x31\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x6f\x72\x65\x43\x6c\x61\x73\x73\x65\x73\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls4;
D2C_RESOLVE_CLASS(clz,"com/test/TestCompiler/MoreClasses");
v7 = d2c_is_instance_of(env, v2, clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("30:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v7}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("36:instance-of \x76\x32\x2c\x20\x76\x39\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x6f\x72\x65\x43\x6c\x61\x73\x73\x65\x73\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls4;
D2C_RESOLVE_CLASS(clz,"com/test/TestCompiler/MoreClasses");
v7 = d2c_is_instance_of(env, v1, clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v8 = 1;
v9 = 0;
v9 = 0;
LOGD("3e:if-nez \x76\x32\x2c\x20\x2b\x34");
if(v7 != 0){
goto L2;
}
else {
goto L1;
}
L1:
v7 = 1;
goto L3;
L2:
v7 = 0;
L3:
LOGD("48:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v7}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L4:
if (v10) {
LOGD("env->DeleteLocalRef(%p):v10", v10);
env->DeleteLocalRef(v10);
}
v10 = (jobject) env->NewLocalRef(v1);
L5:
LOGD("50:check-cast \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x6f\x72\x65\x43\x6c\x61\x73\x73\x65\x73\x3b");
{
#define EX_HANDLE EX_LandingPad_5
jclass &clz = cls4;
D2C_RESOLVE_CLASS(clz,"com/test/TestCompiler/MoreClasses");
D2C_CHECK_CAST(v10, clz, "com/test/TestCompiler/MoreClasses");
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L6:
if (v5) {
LOGD("env->DeleteLocalRef(%p):v5", v5);
env->DeleteLocalRef(v5);
}
v5 = (jobject) env->NewLocalRef(v10);
L7:
LOGD("56:invoke-static \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_LandingPad_5
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v9}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L8:
goto L10;
L9:
LOGD("5e:move-exception \x76\x32");
if (v10) {
LOGD("env->DeleteLocalRef(%p):v10", v10);
env->DeleteLocalRef(v10);
}
v10 = exception;
LOGD("60:sget-object \x76\x35\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x79\x73\x74\x65\x6d\x3b\x2d\x3e\x6f\x75\x74\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x50\x72\x69\x6e\x74\x53\x74\x72\x65\x61\x6d\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v11) {
LOGD("env->DeleteLocalRef(%p):v11", v11);
env->DeleteLocalRef(v11);
}
jclass &clz = cls0;
jfieldID &fld = fld0;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "java/lang/System", "out", "Ljava/io/PrintStream;");
v11 = (jobject) env->GetStaticObjectField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("64:new-instance \x76\x36\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x42\x75\x69\x6c\x64\x65\x72\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v12) {
LOGD("env->DeleteLocalRef(%p):v12", v12);
env->DeleteLocalRef(v12);
}
jclass &clz = cls5;
D2C_RESOLVE_CLASS(clz,"java/lang/StringBuilder");
v12 = (jobject) env->AllocObject(clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("68:invoke-direct \x76\x36\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x42\x75\x69\x6c\x64\x65\x72\x3b\x2d\x3e\x3c\x69\x6e\x69\x74\x3e\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v12);
jclass &clz = cls5;
jmethodID &mid = mth2;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/StringBuilder", "<init>", "()V");
jvalue args[] = {};
env->CallVoidMethodA(v12, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("6e:const-string \x76\x37\x2c\x20\x27\x20\x20\x63\x6c\x61\x73\x73\x20\x63\x61\x73\x74\x20\x6d\x73\x67\x3a\x20\x27");
if (v13) {
LOGD("env->DeleteLocalRef(%p):v13", v13);
env->DeleteLocalRef(v13);
}
v13 = (jstring) env->NewStringUTF("\x20\x20\x63\x6c\x61\x73\x73\x20\x63\x61\x73\x74\x20\x6d\x73\x67\x3a\x20");
LOGD("72:invoke-virtual \x76\x36\x2c\x20\x76\x37\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x42\x75\x69\x6c\x64\x65\x72\x3b\x2d\x3e\x61\x70\x70\x65\x6e\x64\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x42\x75\x69\x6c\x64\x65\x72\x3b");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v12);
jclass &clz = cls5;
jmethodID &mid = mth3;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/StringBuilder", "append", "(Ljava/lang/String;)Ljava/lang/StringBuilder;");
jvalue args[] = {{.l = v13}};
v14 = (jobject) env->CallObjectMethodA(v12, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v14) {
LOGD("env->DeleteLocalRef(%p):v14", v14);
env->DeleteLocalRef(v14);
}
LOGD("78:invoke-virtual \x76\x32\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x43\x6c\x61\x73\x73\x43\x61\x73\x74\x45\x78\x63\x65\x70\x74\x69\x6f\x6e\x3b\x2d\x3e\x67\x65\x74\x4d\x65\x73\x73\x61\x67\x65\x28\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v10);
jclass &clz = cls6;
jmethodID &mid = mth4;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/ClassCastException", "getMessage", "()Ljava/lang/String;");
jvalue args[] = {};
v14 = (jstring) env->CallObjectMethodA(v10, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("7e:move-result-object \x76\x37");
if (v13) {
LOGD("env->DeleteLocalRef(%p):v13", v13);
env->DeleteLocalRef(v13);
}
v13 = (jobject) v14;
LOGD("80:invoke-virtual \x76\x36\x2c\x20\x76\x37\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x42\x75\x69\x6c\x64\x65\x72\x3b\x2d\x3e\x61\x70\x70\x65\x6e\x64\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x42\x75\x69\x6c\x64\x65\x72\x3b");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v12);
jclass &clz = cls5;
jmethodID &mid = mth3;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/StringBuilder", "append", "(Ljava/lang/String;)Ljava/lang/StringBuilder;");
jvalue args[] = {{.l = v13}};
v14 = (jobject) env->CallObjectMethodA(v12, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v14) {
LOGD("env->DeleteLocalRef(%p):v14", v14);
env->DeleteLocalRef(v14);
}
LOGD("86:invoke-virtual \x76\x36\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x42\x75\x69\x6c\x64\x65\x72\x3b\x2d\x3e\x74\x6f\x53\x74\x72\x69\x6e\x67\x28\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v12);
jclass &clz = cls5;
jmethodID &mid = mth5;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/StringBuilder", "toString", "()Ljava/lang/String;");
jvalue args[] = {};
v14 = (jstring) env->CallObjectMethodA(v12, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("8c:move-result-object \x76\x36");
if (v12) {
LOGD("env->DeleteLocalRef(%p):v12", v12);
env->DeleteLocalRef(v12);
}
v12 = (jobject) v14;
LOGD("8e:invoke-virtual \x76\x35\x2c\x20\x76\x36\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x50\x72\x69\x6e\x74\x53\x74\x72\x65\x61\x6d\x3b\x2d\x3e\x70\x72\x69\x6e\x74\x6c\x6e\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v11);
jclass &clz = cls1;
jmethodID &mid = mth0;
D2C_RESOLVE_METHOD(clz, mid, "java/io/PrintStream", "println", "(Ljava/lang/String;)V");
jvalue args[] = {{.l = v12}};
env->CallVoidMethodA(v11, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L10:
LOGD("94:instance-of \x76\x32\x2c\x20\x76\x39\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x6f\x72\x65\x43\x6c\x61\x73\x73\x65\x73\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls4;
D2C_RESOLVE_CLASS(clz,"com/test/TestCompiler/MoreClasses");
v7 = d2c_is_instance_of(env, v1, clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("98:if-nez \x76\x32\x2c\x20\x2b\x34");
if(v7 != 0){
goto L12;
}
else {
goto L11;
}
L11:
v7 = 1;
goto L13;
L12:
v7 = 0;
L13:
LOGD("a2:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v7}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L14:
if (v10) {
LOGD("env->DeleteLocalRef(%p):v10", v10);
env->DeleteLocalRef(v10);
}
v10 = (jobject) env->NewLocalRef(v1);
L15:
LOGD("aa:check-cast \x76\x32\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6d\x61\x74\x68\x2f\x52\x6f\x75\x6e\x64\x69\x6e\x67\x4d\x6f\x64\x65\x3b");
{
#define EX_HANDLE EX_LandingPad_15
jclass &clz = cls7;
D2C_RESOLVE_CLASS(clz,"java/math/RoundingMode");
D2C_CHECK_CAST(v10, clz, "java/math/RoundingMode");
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L16:
LOGD("ae:invoke-static \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_LandingPad_15
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v9}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L17:
goto L19;
L18:
LOGD("b6:move-exception \x76\x32");
if (v10) {
LOGD("env->DeleteLocalRef(%p):v10", v10);
env->DeleteLocalRef(v10);
}
v10 = exception;
LOGD("b8:sget-object \x76\x35\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x79\x73\x74\x65\x6d\x3b\x2d\x3e\x6f\x75\x74\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x50\x72\x69\x6e\x74\x53\x74\x72\x65\x61\x6d\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v11) {
LOGD("env->DeleteLocalRef(%p):v11", v11);
env->DeleteLocalRef(v11);
}
jclass &clz = cls0;
jfieldID &fld = fld0;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "java/lang/System", "out", "Ljava/io/PrintStream;");
v11 = (jobject) env->GetStaticObjectField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("bc:new-instance \x76\x36\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x42\x75\x69\x6c\x64\x65\x72\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v12) {
LOGD("env->DeleteLocalRef(%p):v12", v12);
env->DeleteLocalRef(v12);
}
jclass &clz = cls5;
D2C_RESOLVE_CLASS(clz,"java/lang/StringBuilder");
v12 = (jobject) env->AllocObject(clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("c0:invoke-direct \x76\x36\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x42\x75\x69\x6c\x64\x65\x72\x3b\x2d\x3e\x3c\x69\x6e\x69\x74\x3e\x28\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v12);
jclass &clz = cls5;
jmethodID &mid = mth2;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/StringBuilder", "<init>", "()V");
jvalue args[] = {};
env->CallVoidMethodA(v12, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("c6:const-string \x76\x37\x2c\x20\x27\x20\x20\x63\x6c\x61\x73\x73\x20\x63\x61\x73\x74\x20\x6d\x73\x67\x3a\x20\x27");
if (v13) {
LOGD("env->DeleteLocalRef(%p):v13", v13);
env->DeleteLocalRef(v13);
}
v13 = (jstring) env->NewStringUTF("\x20\x20\x63\x6c\x61\x73\x73\x20\x63\x61\x73\x74\x20\x6d\x73\x67\x3a\x20");
LOGD("ca:invoke-virtual \x76\x36\x2c\x20\x76\x37\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x42\x75\x69\x6c\x64\x65\x72\x3b\x2d\x3e\x61\x70\x70\x65\x6e\x64\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x42\x75\x69\x6c\x64\x65\x72\x3b");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v12);
jclass &clz = cls5;
jmethodID &mid = mth3;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/StringBuilder", "append", "(Ljava/lang/String;)Ljava/lang/StringBuilder;");
jvalue args[] = {{.l = v13}};
v14 = (jobject) env->CallObjectMethodA(v12, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v14) {
LOGD("env->DeleteLocalRef(%p):v14", v14);
env->DeleteLocalRef(v14);
}
LOGD("d0:invoke-virtual \x76\x32\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x43\x6c\x61\x73\x73\x43\x61\x73\x74\x45\x78\x63\x65\x70\x74\x69\x6f\x6e\x3b\x2d\x3e\x67\x65\x74\x4d\x65\x73\x73\x61\x67\x65\x28\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v10);
jclass &clz = cls6;
jmethodID &mid = mth4;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/ClassCastException", "getMessage", "()Ljava/lang/String;");
jvalue args[] = {};
v14 = (jstring) env->CallObjectMethodA(v10, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("d6:move-result-object \x76\x37");
if (v13) {
LOGD("env->DeleteLocalRef(%p):v13", v13);
env->DeleteLocalRef(v13);
}
v13 = (jobject) v14;
LOGD("d8:invoke-virtual \x76\x36\x2c\x20\x76\x37\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x42\x75\x69\x6c\x64\x65\x72\x3b\x2d\x3e\x61\x70\x70\x65\x6e\x64\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x42\x75\x69\x6c\x64\x65\x72\x3b");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v12);
jclass &clz = cls5;
jmethodID &mid = mth3;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/StringBuilder", "append", "(Ljava/lang/String;)Ljava/lang/StringBuilder;");
jvalue args[] = {{.l = v13}};
v14 = (jobject) env->CallObjectMethodA(v12, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v14) {
LOGD("env->DeleteLocalRef(%p):v14", v14);
env->DeleteLocalRef(v14);
}
LOGD("de:invoke-virtual \x76\x36\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x42\x75\x69\x6c\x64\x65\x72\x3b\x2d\x3e\x74\x6f\x53\x74\x72\x69\x6e\x67\x28\x29\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v12);
jclass &clz = cls5;
jmethodID &mid = mth5;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/StringBuilder", "toString", "()Ljava/lang/String;");
jvalue args[] = {};
v14 = (jstring) env->CallObjectMethodA(v12, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("e4:move-result-object \x76\x36");
if (v12) {
LOGD("env->DeleteLocalRef(%p):v12", v12);
env->DeleteLocalRef(v12);
}
v12 = (jobject) v14;
LOGD("e6:invoke-virtual \x76\x35\x2c\x20\x76\x36\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x50\x72\x69\x6e\x74\x53\x74\x72\x65\x61\x6d\x3b\x2d\x3e\x70\x72\x69\x6e\x74\x6c\x6e\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v11);
jclass &clz = cls1;
jmethodID &mid = mth0;
D2C_RESOLVE_METHOD(clz, mid, "java/io/PrintStream", "println", "(Ljava/lang/String;)V");
jvalue args[] = {{.l = v12}};
env->CallVoidMethodA(v11, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L19:
LOGD("ec:instance-of \x76\x32\x2c\x20\x76\x39\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6d\x61\x74\x68\x2f\x42\x69\x67\x44\x65\x63\x69\x6d\x61\x6c\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls8;
D2C_RESOLVE_CLASS(clz,"java/math/BigDecimal");
v7 = d2c_is_instance_of(env, v1, clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("f0:if-nez \x76\x32\x2c\x20\x2b\x34");
if(v7 != 0){
goto L21;
}
else {
goto L20;
}
L20:
v7 = 1;
goto L22;
L21:
v7 = 0;
L22:
LOGD("fa:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v7}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
if (v4) {
LOGD("env->DeleteLocalRef(%p):v4", v4);
env->DeleteLocalRef(v4);
}
v4 = (jobject) env->NewLocalRef(v3);
if (v5) {
LOGD("env->DeleteLocalRef(%p):v5", v5);
env->DeleteLocalRef(v5);
}
v5 = (jobject) env->NewLocalRef(v3);
LOGD("106:instance-of \x76\x32\x2c\x20\x76\x31\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x43\x6c\x61\x73\x73\x65\x73\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
D2C_RESOLVE_CLASS(clz,"com/test/TestCompiler/Classes");
v7 = d2c_is_instance_of(env, v3, clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("10a:if-nez \x76\x32\x2c\x20\x2b\x33");
if(v7 != 0){
goto L24;
}
else {
goto L23;
}
L23:
goto L25;
L24:
v8 = 0;
L25:
LOGD("112:invoke-static \x76\x33\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v8}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;

EX_LandingPad_5:
D2C_GET_PENDING_EX
if(d2c_is_instance_of(env, exception, "java/lang/ClassCastException")) {
goto L9;
}
D2C_GOTO_UNWINDBLOCK

EX_LandingPad_15:
D2C_GET_PENDING_EX
if(d2c_is_instance_of(env, exception, "java/lang/ClassCastException")) {
goto L18;
}
D2C_GOTO_UNWINDBLOCK
EX_UnwindBlock: return;
}
