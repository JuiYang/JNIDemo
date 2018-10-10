//
// Created by tclxa on 18-9-26.
//

#include "com_example_tclxa_ndkdemo_JNIUtils.h"
#include "NLDF29_lite.h"
#include <string.h>
#include <jni.h>
#include <stdlib.h>
#include <android/log.h>

#define LOGD_TAG "wwww"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOGD_TAG, __VA_ARGS__)

#define LOGI_TAG "wwww"
#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, LOGI_TAG, __VA_ARGS__))

JNIEXPORT jstring JNICALL Java_com_example_tclxa_ndkdemo_MainActivity_getStringFromJNI(JNIEnv * env,
                                                                                jobject jobject){
    LOGI("native function start..");
     char ch[4] = {12,34,-10,-5};
    char a[3898940];
    memcpy(a,modeldata,strlen(modeldata));
    LOGI("native function over..");

    return (* env)-> NewStringUTF(env,"Hello, I'm from jni");
}

