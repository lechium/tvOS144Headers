/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HMAccessControl.h>

@class HMUserPresenceAuthorization, HMUserPresenceCompute, HMUserCameraAccess;

@interface HMHomeAccessControl : HMAccessControl {

	BOOL _owner;
	BOOL _administrator;
	BOOL _remoteAccessAllowed;
	BOOL _announceAccessAllowed;
	HMUserPresenceAuthorization* _presenceAuthStatus;
	HMUserPresenceCompute* _presenceComputeStatus;
	HMUserCameraAccess* _camerasAccess;

}

@property (getter=isOwner) BOOL owner;                                                      //@synthesize owner=_owner - In the implementation block
@property (assign,getter=isAdministrator,nonatomic) BOOL administrator;                     //@synthesize administrator=_administrator - In the implementation block
@property (getter=isRemoteAccessAllowed) BOOL remoteAccessAllowed;                          //@synthesize remoteAccessAllowed=_remoteAccessAllowed - In the implementation block
@property (nonatomic,retain) HMUserPresenceAuthorization * presenceAuthStatus;              //@synthesize presenceAuthStatus=_presenceAuthStatus - In the implementation block
@property (nonatomic,retain) HMUserPresenceCompute * presenceComputeStatus;                 //@synthesize presenceComputeStatus=_presenceComputeStatus - In the implementation block
@property (nonatomic,retain) HMUserCameraAccess * camerasAccess;                            //@synthesize camerasAccess=_camerasAccess - In the implementation block
@property (getter=isAnnounceAccessAllowed) BOOL announceAccessAllowed;                      //@synthesize announceAccessAllowed=_announceAccessAllowed - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(void)setOwner:(BOOL)arg1 ;
-(BOOL)isOwner;
-(BOOL)isAdministrator;
-(void)setAdministrator:(BOOL)arg1 ;
-(BOOL)isRemoteAccessAllowed;
-(unsigned long long)presenceAuthorizationStatus;
-(unsigned long long)presenceComputationStatus;
-(HMUserCameraAccess *)camerasAccess;
-(BOOL)isAnnounceAccessAllowed;
-(void)updatePresenceAuthorizationStatus:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithUser:(id)arg1 owner:(BOOL)arg2 administratorPrivilege:(BOOL)arg3 remoteAccess:(BOOL)arg4 presenceAuthStatus:(id)arg5 presenceComputeStatus:(id)arg6 announceAccess:(BOOL)arg7 camerasAccess:(id)arg8 ;
-(void)setRemoteAccessAllowed:(BOOL)arg1 ;
-(HMUserPresenceAuthorization *)presenceAuthStatus;
-(void)setPresenceAuthStatus:(HMUserPresenceAuthorization *)arg1 ;
-(HMUserPresenceCompute *)presenceComputeStatus;
-(void)setPresenceComputeStatus:(HMUserPresenceCompute *)arg1 ;
-(void)setCamerasAccess:(HMUserCameraAccess *)arg1 ;
-(unsigned long long)camerasAccessLevel;
-(void)setAnnounceAccessAllowed:(BOOL)arg1 ;
-(void)updateAdministratorAccess:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateRemoteAccess:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateCamerasAccessLevel:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateAnnounceAccess:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

