//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVSKStep-Protocol.h"

@class NSString;
@protocol TVSKStepDelegate;

@interface SATVDisplayAssistantStep : NSObject <TVSKStep>
{
    id <TVSKStepDelegate> stepDelegate;	// 8 = 0x8
}

+ (_Bool)_shouldExecute;	// IMP=0x00000001000353c0
+ (id)stableIdentifier;	// IMP=0x0000000100035194
+ (void)initialize;	// IMP=0x0000000100035130
- (void).cxx_destruct;	// IMP=0x0000000100035640
@property(nonatomic) __weak id <TVSKStepDelegate> stepDelegate; // @synthesize stepDelegate;
- (void)_completeStep;	// IMP=0x000000010003559c
- (void)_showDisplayAssistantViewController;	// IMP=0x000000010003545c
- (void)autoAdvance;	// IMP=0x000000010003534c
- (id)executeStepForContext:(id)arg1;	// IMP=0x00000001000351a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
