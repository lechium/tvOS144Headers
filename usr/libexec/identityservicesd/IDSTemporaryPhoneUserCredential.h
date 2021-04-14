//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSUserCredential-Protocol.h"

@class IDSAuthenticationCertificate, NSData, NSString;

@interface IDSTemporaryPhoneUserCredential : NSObject <IDSUserCredential>
{
    IDSAuthenticationCertificate *_phoneAuthenticationCertificate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001005baba8
@property(readonly, nonatomic) IDSAuthenticationCertificate *phoneAuthenticationCertificate; // @synthesize phoneAuthenticationCertificate=_phoneAuthenticationCertificate;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *dataRepresentation;
- (id)initWithDataRepresentation:(id)arg1;	// IMP=0x00000001005ba92c
- (long long)realm;	// IMP=0x00000001005ba914
- (id)initWithPhoneAuthenticationCertificate:(id)arg1;	// IMP=0x00000001005ba734

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

