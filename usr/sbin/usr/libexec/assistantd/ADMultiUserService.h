//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFMultiUserService-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class ADCommunalDeviceUser, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSXPCListener, SAHomeMemberInfo, SAMultiUserInfo;
@protocol OS_dispatch_queue;

@interface ADMultiUserService : NSObject <NSXPCListenerDelegate, AFMultiUserService>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    SAHomeMemberInfo *_saUnknownUser;	// 16 = 0x10
    NSMutableDictionary *_sharedUsersByHomeUserUUID;	// 24 = 0x18
    NSDictionary *_homeUserSettings;	// 32 = 0x20
    NSArray *_pitchesForHomeMembers;	// 40 = 0x28
    SAMultiUserInfo *_multiUserInfo;	// 48 = 0x30
    NSMutableSet *_ghostVoiceProfileSharedUserIDs;	// 56 = 0x38
    NSMutableSet *_inFlightVoiceProfilesByUUID;	// 64 = 0x40
    NSXPCListener *_multiUserListener;	// 72 = 0x48
    int _liveOnToken;	// 80 = 0x50
    _Bool _primaryUserIsFromLiveOnApp;	// 84 = 0x54
    NSMutableArray *_usersWithAvailableVoiceProfiles;	// 88 = 0x58
    NSString *_currentLanguage;	// 96 = 0x60
    double _lastProfilesDownloadAttemptTime;	// 104 = 0x68
    unsigned long long _outOfSyncDownloadAttemptCount;	// 112 = 0x70
    NSMutableDictionary *_sharedUsersBySharedUserID;	// 120 = 0x78
    ADCommunalDeviceUser *_primaryUser;	// 128 = 0x80
    NSDictionary *_rawScores;	// 136 = 0x88
}

+ (id)sharedService;	// IMP=0x00000001001fcbd8
- (void).cxx_destruct;	// IMP=0x0000000100209dc0
@property(copy, nonatomic) NSDictionary *rawScores; // @synthesize rawScores=_rawScores;
@property(retain, nonatomic) ADCommunalDeviceUser *primaryUser; // @synthesize primaryUser=_primaryUser;
@property(retain, nonatomic) NSMutableDictionary *sharedUsersBySharedUserID; // @synthesize sharedUsersBySharedUserID=_sharedUsersBySharedUserID;
- (id)_confidenceScoreForSharedUserID:(id)arg1 expectedSpeakerSharedUserID:(id)arg2 expectedSpeakerConfidenceScore:(long long)arg3 confidenceScores:(id)arg4;	// IMP=0x0000000100209c10
- (id)confidenceScoresForMultiUserTestingExpectedSpeakerSharedUserID:(id)arg1 expectedSpeakerConfidenceScore:(long long)arg2 nonspeakerConfidenceScores:(id)arg3;	// IMP=0x00000001002098a0
- (id)currentOwnerSharedUserID;	// IMP=0x00000001002097a0
- (void)getIDSIdentifierForAssistantId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100209334
- (oneway void)getPreferredMediaUserHomeUserIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001002090c0
- (oneway void)getMultiUserSettingsForSharedUserID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100208b10
- (oneway void)getHomeUserIdOfRecognizedUserWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001002087b8
- (oneway void)getConformingSharedUserIds:(CDUnknownBlockType)arg1;	// IMP=0x000000010020834c
- (oneway void)getConformingSharedUserIdForHomeUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100208020
- (oneway void)getFirstNameForSharedUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100207ce0
- (oneway void)getSharedUserIdForHomeUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001002079dc
- (oneway void)getHomeUserIdForSharedUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001002076d8
- (id)getSyncableSharedUserIdsForSharedUserIds:(id)arg1;	// IMP=0x0000000100207418
- (id)getSyncableSharedUserIdForSharedUserId:(id)arg1;	// IMP=0x000000010020723c
- (id)getSharedUserIdForShareOwnerName:(id)arg1;	// IMP=0x0000000100206f1c
- (_Bool)_profileLimitReached;	// IMP=0x0000000100206ed0
- (void)setShareOwnerName:(id)arg1 homeMemberSettings:(id)arg2 loggingAllowed:(_Bool)arg3 forSharedUserId:(id)arg4;	// IMP=0x0000000100206c6c
- (void)setEnrollmentName:(id)arg1 forHomeUser:(id)arg2;	// IMP=0x0000000100206b4c
- (void)updateMultiUserWithSharedUserId:(id)arg1 companionId:(id)arg2 companionSpeechId:(id)arg3 idsIdentifier:(id)arg4 productPrefix:(id)arg5 aceHost:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0000000100205ee4
- (void)triggerMultiUserMetricsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001002059b4
- (void)updateVoiceProfiles;	// IMP=0x00000001002058e4
- (void)_removeGhostVoiceProfiles;	// IMP=0x00000001002057d8
- (void)_trackGhostVoiceProfile:(id)arg1;	// IMP=0x000000010020573c
- (void)voiceProfilesOutOfSync;	// IMP=0x00000001002054dc
- (void)resetAllUsers;	// IMP=0x0000000100205344
- (id)validateAndReturnScores:(id)arg1 classifiedUser:(id)arg2 donatedScores:(id)arg3 unknownUserSharedId:(id *)arg4 totalUsers:(unsigned long long *)arg5 ghostVoiceProfileDetected:(_Bool *)arg6;	// IMP=0x0000000100204888
- (id)sharedRemoteDevices;	// IMP=0x0000000100204644
- (id)multiUserSAObject;	// IMP=0x0000000100204534
- (void)showPrimaryUserSharedUserIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100204440
- (void)showMultiUsersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001002041b8
- (void)removeUserWithSharedUserID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100203f9c
- (void)removeUserWithHomeUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100203d80
- (void)_postRemovalStateCleanup;	// IMP=0x0000000100203d3c
- (_Bool)_removeUser:(id)arg1 homeUserID:(id)arg2 sharedUserID:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100203790
- (void)_logRelevantAnalyticsOnUserAddedWithSharedUserID:(id)arg1 isPrimary:(_Bool)arg2;	// IMP=0x000000010020355c
- (void)removeUserWithShareOwnerNames:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100203060
- (void)_addUser:(id)arg1 sharedUserId:(id)arg2 loggableSharedUserId:(id)arg3 enrollmentName:(id)arg4 isPrimary:(_Bool)arg5 nonCloudSyncedUser:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0000000100202528
- (void)addUser:(id)arg1 sharedUserId:(id)arg2 loggableSharedUserId:(id)arg3 enrollmentName:(id)arg4 isPrimary:(_Bool)arg5 nonCloudSyncedUser:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000001002020ac
- (void)addUser:(id)arg1 sharedUserId:(id)arg2 loggableSharedUserId:(id)arg3 enrollmentName:(id)arg4 isPrimary:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000100201fe4
- (void)_deleteShareForUser:(id)arg1;	// IMP=0x0000000100201ec8
- (void)_allowVoiceIdentificationForThisUser:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100201838
- (_Bool)_updateHomeKitSettings:(id)arg1 personalDomainSettingsChanged:(_Bool *)arg2;	// IMP=0x0000000100201578
- (void)_saveSharedUsers;	// IMP=0x00000001002012e4
- (void)_updateSAMultiUserInfo;	// IMP=0x000000010020052c
- (_Bool)_updateVoiceProfileInfo;	// IMP=0x00000001002000f0
- (void)_untrackAllHomeUserUUIDsForInFlightVoiceProfile;	// IMP=0x00000001001fffd8
- (void)_untrackHomeUserUUIDForInFlightVoiceProfile:(id)arg1;	// IMP=0x00000001001ffe54
- (void)_trackHomeUserUUIDForInFlightVoiceProfile:(id)arg1;	// IMP=0x00000001001ffcd0
- (id)_inFlightVoiceProfilesByUUID;	// IMP=0x00000001001ffc8c
- (_Bool)_isLanguageMultiUserCompatible;	// IMP=0x00000001001ffbe8
- (void)_forceCloudSyncedUserDownload:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ff98c
- (void)_resetAllUsers;	// IMP=0x00000001001ff6cc
- (void)_resetPrimaryUser;	// IMP=0x00000001001ff5f4
- (void)_loadCloudSyncedUsersFromCache;	// IMP=0x00000001001ff090
- (void)_refreshUsersAndVoiceProfiles:(_Bool)arg1;	// IMP=0x00000001001fe3ec
- (void)refreshHomeKitOnboardedUsers;	// IMP=0x00000001001fdafc
- (void)_homeInfoDidChange:(id)arg1;	// IMP=0x00000001001fdab8
- (void)_primaryUserSharedUserIdentifierDidChangeNotification:(id)arg1;	// IMP=0x00000001001fd77c
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000001001fd714
- (_Bool)_multiUserListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00000001001fd384
- (void)_setupMultiUserListener;	// IMP=0x00000001001fd284
- (void)_languageCodeDidChange;	// IMP=0x00000001001fd0dc
- (void)dealloc;	// IMP=0x00000001001fd018
- (id)_init;	// IMP=0x00000001001fcc64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

