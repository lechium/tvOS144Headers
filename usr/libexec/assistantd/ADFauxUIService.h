//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ADService.h"

@class NSObject;
@protocol OS_dispatch_queue;

@interface ADFauxUIService : ADService
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001002129b8
- (void)_unhandledCommand:(id)arg1 forDomain:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100212938
- (void)_appPunchOutHandler:(id)arg1 forDomain:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100212748
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000001002124e4
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x00000001002124dc
- (id)commandsForDomain:(id)arg1;	// IMP=0x000000010021243c
- (id)domains;	// IMP=0x00000001002123c4
- (id)handle;	// IMP=0x00000001002123c0
- (id)init;	// IMP=0x000000010021231c

@end
