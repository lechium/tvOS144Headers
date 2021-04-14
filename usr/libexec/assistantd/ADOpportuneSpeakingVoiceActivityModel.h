//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFOpportuneSpeakingModel-Protocol.h"

@class ADOpportuneSpeakingModuleEdgeDetector, ADOpportuneSpeakingStateManager, NSString;
@protocol AFOpportuneSpeakingModelDelegate, OS_dispatch_queue;

@interface ADOpportuneSpeakingVoiceActivityModel : NSObject <AFOpportuneSpeakingModel>
{
    id <AFOpportuneSpeakingModelDelegate> _delegate;	// 8 = 0x8
    ADOpportuneSpeakingModuleEdgeDetector *_detector;	// 16 = 0x10
    ADOpportuneSpeakingStateManager *_stateManager;	// 24 = 0x18
    NSString *_deviceID;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSString *_modelIdentifier;	// 48 = 0x30
    _Bool _boronDeviceFound;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001000f6158
- (void)stop;	// IMP=0x00000001000f6128
- (void)recordFeedbackOfType:(long long)arg1 forSpeakable:(id)arg2;	// IMP=0x00000001000f6078
- (void)setSpeakable:(id)arg1;	// IMP=0x00000001000f4e98
- (void)startWithDelegate:(id)arg1;	// IMP=0x00000001000f4e8c
- (id)_detector;	// IMP=0x00000001000f4e34
- (id)modelIdentifier;	// IMP=0x00000001000f4e2c
- (id)initWithQueue:(id)arg1 stateManager:(id)arg2;	// IMP=0x00000001000f4d44

@end

