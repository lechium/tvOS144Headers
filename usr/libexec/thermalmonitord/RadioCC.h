//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ComponentControl.h"

#import "tGraphDataSource-Protocol.h"

@class NSObject;
@protocol OS_dispatch_queue;

@interface RadioCC : ComponentControl <tGraphDataSource>
{
    struct __CFDictionary *radioPowerConfiguration;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *radioQueue;	// 136 = 0x88
    struct __CTServerConnection *serverConnection;	// 144 = 0x90
    struct __CFRunLoop *runLoop;	// 152 = 0x98
    int txPowerLimit;	// 160 = 0xa0
    int radioNotificationToken;	// 164 = 0xa4
    unsigned int maxLoadingIndexPrevious;	// 168 = 0xa8
}

- (struct __CFString *)copyFieldCurrentValueForIndex:(int)arg1;	// IMP=0x0000000100017320
- (struct __CFString *)copyHeaderForIndex:(int)arg1;	// IMP=0x0000000100017268
- (int)numberOfFields;	// IMP=0x00000001000171ec
- (void)setCPMSMitigationState:(_Bool)arg1;	// IMP=0x000000010001719c
- (void)setAdditionalRadioMitigations;	// IMP=0x000000010001715c
- (void)calculateAdditionalRadioMitigations;	// IMP=0x000000010001711c
- (void)addRadioMitigations;	// IMP=0x00000001000170dc
- (void)setMaxTransmitPower;	// IMP=0x0000000100016fd0
- (void)initializeRadio;	// IMP=0x0000000100016f5c
- (void)createConnectionToCT;	// IMP=0x0000000100016f08
- (void)createServerConnection;	// IMP=0x0000000100016ca0
- (void)calculateMitigation;	// IMP=0x0000000100016bf4
- (void)sendRadioNotification;	// IMP=0x0000000100016b58
- (void)defaultCPMSAction;	// IMP=0x0000000100016ac4
- (void)defaultAction;	// IMP=0x0000000100016a3c
- (void)dealloc;	// IMP=0x00000001000169e8
- (id)initWithRunLoopAndParams:(struct __CFRunLoop *)arg1 withMitigationType:(int)arg2 withParams:(struct __CFDictionary *)arg3;	// IMP=0x0000000100016788
- (id)initWithRunLoopAndParams:(struct __CFRunLoop *)arg1 withParams:(struct __CFDictionary *)arg2;	// IMP=0x0000000100016774

@end

