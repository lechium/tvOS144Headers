//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_DASActivityPolicy-Protocol.h"

@class NSArray, NSString, _CDContextualKeyPath;

@interface _DASUserRequestedBackupPolicy : NSObject <_DASActivityPolicy>
{
    NSString *_policyName;	// 8 = 0x8
    NSArray *_triggers;	// 16 = 0x10
    _CDContextualKeyPath *_userRequestedBackup;	// 24 = 0x18
}

+ (id)policyInstance;	// IMP=0x000000010002e050
- (void).cxx_destruct;	// IMP=0x000000010002e4f8
@property(retain, nonatomic) _CDContextualKeyPath *userRequestedBackup; // @synthesize userRequestedBackup=_userRequestedBackup;
@property(retain, nonatomic) NSArray *triggers; // @synthesize triggers=_triggers;
@property(retain, nonatomic) NSString *policyName; // @synthesize policyName=_policyName;
- (id)responseForActivity:(id)arg1 withState:(id)arg2;	// IMP=0x000000010002e20c
- (double)weightForActivity:(id)arg1;	// IMP=0x000000010002e200
- (_Bool)shouldIgnoreTrigger:(id)arg1 withState:(id)arg2;	// IMP=0x000000010002e144
- (_Bool)appliesToActivity:(id)arg1;	// IMP=0x000000010002e0bc
- (id)init;	// IMP=0x000000010002dfa0
- (id)initializeTriggers;	// IMP=0x000000010002de70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

