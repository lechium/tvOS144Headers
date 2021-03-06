//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MCMUserIdentityCacheObserver-Protocol.h"

@class NSMutableDictionary, NSString;

@interface MCMContainerClassPathCache : NSObject <MCMUserIdentityCacheObserver>
{
    NSMutableDictionary *_lookup;	// 8 = 0x8
    struct os_unfair_lock_s _lookupLock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100051cc0
- (void)_lock_flush;	// IMP=0x0000000100051c70
- (id)_lock_containerClassPathForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2 typeClass:(Class)arg3;	// IMP=0x0000000100051928
- (void)userIdentityCache:(id)arg1 didAddUserIdentity:(id)arg2;	// IMP=0x0000000100051924
- (void)userIdentityCache:(id)arg1 didInvalidateUserIdentity:(id)arg2;	// IMP=0x0000000100051918
- (id)containerClassPathWithURL:(id)arg1 reference:(id)arg2;	// IMP=0x000000010005176c
- (id)referenceForPOSIXUser:(id)arg1;	// IMP=0x0000000100051248
- (void)flush;	// IMP=0x000000010005120c
- (id)containerClassPathForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2 typeClass:(Class)arg3;	// IMP=0x0000000100051184
- (id)containerClassPathForContainerIdentity:(id)arg1 typeClass:(Class)arg2;	// IMP=0x00000001000510dc
- (id)init;	// IMP=0x0000000100051028

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

