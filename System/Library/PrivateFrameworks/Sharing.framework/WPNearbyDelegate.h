/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WPNearbyDelegate <NSObject>
@optional
-(void)nearby:(id)arg1 didFailToStartAdvertisingOfType:(long long)arg2 withError:(id)arg3;
-(void)nearby:(id)arg1 didDeferAdvertisingType:(long long)arg2;
-(void)nearby:(id)arg1 didStartAdvertisingType:(long long)arg2;
-(void)nearby:(id)arg1 didStopAdvertisingType:(long long)arg2 withError:(id)arg3;
-(void)nearby:(id)arg1 didStopAdvertisingType:(long long)arg2;
-(void)nearby:(id)arg1 didFailToStartScanningForType:(long long)arg2 withError:(id)arg3;
-(void)nearby:(id)arg1 didStartScanningForType:(long long)arg2;
-(void)nearby:(id)arg1 didStopScanningForType:(long long)arg2;
-(void)nearby:(id)arg1 didDiscoverType:(long long)arg2 withData:(id)arg3 fromPeer:(id)arg4 peerInfo:(id)arg5;
-(void)nearby:(id)arg1 didDiscoverType:(long long)arg2 withData:(id)arg3 fromPeer:(id)arg4;
-(void)nearby:(id)arg1 didConnectToPeer:(id)arg2 transport:(long long)arg3 error:(id)arg4;
-(void)nearby:(id)arg1 didSendData:(id)arg2 toPeer:(id)arg3 error:(id)arg4;
-(void)nearby:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3;
-(void)nearby:(id)arg1 didDisconnectFromPeer:(id)arg2 error:(id)arg3;
-(void)nearby:(id)arg1 didStartTrackingPeer:(id)arg2 type:(long long)arg3 error:(id)arg4;
-(void)nearby:(id)arg1 didStopTrackingPeer:(id)arg2 type:(long long)arg3;
-(void)nearby:(id)arg1 didFindPeer:(id)arg2 type:(long long)arg3;
-(void)nearby:(id)arg1 didLosePeer:(id)arg2 type:(long long)arg3;
-(void)nearbyDidChangeBluetoothBandwidthState:(id)arg1;

@required
-(void)nearbyDidUpdateState:(id)arg1;

@end

