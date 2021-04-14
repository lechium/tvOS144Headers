/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSArray;

@interface HMDCameraHomeSettingsConfiguration : HMFObject {

	BOOL _faceClassificationEnabled;
	BOOL _owner;
	NSArray* _cameraSettings;
	NSArray* _userSettings;
	unsigned long long _enabledResidentsDeviceCapabilities;

}

@property (nonatomic,readonly) NSArray * cameraSettings;                                             //@synthesize cameraSettings=_cameraSettings - In the implementation block
@property (nonatomic,readonly) NSArray * userSettings;                                               //@synthesize userSettings=_userSettings - In the implementation block
@property (readonly) unsigned long long enabledResidentsDeviceCapabilities;                          //@synthesize enabledResidentsDeviceCapabilities=_enabledResidentsDeviceCapabilities - In the implementation block
@property (getter=isFaceClassificationEnabled,readonly) BOOL faceClassificationEnabled;              //@synthesize faceClassificationEnabled=_faceClassificationEnabled - In the implementation block
@property (getter=isOwner,readonly) BOOL owner;                                                      //@synthesize owner=_owner - In the implementation block
-(NSArray *)userSettings;
-(BOOL)isOwner;
-(id)initWithHome:(id)arg1 ;
-(BOOL)isFaceClassificationEnabled;
-(NSArray *)cameraSettings;
-(unsigned long long)enabledResidentsDeviceCapabilities;
@end

