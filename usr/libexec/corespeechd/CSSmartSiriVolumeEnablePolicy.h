//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CSPolicy.h"

@class NSObject;
@protocol OS_dispatch_queue;

@interface CSSmartSiriVolumeEnablePolicy : CSPolicy
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000197dc
- (void)_addSmartSiriVolumeEnabledConditions;	// IMP=0x00000001000196dc
- (void)_subscribeEventMonitors;	// IMP=0x0000000100019688
- (id)init;	// IMP=0x00000001000195f8

@end

