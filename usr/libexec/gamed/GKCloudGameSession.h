//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class CKRecord, GKCloudPlayer, NSArray, NSData, NSDate, NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface GKCloudGameSession : NSObject <NSSecureCoding>
{
    CKRecord *_record;	// 8 = 0x8
    NSDictionary *_playersByIdentifier;	// 16 = 0x10
    GKCloudPlayer *_owner;	// 24 = 0x18
    NSURL *_url;	// 32 = 0x20
}

+ (void)badgeCountForContainerName:(id)arg1 useCacheDirectly:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001215b0
+ (void)updateBadgeCountsForContainerName:(id)arg1 useCacheDirectly:(_Bool)arg2;	// IMP=0x00000001001211f4
+ (void)updateBadgeCountsForContainerName:(id)arg1;	// IMP=0x00000001001211e4
+ (void)deleteInviteRecordWithRecordID:(id)arg1 fromDatabase:(id)arg2;	// IMP=0x0000000100120e88
+ (void)searchAndSaveIdentityForRecord:(id)arg1 database:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100120e84
+ (void)saveInviteRecord:(id)arg1 database:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001204f8
+ (void)getAssociatedAccountsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001204f4
+ (id)msgServiceQueue;	// IMP=0x0000000100120484
+ (void)generateAndStoreInviteBulletinForRecord:(id)arg1 database:(id)arg2;	// IMP=0x000000010011f8ac
+ (id)packFakeTurnBasedBulletinWithZoneData:(id)arg1;	// IMP=0x000000010011f3d4
+ (id)packFakeRealTimeBulletinWithZoneData:(id)arg1;	// IMP=0x000000010011e890
+ (void)reportPlayerStateChangesToClients:(id)arg1 forUpdatedSession:(id)arg2 oldSession:(id)arg3;	// IMP=0x000000010011d63c
+ (void)openStoreForBundleID:(id)arg1;	// IMP=0x000000010011c074
+ (void)launchOrOpenAppStoreForBundleID:(id)arg1;	// IMP=0x000000010011c01c
+ (void)acceptShareMetadata:(id)arg1 retryCount:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010011b890
+ (void)showAcceptAlertWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010011b6d0
+ (void)handleLegacyShareMetadata:(id)arg1 needsAccept:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010011aba8
+ (void)handleSessionShareMetadata:(id)arg1 needsAccept:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010011a344
+ (void)handleCloudKitShareMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100119b3c
+ (void)acceptShareURL:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001197ac
+ (void)saveInformationForPrimaryUserForSessionWithShareMetadata:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100118e84
+ (void)fetchShareMetadataForURL:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001189d0
+ (void)fetchShareRecordsWithRecordIDs:(id)arg1 inDatabase:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001188ac
+ (id)cloudKitOperationConfigurationForSocialGamingSessionsContainer;	// IMP=0x00000001001176c0
+ (id)cloudKitOperationConfigurationForContainer:(id)arg1;	// IMP=0x0000000100117630
+ (void)subscribeToAllDBwithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100117108
+ (void)getZoneNamesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100116b18
+ (void)createZoneWithName:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100116908
+ (void)bundleIDsForContainerName:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001156ec
+ (void)removeSessionWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100114e88
+ (void)createSessionWithContainerName:(id)arg1 title:(id)arg2 maxConnectedPlayers:(long long)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100114248
+ (_Bool)isCloudDriveEnabledForBundleID:(id)arg1;	// IMP=0x0000000100113fac
+ (id)databaseForZoneID:(id)arg1;	// IMP=0x0000000100113f5c
+ (id)databaseForSession:(id)arg1;	// IMP=0x0000000100113f08
+ (id)sharedDatabase;	// IMP=0x0000000100113ea4
+ (id)privateDatabase;	// IMP=0x0000000100113e40
+ (_Bool)isOwnZoneID:(id)arg1;	// IMP=0x0000000100113d10
+ (_Bool)isOwnRecordID:(id)arg1;	// IMP=0x0000000100113cb4
+ (id)recordIDForSessionIdentifier:(id)arg1;	// IMP=0x0000000100113a70
+ (id)sessionIdentifierForRecordID:(id)arg1;	// IMP=0x0000000100113870
+ (id)allowedCharacterSet;	// IMP=0x000000010011379c
+ (void)getFriendPlayersWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100113178
+ (void)updateFriendRecordIfNeeded;	// IMP=0x0000000100112a18
+ (void)updateFriendsWithRecord:(id)arg1;	// IMP=0x0000000100112528
+ (void)updateCacheForFriendZoneID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100111f28
+ (void)updatePlayersForSessions:(id)arg1 sharesByRecordID:(id)arg2 inDatabase:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100110f48
+ (void)primaryPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100110e7c
+ (id)playerIdentifierForUserRecordName:(id)arg1;	// IMP=0x0000000100110db8
+ (id)localPlayerAlias;	// IMP=0x0000000100110b18
+ (void)determinePlayerChangesIn:(id)arg1 newSession:(id)arg2 notifyClients:(id)arg3;	// IMP=0x00000001001104e0
+ (void)reportChangesForSessions:(id)arg1 shareChangedSessions:(id)arg2 removedSessions:(id)arg3 zoneID:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x000000010010f82c
+ (id)allChangedSessionsFromRecordChangedSessions:(id)arg1 shareChangedSessions:(id)arg2;	// IMP=0x000000010010f490
+ (void)updateCacheForDatabase:(id)arg1 zoneIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010010dc2c
+ (void)updateCacheForDatabaseScope:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010010c7a0
+ (void)updateCacheForZoneID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010010c3b8
+ (void)updateSessionCacheDatabasesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010010c000
+ (void)updateSessionCacheWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010010bb84
+ (void)updateUserWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010010bb18
+ (void)fetchUserRecordIDWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010010baa0
+ (id)friendEmailsByID;	// IMP=0x000000010010ba4c
+ (void)sessionForShareMetadata:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010010b998
+ (void)sessionsForContainerName:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010010b5cc
+ (void)sessionForIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010010b20c
+ (id)cacheQueue;	// IMP=0x000000010010b19c
+ (id)sessionCache;	// IMP=0x000000010010b130
+ (id)AES128Operation:(unsigned int)arg1 key:(id)arg2 data:(id)arg3;	// IMP=0x000000010010afc8
+ (id)AES128DecryptedVersionOfData:(id)arg1 withKey:(id)arg2;	// IMP=0x000000010010af60
+ (id)AES128EncryptedVersionOfData:(id)arg1 withKey:(id)arg2;	// IMP=0x000000010010aef8
+ (id)playerIdentifierForObfuscatedIdentifier:(id)arg1 containerName:(id)arg2;	// IMP=0x000000010010adfc
+ (id)obfuscatedIdentifierForPlayerIdentifier:(id)arg1 containerName:(id)arg2;	// IMP=0x000000010010ad04
+ (id)mutablePlistFromPlayerStatesData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100109fc0
+ (_Bool)supportsSecureCoding;	// IMP=0x00000001001093d0
- (void).cxx_destruct;	// IMP=0x0000000100122660
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) GKCloudPlayer *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) NSDictionary *playersByIdentifier; // @synthesize playersByIdentifier=_playersByIdentifier;
@property(retain, nonatomic) CKRecord *record; // @synthesize record=_record;
- (void)setBadged:(_Bool)arg1 forPlayerIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100121d90
- (void)saveConnectionState:(long long)arg1 forPlayerWithID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010011dfe0
- (void)tempEmailFixForPlayerID:(id)arg1;	// IMP=0x000000010011de4c
@property(readonly, nonatomic) NSArray *connectedPlayerIDs;
- (void)removePlayers:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010011cb3c
- (void)deleteShareWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010011c778
- (void)fetchShareRecordWithRecordID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100118694
- (void)saveShare:(id)arg1 isNewShare:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100118268
- (void)setupShareWithRecordID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100117f9c
- (void)getShareURLWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001177ac
- (void)saveWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001165e8
- (void)saveData:(id)arg1 changeTag:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100115d14
@property(readonly, nonatomic) NSString *containerName;
- (id)playersForGKGameSession;	// IMP=0x0000000100111bec
- (id)players;	// IMP=0x0000000100111b98
- (void)setPlayers:(id)arg1;	// IMP=0x00000001001119e4
- (void)updatePlayersWithIdentities:(id)arg1;	// IMP=0x0000000100111748
- (id)createGKGameSession;	// IMP=0x000000010010a68c
@property(retain, nonatomic) NSMutableDictionary *nicknamesByIdentifier; // @dynamic nicknamesByIdentifier;
@property(retain, nonatomic) NSMutableDictionary *emailsByCKID;
@property(readonly, nonatomic) NSDictionary *playersByEmail;
- (id)playerStates;	// IMP=0x000000010010a014
- (void)setPlayerStates:(id)arg1;	// IMP=0x0000000100109f4c
@property(readonly, nonatomic) NSString *serverChangeTag;
@property(readonly, nonatomic) GKCloudPlayer *lastModifiedPlayer;
@property(readonly, nonatomic) NSDate *lastModifiedDate;
@property(retain, nonatomic) NSData *data;
@property(nonatomic) long long maxConnectedPlayers;
@property(retain, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *identifier;
- (_Bool)isOwnedByUser;	// IMP=0x00000001001098dc
- (id)description;	// IMP=0x0000000100109794
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001001096a0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001001093d8
- (id)initWithRecord:(id)arg1;	// IMP=0x000000010010935c
- (id)initWithContainerName:(id)arg1;	// IMP=0x00000001001092a0

@end
