//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVSKStep-Protocol.h"
#import "TVSKStepDelegate-Protocol.h"

@class NSString;
@protocol TVSKStep, TVSKStepDelegate;

@interface SATVBundleStep : NSObject <TVSKStepDelegate, TVSKStep>
{
    id <TVSKStepDelegate> stepDelegate;	// 8 = 0x8
    id <TVSKStep> _bundleStep;	// 16 = 0x10
}

+ (id)_stepBundle;	// IMP=0x0000000100061128
+ (Class)_stepClass;	// IMP=0x0000000100060fec
+ (id)stableIdentifier;	// IMP=0x0000000100060c28
+ (id)bundlePath;	// IMP=0x0000000100060c00
- (void).cxx_destruct;	// IMP=0x00000001000612b8
@property(readonly, nonatomic) id <TVSKStep> bundleStep; // @synthesize bundleStep=_bundleStep;
@property(nonatomic) __weak id <TVSKStepDelegate> stepDelegate; // @synthesize stepDelegate;
- (void)step:(id)arg1 triggerStatusDidChangeForTriggers:(id)arg2 context:(id)arg3;	// IMP=0x0000000100060f60
- (void)step:(id)arg1 displayViewController:(id)arg2;	// IMP=0x0000000100060ef0
- (void)didCancelStep:(id)arg1;	// IMP=0x0000000100060ea8
- (void)step:(id)arg1 didCompleteWithResult:(id)arg2;	// IMP=0x0000000100060e38
- (void)autoAdvance;	// IMP=0x0000000100060df8
- (id)executeStepForContext:(id)arg1;	// IMP=0x0000000100060d2c
- (id)init;	// IMP=0x0000000100060ad0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

