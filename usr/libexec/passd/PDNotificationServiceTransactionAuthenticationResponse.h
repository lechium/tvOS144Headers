//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, PKTransactionAuthenticationContext;

@interface PDNotificationServiceTransactionAuthenticationResponse : NSObject
{
    long long _updatedTransactionStatus;	// 8 = 0x8
    PKTransactionAuthenticationContext *_updatedAuthenticationContext;	// 16 = 0x10
    long long _authenticationFailure;	// 24 = 0x18
    NSData *_signingCertificate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100192044
@property(copy, nonatomic) NSData *signingCertificate; // @synthesize signingCertificate=_signingCertificate;
@property(nonatomic) long long authenticationFailure; // @synthesize authenticationFailure=_authenticationFailure;
@property(retain, nonatomic) PKTransactionAuthenticationContext *updatedAuthenticationContext; // @synthesize updatedAuthenticationContext=_updatedAuthenticationContext;
@property(nonatomic) long long updatedTransactionStatus; // @synthesize updatedTransactionStatus=_updatedTransactionStatus;
- (id)description;	// IMP=0x0000000100191f4c
- (id)initWithData:(id)arg1;	// IMP=0x0000000100191c20

@end

