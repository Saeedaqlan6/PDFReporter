//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/Map.java
//

#ifndef _JavaUtilMap_H_
#define _JavaUtilMap_H_

@protocol JavaUtilCollection;
@protocol JavaUtilSet;

#include "J2ObjC_header.h"

@protocol JavaUtilMap < NSObject, JavaObject >

- (void)clear;

- (jboolean)containsKeyWithId:(id)key;

- (jboolean)containsValueWithId:(id)value;

- (id<JavaUtilSet>)entrySet;

- (jboolean)isEqual:(id)object;

- (id)getWithId:(id)key;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (id<JavaUtilSet>)keySet;

- (id)putWithId:(id)key
         withId:(id)value;

- (void)putAllWithJavaUtilMap:(id<JavaUtilMap>)map;

- (id)removeWithId:(id)key;

- (jint)size;

- (id<JavaUtilCollection>)values;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilMap)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilMap)

@protocol JavaUtilMap_Entry < NSObject, JavaObject >

- (jboolean)isEqual:(id)object;

- (id)getKey;

- (id)getValue;

- (NSUInteger)hash;

- (id)setValueWithId:(id)object;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilMap_Entry)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilMap_Entry)

#endif // _JavaUtilMap_H_
