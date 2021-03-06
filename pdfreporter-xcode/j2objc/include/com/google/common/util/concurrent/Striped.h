//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/util/concurrent/Striped.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonUtilConcurrentStriped_RESTRICT
#define ComGoogleCommonUtilConcurrentStriped_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentStriped_RESTRICT
#if ComGoogleCommonUtilConcurrentStriped_LazyStriped_INCLUDE
#define ComGoogleCommonUtilConcurrentStriped_PowerOfTwoStriped_INCLUDE 1
#endif
#if ComGoogleCommonUtilConcurrentStriped_CompactStriped_INCLUDE
#define ComGoogleCommonUtilConcurrentStriped_PowerOfTwoStriped_INCLUDE 1
#endif
#if ComGoogleCommonUtilConcurrentStriped_PowerOfTwoStriped_INCLUDE
#define ComGoogleCommonUtilConcurrentStriped_INCLUDE 1
#endif
#if !defined (_ComGoogleCommonUtilConcurrentStriped_) && (ComGoogleCommonUtilConcurrentStriped_INCLUDE_ALL || ComGoogleCommonUtilConcurrentStriped_INCLUDE)
#define _ComGoogleCommonUtilConcurrentStriped_

@protocol ComGoogleCommonBaseSupplier;
@protocol JavaLangIterable;


#define ComGoogleCommonUtilConcurrentStriped_ALL_SET -1

@interface ComGoogleCommonUtilConcurrentStriped : NSObject {
}

- (id)getWithId:(id)key;

- (id)getAtWithInt:(jint)index;

- (jint)indexForWithId:(id)key;

- (jint)size;

- (id<JavaLangIterable>)bulkGetWithJavaLangIterable:(id<JavaLangIterable>)keys;

+ (ComGoogleCommonUtilConcurrentStriped *)lockWithInt:(jint)stripes;

+ (ComGoogleCommonUtilConcurrentStriped *)lazyWeakLockWithInt:(jint)stripes;

+ (ComGoogleCommonUtilConcurrentStriped *)semaphoreWithInt:(jint)stripes
                                                   withInt:(jint)permits;

+ (ComGoogleCommonUtilConcurrentStriped *)lazyWeakSemaphoreWithInt:(jint)stripes
                                                           withInt:(jint)permits;

+ (ComGoogleCommonUtilConcurrentStriped *)readWriteLockWithInt:(jint)stripes;

+ (ComGoogleCommonUtilConcurrentStriped *)lazyWeakReadWriteLockWithInt:(jint)stripes;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonUtilConcurrentStriped_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentStriped)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentStriped *ComGoogleCommonUtilConcurrentStriped_lockWithInt_(jint stripes);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentStriped *ComGoogleCommonUtilConcurrentStriped_lazyWeakLockWithInt_(jint stripes);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentStriped *ComGoogleCommonUtilConcurrentStriped_semaphoreWithInt_withInt_(jint stripes, jint permits);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentStriped *ComGoogleCommonUtilConcurrentStriped_lazyWeakSemaphoreWithInt_withInt_(jint stripes, jint permits);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentStriped *ComGoogleCommonUtilConcurrentStriped_readWriteLockWithInt_(jint stripes);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentStriped *ComGoogleCommonUtilConcurrentStriped_lazyWeakReadWriteLockWithInt_(jint stripes);

FOUNDATION_EXPORT id<ComGoogleCommonBaseSupplier> ComGoogleCommonUtilConcurrentStriped_READ_WRITE_LOCK_SUPPLIER_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonUtilConcurrentStriped, READ_WRITE_LOCK_SUPPLIER_, id<ComGoogleCommonBaseSupplier>)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonUtilConcurrentStriped, ALL_SET, jint)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentStriped)
#if !defined (_ComGoogleCommonUtilConcurrentStriped_PowerOfTwoStriped_) && (ComGoogleCommonUtilConcurrentStriped_INCLUDE_ALL || ComGoogleCommonUtilConcurrentStriped_PowerOfTwoStriped_INCLUDE)
#define _ComGoogleCommonUtilConcurrentStriped_PowerOfTwoStriped_


@interface ComGoogleCommonUtilConcurrentStriped_PowerOfTwoStriped : ComGoogleCommonUtilConcurrentStriped {
 @public
  jint mask_;
}

- (instancetype)initWithInt:(jint)stripes;

- (jint)indexForWithId:(id)key;

- (id)getWithId:(id)key;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentStriped_PowerOfTwoStriped)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentStriped_PowerOfTwoStriped)
#if !defined (_ComGoogleCommonUtilConcurrentStriped_CompactStriped_) && (ComGoogleCommonUtilConcurrentStriped_INCLUDE_ALL || ComGoogleCommonUtilConcurrentStriped_CompactStriped_INCLUDE)
#define _ComGoogleCommonUtilConcurrentStriped_CompactStriped_

@class IOSObjectArray;
@protocol ComGoogleCommonBaseSupplier;


@interface ComGoogleCommonUtilConcurrentStriped_CompactStriped : ComGoogleCommonUtilConcurrentStriped_PowerOfTwoStriped {
}

- (id)getAtWithInt:(jint)index;

- (jint)size;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentStriped_CompactStriped)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentStriped_CompactStriped)
#if !defined (_ComGoogleCommonUtilConcurrentStriped_LazyStriped_) && (ComGoogleCommonUtilConcurrentStriped_INCLUDE_ALL || ComGoogleCommonUtilConcurrentStriped_LazyStriped_INCLUDE)
#define _ComGoogleCommonUtilConcurrentStriped_LazyStriped_

@protocol ComGoogleCommonBaseSupplier;
@protocol JavaUtilConcurrentConcurrentMap;


@interface ComGoogleCommonUtilConcurrentStriped_LazyStriped : ComGoogleCommonUtilConcurrentStriped_PowerOfTwoStriped {
 @public
  id<JavaUtilConcurrentConcurrentMap> cache_;
  jint size__;
}

- (instancetype)initWithInt:(jint)stripes
withComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)supplier;

- (id)getAtWithInt:(jint)index;

- (jint)size;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentStriped_LazyStriped)

J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentStriped_LazyStriped, cache_, id<JavaUtilConcurrentConcurrentMap>)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentStriped_LazyStriped)
#if !defined (_ComGoogleCommonUtilConcurrentStriped_PaddedLock_) && (ComGoogleCommonUtilConcurrentStriped_INCLUDE_ALL || ComGoogleCommonUtilConcurrentStriped_PaddedLock_INCLUDE)
#define _ComGoogleCommonUtilConcurrentStriped_PaddedLock_

#define JavaUtilConcurrentLocksReentrantLock_RESTRICT 1
#define JavaUtilConcurrentLocksReentrantLock_INCLUDE 1
#include "java/util/concurrent/locks/ReentrantLock.h"


@interface ComGoogleCommonUtilConcurrentStriped_PaddedLock : JavaUtilConcurrentLocksReentrantLock {
 @public
  jlong q1_, q2_, q3_;
}

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentStriped_PaddedLock)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentStriped_PaddedLock)
#if !defined (_ComGoogleCommonUtilConcurrentStriped_PaddedSemaphore_) && (ComGoogleCommonUtilConcurrentStriped_INCLUDE_ALL || ComGoogleCommonUtilConcurrentStriped_PaddedSemaphore_INCLUDE)
#define _ComGoogleCommonUtilConcurrentStriped_PaddedSemaphore_

#define JavaUtilConcurrentSemaphore_RESTRICT 1
#define JavaUtilConcurrentSemaphore_INCLUDE 1
#include "java/util/concurrent/Semaphore.h"


@interface ComGoogleCommonUtilConcurrentStriped_PaddedSemaphore : JavaUtilConcurrentSemaphore {
 @public
  jlong q1_, q2_, q3_;
}

- (instancetype)initWithInt:(jint)permits;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentStriped_PaddedSemaphore)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentStriped_PaddedSemaphore)
#if !defined (_ComGoogleCommonUtilConcurrentStriped_$1_) && (ComGoogleCommonUtilConcurrentStriped_INCLUDE_ALL || ComGoogleCommonUtilConcurrentStriped_$1_INCLUDE)
#define _ComGoogleCommonUtilConcurrentStriped_$1_

@protocol JavaUtilConcurrentLocksLock;

#define ComGoogleCommonBaseSupplier_RESTRICT 1
#define ComGoogleCommonBaseSupplier_INCLUDE 1
#include "com/google/common/base/Supplier.h"


@interface ComGoogleCommonUtilConcurrentStriped_$1 : NSObject < ComGoogleCommonBaseSupplier > {
}

- (id<JavaUtilConcurrentLocksLock>)get;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentStriped_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentStriped_$1)
#if !defined (_ComGoogleCommonUtilConcurrentStriped_$2_) && (ComGoogleCommonUtilConcurrentStriped_INCLUDE_ALL || ComGoogleCommonUtilConcurrentStriped_$2_INCLUDE)
#define _ComGoogleCommonUtilConcurrentStriped_$2_

@protocol JavaUtilConcurrentLocksLock;

#define ComGoogleCommonBaseSupplier_RESTRICT 1
#define ComGoogleCommonBaseSupplier_INCLUDE 1
#include "com/google/common/base/Supplier.h"


@interface ComGoogleCommonUtilConcurrentStriped_$2 : NSObject < ComGoogleCommonBaseSupplier > {
}

- (id<JavaUtilConcurrentLocksLock>)get;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentStriped_$2)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentStriped_$2)
#if !defined (_ComGoogleCommonUtilConcurrentStriped_$3_) && (ComGoogleCommonUtilConcurrentStriped_INCLUDE_ALL || ComGoogleCommonUtilConcurrentStriped_$3_INCLUDE)
#define _ComGoogleCommonUtilConcurrentStriped_$3_

@class JavaUtilConcurrentSemaphore;

#define ComGoogleCommonBaseSupplier_RESTRICT 1
#define ComGoogleCommonBaseSupplier_INCLUDE 1
#include "com/google/common/base/Supplier.h"


@interface ComGoogleCommonUtilConcurrentStriped_$3 : NSObject < ComGoogleCommonBaseSupplier > {
}

- (JavaUtilConcurrentSemaphore *)get;

- (instancetype)initWithInt:(jint)capture$0;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentStriped_$3)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentStriped_$3)
#if !defined (_ComGoogleCommonUtilConcurrentStriped_$4_) && (ComGoogleCommonUtilConcurrentStriped_INCLUDE_ALL || ComGoogleCommonUtilConcurrentStriped_$4_INCLUDE)
#define _ComGoogleCommonUtilConcurrentStriped_$4_

@class JavaUtilConcurrentSemaphore;

#define ComGoogleCommonBaseSupplier_RESTRICT 1
#define ComGoogleCommonBaseSupplier_INCLUDE 1
#include "com/google/common/base/Supplier.h"


@interface ComGoogleCommonUtilConcurrentStriped_$4 : NSObject < ComGoogleCommonBaseSupplier > {
}

- (JavaUtilConcurrentSemaphore *)get;

- (instancetype)initWithInt:(jint)capture$0;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentStriped_$4)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentStriped_$4)
#if !defined (_ComGoogleCommonUtilConcurrentStriped_$5_) && (ComGoogleCommonUtilConcurrentStriped_INCLUDE_ALL || ComGoogleCommonUtilConcurrentStriped_$5_INCLUDE)
#define _ComGoogleCommonUtilConcurrentStriped_$5_

@protocol JavaUtilConcurrentLocksReadWriteLock;

#define ComGoogleCommonBaseSupplier_RESTRICT 1
#define ComGoogleCommonBaseSupplier_INCLUDE 1
#include "com/google/common/base/Supplier.h"


@interface ComGoogleCommonUtilConcurrentStriped_$5 : NSObject < ComGoogleCommonBaseSupplier > {
}

- (id<JavaUtilConcurrentLocksReadWriteLock>)get;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentStriped_$5)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentStriped_$5)
