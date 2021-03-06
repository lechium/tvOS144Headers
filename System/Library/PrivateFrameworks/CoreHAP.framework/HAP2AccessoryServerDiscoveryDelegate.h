/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HAP2AccessoryServerDiscoveryDelegate <NSObject>
@optional
-(void)discovery:(id)arg1 didStartDiscoveringWithError:(id)arg2;
-(void)discovery:(id)arg1 didStopDiscoveringWithError:(id)arg2;
-(void)discovery:(id)arg1 didLoseAccessory:(id)arg2 error:(id)arg3;

@required
-(void)discovery:(id)arg1 didDiscoverAccessory:(id)arg2;

@end

