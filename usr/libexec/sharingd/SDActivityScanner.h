//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDActivityController.h"

#import "IDSContinuityDelegate-Protocol.h"
#import "SFContinuityScannerProtocol-Protocol.h"

@class IDSContinuity, NSMutableDictionary, NSObject, NSString, SDStatusMonitor;
@protocol OS_dispatch_source, OS_os_transaction;

__attribute__((visibility("hidden")))
@interface SDActivityScanner : SDActivityController <IDSContinuityDelegate, SFContinuityScannerProtocol>
{
    unsigned long long _stateHandle;	// 8 = 0x8
    unsigned char _versionByte;	// 16 = 0x10
    SDStatusMonitor *_monitor;	// 24 = 0x18
    IDSContinuity *_continuity;	// 32 = 0x20
    unsigned long long _scanTypes;	// 40 = 0x28
    _Bool _scannerEnabled;	// 48 = 0x30
    _Bool _isScanning;	// 49 = 0x31
    NSObject<OS_os_transaction> *_scanningTransaction;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_stopScanLostDeviceTimer;	// 64 = 0x40
    NSMutableDictionary *_deviceIdentifierToDeviceRecord;	// 72 = 0x48
    NSMutableDictionary *_deviceIdentifierToLostDeviceTimers;	// 80 = 0x50
}

+ (id)sharedScanner;	// IMP=0x000000010016c6d4
- (void).cxx_destruct;	// IMP=0x000000010016fcd8
- (void)activityPayloadFromDeviceUniqueID:(id)arg1 forAdvertisementPayload:(id)arg2 command:(id)arg3 timeout:(long long)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000010016fa74
- (void)scanForTypes:(unsigned long long)arg1;	// IMP=0x000000010016f944
- (void)didLosePeerTimer:(id)arg1;	// IMP=0x000000010016f890
- (void)lostAllDevices;	// IMP=0x000000010016f6fc
- (void)didLosePeer:(id)arg1;	// IMP=0x000000010016f418
- (void)continuity:(id)arg1 didDiscoverType:(long long)arg2 withData:(id)arg3 fromPeer:(id)arg4;	// IMP=0x000000010016f28c
- (void)continuity:(id)arg1 didFailToStartScanningForType:(long long)arg2 withError:(id)arg3;	// IMP=0x000000010016f124
- (void)continuity:(id)arg1 didStopScanningForType:(long long)arg2;	// IMP=0x000000010016f048
- (void)continuity:(id)arg1 didStartScanningForType:(long long)arg2;	// IMP=0x000000010016ef68
- (void)continuityDidUpdateState:(id)arg1;	// IMP=0x000000010016ecd4
- (void)consoleUserChanged:(id)arg1;	// IMP=0x000000010016ebac
- (void)systemHasPoweredOn:(id)arg1;	// IMP=0x000000010016ead8
- (void)systemWillSleep:(id)arg1;	// IMP=0x000000010016ea20
- (void)resetStateRequested:(id)arg1;	// IMP=0x000000010016ea14
- (void)removeObservers;	// IMP=0x000000010016e9c4
- (void)addObservers;	// IMP=0x000000010016e8d8
- (id)state;	// IMP=0x000000010016e6ac
- (struct os_state_data_s *)dumpState;	// IMP=0x000000010016e35c
- (void)initializeStateCaptureBlock;	// IMP=0x000000010016e2dc
- (void)connectionInvalidated:(id)arg1;	// IMP=0x000000010016e240
- (void)connectionEstablished:(id)arg1;	// IMP=0x000000010016dff4
- (_Bool)shouldAcceptNewConnection:(id)arg1;	// IMP=0x000000010016dfec
- (id)remoteObjectInterface;	// IMP=0x000000010016de48
- (id)exportedInterface;	// IMP=0x000000010016de2c
- (id)machServiceName;	// IMP=0x000000010016de20
- (void)_enumerateRemoteObjectProxiesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010016de14
- (void)_remoteObjectProxyForConnection:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010016ddc4
- (void)handleNewAdvertisementDevice:(id)arg1 data:(id)arg2 receivedViaScanning:(_Bool)arg3 withSuccessHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010016d704
- (void)nearbyServiceDevicesChanged:(id)arg1;	// IMP=0x000000010016d524
- (void)activityServiceDevicesChanged:(id)arg1;	// IMP=0x000000010016d098
- (_Bool)restart;	// IMP=0x000000010016c9e0
- (void)stop;	// IMP=0x000000010016c998
- (void)start;	// IMP=0x000000010016c93c
- (_Bool)shouldBoostScan;	// IMP=0x000000010016c928
- (_Bool)shouldScanForCopyPaste;	// IMP=0x000000010016c914
- (_Bool)shouldScanForHandoff;	// IMP=0x000000010016c900
- (id)init;	// IMP=0x000000010016c790

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

