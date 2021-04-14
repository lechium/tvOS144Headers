//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKRecordID, CKServerChangeToken, GKCloudPlayer, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface GKSessionCache : NSObject
{
    NSObject<OS_dispatch_queue> *_cacheQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_cacheUserQueue;	// 16 = 0x10
    _Bool _userHasSubscription;	// 24 = 0x18
    _Bool _friendRecordNeedsUpdate;	// 25 = 0x19
    CKRecordID *_userRecordID;	// 32 = 0x20
    double _lastSaveTimeStamp;	// 40 = 0x28
    NSMutableDictionary *_bundleIDsByContainerName;	// 48 = 0x30
    NSMutableDictionary *_bundleIDExpirations;	// 56 = 0x38
    struct sqlite3 *_database;	// 64 = 0x40
    NSString *_databasePath;	// 72 = 0x48
    NSDate *_expiration;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000001001ce354
@property(retain, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property(retain, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(nonatomic) struct sqlite3 *database; // @synthesize database=_database;
@property(retain, nonatomic) NSMutableDictionary *bundleIDExpirations; // @synthesize bundleIDExpirations=_bundleIDExpirations;
@property(retain, nonatomic) NSMutableDictionary *bundleIDsByContainerName; // @synthesize bundleIDsByContainerName=_bundleIDsByContainerName;
@property(retain, nonatomic) CKRecordID *userRecordID; // @synthesize userRecordID=_userRecordID;
- (double)doubleFromRowStatement:(struct sqlite3_stmt *)arg1 column:(int)arg2;	// IMP=0x00000001001ce2dc
- (int)intFromRowStatement:(struct sqlite3_stmt *)arg1 column:(int)arg2;	// IMP=0x00000001001ce2d0
- (id)stringFromRowStatement:(struct sqlite3_stmt *)arg1 column:(int)arg2;	// IMP=0x00000001001ce2a0
- (id)dataFromRowStatement:(struct sqlite3_stmt *)arg1 column:(int)arg2;	// IMP=0x00000001001ce244
- (_Bool)stepStatement:(id)arg1 parameters:(id)arg2 rowHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001cdcbc
- (_Bool)executeStatement:(id)arg1;	// IMP=0x00000001001cdb28
- (void)closeDatabase;	// IMP=0x00000001001cdb00
- (_Bool)openDatabase;	// IMP=0x00000001001cdac4
- (id)sessionWithIdentifier:(id)arg1;	// IMP=0x00000001001cd884
- (id)sessionsInContainer:(id)arg1 ownerName:(id)arg2;	// IMP=0x00000001001cd550
- (id)sessionsInContainer:(id)arg1;	// IMP=0x00000001001cd540
- (id)sessionWithRecordID:(id)arg1;	// IMP=0x00000001001cd4d8
- (id)sessionFromData:(id)arg1;	// IMP=0x00000001001cd430
- (void)updateWithChangedSessions:(id)arg1 removedSessions:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001cc734
- (void)setFriendPlayers:(id)arg1 withEmails:(id)arg2;	// IMP=0x00000001001cc2cc
@property(readonly, nonatomic) NSDictionary *friendEmailsByID; // @dynamic friendEmailsByID;
@property(readonly, nonatomic) NSArray *friendPlayers; // @dynamic friendPlayers;
- (void)_setToken:(id)arg1 forContainerName:(id)arg2 ownerName:(id)arg3;	// IMP=0x00000001001cbb00
- (void)updateWithChangedTokens:(id)arg1 removedTokenZoneIDs:(id)arg2;	// IMP=0x00000001001cb760
- (void)setToken:(id)arg1 forContainerName:(id)arg2 ownerName:(id)arg3;	// IMP=0x00000001001cb608
- (id)tokenForContainerName:(id)arg1 ownerName:(id)arg2;	// IMP=0x00000001001cb378
@property(retain, nonatomic) CKServerChangeToken *sharedDBToken; // @dynamic sharedDBToken;
@property(retain, nonatomic) CKServerChangeToken *privateDBToken; // @dynamic privateDBToken;
- (void)setToken:(id)arg1 forZoneID:(id)arg2;	// IMP=0x00000001001cb250
- (id)tokenForZoneID:(id)arg1;	// IMP=0x00000001001cb1a8
- (id)tokenFromData:(id)arg1;	// IMP=0x00000001001cb100
@property(nonatomic) double lastSaveTimeStamp; // @synthesize lastSaveTimeStamp=_lastSaveTimeStamp;
@property(nonatomic) _Bool friendRecordNeedsUpdate; // @synthesize friendRecordNeedsUpdate=_friendRecordNeedsUpdate;
@property(nonatomic) _Bool userHasSubscription; // @synthesize userHasSubscription=_userHasSubscription;
- (_Bool)saveUserInfo;	// IMP=0x00000001001cab8c
- (void)readUserInfoFromDatabase;	// IMP=0x00000001001caa0c
- (void)writeBundleIDsToDisk;	// IMP=0x00000001001ca8a4
- (void)readBundleIDsFromDisk;	// IMP=0x00000001001ca724
- (id)bundleIDCacheURL;	// IMP=0x00000001001ca674
- (void)updateBundleIDs:(id)arg1 forContainerName:(id)arg2;	// IMP=0x00000001001ca4d4
- (id)bundleIDsForContainerName:(id)arg1;	// IMP=0x00000001001ca318
- (void)updateUserWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001c9d88
@property(readonly, nonatomic) GKCloudPlayer *userPlayer; // @dynamic userPlayer;
- (void)createDatabaseIfNeeded;	// IMP=0x00000001001c9828
- (void)updateDatabasePath;	// IMP=0x00000001001c96f8
@property(nonatomic) _Bool isValid; // @dynamic isValid;
- (void)clearWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001c9470
- (id)init;	// IMP=0x00000001001c9384

@end

