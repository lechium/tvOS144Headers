//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MCMUserIdentityCacheObserver-Protocol.h"

@class MCMCodeSigningMapping, MCMUserIdentityCache, NSMutableDictionary, NSString;

@interface MCMContainerCache : NSObject <MCMUserIdentityCacheObserver>
{
    NSMutableDictionary *_liveContainerCache;	// 8 = 0x8
    NSMutableDictionary *_transientContainerCache;	// 16 = 0x10
    struct os_unfair_lock_s _cacheLock;	// 24 = 0x18
    MCMUserIdentityCache *_userIdentityCache;	// 32 = 0x20
    MCMCodeSigningMapping *_codeSigningMapping;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x000000010000ef30
- (void).cxx_destruct;	// IMP=0x000000010000e4b0
@property(readonly, nonatomic) MCMCodeSigningMapping *codeSigningMapping; // @synthesize codeSigningMapping=_codeSigningMapping;
@property(readonly, nonatomic) MCMUserIdentityCache *userIdentityCache; // @synthesize userIdentityCache=_userIdentityCache;
- (void)userIdentityCache:(id)arg1 didAddUserIdentity:(id)arg2;	// IMP=0x000000010000e49c
- (void)userIdentityCache:(id)arg1 didInvalidateUserIdentity:(id)arg2;	// IMP=0x000000010000e48c
- (void)_lock_invalidateUserIdentity:(id)arg1;	// IMP=0x000000010000e268
- (void)invalidateUserIdentity:(id)arg1;	// IMP=0x000000010000e1c0
- (void)_lock_flushCacheForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2 transient:(_Bool)arg3;	// IMP=0x000000010000dcc8
- (void)flushCacheForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2 transient:(_Bool)arg3;	// IMP=0x000000010000dc0c
- (_Bool)containerURL:(id)arg1 isValidForContainerClass:(unsigned long long)arg2;	// IMP=0x000000010000daa8
- (_Bool)shouldRegisterSandboxMappingWithUserIdentity:(id)arg1 identifier:(id)arg2 containerClass:(unsigned long long)arg3;	// IMP=0x000000010000d744
- (_Bool)_lock_shouldRegisterSandboxMappingWithUserIdentity:(id)arg1 identifier:(id)arg2 containerClass:(unsigned long long)arg3;	// IMP=0x000000010000d6b8
- (_Bool)setSandboxContainerMappingForUserIdentity:(id)arg1 identifier:(id)arg2 containerClass:(unsigned long long)arg3 url:(id)arg4;	// IMP=0x000000010000d11c
- (_Bool)removeContainerForUserIdentity:(id)arg1 contentClass:(unsigned long long)arg2 identifier:(id)arg3 transient:(_Bool)arg4 error:(id *)arg5;	// IMP=0x000000010000cb2c
- (_Bool)addContainerMetadata:(id)arg1 containerPath:(id)arg2 transient:(_Bool)arg3 updateSandbox:(_Bool)arg4 error:(id *)arg5;	// IMP=0x000000010000c1f8
- (id)allContainersForUserIdentity:(id)arg1 contentClass:(unsigned long long)arg2 transient:(_Bool)arg3 error:(id *)arg4;	// IMP=0x000000010000c1e4
- (id)allContainersForUserIdentity:(id)arg1 contentClass:(unsigned long long)arg2 transient:(_Bool)arg3 populateSandboxCache:(_Bool)arg4 error:(id *)arg5;	// IMP=0x000000010000b650
- (id)containerForContainerIdentity:(id)arg1;	// IMP=0x000000010000b484
- (id)containerForContainerIdentity:(id)arg1 transient:(_Bool)arg2 updateSandbox:(_Bool)arg3 error:(id *)arg4;	// IMP=0x000000010000b470
- (id)containerForContainerIdentity:(id)arg1 transient:(_Bool)arg2 updateSandbox:(_Bool)arg3 allowKernelLookup:(_Bool)arg4 error:(id *)arg5;	// IMP=0x000000010000a9d8
- (id)_lock_metadataFromSandboxForContainerIdentity:(id)arg1;	// IMP=0x000000010000a0d4
- (id)_lock_getCacheForUserIdentity:(id)arg1 contentClass:(unsigned long long)arg2 transient:(_Bool)arg3 cacheKey:(id *)arg4 error:(id *)arg5;	// IMP=0x000000010000a02c
- (id)_lock_getCacheForUserIdentity:(id)arg1 contentClass:(unsigned long long)arg2 transient:(_Bool)arg3 populateSandboxCache:(_Bool)arg4 buildCache:(_Bool)arg5 cacheKey:(id *)arg6 error:(id *)arg7;	// IMP=0x0000000100009424
- (void)_lock_forEachContainerInContainerCache:(id)arg1 performBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000092a4
- (id)_cacheKeyForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2;	// IMP=0x00000001000091cc
- (id)initWithUserIdentityCache:(id)arg1 codeSigningMapping:(id)arg2;	// IMP=0x00000001000090dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

