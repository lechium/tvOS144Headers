//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVSKExpressTapToSetupItemProviderStep-Protocol.h"

@class NSString;
@protocol TVSKStepDelegate;

@interface SATVSiriDiagnosticsStep : NSObject <TVSKExpressTapToSetupItemProviderStep>
{
    id <TVSKStepDelegate> stepDelegate;	// 8 = 0x8
}

+ (id)expressTapToSetupItemWithTapToSetupDeviceInfo:(id)arg1;	// IMP=0x00000001000772b8
+ (id)stableIdentifier;	// IMP=0x0000000100076d1c
+ (void)initialize;	// IMP=0x0000000100076cb8
- (void).cxx_destruct;	// IMP=0x000000010007777c
@property(nonatomic) __weak id <TVSKStepDelegate> stepDelegate; // @synthesize stepDelegate;
- (void)_reset;	// IMP=0x00000001000776c4
- (void)_completeStepWithSiriDiagnosticsConsent:(_Bool)arg1;	// IMP=0x000000010007764c
- (id)_handleSiriDiagnosticsConsent:(_Bool)arg1;	// IMP=0x00000001000775d8
- (void)_showSiriDiagnosticsViewController:(_Bool)arg1;	// IMP=0x00000001000773a8
- (void)autoAdvance;	// IMP=0x0000000100077240
- (id)executeStepForContext:(id)arg1;	// IMP=0x0000000100076d28

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

