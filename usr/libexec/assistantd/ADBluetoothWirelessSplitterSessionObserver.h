//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADBluetoothWirelessSplitterSessionObserving-Protocol.h"

@class AFNotifyStatePublisher, NSString;
@protocol ADBluetoothWirelessSplitterSession, OS_dispatch_queue;

@interface ADBluetoothWirelessSplitterSessionObserver : NSObject <ADBluetoothWirelessSplitterSessionObserving>
{
    id <ADBluetoothWirelessSplitterSession> _wirelessSplitterSession;	// 8 = 0x8
    unsigned long long _observerCount;	// 16 = 0x10
    AFNotifyStatePublisher *_publisher;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

+ (id)sharedWirelessSplitterSessionObserver;	// IMP=0x000000010029cf28
- (void).cxx_destruct;	// IMP=0x000000010029d380
- (void)bluetoothWirelessSplitterSessionDidInvalidate:(id)arg1;	// IMP=0x000000010029d310
- (void)bluetoothWirelessSplitterSession:(id)arg1 sessionInfoDidChangeFrom:(id)arg2 to:(id)arg3;	// IMP=0x000000010029d238
- (void)_invalidate;	// IMP=0x000000010029d200
- (void)stopObserving;	// IMP=0x000000010029d174
- (void)startObserving;	// IMP=0x000000010029d07c
- (id)_init;	// IMP=0x000000010029cfa0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

