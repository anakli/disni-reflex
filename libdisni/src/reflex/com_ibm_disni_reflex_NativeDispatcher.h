/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_ibm_disni_reflex_NativeDispatcher */

#ifndef _Included_com_ibm_disni_reflex_NativeDispatcher
#define _Included_com_ibm_disni_reflex_NativeDispatcher
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_ibm_disni_reflex_NativeDispatcher
 * Method:    _rte_eal_init
 * Signature: ([Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_reflex_NativeDispatcher__1rte_1eal_1init
  (JNIEnv *, jobject, jobjectArray);

/*
 * Class:     com_ibm_disni_reflex_NativeDispatcher
 * Method:    _malloc
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_ibm_disni_reflex_NativeDispatcher__1malloc
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_ibm_disni_reflex_NativeDispatcher
 * Method:    _free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_ibm_disni_reflex_NativeDispatcher__1free
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_ibm_disni_reflex_NativeDispatcher
 * Method:    _hello_reflex
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_ibm_disni_reflex_NativeDispatcher__1hello_1reflex
  (JNIEnv *, jobject);

/*
 * Class:     com_ibm_disni_reflex_NativeDispatcher
 * Method:    _connect
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_ibm_disni_reflex_NativeDispatcher__1connect
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_ibm_disni_reflex_NativeDispatcher
 * Method:    _poll
 * Signature: ()V
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_reflex_NativeDispatcher__1poll
  (JNIEnv *, jobject);

/*
 * Class:     com_ibm_disni_reflex_NativeDispatcher
 * Method:    _submit_io
 * Signature: (JJIJZ)V
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_reflex_NativeDispatcher__1submit_1io
  (JNIEnv *, jobject, jlong, jlong, jint, jlong, jboolean);

#ifdef __cplusplus
}
#endif
#endif