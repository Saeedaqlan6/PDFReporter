//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/testing/mockito/build_result/java/org/mockito/internal/matchers/LessThan.java
//

#ifndef _OrgMockitoInternalMatchersLessThan_H_
#define _OrgMockitoInternalMatchersLessThan_H_

@protocol JavaLangComparable;

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "org/mockito/internal/matchers/CompareTo.h"

#define OrgMockitoInternalMatchersLessThan_serialVersionUID -133860804462310942LL

@interface OrgMockitoInternalMatchersLessThan : OrgMockitoInternalMatchersCompareTo < JavaIoSerializable > {
}

- (instancetype)initWithJavaLangComparable:(id<JavaLangComparable>)value;

- (NSString *)getName;

- (jboolean)matchResultWithInt:(jint)result;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersLessThan)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalMatchersLessThan, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersLessThan)

#endif // _OrgMockitoInternalMatchersLessThan_H_
