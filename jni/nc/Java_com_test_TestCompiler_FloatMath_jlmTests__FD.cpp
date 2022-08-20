#include "Dex2C.h"

/* Lcom/test/TestCompiler/FloatMath;->jlmTests(FD)V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_FloatMath_jlmTests__FD(JNIEnv *env, jobject thiz, jfloat p11, jdouble p12){
jfloat v0;
jdouble v1;
jobject v2 = NULL;
jobject v3 = NULL;
jfloat v4;
jfloat v5;
jfloat v6;
jint v7;
jint v8;
jfloat v9;
jint v10;
jdouble v11;
jdouble v12;
jdouble v13;
jdouble v14;
jdouble v15;
jdouble v16;
jdouble v17;
jdouble v18;
jdouble v19;
jdouble v20;
jint v21;
jdouble v22;
jclass cls0 = NULL,cls1 = NULL,cls2 = NULL,cls3 = NULL,cls4 = NULL;
jfieldID fld0 = NULL;
jmethodID mth0 = NULL, mth1 = NULL, mth2 = NULL, mth3 = NULL, mth4 = NULL, mth5 = NULL, mth6 = NULL, mth7 = NULL, mth8 = NULL, mth9 = NULL, mth10 = NULL, mth11 = NULL, mth12 = NULL;
v0 = (jfloat)p11;
v1 = (jdouble)p12;
L0:
LOGD("0:sget-object \x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x79\x73\x74\x65\x6d\x3b\x2d\x3e\x6f\x75\x74\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x50\x72\x69\x6e\x74\x53\x74\x72\x65\x61\x6d\x3b");
{
#define EX_HANDLE EX_UnwindBlock
if (v2) {
LOGD("env->DeleteLocalRef(%p):v2", v2);
env->DeleteLocalRef(v2);
}
jclass &clz = cls0;
jfieldID &fld = fld0;
D2C_RESOLVE_STATIC_FIELD(clz, fld, "java/lang/System", "out", "Ljava/io/PrintStream;");
v2 = (jobject) env->GetStaticObjectField(clz,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("4:const-string \x76\x31\x2c\x20\x27\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x2e\x6a\x6c\x6d\x54\x65\x73\x74\x73\x27");
if (v3) {
LOGD("env->DeleteLocalRef(%p):v3", v3);
env->DeleteLocalRef(v3);
}
v3 = (jstring) env->NewStringUTF("\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x2e\x6a\x6c\x6d\x54\x65\x73\x74\x73");
LOGD("8:invoke-virtual \x76\x30\x2c\x20\x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x69\x6f\x2f\x50\x72\x69\x6e\x74\x53\x74\x72\x65\x61\x6d\x3b\x2d\x3e\x70\x72\x69\x6e\x74\x6c\x6e\x28\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x53\x74\x72\x69\x6e\x67\x3b\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v2);
jclass &clz = cls1;
jmethodID &mid = mth0;
D2C_RESOLVE_METHOD(clz, mid, "java/io/PrintStream", "println", "(Ljava/lang/String;)V");
jvalue args[] = {{.l = v3}};
env->CallVoidMethodA(v2, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("e:invoke-static \x76\x31\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4d\x61\x74\x68\x3b\x2d\x3e\x61\x62\x73\x28\x46\x29\x46");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/Math", "abs", "(F)F");
jvalue args[] = {{.f = v0}};
v4 = (jfloat) env->CallStaticFloatMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("14:move-result \x76\x30");
v5 = (jfloat) v4;
v6 = d2c_bitcast_to_float(981668463);
v6 = d2c_bitcast_to_float(981668463);
v6 = d2c_bitcast_to_float(981668463);
v6 = d2c_bitcast_to_float(981668463);
LOGD("1c:invoke-static \x76\x30\x2c\x20\x76\x31\x31\x2c\x20\x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x61\x70\x70\x72\x6f\x78\x45\x71\x75\x61\x6c\x28\x46\x20\x46\x20\x46\x29\x5a");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/FloatMath", "approxEqual", "(FFF)Z");
jvalue args[] = {{.f = v5},{.f = v0},{.f = v6}};
v7 = (jboolean) env->CallStaticBooleanMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("22:move-result \x76\x30");
v8 = (jint) v7;
LOGD("24:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls4;
jmethodID &mid = mth3;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v8}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("2a:neg-float \x76\x30\x2c\x20\x76\x31\x31");
v5 = (- v0);
LOGD("2c:invoke-static \x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4d\x61\x74\x68\x3b\x2d\x3e\x61\x62\x73\x28\x46\x29\x46");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth1;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/Math", "abs", "(F)F");
jvalue args[] = {{.f = v5}};
v4 = (jfloat) env->CallStaticFloatMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("32:move-result \x76\x30");
v5 = (jfloat) v4;
LOGD("34:invoke-static \x76\x30\x2c\x20\x76\x31\x31\x2c\x20\x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x61\x70\x70\x72\x6f\x78\x45\x71\x75\x61\x6c\x28\x46\x20\x46\x20\x46\x29\x5a");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/FloatMath", "approxEqual", "(FFF)Z");
jvalue args[] = {{.f = v5},{.f = v0},{.f = v6}};
v7 = (jboolean) env->CallStaticBooleanMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("3a:move-result \x76\x30");
v8 = (jint) v7;
LOGD("3c:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls4;
jmethodID &mid = mth3;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v8}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v5 = d2c_bitcast_to_float(-1063256064);
v5 = d2c_bitcast_to_float(-1063256064);
v5 = d2c_bitcast_to_float(-1063256064);
LOGD("46:invoke-static \x76\x31\x31\x2c\x20\x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4d\x61\x74\x68\x3b\x2d\x3e\x6d\x69\x6e\x28\x46\x20\x46\x29\x46");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth4;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/Math", "min", "(FF)F");
jvalue args[] = {{.f = v0},{.f = v5}};
v4 = (jfloat) env->CallStaticFloatMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("4c:move-result \x76\x32");
v9 = (jfloat) v4;
LOGD("4e:invoke-static \x76\x32\x2c\x20\x76\x30\x2c\x20\x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x61\x70\x70\x72\x6f\x78\x45\x71\x75\x61\x6c\x28\x46\x20\x46\x20\x46\x29\x5a");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/FloatMath", "approxEqual", "(FFF)Z");
jvalue args[] = {{.f = v9},{.f = v5},{.f = v6}};
v7 = (jboolean) env->CallStaticBooleanMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("54:move-result \x76\x32");
v10 = (jint) v7;
LOGD("56:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls4;
jmethodID &mid = mth3;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v10}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("5c:invoke-static \x76\x31\x31\x2c\x20\x76\x30\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4d\x61\x74\x68\x3b\x2d\x3e\x6d\x61\x78\x28\x46\x20\x46\x29\x46");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth5;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/Math", "max", "(FF)F");
jvalue args[] = {{.f = v0},{.f = v5}};
v4 = (jfloat) env->CallStaticFloatMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("62:move-result \x76\x30");
v5 = (jfloat) v4;
LOGD("64:invoke-static \x76\x30\x2c\x20\x76\x31\x31\x2c\x20\x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x61\x70\x70\x72\x6f\x78\x45\x71\x75\x61\x6c\x28\x46\x20\x46\x20\x46\x29\x5a");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth2;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/FloatMath", "approxEqual", "(FFF)Z");
jvalue args[] = {{.f = v5},{.f = v0},{.f = v6}};
v7 = (jboolean) env->CallStaticBooleanMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("6a:move-result \x76\x30");
v8 = (jint) v7;
LOGD("6c:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls4;
jmethodID &mid = mth3;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v8}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("72:invoke-static \x76\x31\x32\x2c\x20\x76\x31\x33\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4d\x61\x74\x68\x3b\x2d\x3e\x61\x62\x73\x28\x44\x29\x44");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth6;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/Math", "abs", "(D)D");
jvalue args[] = {{.d = v1}};
v11 = (jdouble) env->CallStaticDoubleMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("78:move-result-wide \x76\x31");
v12 = (jdouble) v11;
v13 = d2c_bitcast_to_double(4562254508917369340);
v14 = v1;
LOGD("86:invoke-static/range \x76\x31\x20\x2e\x2e\x2e\x20\x76\x36\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x61\x70\x70\x72\x6f\x78\x45\x71\x75\x61\x6c\x28\x44\x20\x44\x20\x44\x29\x5a");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth7;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/FloatMath", "approxEqual", "(DDD)Z");
jvalue args[] = {{.d = v12},{.d = v14},{.d = v13}};
v7 = (jboolean) env->CallStaticBooleanMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("8c:move-result \x76\x30");
v8 = (jint) v7;
LOGD("8e:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls4;
jmethodID &mid = mth3;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v8}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("94:neg-double \x76\x30\x2c\x20\x76\x31\x32");
v15 = (- v1);
LOGD("96:invoke-static \x76\x30\x2c\x20\x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4d\x61\x74\x68\x3b\x2d\x3e\x61\x62\x73\x28\x44\x29\x44");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth6;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/Math", "abs", "(D)D");
jvalue args[] = {{.d = v15}};
v11 = (jdouble) env->CallStaticDoubleMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("9c:move-result-wide \x76\x32");
v16 = (jdouble) v11;
v17 = d2c_bitcast_to_double(4562254508917369340);
v17 = d2c_bitcast_to_double(4562254508917369340);
v18 = v1;
LOGD("aa:invoke-static/range \x76\x32\x20\x2e\x2e\x2e\x20\x76\x37\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x61\x70\x70\x72\x6f\x78\x45\x71\x75\x61\x6c\x28\x44\x20\x44\x20\x44\x29\x5a");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth7;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/FloatMath", "approxEqual", "(DDD)Z");
jvalue args[] = {{.d = v16},{.d = v18},{.d = v17}};
v7 = (jboolean) env->CallStaticBooleanMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("b0:move-result \x76\x30");
v8 = (jint) v7;
LOGD("b2:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls4;
jmethodID &mid = mth3;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v8}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v15 = d2c_bitcast_to_double(-4606056518893174784);
v15 = d2c_bitcast_to_double(-4606056518893174784);
LOGD("bc:invoke-static \x76\x31\x32\x2c\x20\x76\x31\x33\x2c\x20\x76\x30\x2c\x20\x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4d\x61\x74\x68\x3b\x2d\x3e\x6d\x69\x6e\x28\x44\x20\x44\x29\x44");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth8;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/Math", "min", "(DD)D");
jvalue args[] = {{.d = v1},{.d = v15}};
v11 = (jdouble) env->CallStaticDoubleMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("c2:move-result-wide \x76\x32");
v16 = (jdouble) v11;
v18 = d2c_bitcast_to_double(-4606056518893174784);
LOGD("c8:invoke-static/range \x76\x32\x20\x2e\x2e\x2e\x20\x76\x37\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x61\x70\x70\x72\x6f\x78\x45\x71\x75\x61\x6c\x28\x44\x20\x44\x20\x44\x29\x5a");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth7;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/FloatMath", "approxEqual", "(DDD)Z");
jvalue args[] = {{.d = v16},{.d = v18},{.d = v17}};
v7 = (jboolean) env->CallStaticBooleanMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("ce:move-result \x76\x32");
v10 = (jint) v7;
LOGD("d0:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls4;
jmethodID &mid = mth3;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v10}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("d6:invoke-static \x76\x31\x32\x2c\x20\x76\x31\x33\x2c\x20\x76\x30\x2c\x20\x76\x31\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4d\x61\x74\x68\x3b\x2d\x3e\x6d\x61\x78\x28\x44\x20\x44\x29\x44");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth9;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/Math", "max", "(DD)D");
jvalue args[] = {{.d = v1},{.d = v15}};
v11 = (jdouble) env->CallStaticDoubleMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("dc:move-result-wide \x76\x33");
v14 = (jdouble) v11;
v19 = d2c_bitcast_to_double(4562254508917369340);
v13 = v1;
LOGD("ea:invoke-static/range \x76\x33\x20\x2e\x2e\x2e\x20\x76\x38\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x61\x70\x70\x72\x6f\x78\x45\x71\x75\x61\x6c\x28\x44\x20\x44\x20\x44\x29\x5a");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth7;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/FloatMath", "approxEqual", "(DDD)Z");
jvalue args[] = {{.d = v14},{.d = v13},{.d = v19}};
v7 = (jboolean) env->CallStaticBooleanMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("f0:move-result \x76\x30");
v8 = (jint) v7;
LOGD("f2:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls4;
jmethodID &mid = mth3;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v8}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("f8:invoke-static \x76\x31\x32\x2c\x20\x76\x31\x33\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4d\x61\x74\x68\x3b\x2d\x3e\x73\x71\x72\x74\x28\x44\x29\x44");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth10;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/Math", "sqrt", "(D)D");
jvalue args[] = {{.d = v1}};
v11 = (jdouble) env->CallStaticDoubleMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("fe:move-result-wide \x76\x30");
v15 = (jdouble) v11;
LOGD("100:mul-double \x76\x32\x2c\x20\x76\x30\x2c\x20\x76\x30");
v16 = (v15 * v15);
v17 = d2c_bitcast_to_double(4562254508917369340);
v18 = v1;
LOGD("110:invoke-static/range \x76\x32\x20\x2e\x2e\x2e\x20\x76\x37\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x61\x70\x70\x72\x6f\x78\x45\x71\x75\x61\x6c\x28\x44\x20\x44\x20\x44\x29\x5a");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth7;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/FloatMath", "approxEqual", "(DDD)Z");
jvalue args[] = {{.d = v16},{.d = v18},{.d = v17}};
v7 = (jboolean) env->CallStaticBooleanMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("116:move-result \x76\x32");
v10 = (jint) v7;
LOGD("118:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls4;
jmethodID &mid = mth3;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v10}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v16 = d2c_bitcast_to_double(4607182418800017408);
v16 = d2c_bitcast_to_double(4607182418800017408);
LOGD("122:invoke-static \x76\x32\x2c\x20\x76\x33\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4d\x61\x74\x68\x3b\x2d\x3e\x63\x6f\x73\x28\x44\x29\x44");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth11;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/Math", "cos", "(D)D");
jvalue args[] = {{.d = v16}};
v11 = (jdouble) env->CallStaticDoubleMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("128:move-result-wide \x76\x36");
v17 = (jdouble) v11;
v18 = d2c_bitcast_to_double(4603041830072026764);
v20 = d2c_bitcast_to_double(4487126258331716666);
LOGD("13e:invoke-static/range \x76\x34\x20\x2e\x2e\x2e\x20\x76\x39\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x61\x70\x70\x72\x6f\x78\x45\x71\x75\x61\x6c\x28\x44\x20\x44\x20\x44\x29\x5a");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth7;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/FloatMath", "approxEqual", "(DDD)Z");
jvalue args[] = {{.d = v18},{.d = v17},{.d = v20}};
v7 = (jboolean) env->CallStaticBooleanMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("144:move-result \x76\x34");
v21 = (jint) v7;
LOGD("146:invoke-static \x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls4;
jmethodID &mid = mth3;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v21}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("14c:invoke-static \x76\x32\x2c\x20\x76\x33\x2c\x20\x4c\x6a\x61\x76\x61\x2f\x6c\x61\x6e\x67\x2f\x4d\x61\x74\x68\x3b\x2d\x3e\x73\x69\x6e\x28\x44\x29\x44");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls2;
jmethodID &mid = mth12;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "java/lang/Math", "sin", "(D)D");
jvalue args[] = {{.d = v16}};
v11 = (jdouble) env->CallStaticDoubleMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("152:move-result-wide \x76\x37");
v19 = (jdouble) v11;
v13 = d2c_bitcast_to_double(4605754516372524270);
v22 = d2c_bitcast_to_double(4487126258331716666);
LOGD("168:invoke-static/range \x76\x35\x20\x2e\x2e\x2e\x20\x76\x31\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x46\x6c\x6f\x61\x74\x4d\x61\x74\x68\x3b\x2d\x3e\x61\x70\x70\x72\x6f\x78\x45\x71\x75\x61\x6c\x28\x44\x20\x44\x20\x44\x29\x5a");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls3;
jmethodID &mid = mth7;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/FloatMath", "approxEqual", "(DDD)Z");
jvalue args[] = {{.d = v13},{.d = v19},{.d = v22}};
v7 = (jboolean) env->CallStaticBooleanMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
LOGD("16e:move-result \x76\x32");
v10 = (jint) v7;
LOGD("170:invoke-static \x76\x32\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
{
#define EX_HANDLE EX_UnwindBlock
jclass &clz = cls4;
jmethodID &mid = mth3;
D2C_RESOLVE_STATIC_METHOD(clz, mid, "com/test/TestCompiler/Main", "assertTrue", "(Z)V");
jvalue args[] = {{.z = (jboolean) v10}};
env->CallStaticVoidMethodA(clz, mid, args);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
return;
EX_UnwindBlock: return;
}
