//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKDispatchGroup.h"

@class GKClientProxy, GKResourceManager, NSManagedObjectContext;

@interface GKCacheTransactionGroup : GKDispatchGroup
{
    NSManagedObjectContext *_context;	// 64 = 0x40
    GKClientProxy *_client;	// 72 = 0x48
    GKResourceManager *_resourceManager;	// 80 = 0x50
}

+ (id)transactionGroupWithContext:(id)arg1 resourceManager:(id)arg2 client:(id)arg3;	// IMP=0x00000001000fe688
+ (id)dispatchGroupWithName:(id)arg1;	// IMP=0x00000001000fe55c
+ (id)dispatchGroup;	// IMP=0x00000001000fe430
- (void).cxx_destruct;	// IMP=0x00000001000ffcf4
@property(nonatomic) __weak GKResourceManager *resourceManager; // @synthesize resourceManager=_resourceManager;
@property(retain, nonatomic) GKClientProxy *client; // @synthesize client=_client;
@property(retain, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void)performOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ffafc
- (void)readResources:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000001000ff980
- (void)writeResources:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000001000ff914
- (void)performAndJoinForResources:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000001000ff658
- (void)performOnManagedObjectContext:(CDUnknownBlockType)arg1;	// IMP=0x00000001000ff2f4
- (void)dealloc;	// IMP=0x00000001000fef5c
- (id)initWithName:(id)arg1 context:(id)arg2 resourceManager:(id)arg3 client:(id)arg4;	// IMP=0x00000001000fec1c
- (id)initWithName:(id)arg1;	// IMP=0x00000001000feae4
- (id)transactionGroup;	// IMP=0x00000001000fe98c

@end

