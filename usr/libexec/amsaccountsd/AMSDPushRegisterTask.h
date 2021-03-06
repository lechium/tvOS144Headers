//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

@class ACAccount, AMSBag, NSData, NSString;

@interface AMSDPushRegisterTask : AMSTask
{
    ACAccount *_account;	// 8 = 0x8
    AMSBag *_bag;	// 16 = 0x10
    NSString *_environment;	// 24 = 0x18
    NSData *_token;	// 32 = 0x20
}

+ (void)_updateThrottleForAccount:(id)arg1 environment:(id)arg2 throttleTime:(id)arg3;	// IMP=0x0000000100024348
+ (void)_updateThrottleForAccount:(id)arg1 environment:(id)arg2;	// IMP=0x0000000100024290
+ (_Bool)_shouldThrottleForAccount:(id)arg1 environment:(id)arg2 currentTimestamp:(double)arg3;	// IMP=0x0000000100023fb4
+ (_Bool)_shouldThrottleForAccount:(id)arg1 environment:(id)arg2;	// IMP=0x0000000100023f20
+ (id)_sharedTokenLock;	// IMP=0x0000000100023eb4
+ (id)_environmentInfo;	// IMP=0x0000000100023e0c
+ (_Bool)shouldPerformForAccount:(id)arg1 environment:(id)arg2;	// IMP=0x0000000100023828
- (void).cxx_destruct;	// IMP=0x000000010002455c
@property(readonly, nonatomic) NSData *token; // @synthesize token=_token;
@property(readonly, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) AMSBag *bag; // @synthesize bag=_bag;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void)_updateCachedEnvironmentInfo;	// IMP=0x00000001000240ec
- (id)perform;	// IMP=0x0000000100022d80
- (id)initWithAccount:(id)arg1 token:(id)arg2 environment:(id)arg3 bag:(id)arg4;	// IMP=0x0000000100022c64

@end

