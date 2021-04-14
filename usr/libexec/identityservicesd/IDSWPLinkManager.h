//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSWPPacketSendingProtocol-Protocol.h"
#import "WPContinuityDelegate-Protocol.h"

@class NSHashTable, NSMutableDictionary, NSMutableSet, NSString;
@protocol IDSWPLinkManagerDelegate, WPContinuity;

@interface IDSWPLinkManager : NSObject <WPContinuityDelegate, IDSWPPacketSendingProtocol>
{
    id <WPContinuity> _continuity;	// 8 = 0x8
    long long _state;	// 16 = 0x10
    NSMutableSet *_advertisingTypes;	// 24 = 0x18
    NSMutableSet *_scanningTypes;	// 32 = 0x20
    NSMutableDictionary *_linkIDToLink;	// 40 = 0x28
    NSMutableDictionary *_linkIDsConnecting;	// 48 = 0x30
    NSMutableDictionary *_linkIDsDisconnecting;	// 56 = 0x38
    NSMutableSet *_linkIDsAlwaysConnected;	// 64 = 0x40
    id <IDSWPLinkManagerDelegate> _delegate;	// 72 = 0x48
    NSHashTable *_connectivityDelegates;	// 80 = 0x50
}

+ (id)sharedInstance;	// IMP=0x00000001001fee08
- (void).cxx_destruct;	// IMP=0x000000010020b484
- (void)sendReset;	// IMP=0x000000010020ae14
- (void)continuity:(id)arg1 didLosePeer:(id)arg2 type:(long long)arg3;	// IMP=0x000000010020ad88
- (void)continuity:(id)arg1 didLosePeer:(id)arg2;	// IMP=0x000000010020ad08
- (void)continuityDidStopTrackingPeer:(id)arg1 peer:(id)arg2 type:(long long)arg3;	// IMP=0x000000010020ac7c
- (void)continuityDidStopTrackingPeer:(id)arg1 peer:(id)arg2;	// IMP=0x000000010020abfc
- (void)continuityDidStartTrackingPeer:(id)arg1 peer:(id)arg2 type:(long long)arg3 error:(id)arg4;	// IMP=0x000000010020ab44
- (void)continuityDidStartTrackingPeer:(id)arg1 peer:(id)arg2 error:(id)arg3;	// IMP=0x000000010020aa98
- (void)continuity:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3;	// IMP=0x000000010020a664
- (void)continuity:(id)arg1 didSendData:(id)arg2 toPeer:(id)arg3 error:(id)arg4;	// IMP=0x000000010020a22c
- (void)continuity:(id)arg1 didDisconnectFromPeer:(id)arg2 error:(id)arg3;	// IMP=0x00000001002096bc
- (void)continuity:(id)arg1 didConnectToPeer:(id)arg2 error:(id)arg3;	// IMP=0x0000000100207fac
- (void)continuity:(id)arg1 didDiscoverPeerWithData:(id)arg2 fromPeer:(id)arg3;	// IMP=0x0000000100207f00
- (void)continuity:(id)arg1 didDiscoverType:(long long)arg2 withData:(id)arg3 fromPeer:(id)arg4;	// IMP=0x0000000100207908
- (void)continuity:(id)arg1 didFailToStartScanningForType:(long long)arg2 WithError:(id)arg3;	// IMP=0x0000000100207530
- (void)continuityDidStopScanningForType:(id)arg1 scanningType:(long long)arg2;	// IMP=0x000000010020719c
- (void)continuityDidStartScanningForType:(id)arg1 scanningType:(long long)arg2;	// IMP=0x0000000100206e08
- (void)continuity:(id)arg1 didFailToStartAdvertisingOfType:(long long)arg2 withError:(id)arg3;	// IMP=0x0000000100206a30
- (void)continuityDidStopAdvertisingOfType:(id)arg1 advertisingType:(long long)arg2 withError:(id)arg3;	// IMP=0x0000000100206658
- (void)continuityDidStopAdvertisingOfType:(id)arg1 advertisingType:(long long)arg2;	// IMP=0x00000001002062c4
- (void)continuityDidStartAdvertisingOfType:(id)arg1 advertisingType:(long long)arg2;	// IMP=0x0000000100205ec4
- (void)continuityDidChangeBluetoothBandwidthState:(id)arg1;	// IMP=0x0000000100205e74
- (void)continuityDidUpdateState:(id)arg1;	// IMP=0x0000000100205998
- (void)_cleanup;	// IMP=0x0000000100205664
- (unsigned long long)sendData:(id)arg1 peerID:(id)arg2;	// IMP=0x0000000100205268
- (void)removeLink:(id)arg1;	// IMP=0x0000000100204ed4
- (void)disconnectFromPeer:(id)arg1;	// IMP=0x00000001002045cc
- (void)connectToPeer:(id)arg1;	// IMP=0x0000000100204484
- (void)connectOnMainQueueToPeer:(id)arg1;	// IMP=0x00000001002037cc
- (void)continuityStopTrackingPeer:(id)arg1 forType:(long long)arg2;	// IMP=0x0000000100203770
- (void)continuityStartTrackingPeer:(id)arg1 forType:(long long)arg2;	// IMP=0x0000000100203714
- (void)stopScanningForType:(long long)arg1;	// IMP=0x000000010020332c
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 boostedScan:(_Bool)arg4 duplicates:(_Bool)arg5;	// IMP=0x0000000100202bf8
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 boostedScan:(_Bool)arg5 duplicates:(_Bool)arg6;	// IMP=0x000000010020238c
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3;	// IMP=0x0000000100201d58
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4;	// IMP=0x0000000100201508
- (void)stopAdvertisingOfType:(long long)arg1;	// IMP=0x0000000100201120
- (void)startAdvertisingOfType:(long long)arg1 withData:(id)arg2 withOptions:(id)arg3;	// IMP=0x0000000100200adc
- (void)clientInstancesRemoved;	// IMP=0x000000010020019c
- (void)clientInstanceCreatedWithMessageContext:(id)arg1;	// IMP=0x00000001001ffca8
- (void)setAlwaysConnectedForCBUUID:(id)arg1;	// IMP=0x00000001001ff9a8
- (void)removeConnectivityDelegate:(id)arg1;	// IMP=0x00000001001ff940
- (void)addConnectivityDelegate:(id)arg1;	// IMP=0x00000001001ff664
- (_Bool)isScanningOrAdvertising;	// IMP=0x00000001001ff5d4
- (void)setDelegate:(id)arg1;	// IMP=0x00000001001ff27c
- (id)init;	// IMP=0x00000001001fefb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
