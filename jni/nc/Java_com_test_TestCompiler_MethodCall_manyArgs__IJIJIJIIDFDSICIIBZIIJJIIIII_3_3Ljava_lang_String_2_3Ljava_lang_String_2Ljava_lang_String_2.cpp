#include "Dex2C.h"

/* Lcom/test/TestCompiler/MethodCall;->manyArgs(IJIJIJIIDFDSICIIBZIIJJIIIII[[Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_MethodCall_manyArgs__IJIJIJIIDFDSICIIBZIIJJIIIII_3_3Ljava_lang_String_2_3Ljava_lang_String_2Ljava_lang_String_2(JNIEnv *env, jobject thiz, jint p8, jlong p9, jint p11, jlong p12, jint p14, jlong p15, jint p17, jint p18, jdouble p19, jfloat p21, jdouble p22, jshort p24, jint p25, jchar p26, jint p27, jint p28, jbyte p29, jboolean p30, jint p31, jint p32, jlong p33, jlong p35, jint p37, jint p38, jint p39, jint p40, jint p41, jarray p42, jarray p43, jstring p44){
jint v0;
jlong v1;
jint v2;
jlong v3;
jint v4;
jlong v5;
jint v6;
jint v7;
jdouble v8;
jfloat v9;
jdouble v10;
jint v11;
jint v12;
jint v13;
jint v14;
jint v15;
jint v16;
jint v17;
jint v18;
jint v19;
jlong v20;
jlong v21;
jint v22;
jint v23;
jint v24;
jint v25;
jint v26;
jobject v27 = NULL;
jobject v28 = NULL;
jobject v29 = NULL;
jfloat v30;
jobject v31 = NULL;
jobject v32 = NULL;
jint v33;
jint v34;
jdouble v35;
jdouble v36;
jint v37;
jint v38;
jint v39;
jint v40;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL,cls3 = NULL;
jfieldID fld0 = NULL;
jmethodID mth0 = NULL, mth1 = NULL, mth2 = NULL;
v0 = (jint)p8;
v1 = (jlong)p9;
v2 = (jint)p11;
v3 = (jlong)p12;
v4 = (jint)p14;
v5 = (jlong)p15;
v6 = (jint)p17;
v7 = (jint)p18;
v8 = (jdouble)p19;
v9 = (jfloat)p21;
v10 = (jdouble)p22;
v11 = (jint)p24;
v12 = (jint)p25;
v13 = (jint)p26;
v14 = (jint)p27;
v15 = (jint)p28;
v16 = (jint)p29;
v17 = (jint)p30;
v18 = (jint)p31;
v19 = (jint)p32;
v20 = (jlong)p33;
v21 = (jlong)p35;
v22 = (jint)p37;
v23 = (jint)p38;
v24 = (jint)p39;
v25 = (jint)p40;
v26 = (jint)p41;
v27 = (jobject)env->NewLocalRef(p42);
v28 = (jobject)env->NewLocalRef(p43);
v29 = (jobject)env->NewLocalRef(p44);
L0:
v30 = v9;
LOGD("4:sget-object \x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x79\x73\x74\x65\x6d\x3b\x2d\x3e\x6f\x75\x74\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x50\x72\x69\x6e\x74\x53\x74\x72\x65\x61\x6d\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v31) {
LOGD("env->DeleteLocalRef(%p):v31", v31);
env->DeleteLocalRef(v31);
}
jclass &clz = cls0;
jfieldID &fld = fld0;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "java/lang/System", "out", "Ljava/io/PrintStream;");
v31 = (jobject) env->GetStaticObjectField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("8:const-string \x76\x32\x2c\x20\x27\x4d\x65\x74\x68\x6f\x64\x43\x61\x6c\x6c\x73\x2e\x6d\x61\x6e\x79\x41\x72\x67\x73\x27");
if (v32) {
LOGD("env->DeleteLocalRef(%p):v32", v32);
env->DeleteLocalRef(v32);
}
v32 = (jstring) env->NewStringUTF("\x4d\x65\x74\x68\x6f\x64\x43\x61\x6c\x6c\x73\x2e\x6d\x61\x6e\x79\x41\x72\x67\x73");
LOGD("c:invoke-virtual \x76\x31\x2c\x20\x76\x32\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x50\x72\x69\x6e\x74\x53\x74\x72\x65\x61\x6d\x3b\x2d\x3e\x70\x72\x69\x6e\x74\x6c\x6e\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v31);
jclass &clz = cls1;
jmethodID &mid = mth0;
D2C_RESOLVE_METHOD(clz, mid, "java/io/PrintStream", "println", "(Ljava/lang/String;)V");
jvalue args[] = {{.l = v32}};
env->CallVoidMethodA(v31, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v33 = 1;
LOGD("16:if-nez \x76\x38\x2c\x20\x2b\x34");
if(v0 != 0){
goto L2;
}
else {
goto L1;
}
L1:
v34 = 1;
goto L3;
L2:
v34 = 0;
L3:
LOGD("20:invoke-static \x76\x33\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v34}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v35 = (jdouble)(v30);
v36 = d2c_bitcast_to_double(4621250538136015995);
LOGD("32:cmpl-double \x76\x37\x2c\x20\x76\x33\x2c\x20\x76\x35");
v37 = (v35 == v36) ? 0 : (v35 > v36) ? 1 : -1;
LOGD("36:if-lez \x76\x37\x2c\x20\x2b\x65");
if(v37 <= 0){
goto L6;
}
else {
goto L4;
}
L4:
v35 = (jdouble)(v30);
v36 = d2c_bitcast_to_double(4621261797135084421);
LOGD("46:cmpg-double \x76\x37\x2c\x20\x76\x33\x2c\x20\x76\x35");
v37 = (v35 == v36) ? 0 : (v35 < v36) ? -1 : 1;
LOGD("4a:if-gez \x76\x37\x2c\x20\x2b\x34");
if(v37 >= 0){
goto L6;
}
else {
goto L5;
}
L5:
v34 = 1;
goto L7;
L6:
v34 = 0;
L7:
LOGD("54:invoke-static \x76\x33\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v34}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v34 = -16;
v38 = v16;
LOGD("62:if-ne \x76\x34\x2c\x20\x76\x33\x2c\x20\x2b\x34");
if(v38 != v34) {
goto L9;
}
else {
goto L8;
}
L8:
v34 = 1;
goto L10;
L9:
v34 = 0;
L10:
LOGD("6c:invoke-static \x76\x33\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v34}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v34 = 25;
v39 = v25;
LOGD("7a:if-ne \x76\x35\x2c\x20\x76\x33\x2c\x20\x2b\x33");
if(v39 != v34) {
goto L12;
}
else {
goto L11;
}
L11:
goto L13;
L12:
v33 = 0;
L13:
LOGD("82:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v33}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("88:const-string \x76\x31\x2c\x20\x27\x74\x77\x65\x6e\x74\x79\x20\x6e\x69\x6e\x65\x27");
if (v31) {
LOGD("env->DeleteLocalRef(%p):v31", v31);
env->DeleteLocalRef(v31);
}
v31 = (jstring) env->NewStringUTF("\x74\x77\x65\x6e\x74\x79\x20\x6e\x69\x6e\x65");
if (v32) {
LOGD("env->DeleteLocalRef(%p):v32", v32);
env->DeleteLocalRef(v32);
}
v32 = (jobject) env->NewLocalRef(v29);
LOGD("90:invoke-virtual \x76\x32\x2c\x20\x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x2d\x3e\x65\x71\x75\x61\x6c\x73\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4f\x62\x6a\x65\x63\x74\x3b\x29\x5a");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v32);
jclass &clz = cls3;
jmethodID &mid = mth2;
D2C_RESOLVE_METHOD(clz, mid, "java/lang/String", "equals", "(Ljava/lang/Object;)Z");
jvalue args[] = {{.l = v31}};
v40 = (jboolean) env->CallBooleanMethodA(v32, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("96:move-result \x76\x31");
v33 = (jint) v40;
LOGD("98:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v33}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;
EX_UnwindBlock: return;
}
