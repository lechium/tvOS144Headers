/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HMBulletinBoardNotification.h>

@class NSUUID, HMCameraUserSettings;

@interface HMCameraBulletinBoardSmartNotification : HMBulletinBoardNotification {

	NSUUID* _targetUUID;
	HMCameraUserSettings* _cameraUserSettings;

}

@property (__weak) HMCameraUserSettings * cameraUserSettings;                   //@synthesize cameraUserSettings=_cameraUserSettings - In the implementation block
@property (readonly) unsigned long long significantEventTypes; 
@property (readonly) unsigned long long personFamiliarityOptions; 
@property (readonly) unsigned long long notificationEventTriggers; 
+(id)significantEventTypesInPredicate:(id)arg1 ;
+(id)personFamiliarityOptionsInPredicate:(id)arg1 ;
+(id)predicateForSignificantEventTypes:(unsigned long long)arg1 personFamiliarityOptions:(unsigned long long)arg2 ;
+(id)predicateForCameraSignificantEvent:(unsigned long long)arg1 ;
-(id)description;
-(void)commitWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)targetUUID;
-(HMCameraUserSettings *)cameraUserSettings;
-(unsigned long long)significantEventTypes;
-(void)setCameraUserSettings:(HMCameraUserSettings *)arg1 ;
-(id)initWithBulletinBoardNotification:(id)arg1 ;
-(unsigned long long)personFamiliarityOptions;
-(unsigned long long)notificationEventTriggers;
-(void)__configureWithContext:(id)arg1 cameraUserSettings:(id)arg2 ;
@end
