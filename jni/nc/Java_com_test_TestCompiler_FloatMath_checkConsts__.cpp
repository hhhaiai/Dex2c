#include "Dex2C.h"

/* Lcom/test/TestCompiler/FloatMath;->checkConsts()V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_FloatMath_checkConsts__(JNIEnv *env, jobject thiz){
jobject v0 = NULL;
jobject v1 = NULL;
jfloat v2;
jdouble v3;
jint v4;
jdouble v5;
jdouble v6;
jint v7;
jint v8;
jint v9;
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
LOGD("4:const-string \x76\x31\x2c\x20\x27\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x2e\x63\x68\x65\x63\x6b\x43\x6f\x6e\x73\x74\x73\x27");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jstring) env->NewStringUTF("\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x2e\x63\x68\x65\x63\x6b\x43\x6f\x6e\x73\x74\x73");
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
LOGD("e:const/high16 \x76\x30\x2c\x20\x31\x36\x36\x37\x32\x20\x23\x20\x5b\x31\x30\x2e\x30\x5d");
v2 = d2c_bitcast_to_float(1092616192);
v3 = (jdouble)(v2);
v4 = 1;
v5 = d2c_bitcast_to_double(4621875412584313651);
v5 = d2c_bitcast_to_double(4621875412584313651);
v6 = d2c_bitcast_to_double(4621762822593629389);
v6 = d2c_bitcast_to_double(4621762822593629389);
LOGD("2c:cmpl-double \x76\x39\x2c\x20\x76\x31\x2c\x20\x76\x37");
v7 = (v3 == v6) ? 0 : (v3 > v6) ? 1 : -1;
LOGD("30:if-lez \x76\x39\x2c\x20\x2b\x39");
if(v7 <= 0){
goto L3;
}
else {
goto L1;
}
L1:
v3 = (jdouble)(v2);
LOGD("36:cmpg-double \x76\x39\x2c\x20\x76\x31\x2c\x20\x76\x34");
v7 = (v3 == v5) ? 0 : (v3 < v5) ? -1 : 1;
LOGD("3a:if-gez \x76\x39\x2c\x20\x2b\x34");
if(v7 >= 0){
goto L3;
}
else {
goto L2;
}
L2:
v8 = 1;
goto L4;
L3:
v8 = 0;
L4:
LOGD("44:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
v3 = d2c_bitcast_to_double(4621819117588971520);
v3 = d2c_bitcast_to_double(4621819117588971520);
LOGD("4e:cmpl-double \x76\x39\x2c\x20\x76\x31\x2c\x20\x76\x37");
v7 = (v3 == v6) ? 0 : (v3 > v6) ? 1 : -1;
LOGD("52:if-lez \x76\x39\x2c\x20\x2b\x37");
if(v7 <= 0){
goto L7;
}
else {
goto L5;
}
L5:
LOGD("56:cmpg-double \x76\x37\x2c\x20\x76\x31\x2c\x20\x76\x34");
v9 = (v3 == v5) ? 0 : (v3 < v5) ? -1 : 1;
LOGD("5a:if-gez \x76\x37\x2c\x20\x2b\x33");
if(v9 >= 0){
goto L7;
}
else {
goto L6;
}
L6:
goto L8;
L7:
v4 = 0;
L8:
LOGD("62:invoke-static \x76\x33\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
return;
EX_UnwindBlock: return;
}
