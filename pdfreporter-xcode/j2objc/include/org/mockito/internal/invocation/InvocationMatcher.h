//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/testing/mockito/build_result/java/org/mockito/internal/invocation/InvocationMatcher.java
//

#ifndef _OrgMockitoInternalInvocationInvocationMatcher_H_
#define _OrgMockitoInternalInvocationInvocationMatcher_H_

@class IOSObjectArray;
@class JavaLangReflectMethod;
@protocol JavaUtilList;
@protocol OrgMockitoInvocationInvocation;
@protocol OrgMockitoInvocationLocation;

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "org/mockito/internal/invocation/CapturesArgumensFromInvocation.h"
#include "org/mockito/invocation/DescribedInvocation.h"

#define OrgMockitoInternalInvocationInvocationMatcher_serialVersionUID -3047126096857467610LL

@interface OrgMockitoInternalInvocationInvocationMatcher : NSObject < OrgMockitoInvocationDescribedInvocation, OrgMockitoInternalInvocationCapturesArgumensFromInvocation, JavaIoSerializable > {
}

- (instancetype)initWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation
                                      withJavaUtilList:(id<JavaUtilList>)matchers;

- (instancetype)initWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation;

- (JavaLangReflectMethod *)getMethod;

- (id<OrgMockitoInvocationInvocation>)getInvocation;

- (id<JavaUtilList>)getMatchers;

- (NSString *)description;

- (jboolean)matchesWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)actual;

- (jboolean)hasSimilarMethodWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)candidate;

- (jboolean)hasSameMethodWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)candidate;

- (id<OrgMockitoInvocationLocation>)getLocation;

- (void)captureArgumentsFromWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)i;

+ (id<JavaUtilList>)createFromWithJavaUtilList:(id<JavaUtilList>)invocations;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalInvocationInvocationMatcher)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT id<JavaUtilList> OrgMockitoInternalInvocationInvocationMatcher_createFromWithJavaUtilList_(id<JavaUtilList> invocations);

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalInvocationInvocationMatcher, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalInvocationInvocationMatcher)

#endif // _OrgMockitoInternalInvocationInvocationMatcher_H_