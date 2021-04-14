/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameController/GameController-Structs.h>
#import <GameController/GCMotion.h>

@class CMMotionManager, GCController;

@interface _GCAppleTVRemoteMotionProfile : GCMotion {

	SCD_Struct_GC5 _gravity;
	SCD_Struct_GC5 _prevGravity;
	SCD_Struct_GC5 _userAcceleration;
	GCQuaternion _attitude;
	GCQuaternion _prevAttitude;
	SCD_Struct_GC5 _eulerAngles;
	SCD_Struct_GC5 _prevEulerAngles;
	SCD_Struct_GC5 _rotationRate;
	float _tip;
	float _tilt;
	CMMotionManager* _motionMgr;
	BOOL _linkedOnOrAfterCompassFeature;
	BOOL _motionLite;
	BOOL _compassEnabled;
	/*^block*/id _valueChangedHandler;
	/*^block*/id _internalValueChangedHandler;
	BOOL _emulatedMotionEnabled;
	BOOL _motionUpdatedEnabled;
	BOOL _paused;
	GCController* _controller;

}
-(SCD_Struct_GC5)gravity;
-(GCQuaternion)attitude;
-(SCD_Struct_GC5)rotationRate;
-(SCD_Struct_GC5)userAcceleration;
-(float)_tilt;
-(float)_tip;
-(void)setValueChangedHandler:(/*^block*/id)arg1 ;
-(id)controller;
-(void)_setCompassEnabled:(BOOL)arg1 ;
-(id)initWithController:(id)arg1 ;
-(/*^block*/id)valueChangedHandler;
-(BOOL)hasGravityAndUserAcceleration;
-(void)_setAttitude:(GCQuaternion)arg1 ;
-(void)_setRotationRate:(SCD_Struct_GC5)arg1 ;
-(void)_setMotionLite:(BOOL)arg1 ;
-(BOOL)hasAttitude;
-(BOOL)hasRotationRate;
-(BOOL)hasAttitudeAndRotationRate;
-(BOOL)isEmulatedMicroGamepad;
-(void)_setGravity:(SCD_Struct_GC5)arg1 ;
-(void)_setUserAcceleration:(SCD_Struct_GC5)arg1 ;
-(void)_startDeviceMotionUpdates;
-(void)_stopDeviceMotionUpdates;
-(BOOL)_isUpdatingDeviceMotion;
-(void)_pauseMotionUpdates:(BOOL)arg1 ;
-(/*^block*/id)internalValueChangedHandler;
-(void)setInternalValueChangedHandler:(/*^block*/id)arg1 ;
-(void)_startDeviceMotionUpdatesHelper;
-(/*^block*/id)_motionLiteFusedHandler;
-(void)_stopDeviceMotionUpdatesHelper;
@end

