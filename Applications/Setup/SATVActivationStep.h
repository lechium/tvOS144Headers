//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVSKStep-Protocol.h"

@class NSString;
@protocol TVSKStepDelegate;

@interface SATVActivationStep : NSObject <TVSKStep>
{
    id <TVSKStepDelegate> stepDelegate;	// 8 = 0x8
}

+ (id)stableIdentifier;	// IMP=0x000000010004802c
+ (void)initialize;	// IMP=0x0000000100047fc8
- (void).cxx_destruct;	// IMP=0x0000000100048548
@property(nonatomic) __weak id <TVSKStepDelegate> stepDelegate; // @synthesize stepDelegate;
- (void)_handleActivationResult:(_Bool)arg1 shouldFinishSetup:(_Bool)arg2;	// IMP=0x0000000100048480
- (void)_showActivationContainerViewController;	// IMP=0x000000010004825c
- (void)autoAdvance;	// IMP=0x00000001000481e0
- (id)executeStepForContext:(id)arg1;	// IMP=0x0000000100048038

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
