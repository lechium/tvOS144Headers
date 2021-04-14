//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ADService.h"

@protocol ADCommandCenterRequestDelegate, ADUIServiceDelegate;

@interface ADUIService : ADService
{
    id <ADCommandCenterRequestDelegate> _requestDelegate;	// 8 = 0x8
    id <ADUIServiceDelegate> _delegate;	// 16 = 0x10
}

+ (id)serviceIdentifierForRequestDelegate:(id)arg1;	// IMP=0x00000001001e2d50
- (void).cxx_destruct;	// IMP=0x00000001001e37f0
- (void)setDelegate:(id)arg1;	// IMP=0x00000001001e37dc
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000001001e3340
- (id)controlCenterLockRestrictedCommands;	// IMP=0x00000001001e3338
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x00000001001e3330
- (id)commandsForDomain:(id)arg1;	// IMP=0x00000001001e2f6c
- (id)domains;	// IMP=0x00000001001e2e84
- (id)handle;	// IMP=0x00000001001e2e74
- (id)initWithRequestDelegate:(id)arg1;	// IMP=0x00000001001e2db4

@end

