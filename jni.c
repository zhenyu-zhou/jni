// #include <jni.h> // zzy: should be already included in Test.h
#include "Test.h"
#include <stdio.h>

JNIEXPORT jstring JNICALL Java_Test_testString(JNIEnv *env, jobject obj, jstring s) 
{
   const char* str;  
   str = (*env)->GetStringUTFChars(env, s, 0);  
   if(str == NULL) {   
       return NULL; /* OutOfMemoryError already thrown */  
   }   
   // std::cout << str << std::endl;  
   printf("[C] %s\n", str);
   (*env)->ReleaseStringUTFChars(env, s, str);  
   char* tmpstr = "hello from c";  
   jstring rtstr = (*env)->NewStringUTF(env, tmpstr);  
   return rtstr;
}

JNIEXPORT jint JNICALL Java_Test_testInt(JNIEnv *env, jobject obj, jint n)
{
	printf("[C] %d\n", n);
	int cn = n+1;
	return cn;
}

