//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSLock, NSMutableArray, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface GKJoinGroup : NSObject
{
    NSObject<OS_dispatch_queue> *_targetQueue;	// 8 = 0x8
    NSMutableArray *_leftNotifiers;	// 16 = 0x10
    NSMutableArray *_rightNotifiers;	// 24 = 0x18
    NSMutableArray *_leftResults;	// 32 = 0x20
    NSMutableArray *_rightResults;	// 40 = 0x28
    NSObject<OS_dispatch_group> *_dispatchGroup;	// 48 = 0x30
    NSLock *_lock;	// 56 = 0x38
    NSError *_error;	// 64 = 0x40
    NSString *_name;	// 72 = 0x48
}

+ (id)joinGroupWithName:(id)arg1 taregetQueue:(id)arg2;	// IMP=0x000000010009be3c
+ (id)joinGroupForTargetQueue:(id)arg1;	// IMP=0x000000010009be04
+ (id)joinGroupWithName:(id)arg1;	// IMP=0x000000010009bdc8
+ (id)joinGroup;	// IMP=0x000000010009bd98
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSMutableArray *rightResults; // @synthesize rightResults=_rightResults;
@property(retain) NSMutableArray *leftResults; // @synthesize leftResults=_leftResults;
@property(retain, nonatomic) NSMutableArray *rightNotifiers; // @synthesize rightNotifiers=_rightNotifiers;
@property(retain, nonatomic) NSMutableArray *leftNotifiers; // @synthesize leftNotifiers=_leftNotifiers;
@property(retain) NSLock *lock; // @synthesize lock=_lock;
- (void)applyUpdates;	// IMP=0x000000010009c610
- (void)wait;	// IMP=0x000000010009c604
- (void)joinRight:(CDUnknownBlockType)arg1;	// IMP=0x000000010009c570
- (void)joinLeft:(CDUnknownBlockType)arg1;	// IMP=0x000000010009c4dc
- (void)join:(CDUnknownBlockType)arg1;	// IMP=0x000000010009c428
- (void)aggregateJoinRight:(CDUnknownBlockType)arg1;	// IMP=0x000000010009c398
- (void)aggregateJoinLeft:(CDUnknownBlockType)arg1;	// IMP=0x000000010009c308
- (void)aggregateJoin:(CDUnknownBlockType)arg1;	// IMP=0x000000010009c278
- (void)_join:(CDUnknownBlockType)arg1;	// IMP=0x000000010009c1dc
- (void)performRight:(CDUnknownBlockType)arg1;	// IMP=0x000000010009c1c4
- (void)performLeft:(CDUnknownBlockType)arg1;	// IMP=0x000000010009c1ac
- (void)performRightOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000010009c0b8
- (void)performLeftOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000010009bfc4
- (void)dealloc;	// IMP=0x000000010009bf3c
- (id)initWithName:(id)arg1 targetQueue:(id)arg2;	// IMP=0x000000010009be78

@end

