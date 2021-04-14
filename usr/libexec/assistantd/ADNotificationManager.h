//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BBObserverDelegate-Protocol.h"

@class ADNotificationOrderedDictionary, BBObserver, NSArray, NSMutableDictionary, NSString;
@protocol ADNotificationManagerDataSource, ADNotificationManagerDelegate, OS_dispatch_group, OS_dispatch_queue;

@interface ADNotificationManager : NSObject <BBObserverDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_notificationsGroup;	// 16 = 0x10
    ADNotificationOrderedDictionary *_allBulletins;	// 24 = 0x18
    NSMutableDictionary *_bulletinsOnLockScreen;	// 32 = 0x20
    _Bool _initialFetchSuccess;	// 40 = 0x28
    NSObject<OS_dispatch_group> *_settingsGroup;	// 48 = 0x30
    _Bool _batchedUpdatePending;	// 56 = 0x38
    NSArray *_siriRelatedPreviewRestrictedApps;	// 64 = 0x40
    NSArray *_spokenNotificationEnabledApps;	// 72 = 0x48
    BBObserver *_observer;	// 80 = 0x50
    id <ADNotificationManagerDelegate> _delegate;	// 88 = 0x58
    id <ADNotificationManagerDataSource> _dataSource;	// 96 = 0x60
}

+ (id)_createBBObserverWithQueue:(id)arg1;	// IMP=0x00000001002adf40
+ (id)sharedManager;	// IMP=0x00000001002add64
- (void).cxx_destruct;	// IMP=0x00000001002b06e4
@property(nonatomic) __weak id <ADNotificationManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <ADNotificationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_isAppRestrictedAndSiriRelated:(id)arg1;	// IMP=0x00000001002b0554
- (void)_getRestrictedAppsFromBulletinBoard;	// IMP=0x00000001002aff20
- (id)_displayNameForBulletin:(id)arg1;	// IMP=0x00000001002afddc
- (void)_bulletinsDidChange;	// IMP=0x00000001002afd94
- (void)_getNotificationsFromBulletinBoard;	// IMP=0x00000001002afd38
- (id)_afbulletinForBBBulletin:(id)arg1 forFeed:(unsigned long long)arg2;	// IMP=0x00000001002afb78
- (void)_fetchFromDataSourceIfNecessary;	// IMP=0x00000001002af8dc
- (void)observer:(id)arg1 noteServerConnectionStateChanged:(_Bool)arg2;	// IMP=0x00000001002af774
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;	// IMP=0x00000001002af5a4
- (void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2;	// IMP=0x00000001002af464
- (void)observer:(id)arg1 purgeReferencesToBulletinID:(id)arg2;	// IMP=0x00000001002af254
- (void)observer:(id)arg1 removeBulletin:(id)arg2 forFeed:(unsigned long long)arg3;	// IMP=0x00000001002aefcc
- (void)observer:(id)arg1 removeBulletin:(id)arg2;	// IMP=0x00000001002aef58
- (void)observer:(id)arg1 modifyBulletin:(id)arg2 forFeed:(unsigned long long)arg3;	// IMP=0x00000001002aecd4
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3;	// IMP=0x00000001002aea5c
- (void)fetchSpokenNotificationEnabledAppsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001002ae9ac
- (void)fetchSiriRelatedNotificationPreviewRestrictedAppsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001002ae8fc
- (id)_siriRelatedRestrictedAppsForApps:(id)arg1;	// IMP=0x00000001002ae6ac
- (void)fetchBulletinsAfterBulletinWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001002ae4c4
- (void)fetchBulletinsOnLockScreenWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001002ae2bc
- (void)fetchAllBulletinsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001002ae148
- (void)_fetchInitialState;	// IMP=0x00000001002ae01c
- (void)_setUpBBObserver;	// IMP=0x00000001002adf98
- (id)_init;	// IMP=0x00000001002adddc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

