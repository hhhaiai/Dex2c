#include "Dex2C.h"

/* Lcom/test/TestCompiler/IntMath;->shiftTest2()V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_IntMath_shiftTest2__(JNIEnv *env, jobject thiz){
jobject v0 = NULL;
jobject v1 = NULL;
jlong v2;
jlong v3;
jlong v4;
jlong v5;
jlong v6;
jlong v7;
jlong v8;
jlong v9;
jlong v10;
jlong v11;
jint v12;
jint v13;
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
LOGD("4:const-string \x76\x31\x2c\x20\x27\x49\x6e\x74\x4d\x61\x74\x68\x2e\x73\x68\x69\x66\x74\x54\x65\x73\x74\x32\x27");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jstring) env->NewStringUTF("\x49\x6e\x74\x4d\x61\x74\x68\x2e\x73\x68\x69\x66\x74\x54\x65\x73\x74\x32");
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
v2 = 17;
v3 = 34;
v4 = 51;
v5 = 68;
v6 = 85;
v7 = 102;
v8 = 119;
v9 = 136;
v10 = 56;
LOGD("32:shl-long \x76\x31\x36\x2c\x20\x76\x30\x2c\x20\x76\x31\x36");
v10 = (v2) << (v10 & 0x3f);
v11 = 48;
LOGD("3a:shl-long \x76\x31\x38\x2c\x20\x76\x32\x2c\x20\x76\x31\x38");
v11 = (v3) << (v11 & 0x3f);
LOGD("3e:or-long \x76\x31\x36\x2c\x20\x76\x31\x36\x2c\x20\x76\x31\x38");
v10 = (v10 | v11);
v11 = 40;
LOGD("46:shl-long \x76\x31\x38\x2c\x20\x76\x34\x2c\x20\x76\x31\x38");
v11 = (v4) << (v11 & 0x3f);
LOGD("4a:or-long \x76\x31\x36\x2c\x20\x76\x31\x36\x2c\x20\x76\x31\x38");
v10 = (v10 | v11);
v11 = 32;
LOGD("52:shl-long \x76\x31\x38\x2c\x20\x76\x36\x2c\x20\x76\x31\x38");
v11 = (v5) << (v11 & 0x3f);
LOGD("56:or-long \x76\x31\x36\x2c\x20\x76\x31\x36\x2c\x20\x76\x31\x38");
v10 = (v10 | v11);
v11 = 24;
LOGD("5e:shl-long \x76\x31\x38\x2c\x20\x76\x38\x2c\x20\x76\x31\x38");
v11 = (v6) << (v11 & 0x3f);
LOGD("62:or-long \x76\x31\x36\x2c\x20\x76\x31\x36\x2c\x20\x76\x31\x38");
v10 = (v10 | v11);
v11 = 16;
LOGD("6a:shl-long \x76\x31\x38\x2c\x20\x76\x31\x30\x2c\x20\x76\x31\x38");
v11 = (v7) << (v11 & 0x3f);
LOGD("6e:or-long \x76\x31\x36\x2c\x20\x76\x31\x36\x2c\x20\x76\x31\x38");
v10 = (v10 | v11);
v11 = 8;
LOGD("76:shl-long \x76\x31\x38\x2c\x20\x76\x31\x32\x2c\x20\x76\x31\x38");
v11 = (v8) << (v11 & 0x3f);
LOGD("7a:or-long \x76\x31\x36\x2c\x20\x76\x31\x36\x2c\x20\x76\x31\x38");
v10 = (v10 | v11);
LOGD("7e:or-long \x76\x31\x36\x2c\x20\x76\x31\x36\x2c\x20\x76\x31\x34");
v10 = (v10 | v9);
v11 = 1234605616436508552;
LOGD("8c:cmp-long \x76\x32\x30\x2c\x20\x76\x31\x36\x2c\x20\x76\x31\x38");
v12 = (v10 == v11) ? 0 : (v10 > v11) ? 1 : -1;
LOGD("90:if-nez \x76\x32\x30\x2c\x20\x2b\x35");
if(v12 != 0){
goto L2;
}
else {
goto L1;
}
L1:
v13 = 1;
goto L3;
L2:
v13 = 0;
L3:
LOGD("9e:invoke-static/range \x76\x31\x38\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v13}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;
EX_UnwindBlock: return;
}
