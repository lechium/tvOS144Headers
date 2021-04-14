/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class HMDDevice;

@interface HMDEventTriggerDevice : HMFObject {

	BOOL _currentDevice;
	HMDDevice* _device;

}

@property (nonatomic,readonly) HMDDevice * device;                                     //@synthesize device=_device - In the implementation block
@property (getter=isCurrentDevice,nonatomic,readonly) BOOL currentDevice;              //@synthesize currentDevice=_currentDevice - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(HMDDevice *)device;
-(BOOL)isCurrentDevice;
-(id)initWithCurrentDeviceForHome:(id)arg1 ;
-(id)initWithDevice:(id)arg1 forHome:(id)arg2 ;
@end

