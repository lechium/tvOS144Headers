/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SFContinuityScanManagerObserver <NSObject>
@required
-(void)scanManager:(id)arg1 receivedAdvertisement:(id)arg2;
-(void)scanManager:(id)arg1 foundDeviceWithDevice:(id)arg2;
-(void)scanManager:(id)arg1 lostDeviceWithDevice:(id)arg2;
-(void)scanManager:(id)arg1 pairedDevicesChanged:(id)arg2;

@end

