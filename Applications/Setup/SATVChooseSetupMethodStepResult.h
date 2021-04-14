//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVSKStepResult-Protocol.h"

@class NSDictionary, NSString, TVCSTapToSetupDeviceInfo;

@interface SATVChooseSetupMethodStepResult : NSObject <TVSKStepResult>
{
    _Bool _wasSkippedDueToManagedConfiguration;	// 8 = 0x8
    NSDictionary *_metricsPayload;	// 16 = 0x10
    TVCSTapToSetupDeviceInfo *_tapToSetupDeviceInfo;	// 24 = 0x18
}

+ (id)new;	// IMP=0x000000010000b818
- (void).cxx_destruct;	// IMP=0x000000010000bb48
@property(readonly, nonatomic) TVCSTapToSetupDeviceInfo *tapToSetupDeviceInfo; // @synthesize tapToSetupDeviceInfo=_tapToSetupDeviceInfo;
@property(readonly, nonatomic) _Bool wasSkippedDueToManagedConfiguration; // @synthesize wasSkippedDueToManagedConfiguration=_wasSkippedDueToManagedConfiguration;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDictionary *metricsPayload; // @synthesize metricsPayload=_metricsPayload;
@property(readonly, nonatomic) unsigned long long flowOptions;
@property(readonly, nonatomic) _Bool didExecutionSucceed;
- (id)initWithTapToSetupDeviceInfo:(id)arg1;	// IMP=0x000000010000b874
- (id)init;	// IMP=0x000000010000b83c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

