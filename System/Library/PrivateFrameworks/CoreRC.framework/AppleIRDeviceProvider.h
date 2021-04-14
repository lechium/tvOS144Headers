/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreRC/CoreIRDeviceProvider.h>

@class AppleIRCommand;

@interface AppleIRDeviceProvider : CoreIRDeviceProvider {

	unsigned long long _lastCommandTimestamp;
	unsigned long long _pressAndHoldTimeoutGenerationCount;
	AppleIRCommand* _lastAppleIRCommand;
	unsigned long long _lastCoreRCCommand;
	BOOL _isB39;
	unsigned char _deviceUID;

}

@property (nonatomic,readonly) unsigned char deviceUID;              //@synthesize deviceUID=_deviceUID - In the implementation block
+(void)load;
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(Class)classForCoder;
-(unsigned long long)vendorID;
-(void)setVendorID:(unsigned long long)arg1 ;
-(unsigned char)deviceUID;
-(BOOL)isAppleRemote;
-(BOOL)pairAppleRemote:(id*)arg1 ;
-(BOOL)unpairAppleRemote:(id*)arg1 ;
-(id)busProvider;
-(BOOL)_dispatchEventWithCommand:(unsigned long long)arg1 timestamp:(unsigned long long)arg2 toDevice:(id)arg3 ;
-(void)_cancelPressAndHoldTimer;
-(void)_schedulePressAndHoldTimer;
-(BOOL)_dispatchAppleVendorEventPage:(unsigned)arg1 usage:(unsigned)arg2 timestamp:(unsigned long long)arg3 toDevice:(id)arg4 ;
-(void)_synthesizeButtonReleaseWithTimestamp:(unsigned long long)arg1 ;
-(id)initWithBus:(id)arg1 deviceUID:(unsigned char)arg2 ;
-(BOOL)dispatchEventsForCommand:(id)arg1 toDevice:(id)arg2 ;
@end
