/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PRBeaconListenerDelegate <NSObject>
@optional
-(void)beaconListener:(id)arg1 didOutputSuperframeStats:(id)arg2;
-(void)beaconListener:(id)arg1 didOutputRangeResults:(id)arg2;

@required
-(void)beaconListener:(id)arg1 didChangeState:(unsigned long long)arg2;
-(void)beaconListener:(id)arg1 didFailWithError:(id)arg2;

@end

