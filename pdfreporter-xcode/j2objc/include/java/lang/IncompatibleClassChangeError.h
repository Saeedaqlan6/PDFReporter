//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/IncompatibleClassChangeError.java
//

#ifndef _JavaLangIncompatibleClassChangeError_H_
#define _JavaLangIncompatibleClassChangeError_H_

#include "J2ObjC_header.h"
#include "java/lang/LinkageError.h"

#define JavaLangIncompatibleClassChangeError_serialVersionUID -4914975503642802119LL

@interface JavaLangIncompatibleClassChangeError : JavaLangLinkageError {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangIncompatibleClassChangeError)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaLangIncompatibleClassChangeError, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaLangIncompatibleClassChangeError)

#endif // _JavaLangIncompatibleClassChangeError_H_
