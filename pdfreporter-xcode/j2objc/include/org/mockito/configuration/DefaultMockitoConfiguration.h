//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/testing/mockito/build_result/java/org/mockito/configuration/DefaultMockitoConfiguration.java
//

#ifndef _OrgMockitoConfigurationDefaultMockitoConfiguration_H_
#define _OrgMockitoConfigurationDefaultMockitoConfiguration_H_

@protocol OrgMockitoConfigurationAnnotationEngine;
@protocol OrgMockitoReturnValues;
@protocol OrgMockitoStubbingAnswer;

#include "J2ObjC_header.h"
#include "org/mockito/configuration/IMockitoConfiguration.h"

@interface OrgMockitoConfigurationDefaultMockitoConfiguration : NSObject < OrgMockitoConfigurationIMockitoConfiguration > {
}

- (id<OrgMockitoReturnValues>)getReturnValues;

- (id<OrgMockitoStubbingAnswer>)getDefaultAnswer;

- (id<OrgMockitoConfigurationAnnotationEngine>)getAnnotationEngine;

- (jboolean)cleansStackTrace;

- (jboolean)enableClassCache;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoConfigurationDefaultMockitoConfiguration)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoConfigurationDefaultMockitoConfiguration)

#endif // _OrgMockitoConfigurationDefaultMockitoConfiguration_H_
