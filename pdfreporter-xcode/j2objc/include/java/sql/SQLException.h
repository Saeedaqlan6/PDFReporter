//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/SQLException.java
//

#ifndef _JavaSqlSQLException_H_
#define _JavaSqlSQLException_H_

@class JavaLangThrowable;

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "java/lang/Exception.h"
#include "java/lang/Iterable.h"
#include "java/util/Iterator.h"

#define JavaSqlSQLException_serialVersionUID 2135244094396331484LL

@interface JavaSqlSQLException : JavaLangException < JavaIoSerializable, JavaLangIterable > {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)theReason;

- (instancetype)initWithNSString:(NSString *)theReason
                    withNSString:(NSString *)theSQLState;

- (instancetype)initWithNSString:(NSString *)theReason
                    withNSString:(NSString *)theSQLState
                         withInt:(jint)theErrorCode;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)theCause;

- (instancetype)initWithNSString:(NSString *)theReason
           withJavaLangThrowable:(JavaLangThrowable *)theCause;

- (instancetype)initWithNSString:(NSString *)theReason
                    withNSString:(NSString *)theSQLState
           withJavaLangThrowable:(JavaLangThrowable *)theCause;

- (instancetype)initWithNSString:(NSString *)theReason
                    withNSString:(NSString *)theSQLState
                         withInt:(jint)theErrorCode
           withJavaLangThrowable:(JavaLangThrowable *)theCause;

- (jint)getErrorCode;

- (JavaSqlSQLException *)getNextException;

- (NSString *)getSQLState;

- (void)setNextExceptionWithJavaSqlSQLException:(JavaSqlSQLException *)ex;

- (id<JavaUtilIterator>)iterator;


@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlSQLException)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaSqlSQLException, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlSQLException)

@interface JavaSqlSQLException_InternalIterator : NSObject < JavaUtilIterator > {
}

- (instancetype)initWithJavaSqlSQLException:(JavaSqlSQLException *)e;

- (jboolean)hasNext;

- (JavaLangThrowable *)next;

- (void)remove;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlSQLException_InternalIterator)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlSQLException_InternalIterator)

#endif // _JavaSqlSQLException_H_
