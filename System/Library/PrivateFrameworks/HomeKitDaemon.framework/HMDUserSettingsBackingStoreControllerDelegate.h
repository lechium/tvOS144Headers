/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSUUID;


@protocol HMDUserSettingsBackingStoreControllerDelegate <NSObject>
@property (readonly) NSUUID * userUUID; 
@property (readonly) BOOL isRunningOnHomeOwnersDevice; 
@property (readonly) BOOL isCurrentUser; 
@required
-(BOOL)isCurrentUser;
-(NSUUID *)userUUID;
-(BOOL)isRunningOnHomeOwnersDevice;
-(id)ownerForUserSettingsBackingStoreController:(id)arg1;
-(void)didStartLocalZoneForBackingStoreController:(id)arg1;
-(id)backingStoreController:(id)arg1 createParticipantManagerForCloudZone:(id)arg2;
-(void)didStartBackingStoreController:(id)arg1;
-(void)backingStoreController:(id)arg1 didUpdatePhotosPersonManagerSettingsModel:(id)arg2 previousPhotosPersonManagerSettingsModel:(id)arg3;
-(void)didStopBackingStoreController:(id)arg1;

@end

