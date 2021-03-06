//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/util/concurrent/ForwardingBlockingQueue.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonUtilConcurrentForwardingBlockingQueue_RESTRICT
#define ComGoogleCommonUtilConcurrentForwardingBlockingQueue_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentForwardingBlockingQueue_RESTRICT
#if !defined (_ComGoogleCommonUtilConcurrentForwardingBlockingQueue_) && (ComGoogleCommonUtilConcurrentForwardingBlockingQueue_INCLUDE_ALL || ComGoogleCommonUtilConcurrentForwardingBlockingQueue_INCLUDE)
#define _ComGoogleCommonUtilConcurrentForwardingBlockingQueue_

@class JavaUtilConcurrentTimeUnitEnum;
@protocol JavaUtilCollection;

#define ComGoogleCommonCollectForwardingQueue_RESTRICT 1
#define ComGoogleCommonCollectForwardingQueue_INCLUDE 1
#include "com/google/common/collect/ForwardingQueue.h"

#define JavaUtilConcurrentBlockingQueue_RESTRICT 1
#define JavaUtilConcurrentBlockingQueue_INCLUDE 1
#include "java/util/concurrent/BlockingQueue.h"


@interface ComGoogleCommonUtilConcurrentForwardingBlockingQueue : ComGoogleCommonCollectForwardingQueue < JavaUtilConcurrentBlockingQueue > {
}

- (instancetype)init;

- (id<JavaUtilConcurrentBlockingQueue>)delegate;

- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection>)c
                              withInt:(jint)maxElements;

- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jboolean)offerWithId:(id)e
               withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (id)pollWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (void)putWithId:(id)e;

- (jint)remainingCapacity;

- (id)take;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentForwardingBlockingQueue)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentForwardingBlockingQueue)
