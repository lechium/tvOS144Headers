//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVSKExpressTapToSetupItemProviderStep-Protocol.h"

@class NSString;
@protocol TVSKStepDelegate;

@interface SATVLocationServicesStep : NSObject <TVSKExpressTapToSetupItemProviderStep>
{
    id <TVSKStepDelegate> stepDelegate;	// 8 = 0x8
}

+ (int)_authorizationForIdentifier:(id)arg1 locationServicesAuthorizationInfo:(id)arg2;	// IMP=0x0000000100015678
+ (int)_defaultAuthorizationForIdentifier:(id)arg1;	// IMP=0x00000001000155a8
+ (id)expressTapToSetupItemWithTapToSetupDeviceInfo:(id)arg1;	// IMP=0x0000000100014d04
+ (id)stableIdentifier;	// IMP=0x0000000100014924
+ (void)initialize;	// IMP=0x00000001000148c0
- (void).cxx_destruct;	// IMP=0x0000000100015790
@property(nonatomic) __weak id <TVSKStepDelegate> stepDelegate; // @synthesize stepDelegate;
- (void)_reset;	// IMP=0x0000000100015378
- (void)_enableLocationServices:(_Bool)arg1 locationServicesAuthorizationInfo:(id)arg2;	// IMP=0x0000000100015128
- (void)_completeStepWithEnableLocationServices:(_Bool)arg1 locationServicesAuthorizationInfo:(id)arg2;	// IMP=0x00000001000150b0
- (id)_handleEnableLocationServices:(_Bool)arg1 locationServicesAuthorizationInfo:(id)arg2;	// IMP=0x0000000100015068
- (void)_showLocationServicesViewController;	// IMP=0x0000000100014e50
- (void)_enableLocationServicesByDefault;	// IMP=0x0000000100014e3c
- (void)autoAdvance;	// IMP=0x0000000100014c88
- (id)executeStepForContext:(id)arg1;	// IMP=0x0000000100014930

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

