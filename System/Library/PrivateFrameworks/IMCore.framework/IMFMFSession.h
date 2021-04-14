/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FMFSessionDelegate.h>

@class NSString, FMFSession, FMFDevice;

@interface IMFMFSession : NSObject <FMFSessionDelegate> {

	NSString* _establishingAccountID;
	FMFSession* _session;
	FMFDevice* _activeDevice;
	unsigned long long _fmfProvisionedState;

}

@property (nonatomic,retain) FMFDevice * activeDevice;                            //@synthesize activeDevice=_activeDevice - In the implementation block
@property (nonatomic,retain) FMFSession * session;                                //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSString * establishingAccountID;                    //@synthesize establishingAccountID=_establishingAccountID - In the implementation block
@property (assign,nonatomic) unsigned long long fmfProvisionedState;              //@synthesize fmfProvisionedState=_fmfProvisionedState - In the implementation block
@property (nonatomic,readonly) BOOL restrictLocationSharing; 
@property (nonatomic,readonly) BOOL disableLocationSharing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(FMFSession *)session;
-(void)setSession:(FMFSession *)arg1 ;
-(id)_accountStore;
-(void)_accountStoreDidChangeNotification:(id)arg1 ;
-(void)didReceiveLocation:(id)arg1 ;
-(void)didStartSharingMyLocationWithHandle:(id)arg1 ;
-(void)didStopSharingMyLocationWithHandle:(id)arg1 ;
-(void)didStartAbilityToGetLocationForHandle:(id)arg1 ;
-(void)didStopAbilityToGetLocationForHandle:(id)arg1 ;
-(void)didUpdateHidingStatus:(BOOL)arg1 ;
-(void)sendMappingPacket:(id)arg1 toHandle:(id)arg2 ;
-(void)didChangeActiveLocationSharingDevice:(id)arg1 ;
-(FMFDevice *)activeDevice;
-(id)_bestAccountForAddresses:(id)arg1 ;
-(BOOL)restrictLocationSharing;
-(BOOL)disableLocationSharing;
-(BOOL)handleIsSharingLocationWithMe:(id)arg1 ;
-(BOOL)handleIsFollowingMyLocation:(id)arg1 ;
-(id)fmfHandlesForChat:(id)arg1 ;
-(id)allSiblingFMFHandlesForChat:(id)arg1 ;
-(BOOL)chatHasParticipantsFollowingMyLocation:(id)arg1 ;
-(BOOL)allChatParticipantsFollowingMyLocation:(id)arg1 ;
-(BOOL)chatHasParticipantsSharingLocationWithMe:(id)arg1 ;
-(BOOL)chatHasSiblingParticipantsSharingLocationWithMe:(id)arg1 ;
-(BOOL)allChatParticipantsSharingLocationWithMe:(id)arg1 ;
-(void)startSharingWithChat:(id)arg1 untilDate:(id)arg2 ;
-(void)stopSharingWithChat:(id)arg1 ;
-(void)startTrackingLocationForChat:(id)arg1 ;
-(void)stopTrackingLocationForChat:(id)arg1 ;
-(Class)__FMFSessionClass;
-(void)_updateActiveDevice;
-(void)setFmfProvisionedState:(unsigned long long)arg1 ;
-(BOOL)imIsProvisionedForLocationSharing;
-(unsigned long long)fmfProvisionedState;
-(NSString *)establishingAccountID;
-(void)_startSharingWithFMFHandles:(id)arg1 inChat:(id)arg2 untilDate:(id)arg3 ;
-(void)_stopSharingWithFMFHandles:(id)arg1 inChat:(id)arg2 ;
-(id)locationForFMFHandle:(id)arg1 ;
-(id)locationForHandle:(id)arg1 ;
-(id)_callerIDForChat:(id)arg1 ;
-(void)_postNotification:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(BOOL)fmfHandleIsSharingLocationWithMe:(id)arg1 ;
-(BOOL)fmfHandleIsFollowingMyLocation:(id)arg1 ;
-(id)fmfGroupIdGroup;
-(id)fmfGroupIdOneToOne;
-(void)setActiveDevice:(FMFDevice *)arg1 ;
-(void)_postRelationshipStatusDidChangeNotificationWithHandle:(id)arg1 ;
-(void)setEstablishingAccountID:(NSString *)arg1 ;
-(id)fmfOpenURLStringForChat:(id)arg1 ;
-(void)startTrackingLocationForHandle:(id)arg1 ;
-(void)stopTrackingLocationForHandle:(id)arg1 ;
-(void)startSharingWithHandle:(id)arg1 inChat:(id)arg2 untilDate:(id)arg3 ;
-(void)stopSharingWithHandle:(id)arg1 inChat:(id)arg2 ;
-(id)locationForHandleOrSibling:(id)arg1 ;
-(void)refreshLocationForHandle:(id)arg1 inChat:(id)arg2 ;
-(void)refreshLocationForChat:(id)arg1 ;
-(id)timedOfferExpirationForChat:(id)arg1 ;
-(void)makeThisDeviceActiveDevice;
-(void)friendshipRequestReceived:(id)arg1 ;
-(void)friendshipWasRemoved:(id)arg1 ;
@end

