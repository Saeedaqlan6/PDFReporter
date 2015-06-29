//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/CookieManager.java
//

#ifndef _JavaNetCookieManager_H_
#define _JavaNetCookieManager_H_

@class JavaNetURI;
@protocol JavaNetCookiePolicy;
@protocol JavaNetCookieStore;
@protocol JavaUtilList;
@protocol JavaUtilMap;

#include "J2ObjC_header.h"
#include "java/net/CookieHandler.h"

@interface JavaNetCookieManager : JavaNetCookieHandler {
}

- (instancetype)init;

- (instancetype)initWithJavaNetCookieStore:(id<JavaNetCookieStore>)store
                   withJavaNetCookiePolicy:(id<JavaNetCookiePolicy>)cookiePolicy;

- (id<JavaUtilMap>)getWithJavaNetURI:(JavaNetURI *)uri
                     withJavaUtilMap:(id<JavaUtilMap>)requestHeaders;

- (void)putWithJavaNetURI:(JavaNetURI *)uri
          withJavaUtilMap:(id<JavaUtilMap>)responseHeaders;

+ (NSString *)pathToCookiePathWithNSString:(NSString *)path;

- (void)setCookiePolicyWithJavaNetCookiePolicy:(id<JavaNetCookiePolicy>)cookiePolicy;

- (id<JavaNetCookieStore>)getCookieStore;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetCookieManager)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT NSString *JavaNetCookieManager_pathToCookiePathWithNSString_(NSString *path);

FOUNDATION_EXPORT NSString *JavaNetCookieManager_VERSION_ZERO_HEADER_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetCookieManager, VERSION_ZERO_HEADER_, NSString *)

FOUNDATION_EXPORT NSString *JavaNetCookieManager_VERSION_ONE_HEADER_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetCookieManager, VERSION_ONE_HEADER_, NSString *)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNetCookieManager)

#endif // _JavaNetCookieManager_H_