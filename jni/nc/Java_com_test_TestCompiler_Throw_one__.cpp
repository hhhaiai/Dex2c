#include "Dex2C.h"

/* Lcom/test/TestCompiler/Throw;->one()V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_Throw_one__(JNIEnv *env, jobject thiz){
jobject v0 = NULL;
jobject v1 = NULL;
jobject v2 = NULL;
jint v3;
jthrowable exception;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL,cls3 = NULL;
jfieldID fld0 = NULL;
jmethodID mth0 = NULL, mth1 = NULL, mth2 = NULL;
v0 = (jobject)env->NewLocalRef(thiz);
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
LOGD("4:const-string \x76\x31\x2c\x20\x27\x54\x68\x72\x6f\x77\x2e\x6f\x6e\x65\x27");
if (v2) {
LOGD("env->DeleteLocalRef(%p):v2", v2);
env->DeleteLocalRef(v2);
}
v2 = (jstring) env->NewStringUTF("\x54\x68\x72\x6f\x77\x2e\x6f\x6e\x65");
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
L1:
LOGD("e:invoke-virtual \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x54\x68\x72\x6f\x77\x3b\x2d\x3e\x74\x68\x72\x6f\x77\x4e\x75\x6c\x6c\x50\x6f\x69\x6e\x74\x65\x72\x45\x78\x63\x65\x70\x74\x69\x6f\x6e\x28\x29\x56");
{
#define EX_HANDLE EX_LandingPad_1
D2C_NOT_NULL(v0);
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_METHOD(clz, mid, "com/test/TestCompiler/Throw", "throwNullPointerException", "()V");
jvalue args[] = {};
env->CallVoidMethodA(v0, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L2:
v3 = 0;
v3 = 0;
L3:
LOGD("16:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_LandingPad_1
jclass &clz = cls3;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v3}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
L4:
LOGD("1e:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v3}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;
L5:
LOGD("26:move-exception \x76\x30");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = exception;
return;

EX_LandingPad_1:
D2C_GET_PENDING_EX
if(d2c_is_instance_of(env, exception, "java/lang/Exception")) {
goto L5;
}
D2C_GOTO_UNWINDBLOCK
EX_UnwindBlock: return;
}
