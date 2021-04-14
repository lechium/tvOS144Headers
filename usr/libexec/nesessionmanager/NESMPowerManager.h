//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NESMPowerManagerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface NESMPowerManager : NSObject
{
    unsigned int _powerConnection;	// 8 = 0x8
    unsigned int _powerNotifier;	// 12 = 0xc
    long long _powerState;	// 16 = 0x10
    id <NESMPowerManagerDelegate> _delegate;	// 24 = 0x18
    CDUnknownBlockType _sleepCompletionHandler;	// 32 = 0x20
    long long _sleepDate;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_sleepTimer;	// 56 = 0x38
    struct IONotificationPort *_powerPort;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000001000886a0
@property unsigned int powerNotifier; // @synthesize powerNotifier=_powerNotifier;
@property struct IONotificationPort *powerPort; // @synthesize powerPort=_powerPort;
@property unsigned int powerConnection; // @synthesize powerConnection=_powerConnection;
@property(retain) NSObject<OS_dispatch_source> *sleepTimer; // @synthesize sleepTimer=_sleepTimer;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property long long sleepDate; // @synthesize sleepDate=_sleepDate;
@property(copy) CDUnknownBlockType sleepCompletionHandler; // @synthesize sleepCompletionHandler=_sleepCompletionHandler;
@property(readonly) __weak id <NESMPowerManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) long long powerState; // @synthesize powerState=_powerState;
- (void)setPowerState:(long long)arg1;	// IMP=0x000000010008832c
- (void)stop;	// IMP=0x00000001000882a4
- (_Bool)start;	// IMP=0x0000000100088044
- (void)setReadyToSleep;	// IMP=0x0000000100087e50
- (_Bool)sleepPending;	// IMP=0x0000000100087e14
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x0000000100087d6c

@end

