//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKUpdateGroup, NSError, NSLock, NSMutableArray;

@interface GKUpdateGroupNotifier : NSObject
{
    GKUpdateGroup *_group;	// 8 = 0x8
    NSLock *_lock;	// 16 = 0x10
    NSMutableArray *_updateQueue;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100135fc0
@property(nonatomic) __weak GKUpdateGroup *group; // @synthesize group=_group;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSMutableArray *updateQueue; // @synthesize updateQueue=_updateQueue;
@property(retain) NSLock *lock; // @synthesize lock=_lock;
- (void)addUpdatesFromGroup:(id)arg1;	// IMP=0x0000000100135e70
- (void)addUpdate:(CDUnknownBlockType)arg1 error:(id)arg2;	// IMP=0x0000000100135ce4
- (void)updateError:(id)arg1;	// IMP=0x0000000100135c60
- (oneway void)release;	// IMP=0x0000000100135bb0
- (id)retain;	// IMP=0x0000000100135b14
- (void)dealloc;	// IMP=0x0000000100135ab0
- (id)init;	// IMP=0x0000000100135a48

@end

