#include <jni.h>
#include <stdio.h>
#include <android/log.h>

#ifndef _jnihelper_h
#define _jnihelper_h
#ifdef __cplusplus
extern "C" {
#endif

#define TAG "AccessAssets"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, TAG, __VA_ARGS__)

#ifndef NELEM
# define NELEM(x) ((int) (sizeof(x) / sizeof((x)[0])))
#endif

#ifdef __cplusplus
}
#endif
#endif
