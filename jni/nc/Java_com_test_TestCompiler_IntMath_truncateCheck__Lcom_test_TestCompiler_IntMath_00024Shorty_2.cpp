#include "Dex2C.h"

/* Lcom/test/TestCompiler/IntMath;->truncateCheck(Lcom/test/TestCompiler/IntMath$Shorty;)V */
extern "C" JNIEXPORT void JNICALL
Java_com_test_TestCompiler_IntMath_truncateCheck__Lcom_test_TestCompiler_IntMath_00024Shorty_2(JNIEnv *env, jobject thiz, jobject p4){
jobject v0 = NULL;
jint v1;
jint v2;
jint v3;
jclass cls0 = NULL,cls1 = NULL;
jfieldID fld0 = NULL,fld1 = NULL,fld2 = NULL;
jmethodID mth0 = NULL;
v0 = (jobject)env->NewLocalRef(p4);
L0:
LOGD("0:iget-short \x76\x30\x2c\x20\x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x24\x53\x68\x6f\x72\x74\x79\x3b\x2d\x3e\x6d\x53\x68\x6f\x72\x74\x20\x53");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls0;
jfieldID &fld = fld0;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/IntMath$Shorty", "mShort", "S");
v1 = (jshort) env->GetShortField(v0,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v2 = 1;
v3 = -5597;
LOGD("c:if-ne \x76\x30\x2c\x20\x76\x33\x2c\x20\x2b\x34");
if(v1 != v3) {
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
LOGD("16:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
LOGD("1c:iget-char \x76\x30\x2c\x20\x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x24\x53\x68\x6f\x72\x74\x79\x3b\x2d\x3e\x6d\x43\x68\x61\x72\x20\x43");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls0;
jfieldID &fld = fld1;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/IntMath$Shorty", "mChar", "C");
v1 = (jchar) env->GetCharField(v0,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v3 = 59939;
LOGD("26:if-ne \x76\x30\x2c\x20\x76\x33\x2c\x20\x2b\x34");
if(v1 != v3) {
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
LOGD("30:invoke-static \x76\x30\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
LOGD("36:iget-byte \x76\x30\x2c\x20\x76\x34\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x49\x6e\x74\x4d\x61\x74\x68\x24\x53\x68\x6f\x72\x74\x79\x3b\x2d\x3e\x6d\x42\x79\x74\x65\x20\x42");
{
#define EX_HANDLE EX_UnwindBlock
D2C_NOT_NULL(v0);
jclass &clz = cls0;
jfieldID &fld = fld2;
D2C_RESOLVE_FIELD(clz, fld, "com/test/TestCompiler/IntMath$Shorty", "mByte", "B");
v1 = (jbyte) env->GetByteField(v0,fld);
D2C_CHECK_PENDING_EX;
#undef EX_HANDLE
}
v3 = 35;
LOGD("3e:if-ne \x76\x30\x2c\x20\x76\x33\x2c\x20\x2b\x33");
if(v1 != v3) {
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
LOGD("46:invoke-static \x76\x31\x2c\x20\x4c\x63\x6f\x6d\x2f\x74\x65\x73\x74\x2f\x54\x65\x73\x74\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x4d\x61\x69\x6e\x3b\x2d\x3e\x61\x73\x73\x65\x72\x74\x54\x72\x75\x65\x28\x5a\x29\x56");
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
