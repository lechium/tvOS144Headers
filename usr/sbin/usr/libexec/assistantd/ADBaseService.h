//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ADService.h"

@class NSDictionary;

@interface ADBaseService : ADService
{
    NSDictionary *_commandRegistry;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010020bd20
- (void)_registerCommandHandlersWithRegistry:(id)arg1;	// IMP=0x000000010020bd1c
- (void)_unhandledCommand:(id)arg1 forDomain:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010020bc9c
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010020bbb4
- (id)commandsForDomain:(id)arg1;	// IMP=0x000000010020bb54
- (id)domains;	// IMP=0x000000010020bb3c
- (id)handle;	// IMP=0x000000010020bb38
- (SEL)_selectorForCommandClass:(id)arg1 andDomain:(id)arg2;	// IMP=0x000000010020ba74
- (void)_registerCommandClass:(id)arg1 forDomain:(id)arg2 withSelector:(SEL)arg3 forRegistry:(id)arg4;	// IMP=0x000000010020b950
- (id)init;	// IMP=0x000000010020b880

@end
