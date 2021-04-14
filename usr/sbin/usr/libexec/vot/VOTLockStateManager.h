//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSLock;

@interface VOTLockStateManager : NSObject
{
    NSHashTable *_lockStateObservers;	// 8 = 0x8
    NSLock *_lockStateObserversLock;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000100012fb4
- (void).cxx_destruct;	// IMP=0x0000000100013428
- (void)_notifyObserversLockStateDidChange;	// IMP=0x00000001000132b0
- (void)removeObserver:(id)arg1;	// IMP=0x0000000100013238
- (void)addObserver:(id)arg1;	// IMP=0x00000001000131c0
@property(readonly, nonatomic) _Bool isLocked;
- (void)dealloc;	// IMP=0x0000000100013154
- (id)init;	// IMP=0x0000000100013058

@end

