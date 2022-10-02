/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_itsaky_androidide_treesitter_TSQueryCursor_Native */

#ifndef _Included_com_itsaky_androidide_treesitter_TSQueryCursor_Native
#define _Included_com_itsaky_androidide_treesitter_TSQueryCursor_Native
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_itsaky_androidide_treesitter_TSQueryCursor_Native
 * Method:    newCursor
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_itsaky_androidide_treesitter_TSQueryCursor_00024Native_newCursor
  (JNIEnv *, jclass);

/*
 * Class:     com_itsaky_androidide_treesitter_TSQueryCursor_Native
 * Method:    delete
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_itsaky_androidide_treesitter_TSQueryCursor_00024Native_delete
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_itsaky_androidide_treesitter_TSQueryCursor_Native
 * Method:    exec
 * Signature: (JJLcom/itsaky/androidide/treesitter/TSNode;)V
 */
JNIEXPORT void JNICALL Java_com_itsaky_androidide_treesitter_TSQueryCursor_00024Native_exec
  (JNIEnv *, jclass, jlong, jlong, jobject);

/*
 * Class:     com_itsaky_androidide_treesitter_TSQueryCursor_Native
 * Method:    exceededMatchLimit
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_itsaky_androidide_treesitter_TSQueryCursor_00024Native_exceededMatchLimit
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_itsaky_androidide_treesitter_TSQueryCursor_Native
 * Method:    matchLimit
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_itsaky_androidide_treesitter_TSQueryCursor_00024Native_matchLimit__JI
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_itsaky_androidide_treesitter_TSQueryCursor_Native
 * Method:    matchLimit
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_itsaky_androidide_treesitter_TSQueryCursor_00024Native_matchLimit__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_itsaky_androidide_treesitter_TSQueryCursor_Native
 * Method:    setByteRange
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_com_itsaky_androidide_treesitter_TSQueryCursor_00024Native_setByteRange
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_itsaky_androidide_treesitter_TSQueryCursor_Native
 * Method:    setPointRange
 * Signature: (JLcom/itsaky/androidide/treesitter/TSPoint;Lcom/itsaky/androidide/treesitter/TSPoint;)V
 */
JNIEXPORT void JNICALL Java_com_itsaky_androidide_treesitter_TSQueryCursor_00024Native_setPointRange
  (JNIEnv *, jclass, jlong, jobject, jobject);

/*
 * Class:     com_itsaky_androidide_treesitter_TSQueryCursor_Native
 * Method:    nextMatch
 * Signature: (JLcom/itsaky/androidide/treesitter/TSQueryMatch;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_itsaky_androidide_treesitter_TSQueryCursor_00024Native_nextMatch
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     com_itsaky_androidide_treesitter_TSQueryCursor_Native
 * Method:    removeMatch
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_itsaky_androidide_treesitter_TSQueryCursor_00024Native_removeMatch
  (JNIEnv *, jclass, jlong, jint);

#ifdef __cplusplus
}
#endif
#endif
