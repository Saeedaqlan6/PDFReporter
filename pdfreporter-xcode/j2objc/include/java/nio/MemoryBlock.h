//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/MemoryBlock.java
//

#ifndef _JavaNioMemoryBlock_H_
#define _JavaNioMemoryBlock_H_

@class IOSByteArray;
@class IOSCharArray;
@class IOSDoubleArray;
@class IOSFloatArray;
@class IOSIntArray;
@class IOSLongArray;
@class IOSShortArray;
@class JavaIoFileDescriptor;
@class JavaNioByteOrder;
@class JavaNioChannelsFileChannel_MapMode;

#include "J2ObjC_header.h"

@interface JavaNioMemoryBlock : NSObject {
 @public
  jlong address_;
  jlong size_;
}

+ (JavaNioMemoryBlock *)mmapWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                            withLong:(jlong)offset
                                            withLong:(jlong)size
              withJavaNioChannelsFileChannel_MapMode:(JavaNioChannelsFileChannel_MapMode *)mapMode;

+ (JavaNioMemoryBlock *)allocateWithInt:(jint)byteCount OBJC_METHOD_FAMILY_NONE;

+ (JavaNioMemoryBlock *)wrapFromJniWithLong:(jlong)address
                                   withLong:(jlong)byteCount;

- (IOSByteArray *)array;

- (void)free;

- (void)pokeByteWithInt:(jint)offset
               withByte:(jbyte)value;

- (void)pokeByteArrayWithInt:(jint)offset
               withByteArray:(IOSByteArray *)src
                     withInt:(jint)srcOffset
                     withInt:(jint)byteCount;

- (void)pokeCharArrayWithInt:(jint)offset
               withCharArray:(IOSCharArray *)src
                     withInt:(jint)srcOffset
                     withInt:(jint)charCount
                 withBoolean:(jboolean)swap;

- (void)pokeDoubleArrayWithInt:(jint)offset
               withDoubleArray:(IOSDoubleArray *)src
                       withInt:(jint)srcOffset
                       withInt:(jint)doubleCount
                   withBoolean:(jboolean)swap;

- (void)pokeFloatArrayWithInt:(jint)offset
               withFloatArray:(IOSFloatArray *)src
                      withInt:(jint)srcOffset
                      withInt:(jint)floatCount
                  withBoolean:(jboolean)swap;

- (void)pokeIntArrayWithInt:(jint)offset
               withIntArray:(IOSIntArray *)src
                    withInt:(jint)srcOffset
                    withInt:(jint)intCount
                withBoolean:(jboolean)swap;

- (void)pokeLongArrayWithInt:(jint)offset
               withLongArray:(IOSLongArray *)src
                     withInt:(jint)srcOffset
                     withInt:(jint)longCount
                 withBoolean:(jboolean)swap;

- (void)pokeShortArrayWithInt:(jint)offset
               withShortArray:(IOSShortArray *)src
                      withInt:(jint)srcOffset
                      withInt:(jint)shortCount
                  withBoolean:(jboolean)swap;

- (jbyte)peekByteWithInt:(jint)offset;

- (void)peekByteArrayWithInt:(jint)offset
               withByteArray:(IOSByteArray *)dst
                     withInt:(jint)dstOffset
                     withInt:(jint)byteCount;

- (void)peekCharArrayWithInt:(jint)offset
               withCharArray:(IOSCharArray *)dst
                     withInt:(jint)dstOffset
                     withInt:(jint)charCount
                 withBoolean:(jboolean)swap;

- (void)peekDoubleArrayWithInt:(jint)offset
               withDoubleArray:(IOSDoubleArray *)dst
                       withInt:(jint)dstOffset
                       withInt:(jint)doubleCount
                   withBoolean:(jboolean)swap;

- (void)peekFloatArrayWithInt:(jint)offset
               withFloatArray:(IOSFloatArray *)dst
                      withInt:(jint)dstOffset
                      withInt:(jint)floatCount
                  withBoolean:(jboolean)swap;

- (void)peekIntArrayWithInt:(jint)offset
               withIntArray:(IOSIntArray *)dst
                    withInt:(jint)dstOffset
                    withInt:(jint)intCount
                withBoolean:(jboolean)swap;

- (void)peekLongArrayWithInt:(jint)offset
               withLongArray:(IOSLongArray *)dst
                     withInt:(jint)dstOffset
                     withInt:(jint)longCount
                 withBoolean:(jboolean)swap;

- (void)peekShortArrayWithInt:(jint)offset
               withShortArray:(IOSShortArray *)dst
                      withInt:(jint)dstOffset
                      withInt:(jint)shortCount
                  withBoolean:(jboolean)swap;

- (void)pokeShortWithInt:(jint)offset
               withShort:(jshort)value
    withJavaNioByteOrder:(JavaNioByteOrder *)order;

- (jshort)peekShortWithInt:(jint)offset
      withJavaNioByteOrder:(JavaNioByteOrder *)order;

- (void)pokeIntWithInt:(jint)offset
               withInt:(jint)value
  withJavaNioByteOrder:(JavaNioByteOrder *)order;

- (jint)peekIntWithInt:(jint)offset
  withJavaNioByteOrder:(JavaNioByteOrder *)order;

- (void)pokeLongWithInt:(jint)offset
               withLong:(jlong)value
   withJavaNioByteOrder:(JavaNioByteOrder *)order;

- (jlong)peekLongWithInt:(jint)offset
    withJavaNioByteOrder:(JavaNioByteOrder *)order;

- (jlong)toLong;

- (NSString *)description;

- (jlong)getSize;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioMemoryBlock)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT JavaNioMemoryBlock *JavaNioMemoryBlock_mmapWithJavaIoFileDescriptor_withLong_withLong_withJavaNioChannelsFileChannel_MapMode_(JavaIoFileDescriptor *fd, jlong offset, jlong size, JavaNioChannelsFileChannel_MapMode *mapMode);

FOUNDATION_EXPORT JavaNioMemoryBlock *JavaNioMemoryBlock_allocateWithInt_(jint byteCount);

FOUNDATION_EXPORT JavaNioMemoryBlock *JavaNioMemoryBlock_wrapFromJniWithLong_withLong_(jlong address, jlong byteCount);
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNioMemoryBlock)

@interface JavaNioMemoryBlock_MemoryMappedBlock : JavaNioMemoryBlock {
}

- (void)free;

- (void)dealloc;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioMemoryBlock_MemoryMappedBlock)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNioMemoryBlock_MemoryMappedBlock)

@interface JavaNioMemoryBlock_NonMovableHeapBlock : JavaNioMemoryBlock {
}

- (IOSByteArray *)array;

- (void)free;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioMemoryBlock_NonMovableHeapBlock)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNioMemoryBlock_NonMovableHeapBlock)

@interface JavaNioMemoryBlock_UnmanagedBlock : JavaNioMemoryBlock {
}

- (void)free;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioMemoryBlock_UnmanagedBlock)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNioMemoryBlock_UnmanagedBlock)

#endif // _JavaNioMemoryBlock_H_
