//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/ProxySelectorImpl.java
//

#ifndef _JavaNetProxySelectorImpl_H_
#define _JavaNetProxySelectorImpl_H_

@class JavaIoIOException;
@class JavaNetProxy;
@class JavaNetProxy_TypeEnum;
@class JavaNetSocketAddress;
@class JavaNetURI;
@protocol JavaUtilList;

#include "J2ObjC_header.h"
#include "java/net/ProxySelector.h"

@interface JavaNetProxySelectorImpl : JavaNetProxySelector {
}

- (void)connectFailedWithJavaNetURI:(JavaNetURI *)uri
           withJavaNetSocketAddress:(JavaNetSocketAddress *)sa
              withJavaIoIOException:(JavaIoIOException *)ioe;

- (id<JavaUtilList>)selectWithJavaNetURI:(JavaNetURI *)uri;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetProxySelectorImpl)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNetProxySelectorImpl)

#endif // _JavaNetProxySelectorImpl_H_