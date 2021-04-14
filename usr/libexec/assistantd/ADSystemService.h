//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ADService.h"

@interface ADSystemService : ADService
{
    struct __CFDictionary *_commandMap;	// 8 = 0x8
    struct __CFDictionary *_commandMapV2;	// 16 = 0x10
}

- (void)handleResponse:(id)arg1 toCommand:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010006d808
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010006cce4
- (id)controlCenterLockRestrictedCommands;	// IMP=0x000000010006ccdc
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x000000010006cbec
- (id)commandsForDomain:(id)arg1;	// IMP=0x000000010006cab4
- (id)domains;	// IMP=0x000000010006ca60
- (id)handle;	// IMP=0x000000010006ca5c
- (_Bool)isSystemService;	// IMP=0x000000010006ca54
- (id)_systemDomains;	// IMP=0x000000010006c980
- (void)dealloc;	// IMP=0x000000010006c918
- (id)init;	// IMP=0x000000010006c8b8

@end
