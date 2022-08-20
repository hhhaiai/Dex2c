#include "Dex2C.h"

/* Lcom/test/TestCompiler/FloatMath;->approxEqual(FFF)Z */
extern "C" JNIEXPORT jboolean JNICALL
Java_com_test_TestCompiler_FloatMath_approxEqual__FFF(JNIEnv *env, jobject thiz, jfloat p3, jfloat p4, jfloat p5){
jfloat v0;
jfloat v1;
jfloat v2;
jint v3;
jint v4;
jfloat v5;
v0 = (jfloat)p3;
v1 = (jfloat)p4;
v2 = (jfloat)p5;
L0:
v3 = 1;
v3 = 1;
LOGD("4:cmpl-float \x76\x32\x2c\x20\x76\x33\x2c\x20\x76\x34");
v4 = (v0 == v1) ? 0 : (v0 > v1) ? 1 : -1;
LOGD("8:if-lez \x76\x32\x2c\x20\x2b\x62");
if(v4 <= 0){
goto L5;
}
else {
goto L1;
}
L1:
LOGD("c:sub-float \x76\x32\x2c\x20\x76\x33\x2c\x20\x76\x34");
v5 = (v0 - v1);
LOGD("10:cmpg-float \x76\x32\x2c\x20\x76\x32\x2c\x20\x76\x35");
v4 = (v5 == v2) ? 0 : (v5 < v2) ? -1 : 1;
LOGD("14:if-gez \x76\x32\x2c\x20\x2b\x33");
if(v4 >= 0){
goto L3;
}
else {
goto L2;
}
L2:
goto L4;
L3:
v3 = 0;
L4:
return (jboolean) v3;
L5:
LOGD("1e:sub-float \x76\x32\x2c\x20\x76\x34\x2c\x20\x76\x33");
v5 = (v1 - v0);
LOGD("22:cmpg-float \x76\x32\x2c\x20\x76\x32\x2c\x20\x76\x35");
v4 = (v5 == v2) ? 0 : (v5 < v2) ? -1 : 1;
LOGD("26:if-gez \x76\x32\x2c\x20\x2b\x33");
if(v4 >= 0){
goto L7;
}
else {
goto L6;
}
L6:
goto L8;
L7:
v3 = 0;
L8:
return (jboolean) v3;
EX_UnwindBlock: return (jboolean)0;
}
