#include "Dex2C.h"

/* Lcom/test/TestCompiler/Classes;->xarTests(Ljava/lang/Object;)V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_Classes_xarTests__Ljava_lang_Object_2(JNIEnv *env, jobject thiz, jobject p3){
jobject v0 = NULL;
jint v1;
jint v2;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL,cls3 = NULL,cls4 = NULL,cls5 = NULL,cls6 = NULL;
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
LOGD("a:instance-of \x76\x30\x2c\x20\x76\x33\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x43\x6c\x61\x73\x73\x65\x73\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
D2C_RESOLVE_CLASS(clz,"com/test/TestCompiler/Classes");
v1 = d2c_is_instance_of(env, v0, clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v2 = 1;
LOGD("12:if-nez \x76\x30\x2c\x20\x2b\x34");
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
LOGD("1c:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
LOGD("22:instance-of \x76\x30\x2c\x20\x76\x33\x2c\x20\x5b\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x43\x6c\x61\x73\x73\x65\x73\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
D2C_RESOLVE_CLASS(clz,"[Lcom/test/TestCompiler/Classes;");
v1 = d2c_is_instance_of(env, v0, clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
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
LOGD("2c:instance-of \x76\x30\x2c\x20\x76\x33\x2c\x20\x5b\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x6f\x72\x65\x43\x6c\x61\x73\x73\x65\x73\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls4;
D2C_RESOLVE_CLASS(clz,"[Lcom/test/TestCompiler/MoreClasses;");
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
LOGD("40:instance-of \x76\x30\x2c\x20\x76\x33\x2c\x20\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls5;
D2C_RESOLVE_CLASS(clz,"[Ljava/lang/Object;");
v1 = d2c_is_instance_of(env, v0, clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("44:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
LOGD("4a:instance-of \x76\x30\x2c\x20\x76\x33\x2c\x20\x5b\x5b\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls6;
D2C_RESOLVE_CLASS(clz,"[[Ljava/lang/Object;");
v1 = d2c_is_instance_of(env, v0, clz);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("4e:if-nez \x76\x30\x2c\x20\x2b\x33");
if(v1 != 0){
goto L8;
}
else {
goto L7;
}
L7:
goto L9;
L8:
v2 = 0;
L9:
LOGD("56:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
