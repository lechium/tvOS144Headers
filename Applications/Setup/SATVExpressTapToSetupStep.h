//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVSKStep-Protocol.h"

@class NSString;
@protocol TVSKStepDelegate;

@interface SATVExpressTapToSetupStep : NSObject <TVSKStep>
{
    id <TVSKStepDelegate> stepDelegate;	// 8 = 0x8
}

+ (id)stableIdentifier;	// IMP=0x0000000100073bc8
- (void).cxx_destruct;	// IMP=0x00000001000744d0
@property(nonatomic) __weak id <TVSKStepDelegate> stepDelegate; // @synthesize stepDelegate;
- (void)_notifyDeviceActivationTriggerStatusChangeWithReset:(_Bool)arg1 didConsentToExpressSetup:(_Bool)arg2;	// IMP=0x0000000100074338
- (void)_handleExpressSetupConsent:(_Bool)arg1 itemTypes:(unsigned long long)arg2;	// IMP=0x0000000100074288
- (void)_showExpressSetupViewControllerWithDataSource:(id)arg1;	// IMP=0x0000000100074014
- (void)autoAdvance;	// IMP=0x0000000100073f8c
- (id)executeStepForContext:(id)arg1;	// IMP=0x0000000100073bd4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
