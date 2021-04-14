//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ADService.h"

@class HMClientConnection, NSObject;
@protocol OS_dispatch_queue;

@interface ADHomeKitService : ADService
{
    HMClientConnection *_hmConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_targetQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010023fee8
- (id)_hmConnection;	// IMP=0x000000010023fe88
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010023fb74
- (void)resetExternalResources;	// IMP=0x000000010023fafc
- (void)preheatDomain:(id)arg1;	// IMP=0x000000010023fa78
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x000000010023fa70
- (id)commandsForDomain:(id)arg1;	// IMP=0x000000010023f9d0
- (id)domains;	// IMP=0x000000010023f958
- (id)handle;	// IMP=0x000000010023f954
- (id)init;	// IMP=0x000000010023f8b0

@end

