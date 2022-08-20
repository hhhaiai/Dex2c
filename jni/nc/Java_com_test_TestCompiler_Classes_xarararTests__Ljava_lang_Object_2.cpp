#include "Dex2C.h"

/* Lcom/test/TestCompiler/Classes;->xarararTests(Ljava/lang/Object;)V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_Classes_xarararTests__Ljava_lang_Object_2(JNIEnv *env, jobject thiz, jobject p3){
jobject v0 = NULL;
jint v1;
jint v2;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL,cls3 = NULL,cls4 = NULL,cls5 = NULL,cls6 = NULL,cls7 = NULL,cls8 = NULL,cls9 = NULL,cls10 = NULL,cls11 = NULL,cls12 = NULL;
jmethodID mth0 = NULL;
v0 = (jobject)env->NewLocalRef(p3);
L0:
LOGD("0:instance-of \x76\x30\x2c\x20\x76\x33\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls0;
D2C_RESOLVE_CLASS(clz,"java/lang/Object");
v1 = d2c_is_instance_of(env, v0, clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("4:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls1;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v1}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("a:instance-of \x76\x30\x2c\x20\x76\x33\x2c\x20\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
D2C_RESOLVE_CLASS(clz,"[Ljava/lang/Object;");
v1 = d2c_is_instance_of(env, v0, clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("e:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls1;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v1}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("14:instance-of \x76\x30\x2c\x20\x76\x33\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x43\x6c\x61\x73\x73\x65\x73\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
D2C_RESOLVE_CLASS(clz,"com/test/TestCompiler/Classes");
v1 = d2c_is_instance_of(env, v0, clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v2 = 1;
LOGD("1c:if-nez \x76\x30\x2c\x20\x2b\x34");
if(v1 != 0){
goto L2;
}
else {
goto L1;
}
L1:
v1 = 1;
goto L3;
L2:
v1 = 0;
L3:
LOGD("26:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls1;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v1}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("2c:instance-of \x76\x30\x2c\x20\x76\x33\x2c\x20\x5b\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x43\x6c\x61\x73\x73\x65\x73\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls4;
D2C_RESOLVE_CLASS(clz,"[Lcom/test/TestCompiler/Classes;");
v1 = d2c_is_instance_of(env, v0, clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("30:if-nez \x76\x30\x2c\x20\x2b\x34");
if(v1 != 0){
goto L5;
}
else {
goto L4;
}
L4:
v1 = 1;
goto L6;
L5:
v1 = 0;
L6:
LOGD("3a:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls1;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v1}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("40:instance-of \x76\x30\x2c\x20\x76\x33\x2c\x20\x5b\x5b\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x43\x6c\x61\x73\x73\x65\x73\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls5;
D2C_RESOLVE_CLASS(clz,"[[Lcom/test/TestCompiler/Classes;");
v1 = d2c_is_instance_of(env, v0, clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("44:if-nez \x76\x30\x2c\x20\x2b\x34");
if(v1 != 0){
goto L8;
}
else {
goto L7;
}
L7:
v1 = 1;
goto L9;
L8:
v1 = 0;
L9:
LOGD("4e:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls1;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v1}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("54:instance-of \x76\x30\x2c\x20\x76\x33\x2c\x20\x5b\x5b\x5b\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x43\x6c\x61\x73\x73\x65\x73\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls6;
D2C_RESOLVE_CLASS(clz,"[[[Lcom/test/TestCompiler/Classes;");
v1 = d2c_is_instance_of(env, v0, clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("58:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls1;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v1}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("5e:instance-of \x76\x30\x2c\x20\x76\x33\x2c\x20\x5b\x5b\x5b\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x6f\x72\x65\x43\x6c\x61\x73\x73\x65\x73\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls7;
D2C_RESOLVE_CLASS(clz,"[[[Lcom/test/TestCompiler/MoreClasses;");
v1 = d2c_is_instance_of(env, v0, clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("62:if-nez \x76\x30\x2c\x20\x2b\x34");
if(v1 != 0){
goto L11;
}
else {
goto L10;
}
L10:
v1 = 1;
goto L12;
L11:
v1 = 0;
L12:
LOGD("6c:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls1;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v1}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("72:instance-of \x76\x30\x2c\x20\x76\x33\x2c\x20\x5b\x5b\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls8;
D2C_RESOLVE_CLASS(clz,"[[[Ljava/lang/Object;");
v1 = d2c_is_instance_of(env, v0, clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("76:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls1;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v1}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("7c:instance-of \x76\x30\x2c\x20\x76\x33\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x53\x65\x72\x69\x61\x6c\x69\x7a\x61\x62\x6c\x65\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls9;
D2C_RESOLVE_CLASS(clz,"java/io/Serializable");
v1 = d2c_is_instance_of(env, v0, clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("80:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls1;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v1}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("86:instance-of \x76\x30\x2c\x20\x76\x33\x2c\x20\x5b\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x53\x65\x72\x69\x61\x6c\x69\x7a\x61\x62\x6c\x65\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls10;
D2C_RESOLVE_CLASS(clz,"[Ljava/io/Serializable;");
v1 = d2c_is_instance_of(env, v0, clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("8a:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls1;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v1}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("90:instance-of \x76\x30\x2c\x20\x76\x33\x2c\x20\x5b\x5b\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x53\x65\x72\x69\x61\x6c\x69\x7a\x61\x62\x6c\x65\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls11;
D2C_RESOLVE_CLASS(clz,"[[Ljava/io/Serializable;");
v1 = d2c_is_instance_of(env, v0, clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("94:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls1;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v1}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("9a:instance-of \x76\x30\x2c\x20\x76\x33\x2c\x20\x5b\x5b\x5b\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x53\x65\x72\x69\x61\x6c\x69\x7a\x61\x62\x6c\x65\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls12;
D2C_RESOLVE_CLASS(clz,"[[[Ljava/io/Serializable;");
v1 = d2c_is_instance_of(env, v0, clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("9e:if-nez \x76\x30\x2c\x20\x2b\x33");
if(v1 != 0){
goto L14;
}
else {
goto L13;
}
L13:
goto L15;
L14:
v2 = 0;
L15:
LOGD("a6:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls1;
jmethodID &mid = mth0;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v2}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;
EX_UnwindBlock: return;
}
