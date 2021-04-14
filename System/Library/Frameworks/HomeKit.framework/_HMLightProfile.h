/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/_HMAccessoryProfile.h>

@class HMLightProfileSettings, HMLightProfile;

@interface _HMLightProfile : _HMAccessoryProfile {

	HMLightProfileSettings* _settings;

}

@property (readonly) HMLightProfile * lightProfile; 
@property (retain) HMLightProfileSettings * settings;              //@synthesize settings=_settings - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(HMLightProfileSettings *)settings;
-(void)setSettings:(HMLightProfileSettings *)arg1 ;
-(void)_registerNotificationHandlers;
-(HMLightProfile *)lightProfile;
-(void)handleSettingsDidUpdate:(id)arg1 ;
-(id)initWithUUID:(id)arg1 services:(id)arg2 settings:(id)arg3 ;
@end

