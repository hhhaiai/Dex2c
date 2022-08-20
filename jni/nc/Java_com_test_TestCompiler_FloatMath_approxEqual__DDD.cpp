#include "Dex2C.h"

/* Lcom/test/TestCompiler/FloatMath;->approxEqual(DDD)Z */
extern "C" JNIEXPORT jboolean JNICALL
Java_com_test_TestCompiler_FloatMath_approxEqual__DDD(JNIEnv *env, jobject thiz, jdouble p5, jdouble p7, jdouble p9){
jdouble v0;
jdouble v1;
jdouble v2;
jint v3;
jint v4;
jdouble v5;
jint v6;
v0 = (jdouble)p5;
v1 = (jdouble)p7;
v2 = (jdouble)p9;
L0:
v3 = 1;
v3 = 1;
LOGD("4:cmpl-double \x76\x32\x2c\x20\x76\x35\x2c\x20\x76\x37");
v4 = (v0 == v1) ? 0 : (v0 > v1) ? 1 : -1;
LOGD("8:if-lez \x76\x32\x2c\x20\x2b\x62");
if(v4 <= 0){
goto L5;
}
else {
goto L1;
}
L1:
LOGD("c:sub-double \x76\x32\x2c\x20\x76\x35\x2c\x20\x76\x37");
v5 = (v0 - v1);
LOGD("10:cmpg-double \x76\x34\x2c\x20\x76\x32\x2c\x20\x76\x39");
v6 = (v5 == v2) ? 0 : (v5 < v2) ? -1 : 1;
LOGD("14:if-gez \x76\x34\x2c\x20\x2b\x33");
if(v6 >= 0){
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
LOGD("1e:sub-double \x76\x32\x2c\x20\x76\x37\x2c\x20\x76\x35");
v5 = (v1 - v0);
LOGD("22:cmpg-double \x76\x34\x2c\x20\x76\x32\x2c\x20\x76\x39");
v6 = (v5 == v2) ? 0 : (v5 < v2) ? -1 : 1;
LOGD("26:if-gez \x76\x34\x2c\x20\x2b\x33");
if(v6 >= 0){
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
