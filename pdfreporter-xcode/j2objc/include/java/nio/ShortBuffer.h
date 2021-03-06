//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/ShortBuffer.java
//

#ifndef _JavaNioShortBuffer_H_
#define _JavaNioShortBuffer_H_

@class IOSShortArray;
@class JavaNioByteOrder;

#include "J2ObjC_header.h"
#include "java/lang/Comparable.h"
#include "java/nio/Buffer.h"

@interface JavaNioShortBuffer : JavaNioBuffer < JavaLangComparable > {
}

+ (JavaNioShortBuffer *)allocateWithInt:(jint)capacity OBJC_METHOD_FAMILY_NONE;

+ (JavaNioShortBuffer *)wrapWithShortArray:(IOSShortArray *)array;

+ (JavaNioShortBuffer *)wrapWithShortArray:(IOSShortArray *)array
                                   withInt:(jint)start
                                   withInt:(jint)shortCount;

- (instancetype)initWithInt:(jint)capacity
                   withLong:(jlong)effectiveDirectAddress;

- (IOSShortArray *)array;

- (jint)arrayOffset;

- (JavaNioShortBuffer *)asReadOnlyBuffer;

- (JavaNioShortBuffer *)compact;

- (jint)compareToWithId:(JavaNioShortBuffer *)otherBuffer;

- (JavaNioShortBuffer *)duplicate;

- (jboolean)isEqual:(id)other;

- (jshort)get;

- (JavaNioShortBuffer *)getWithShortArray:(IOSShortArray *)dst;

- (JavaNioShortBuffer *)getWithShortArray:(IOSShortArray *)dst
                                  withInt:(jint)dstOffset
                                  withInt:(jint)shortCount;

- (jshort)getWithInt:(jint)index;

- (jboolean)hasArray;

- (NSUInteger)hash;

- (jboolean)isDirect;

- (JavaNioByteOrder *)order;

- (IOSShortArray *)protectedArray;

- (jint)protectedArrayOffset;

- (jboolean)protectedHasArray;

- (JavaNioShortBuffer *)putWithShort:(jshort)s;

- (JavaNioShortBuffer *)putWithShortArray:(IOSShortArray *)src;

- (JavaNioShortBuffer *)putWithShortArray:(IOSShortArray *)src
                                  withInt:(jint)srcOffset
                                  withInt:(jint)shortCount;

- (JavaNioShortBuffer *)putWithJavaNioShortBuffer:(JavaNioShortBuffer *)src;

- (JavaNioShortBuffer *)putWithInt:(jint)index
                         withShort:(jshort)s;

- (JavaNioShortBuffer *)slice;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioShortBuffer)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT JavaNioShortBuffer *JavaNioShortBuffer_allocateWithInt_(jint capacity);

FOUNDATION_EXPORT JavaNioShortBuffer *JavaNioShortBuffer_wrapWithShortArray_(IOSShortArray *array);

FOUNDATION_EXPORT JavaNioShortBuffer *JavaNioShortBuffer_wrapWithShortArray_withInt_withInt_(IOSShortArray *array, jint start, jint shortCount);
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNioShortBuffer)

#endif // _JavaNioShortBuffer_H_
