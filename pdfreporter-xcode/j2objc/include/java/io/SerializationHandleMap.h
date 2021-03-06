//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/SerializationHandleMap.java
//

#ifndef _JavaIoSerializationHandleMap_H_
#define _JavaIoSerializationHandleMap_H_

@class IOSIntArray;
@class IOSObjectArray;

#include "J2ObjC_header.h"

#define JavaIoSerializationHandleMap_LOAD_FACTOR 7500

@interface JavaIoSerializationHandleMap : NSObject {
}

- (instancetype)init;

- (jint)getWithId:(id)key;

- (jint)putWithId:(id)key
          withInt:(jint)value;

- (jint)removeWithId:(id)key;

- (jboolean)isEmpty;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoSerializationHandleMap)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaIoSerializationHandleMap, LOAD_FACTOR, jint)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaIoSerializationHandleMap)

#endif // _JavaIoSerializationHandleMap_H_
