//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASDUpdatesServiceProtocol-Protocol.h"

@protocol OS_dispatch_queue, UpdatesControllerInterface;

@interface UpdatesService : NSObject <ASDUpdatesServiceProtocol>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    id <UpdatesControllerInterface> _updatesInterface;	// 16 = 0x10
}

+ (id)defaultService;	// IMP=0x000000010018ff0c
- (void).cxx_destruct;	// IMP=0x0000000100191f24
@property(retain) id <UpdatesControllerInterface> updatesInterface; // @synthesize updatesInterface=_updatesInterface;
@property(retain) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)reloadFromServerInBackgroundWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100191b18
- (void)updateAllWithOrder:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100191710
- (void)setAutoUpdateEnabled:(_Bool)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100191434
- (void)reloadManagedUpdatesWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001910a4
- (void)reloadFromServerWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100190ce4
- (void)refreshUpdateCountWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100190938
- (void)getUpdatesWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001905c4
- (void)getManagedUpdatesWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100190234
- (void)compatibilityUpdateForBundleIDs:(id)arg1 userInitiated:(_Bool)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100190134
- (void)autoUpdateEnabled:(CDUnknownBlockType)arg1;	// IMP=0x000000010019002c
- (id)init;	// IMP=0x000000010018ff78

@end

