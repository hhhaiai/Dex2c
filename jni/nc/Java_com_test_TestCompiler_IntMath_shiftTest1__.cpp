#include "Dex2C.h"

/* Lcom/test/TestCompiler/IntMath;->shiftTest1()V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_IntMath_shiftTest1__(JNIEnv *env, jobject thiz){
jobject v0 = NULL;
jobject v1 = NULL;
jint v2;
jlong v3;
jint v4;
jint v5;
jint v6;
jint v7;
jint v8;
jint v9;
jlong v10;
jint v11;
jint v12;
jlong v13;
jint v14;
jint v15;
jint v16;
jint v17;
jint v18;
jlong v19;
jlong v20;
jlong v21;
jint v22;
jlong v23;
jlong v24;
jlong v25;
jlong v26;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL,cls3 = NULL;
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
LOGD("4:const-string \x76\x31\x2c\x20\x27\x49\x6e\x74\x4d\x61\x74\x68\x2e\x73\x68\x69\x66\x74\x54\x65\x73\x74\x31\x27");
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jstring) env->NewStringUTF("\x49\x6e\x74\x4d\x61\x74\x68\x2e\x73\x68\x69\x66\x74\x54\x65\x73\x74\x31");
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
v2 = 8;
v2 = 8;
v3 = 8;
v2 = 8;
LOGD("12:new-array \x76\x31\x2c\x20\x76\x30\x2c\x20\x5b\x49");
{
#define EX_HANDLE EX_UnwindBlock
if (v2 < 0) {
d2c_throw_exception(env, "java/lang/NegativeArraySizeException", "negative array size");
goto EX_HANDLE;
}
if (v1) {
LOGD("env->DeleteLocalRef(%p):v1", v1);
env->DeleteLocalRef(v1);
}
v1 = (jarray) env->NewIntArray((jint) v2);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("16:fill-array-data \x76\x31\x2c\x20\x2b\x39\x62\x20\x28\x30\x78\x31\x33\x35\x29");
{
static const unsigned char data[] = {17, 0, 0, 0, 34, 0, 0, 0, 51, 0, 0, 0, 68, 0, 0, 0, 136, 0, 0, 0, 153, 0, 0, 0, 170, 0, 0, 0, 187, 0, 0, 0};
env->SetIntArrayRegion((jintArray) v1, 0, 8, (const jint *) data);
}
v4 = 0;
v4 = 0;
LOGD("1e:aget \x76\x33\x2c\x20\x76\x31\x2c\x20\x76\x32");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
{jint val;env->GetIntArrayRegion((jintArray) v1, (jint) v4, 1, &val);v5 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v6 = 1;
v6 = 1;
v6 = 1;
LOGD("24:aget \x76\x35\x2c\x20\x76\x31\x2c\x20\x76\x34");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
{jint val;env->GetIntArrayRegion((jintArray) v1, (jint) v6, 1, &val);v7 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("28:shl-int/2addr \x76\x35\x2c\x20\x76\x30");
v7 = (v7) << (v2 & 0x1f);
LOGD("2a:or-int/2addr \x76\x33\x2c\x20\x76\x35");
v5 = (v5 | v7);
v7 = 2;
v7 = 2;
LOGD("2e:aget \x76\x36\x2c\x20\x76\x31\x2c\x20\x76\x35");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
{jint val;env->GetIntArrayRegion((jintArray) v1, (jint) v7, 1, &val);v8 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v9 = 16;
v10 = 16;
v9 = 16;
LOGD("36:shl-int/2addr \x76\x36\x2c\x20\x76\x37");
v8 = (v8) << (v9 & 0x1f);
LOGD("38:or-int/2addr \x76\x33\x2c\x20\x76\x36");
v5 = (v5 | v8);
v8 = 3;
v8 = 3;
LOGD("3c:aget \x76\x38\x2c\x20\x76\x31\x2c\x20\x76\x36");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
{jint val;env->GetIntArrayRegion((jintArray) v1, (jint) v8, 1, &val);v11 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v12 = 24;
v13 = 24;
v12 = 24;
LOGD("44:shl-int/2addr \x76\x38\x2c\x20\x76\x39");
v11 = (v11) << (v12 & 0x1f);
LOGD("46:or-int/2addr \x76\x33\x2c\x20\x76\x38");
v5 = (v5 | v11);
v11 = 4;
v11 = 4;
LOGD("4a:aget \x76\x31\x30\x2c\x20\x76\x31\x2c\x20\x76\x38");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
{jint val;env->GetIntArrayRegion((jintArray) v1, (jint) v11, 1, &val);v14 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v15 = 5;
LOGD("50:aget \x76\x31\x32\x2c\x20\x76\x31\x2c\x20\x76\x31\x31");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
{jint val;env->GetIntArrayRegion((jintArray) v1, (jint) v15, 1, &val);v16 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("54:shl-int/2addr \x76\x31\x32\x2c\x20\x76\x30");
v16 = (v16) << (v2 & 0x1f);
LOGD("56:or-int/2addr \x76\x31\x30\x2c\x20\x76\x31\x32");
v14 = (v14 | v16);
v16 = 6;
LOGD("5a:aget \x76\x31\x33\x2c\x20\x76\x31\x2c\x20\x76\x31\x32");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
{jint val;env->GetIntArrayRegion((jintArray) v1, (jint) v16, 1, &val);v17 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("5e:shl-int/2addr \x76\x31\x33\x2c\x20\x76\x37");
v17 = (v17) << (v9 & 0x1f);
LOGD("60:or-int/2addr \x76\x31\x30\x2c\x20\x76\x31\x33");
v14 = (v14 | v17);
v17 = 7;
LOGD("64:aget \x76\x31\x34\x2c\x20\x76\x31\x2c\x20\x76\x31\x33");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
{jint val;env->GetIntArrayRegion((jintArray) v1, (jint) v17, 1, &val);v18 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("68:shl-int/2addr \x76\x31\x34\x2c\x20\x76\x39");
v18 = (v18) << (v12 & 0x1f);
LOGD("6a:or-int/2addr \x76\x31\x30\x2c\x20\x76\x31\x34");
v14 = (v14 | v18);
v19 = (jlong)(v5);
v20 = (jlong)(v14);
v21 = 32;
v21 = 32;
LOGD("74:shl-long \x76\x31\x32\x2c\x20\x76\x31\x32\x2c\x20\x76\x31\x36");
v20 = (v20) << (v21 & 0x3f);
LOGD("78:or-long/2addr \x76\x31\x32\x2c\x20\x76\x31\x34");
v20 = (v20 | v19);
v18 = 1144201745;
LOGD("80:if-ne \x76\x33\x2c\x20\x76\x31\x34\x2c\x20\x2b\x34");
if(v5 != v18) {
goto L2;
}
else {
goto L1;
}
L1:
v18 = 1;
goto L3;
L2:
v18 = 0;
L3:
LOGD("8a:invoke-static \x76\x31\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v18}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v18 = -1146447480;
LOGD("96:if-ne \x76\x31\x30\x2c\x20\x76\x31\x34\x2c\x20\x2b\x34");
if(v14 != v18) {
goto L5;
}
else {
goto L4;
}
L4:
v18 = 1;
goto L6;
L5:
v18 = 0;
L6:
LOGD("a0:invoke-static \x76\x31\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v18}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v19 = -4923954432037412335;
LOGD("b0:cmp-long \x76\x31\x37\x2c\x20\x76\x31\x32\x2c\x20\x76\x31\x34");
v22 = (v20 == v19) ? 0 : (v20 > v19) ? 1 : -1;
LOGD("b4:if-nez \x76\x31\x37\x2c\x20\x2b\x35");
if(v22 != 0){
goto L8;
}
else {
goto L7;
}
L7:
v22 = 1;
goto L9;
L8:
v22 = 0;
L9:
LOGD("c2:invoke-static/range \x76\x31\x37\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v22}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("c8:aget \x76\x31\x34\x2c\x20\x76\x31\x2c\x20\x76\x32");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
{jint val;env->GetIntArrayRegion((jintArray) v1, (jint) v4, 1, &val);v18 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v19 = (jlong)(v18);
LOGD("ce:aget \x76\x32\x2c\x20\x76\x31\x2c\x20\x76\x34");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
{jint val;env->GetIntArrayRegion((jintArray) v1, (jint) v6, 1, &val);v4 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v23 = v20;
v24 = (jlong)(v4);
LOGD("d8:shl-long/2addr \x76\x31\x31\x2c\x20\x76\x30");
v24 = (v24) << (v3 & 0x3f);
LOGD("da:or-long/2addr \x76\x31\x31\x2c\x20\x76\x31\x34");
v24 = (v24 | v19);
LOGD("dc:aget \x76\x30\x2c\x20\x76\x31\x2c\x20\x76\x35");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
{jint val;env->GetIntArrayRegion((jintArray) v1, (jint) v7, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v25 = (jlong)(v2);
LOGD("e2:shl-long/2addr \x76\x31\x33\x2c\x20\x76\x37");
v25 = (v25) << (v10 & 0x3f);
LOGD("e4:or-long/2addr \x76\x31\x31\x2c\x20\x76\x31\x33");
v24 = (v24 | v25);
LOGD("e6:aget \x76\x30\x2c\x20\x76\x31\x2c\x20\x76\x36");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
{jint val;env->GetIntArrayRegion((jintArray) v1, (jint) v8, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v26 = (jlong)(v2);
LOGD("ec:shl-long/2addr \x76\x35\x2c\x20\x76\x39");
v26 = (v26) << (v13 & 0x3f);
LOGD("ee:or-long/2addr \x76\x35\x2c\x20\x76\x31\x31");
v26 = (v26 | v24);
LOGD("f0:aget \x76\x30\x2c\x20\x76\x31\x2c\x20\x76\x38");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
{jint val;env->GetIntArrayRegion((jintArray) v1, (jint) v11, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v10 = (jlong)(v2);
LOGD("f6:shl-long \x76\x37\x2c\x20\x76\x37\x2c\x20\x76\x31\x36");
v10 = (v10) << (v21 & 0x3f);
LOGD("fa:or-long/2addr \x76\x35\x2c\x20\x76\x37");
v26 = (v26 | v10);
v2 = 5;
LOGD("fe:aget \x76\x30\x2c\x20\x76\x31\x2c\x20\x76\x30");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
{jint val;env->GetIntArrayRegion((jintArray) v1, (jint) v2, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v10 = (jlong)(v2);
v3 = 40;
LOGD("108:shl-long/2addr \x76\x37\x2c\x20\x76\x30");
v10 = (v10) << (v3 & 0x3f);
LOGD("10a:or-long/2addr \x76\x35\x2c\x20\x76\x37");
v26 = (v26 | v10);
v2 = 6;
LOGD("10e:aget \x76\x30\x2c\x20\x76\x31\x2c\x20\x76\x30");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
{jint val;env->GetIntArrayRegion((jintArray) v1, (jint) v2, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v10 = (jlong)(v2);
v3 = 48;
LOGD("118:shl-long/2addr \x76\x37\x2c\x20\x76\x30");
v10 = (v10) << (v3 & 0x3f);
LOGD("11a:or-long/2addr \x76\x35\x2c\x20\x76\x37");
v26 = (v26 | v10);
v2 = 7;
LOGD("11e:aget \x76\x30\x2c\x20\x76\x31\x2c\x20\x76\x30");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v1);
{jint val;env->GetIntArrayRegion((jintArray) v1, (jint) v2, 1, &val);v2 = val;}
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v10 = (jlong)(v2);
v3 = 56;
LOGD("128:shl-long/2addr \x76\x37\x2c\x20\x76\x30");
v10 = (v10) << (v3 & 0x3f);
LOGD("12a:or-long/2addr \x76\x35\x2c\x20\x76\x37");
v26 = (v26 | v10);
v10 = -4923954432037412335;
LOGD("136:cmp-long \x76\x30\x2c\x20\x76\x35\x2c\x20\x76\x37");
v2 = (v26 == v10) ? 0 : (v26 > v10) ? 1 : -1;
LOGD("13a:if-nez \x76\x30\x2c\x20\x2b\x33");
if(v2 != 0){
goto L11;
}
else {
goto L10;
}
L10:
goto L12;
L11:
v6 = 0;
L12:
LOGD("142:invoke-static \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
return;
EX_UnwindBlock: return;
}
