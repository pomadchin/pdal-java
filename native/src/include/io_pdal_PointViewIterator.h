/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class io_pdal_PointViewIterator */

#ifndef _Included_io_pdal_PointViewIterator
#define _Included_io_pdal_PointViewIterator
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     io_pdal_PointViewIterator
 * Method:    hasNext
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_io_pdal_PointViewIterator_hasNext
  (JNIEnv *, jobject);

/*
 * Class:     io_pdal_PointViewIterator
 * Method:    next
 * Signature: ()Lio/pdal/PointView;
 */
JNIEXPORT jobject JNICALL Java_io_pdal_PointViewIterator_next
  (JNIEnv *, jobject);

/*
 * Class:     io_pdal_PointViewIterator
 * Method:    dispose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_io_pdal_PointViewIterator_dispose
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
