//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/reflect/Modifier.java
//

#ifndef _JavaLangReflectModifier_H_
#define _JavaLangReflectModifier_H_

#include "J2ObjC_header.h"

#define JavaLangReflectModifier_ABSTRACT 1024
#define JavaLangReflectModifier_ANNOTATION 8192
#define JavaLangReflectModifier_BRIDGE 64
#define JavaLangReflectModifier_ENUM 16384
#define JavaLangReflectModifier_FINAL 16
#define JavaLangReflectModifier_INTERFACE 512
#define JavaLangReflectModifier_NATIVE 256
#define JavaLangReflectModifier_PRIVATE 2
#define JavaLangReflectModifier_PROTECTED 4
#define JavaLangReflectModifier_PUBLIC 1
#define JavaLangReflectModifier_STATIC 8
#define JavaLangReflectModifier_STRICT 2048
#define JavaLangReflectModifier_SYNCHRONIZED 32
#define JavaLangReflectModifier_SYNTHETIC 4096
#define JavaLangReflectModifier_TRANSIENT 128
#define JavaLangReflectModifier_VARARGS 128
#define JavaLangReflectModifier_VOLATILE 64

@interface JavaLangReflectModifier : NSObject {
}

- (instancetype)init;

+ (jint)classModifiers;

+ (jint)constructorModifiers;

+ (jint)fieldModifiers;

+ (jint)interfaceModifiers;

+ (jint)methodModifiers;

+ (jboolean)isAbstractWithInt:(jint)modifiers;

+ (jboolean)isFinalWithInt:(jint)modifiers;

+ (jboolean)isInterfaceWithInt:(jint)modifiers;

+ (jboolean)isNativeWithInt:(jint)modifiers;

+ (jboolean)isPrivateWithInt:(jint)modifiers;

+ (jboolean)isProtectedWithInt:(jint)modifiers;

+ (jboolean)isPublicWithInt:(jint)modifiers;

+ (jboolean)isStaticWithInt:(jint)modifiers;

+ (jboolean)isStrictWithInt:(jint)modifiers;

+ (jboolean)isSynchronizedWithInt:(jint)modifiers;

+ (jboolean)isTransientWithInt:(jint)modifiers;

+ (jboolean)isVolatileWithInt:(jint)modifiers;

+ (NSString *)toStringWithInt:(jint)modifiers;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangReflectModifier)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT jint JavaLangReflectModifier_classModifiers();

FOUNDATION_EXPORT jint JavaLangReflectModifier_constructorModifiers();

FOUNDATION_EXPORT jint JavaLangReflectModifier_fieldModifiers();

FOUNDATION_EXPORT jint JavaLangReflectModifier_interfaceModifiers();

FOUNDATION_EXPORT jint JavaLangReflectModifier_methodModifiers();

FOUNDATION_EXPORT jboolean JavaLangReflectModifier_isAbstractWithInt_(jint modifiers);

FOUNDATION_EXPORT jboolean JavaLangReflectModifier_isFinalWithInt_(jint modifiers);

FOUNDATION_EXPORT jboolean JavaLangReflectModifier_isInterfaceWithInt_(jint modifiers);

FOUNDATION_EXPORT jboolean JavaLangReflectModifier_isNativeWithInt_(jint modifiers);

FOUNDATION_EXPORT jboolean JavaLangReflectModifier_isPrivateWithInt_(jint modifiers);

FOUNDATION_EXPORT jboolean JavaLangReflectModifier_isProtectedWithInt_(jint modifiers);

FOUNDATION_EXPORT jboolean JavaLangReflectModifier_isPublicWithInt_(jint modifiers);

FOUNDATION_EXPORT jboolean JavaLangReflectModifier_isStaticWithInt_(jint modifiers);

FOUNDATION_EXPORT jboolean JavaLangReflectModifier_isStrictWithInt_(jint modifiers);

FOUNDATION_EXPORT jboolean JavaLangReflectModifier_isSynchronizedWithInt_(jint modifiers);

FOUNDATION_EXPORT jboolean JavaLangReflectModifier_isTransientWithInt_(jint modifiers);

FOUNDATION_EXPORT jboolean JavaLangReflectModifier_isVolatileWithInt_(jint modifiers);

FOUNDATION_EXPORT NSString *JavaLangReflectModifier_toStringWithInt_(jint modifiers);

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectModifier, PUBLIC, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectModifier, PRIVATE, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectModifier, PROTECTED, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectModifier, STATIC, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectModifier, FINAL, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectModifier, SYNCHRONIZED, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectModifier, VOLATILE, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectModifier, TRANSIENT, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectModifier, NATIVE, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectModifier, INTERFACE, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectModifier, ABSTRACT, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectModifier, STRICT, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectModifier, BRIDGE, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectModifier, VARARGS, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectModifier, SYNTHETIC, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectModifier, ANNOTATION, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectModifier, ENUM, jint)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaLangReflectModifier)

#endif // _JavaLangReflectModifier_H_
