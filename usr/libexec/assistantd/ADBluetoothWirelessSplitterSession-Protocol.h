//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol ADBluetoothWirelessSplitterSessionObserving;

@protocol ADBluetoothWirelessSplitterSession <NSObject>
- (void)removeObserver:(id <ADBluetoothWirelessSplitterSessionObserving>)arg1;
- (void)addObserver:(id <ADBluetoothWirelessSplitterSessionObserving>)arg1;
- (void)getSessionInfo:(void (^)(AFBluetoothWirelessSplitterSessionInfo *))arg1;
@end

