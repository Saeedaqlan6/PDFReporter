//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/testing/mockito/build_result/java/org/mockito/internal/matchers/StartsWith.java
//

#ifndef _OrgMockitoInternalMatchersStartsWith_H_
#define _OrgMockitoInternalMatchersStartsWith_H_

@protocol OrgHamcrestDescription;

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "org/mockito/ArgumentMatcher.h"

#define OrgMockitoInternalMatchersStartsWith_serialVersionUID -5978092285707998431LL

@interface OrgMockitoInternalMatchersStartsWith : OrgMockitoArgumentMatcher < JavaIoSerializable > {
}

- (instancetype)initWithNSString:(NSString *)prefix;

- (jboolean)matchesWithId:(id)actual;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersStartsWith)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalMatchersStartsWith, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersStartsWith)

#endif // _OrgMockitoInternalMatchersStartsWith_H_
