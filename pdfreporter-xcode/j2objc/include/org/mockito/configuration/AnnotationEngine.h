//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/testing/mockito/build_result/java/org/mockito/configuration/AnnotationEngine.java
//

#ifndef _OrgMockitoConfigurationAnnotationEngine_H_
#define _OrgMockitoConfigurationAnnotationEngine_H_

@class IOSClass;
@class JavaLangReflectField;
@protocol JavaLangAnnotationAnnotation;

#include "J2ObjC_header.h"

@protocol OrgMockitoConfigurationAnnotationEngine < NSObject, JavaObject >

- (id)createMockForWithJavaLangAnnotationAnnotation:(id<JavaLangAnnotationAnnotation>)annotation
                           withJavaLangReflectField:(JavaLangReflectField *)field;

- (void)processWithIOSClass:(IOSClass *)clazz
                     withId:(id)testInstance;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoConfigurationAnnotationEngine)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoConfigurationAnnotationEngine)

#endif // _OrgMockitoConfigurationAnnotationEngine_H_
