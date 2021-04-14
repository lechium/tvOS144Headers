//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMSBagProtocol-Protocol.h"

@class AMSBag, AMSBagValue, AMSProcessInfo, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface BLServiceBag : NSObject <AMSBagProtocol>
{
    AMSBag *_bag;	// 8 = 0x8
}

+ (id)_keySet;	// IMP=0x00000001000050b4
+ (id)defaultBag;	// IMP=0x0000000100004f3c
- (void).cxx_destruct;	// IMP=0x000000010000511c
- (id)dictionaryForKey:(id)arg1;	// IMP=0x00000001000050a4
- (id)URLForKey:(id)arg1;	// IMP=0x0000000100005094
- (id)stringForKey:(id)arg1;	// IMP=0x0000000100005084
- (id)integerForKey:(id)arg1;	// IMP=0x0000000100005074
- (id)doubleForKey:(id)arg1;	// IMP=0x0000000100005064
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005054
- (id)boolForKey:(id)arg1;	// IMP=0x0000000100005044
- (id)arrayForKey:(id)arg1;	// IMP=0x0000000100005034
@property(readonly, copy, nonatomic) NSString *profileVersion;
@property(readonly, copy, nonatomic) NSString *profile;
@property(readonly, nonatomic) NSDate *expirationDate;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly) AMSBagValue *pushNotificationEnvironment;
- (id)init;	// IMP=0x0000000100004e04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property(readonly) Class superclass;

@end

