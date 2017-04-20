/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class stanford_mast_reflex_NativeDispatcher */

#ifndef _Included_stanford_mast_reflex_NativeDispatcher
#define _Included_stanford_mast_reflex_NativeDispatcher
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     stanford_mast_reflex_NativeDispatcher
 * Method:    _rte_eal_init
 * Signature: ([Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_stanford_mast_reflex_NativeDispatcher__1rte_1eal_1init
  (JNIEnv *, jobject, jobjectArray);

/*
 * Class:     stanford_mast_reflex_NativeDispatcher
 * Method:    _malloc
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_stanford_mast_reflex_NativeDispatcher__1malloc
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     stanford_mast_reflex_NativeDispatcher
 * Method:    _free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_stanford_mast_reflex_NativeDispatcher__1free
  (JNIEnv *, jobject, jlong);

/*
 * Class:     stanford_mast_reflex_NativeDispatcher
 * Method:    _hello_reflex
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_stanford_mast_reflex_NativeDispatcher__1hello_1reflex
  (JNIEnv *, jobject);

/*
 * Class:     stanford_mast_reflex_NativeDispatcher
 * Method:    _connect
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_stanford_mast_reflex_NativeDispatcher__1connect
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     stanford_mast_reflex_NativeDispatcher
 * Method:    _poll
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_stanford_mast_reflex_NativeDispatcher__1poll
  (JNIEnv *, jobject);

/*
 * Class:     stanford_mast_reflex_NativeDispatcher
 * Method:    _submit_io
 * Signature: (JJIJZ)I
 */
JNIEXPORT jint JNICALL Java_stanford_mast_reflex_NativeDispatcher__1submit_1io
  (JNIEnv *, jobject, jlong, jlong, jint, jlong, jboolean);

#ifdef __cplusplus
}
#endif
#endif
