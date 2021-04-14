//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVSBluetoothManagerDelegate-Protocol.h"
#import "TVSBluetoothManagerScanObserver-Protocol.h"

@class NSString, TVSBluetoothDevice;
@protocol SATVBluetoothKeyboardManagerDelegate;

@interface SATVBluetoothKeyboardManager : NSObject <TVSBluetoothManagerScanObserver, TVSBluetoothManagerDelegate>
{
    id <SATVBluetoothKeyboardManagerDelegate> _delegate;	// 8 = 0x8
    TVSBluetoothDevice *_pairingDevice;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100027468
@property(retain, nonatomic) TVSBluetoothDevice *pairingDevice; // @synthesize pairingDevice=_pairingDevice;
@property(nonatomic) __weak id <SATVBluetoothKeyboardManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_pairedKeyboard;	// IMP=0x00000001000272ac
- (void)_removeSelfFromBluetoothManager;	// IMP=0x00000001000271c0
- (void)bluetoothManager:(id)arg1 didAcceptPairingPINForDevice:(id)arg2;	// IMP=0x00000001000271b0
- (void)bluetoothManager:(id)arg1 didRejectPairingPINForDevice:(id)arg2;	// IMP=0x00000001000270b8
- (void)bluetoothManager:(id)arg1 presentPairingPIN:(long long)arg2 forDevice:(id)arg3;	// IMP=0x0000000100027000
- (void)bluetoothManager:(id)arg1 didCompleteDeviceConnection:(id)arg2 error:(id)arg3;	// IMP=0x0000000100026f08
- (void)bluetoothManagerDidUpdateDiscoveredDevices:(id)arg1;	// IMP=0x0000000100026bb0
- (void)stopPairing;	// IMP=0x0000000100026b78
- (void)cancelPINPairing;	// IMP=0x0000000100026b20
- (void)startPairing;	// IMP=0x0000000100026a94
- (void)dealloc;	// IMP=0x0000000100026a48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
