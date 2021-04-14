/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CBCentralManagerDelegate <NSObject>
@optional
-(void)centralManager:(id)arg1 willRestoreState:(id)arg2;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
-(void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
-(void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
-(void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
-(void)centralManager:(id)arg1 connectionEventDidOccur:(long long)arg2 forPeripheral:(id)arg3;
-(void)centralManager:(id)arg1 didUpdateANCSAuthorizationForPeripheral:(id)arg2;

@required
-(void)centralManagerDidUpdateState:(id)arg1;

@end
