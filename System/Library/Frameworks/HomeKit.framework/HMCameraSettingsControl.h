/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HMCameraControl.h>

@class _HMCameraSettingsControl, HMCharacteristic;

@interface HMCameraSettingsControl : HMCameraControl {

	_HMCameraSettingsControl* _settingsControl;

}

@property (nonatomic,retain) _HMCameraSettingsControl * settingsControl;              //@synthesize settingsControl=_settingsControl - In the implementation block
@property (nonatomic,readonly) HMCharacteristic * nightVision; 
@property (nonatomic,readonly) HMCharacteristic * currentHorizontalTilt; 
@property (nonatomic,readonly) HMCharacteristic * targetHorizontalTilt; 
@property (nonatomic,readonly) HMCharacteristic * currentVerticalTilt; 
@property (nonatomic,readonly) HMCharacteristic * targetVerticalTilt; 
@property (nonatomic,readonly) HMCharacteristic * opticalZoom; 
@property (nonatomic,readonly) HMCharacteristic * digitalZoom; 
@property (nonatomic,readonly) HMCharacteristic * imageRotation; 
@property (nonatomic,readonly) HMCharacteristic * imageMirroring; 
-(HMCharacteristic *)nightVision;
-(HMCharacteristic *)currentHorizontalTilt;
-(HMCharacteristic *)targetHorizontalTilt;
-(HMCharacteristic *)currentVerticalTilt;
-(HMCharacteristic *)targetVerticalTilt;
-(HMCharacteristic *)opticalZoom;
-(HMCharacteristic *)digitalZoom;
-(HMCharacteristic *)imageRotation;
-(HMCharacteristic *)imageMirroring;
-(_HMCameraSettingsControl *)settingsControl;
-(id)initWithSettingsControl:(id)arg1 ;
-(void)setSettingsControl:(_HMCameraSettingsControl *)arg1 ;
@end

