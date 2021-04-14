//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSAuthenticationCertificate;
@protocol IDSUser;

@interface IDSPhoneUserAuthenticationCertificate : NSObject
{
    id <IDSUser> _phoneUser;	// 8 = 0x8
    IDSAuthenticationCertificate *_authenticationCertificate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001005faf00
@property(readonly, nonatomic) IDSAuthenticationCertificate *authenticationCertificate; // @synthesize authenticationCertificate=_authenticationCertificate;
@property(readonly, nonatomic) id <IDSUser> phoneUser; // @synthesize phoneUser=_phoneUser;
- (id)description;	// IMP=0x00000001005fadd0
- (id)initWithPhoneUser:(id)arg1 authenticationCertificate:(id)arg2;	// IMP=0x00000001005facb4

@end

