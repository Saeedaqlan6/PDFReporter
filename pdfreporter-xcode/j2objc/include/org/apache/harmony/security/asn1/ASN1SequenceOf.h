//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/asn1/ASN1SequenceOf.java
//

#ifndef _OrgApacheHarmonySecurityAsn1ASN1SequenceOf_H_
#define _OrgApacheHarmonySecurityAsn1ASN1SequenceOf_H_

@class OrgApacheHarmonySecurityAsn1ASN1Type;
@class OrgApacheHarmonySecurityAsn1BerInputStream;
@class OrgApacheHarmonySecurityAsn1BerOutputStream;

#include "J2ObjC_header.h"
#include "org/apache/harmony/security/asn1/ASN1ValueCollection.h"

@interface OrgApacheHarmonySecurityAsn1ASN1SequenceOf : OrgApacheHarmonySecurityAsn1ASN1ValueCollection {
}

- (instancetype)initWithOrgApacheHarmonySecurityAsn1ASN1Type:(OrgApacheHarmonySecurityAsn1ASN1Type *)type;

- (id)decodeWithOrgApacheHarmonySecurityAsn1BerInputStream:(OrgApacheHarmonySecurityAsn1BerInputStream *)inArg;

- (void)encodeContentWithOrgApacheHarmonySecurityAsn1BerOutputStream:(OrgApacheHarmonySecurityAsn1BerOutputStream *)outArg;

- (void)setEncodingContentWithOrgApacheHarmonySecurityAsn1BerOutputStream:(OrgApacheHarmonySecurityAsn1BerOutputStream *)outArg;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonySecurityAsn1ASN1SequenceOf)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityAsn1ASN1SequenceOf)

#endif // _OrgApacheHarmonySecurityAsn1ASN1SequenceOf_H_
