//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, AMSProcessInfo, NSNumber, NSString;

@interface IAPInfoUpdateRequestContext : NSObject
{
    ACAccount *_account;	// 8 = 0x8
    AMSProcessInfo *_clientInfo;	// 16 = 0x10
    NSString *_logUUID;	// 24 = 0x18
    NSNumber *_revision;	// 32 = 0x20
}

+ (id)newContextWithRevision:(id)arg1 forAccount:(id)arg2 token:(id)arg3;	// IMP=0x000000010010ddb4
- (void).cxx_destruct;	// IMP=0x000000010010dfcc
@property(readonly) NSNumber *revision; // @synthesize revision=_revision;
@property(readonly) NSString *logUUID; // @synthesize logUUID=_logUUID;
@property(readonly) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly) ACAccount *account; // @synthesize account=_account;
- (id)_initWithRevision:(id)arg1 forAccount:(id)arg2 client:(id)arg3 logUUID:(id)arg4;	// IMP=0x000000010010dea0

@end

