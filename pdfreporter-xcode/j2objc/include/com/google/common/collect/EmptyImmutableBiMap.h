//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/collect/EmptyImmutableBiMap.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCollectEmptyImmutableBiMap_RESTRICT
#define ComGoogleCommonCollectEmptyImmutableBiMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectEmptyImmutableBiMap_RESTRICT
#if !defined (_ComGoogleCommonCollectEmptyImmutableBiMap_) && (ComGoogleCommonCollectEmptyImmutableBiMap_INCLUDE_ALL || ComGoogleCommonCollectEmptyImmutableBiMap_INCLUDE)
#define _ComGoogleCommonCollectEmptyImmutableBiMap_

@class ComGoogleCommonCollectImmutableSet;

#define ComGoogleCommonCollectImmutableBiMap_RESTRICT 1
#define ComGoogleCommonCollectImmutableBiMap_INCLUDE 1
#include "com/google/common/collect/ImmutableBiMap.h"


@interface ComGoogleCommonCollectEmptyImmutableBiMap : ComGoogleCommonCollectImmutableBiMap {
}

- (ComGoogleCommonCollectImmutableBiMap *)inverse;

- (jint)size;

- (jboolean)isEmpty;

- (id)getWithId:(id)key;

- (ComGoogleCommonCollectImmutableSet *)entrySet;

- (ComGoogleCommonCollectImmutableSet *)createEntrySet;

- (ComGoogleCommonCollectImmutableSet *)keySet;

- (jboolean)isPartialView;

- (id)readResolve;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonCollectEmptyImmutableBiMap_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonCollectEmptyImmutableBiMap)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT ComGoogleCommonCollectEmptyImmutableBiMap *ComGoogleCommonCollectEmptyImmutableBiMap_INSTANCE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectEmptyImmutableBiMap, INSTANCE_, ComGoogleCommonCollectEmptyImmutableBiMap *)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectEmptyImmutableBiMap)