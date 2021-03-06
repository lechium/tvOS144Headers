//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PIDMapTable;

@interface CoordinatorStore : NSObject
{
    PIDMapTable *_map;	// 8 = 0x8
    NSMutableDictionary *_uniqueIDToAgent;	// 16 = 0x10
}

+ (id)defaultStore;	// IMP=0x00000001002e0a30
- (void).cxx_destruct;	// IMP=0x00000001002e1c7c
- (void)_removeCoordinatorForJobID:(long long)arg1;	// IMP=0x00000001002e197c
- (id)_agentForCoordinator:(id)arg1;	// IMP=0x00000001002e18c0
- (void)coordinator:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3;	// IMP=0x00000001002e15d8
- (void)coordinatorDidCompleteSuccessfully:(id)arg1;	// IMP=0x00000001002e13ac
- (id)coordinatorForJobID:(long long)arg1;	// IMP=0x00000001002e1338
- (_Bool)cancelCoordinatorForJobID:(long long)arg1 bundleID:(id)arg2 withReason:(id)arg3;	// IMP=0x00000001002e0b2c
- (id)init;	// IMP=0x00000001002e0a9c

@end

