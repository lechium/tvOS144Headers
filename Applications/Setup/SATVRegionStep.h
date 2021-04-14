//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVSKStep-Protocol.h"

@class NSString, SATVRegionViewController;
@protocol TVSKStepDelegate;

@interface SATVRegionStep : NSObject <TVSKStep>
{
    id <TVSKStepDelegate> stepDelegate;	// 8 = 0x8
    SATVRegionViewController *_regionViewController;	// 16 = 0x10
}

+ (id)stableIdentifier;	// IMP=0x000000010006c628
+ (void)initialize;	// IMP=0x000000010006c5c4
- (void).cxx_destruct;	// IMP=0x000000010006cfa8
@property(retain, nonatomic) SATVRegionViewController *regionViewController; // @synthesize regionViewController=_regionViewController;
@property(nonatomic) __weak id <TVSKStepDelegate> stepDelegate; // @synthesize stepDelegate;
- (_Bool)_isRegionConfigured;	// IMP=0x000000010006ce68
- (void)_handleRegionSelection:(id)arg1;	// IMP=0x000000010006cd1c
- (void)_showRegionViewController;	// IMP=0x000000010006cae0
- (void)_resetRegionIfRequiredForContext:(id)arg1;	// IMP=0x000000010006ca34
- (void)autoAdvance;	// IMP=0x000000010006c9a0
- (id)executeStepForContext:(id)arg1;	// IMP=0x000000010006c634

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

