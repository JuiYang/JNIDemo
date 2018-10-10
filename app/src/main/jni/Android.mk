LOCAL_PATH       :=  $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE     :=  hello_jni
LOCAL_SRC_FILES  :=  com_example_tclxa_ndkdemo_JNIUtils.c
LOCAL_LDLIBS += -llog -ldl
include $(BUILD_SHARED_LIBRARY)

