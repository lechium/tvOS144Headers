//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet;
@protocol OS_dispatch_queue;

@interface MIKeychainAccessGroupTracker : NSObject
{
    NSCountedSet *_refs;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_q;	// 16 = 0x10
}

+ (id)sharedTracker;	// IMP=0x00000001000153ac
- (void).cxx_destruct;	// IMP=0x000000010001726c
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *q; // @synthesize q=_q;
@property(retain, nonatomic) NSCountedSet *refs; // @synthesize refs=_refs;
- (id)_keychainAccessGroupsForApp:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100016d08
- (id)_keychainAccessGroupsForBundle:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100016ae0
- (_Bool)_removeGroupsWithError:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000169d0
- (_Bool)removeReferencesForBundle:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000169c8
- (_Bool)_onQueue_removeReferencesForBundle:(id)arg1 error:(id *)arg2;	// IMP=0x000000010001660c
- (_Bool)updateReferencesWithOldBundle:(id)arg1 newBundle:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100016604
- (_Bool)_onQueue_updateReferencesWithOldBundle:(id)arg1 newBundle:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100015fec
- (_Bool)addReferencesForBundle:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100015fe4
- (_Bool)_onQueue_addReferencesForBundle:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100015d58
- (void)invalidateCache;	// IMP=0x0000000100015d54
- (void)reconcile;	// IMP=0x0000000100015d50
- (void)_onQueue_discoverReferences;	// IMP=0x000000010001552c
- (id)init;	// IMP=0x000000010001544c

@end
