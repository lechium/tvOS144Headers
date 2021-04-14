/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSNumber;


@protocol HAP2AccessoryPrivate <HAP2Accessory>
@property (nonatomic,retain) NSNumber * internalSleepIntervalMs; 
@required
-(NSNumber *)internalSleepIntervalMs;
-(void)setInternalSleepIntervalMs:(id)arg1;
-(void)updateConnectionState:(unsigned long long)arg1;
-(BOOL)updateDiscoveredServices:(id)arg1;
-(void)characteristicValueChanged:(id)arg1;

@end
