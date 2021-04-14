/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface IMCloudKitHooks : NSObject
+(id)sharedInstance;
+(id)logHandle;
+(void)__setSingleton__im:(id)arg1 ;
+(id)__singleton__im;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)logHandle;
-(id)lastSyncDate;
-(BOOL)isSyncing;
-(id)exitDate;
-(BOOL)mocAccountsMatch;
-(void)_didAttemptToSetEnabledTo:(BOOL)arg1 result:(BOOL)arg2 ;
-(void)_didPerformAdditionalStorageRequiredCheckWithSuccess:(BOOL)arg1 additionalStorageRequired:(unsigned long long)arg2 forAccountId:(id)arg3 error:(id)arg4 ;
-(void)_didAttemptToDisableAllDevicesResult:(BOOL)arg1 ;
-(void)_updateCloudKitState;
-(void)_updateCloudKitStateWithDictionary:(id)arg1 ;
-(id)syncStateDictionary;
-(void)broadcastCloudKitState;
-(void)broadcastCloudKitStateAfterFetchingAccountStatus;
-(void)fetchLatestRampState;
-(void)broadcastCloudKitStateAfterClearingErrors;
-(void)initiatePeriodicSync;
-(void)initiateSync;
-(void)tryToDisableAllDevices;
-(void)performAdditionalStorageRequiredCheck;
-(void)fetchSyncStateStatistics;
-(void)fetchCloudKitSyncStateDebuggingInfo:(id)arg1 ;
-(void)createChatZone;
-(void)deleteChatZone;
-(void)writeDirtyChats;
-(void)syncChats;
-(void)markAllChatsAsDirty;
-(void)clearChatZoneSyncToken;
-(void)createAttachmentZone;
-(void)deleteAttachmentZone;
-(void)writeAttachments;
-(void)syncAttachments;
-(void)downloadAttachmentAssets;
-(void)writeDirtyMessages;
-(void)deleteMessagesZone;
-(void)syncMessages;
-(void)loadDirtyMessagesWithLimit:(long long)arg1 ;
-(void)loadDeletedMessagesWithLimit:(long long)arg1 ;
-(void)writeExitRecord;
-(void)fetchExitRecord;
-(void)deleteExitRecord;
-(void)clearDataFromCloudKit;
-(void)sendRestoreFailuresLogDumps;
-(void)uploadDailyAnalyticstoCloudKit;
-(void)clearAnalyticDefaultsAndLocalSyncState;
-(void)fetchAccountStatusAndUpdateMiCSwitchEligibility;
-(void)fetchLatestSalt;
-(void)printCachedSalt;
-(void)deleteSalt;
-(void)purgeAttachments:(long long)arg1 ;
-(void)metricAttachments:(long long)arg1 ;
-(void)updateAttachmentFileSizes;
-(void)writeCloudKitSyncCounts:(id)arg1 ;
-(void)reportMetricToCK:(id)arg1 withDict:(id)arg2 ;
-(void)toggleiCloudBackupsIfNeeded;
-(void)setiCloudBackupsDisabled:(BOOL)arg1 ;
-(void)removePathFromiCloudBackups:(id)arg1 ;
-(void)printCachedRampState;
-(void)syncDeletesToCloudKit;
-(void)tryToAutoCollectLogsWithErrorString:(id)arg1 sendLogsTo:(id)arg2 ;
-(BOOL)isDisablingDevices;
-(BOOL)eligibleForTruthZone;
-(BOOL)isStartingSync;
-(long long)isChangingEnabledState;
-(BOOL)isInExitState;
-(BOOL)rampedIntoTruthZone;
-(void)setupIMCloudKitHooks;
-(void)clearLocalSyncState;
-(BOOL)shouldShowCloudKitUI;
-(BOOL)removedFromiCloudBackup;
-(BOOL)shouldOptimizeAttachmentStorage;
-(void)setShouldOptimizeAttachmentStorage:(BOOL)arg1 ;
-(void)clearTombStoneMessagesTable;
-(void)reportMetricToCK:(id)arg1 ;
-(void)reportMetricToCK:(id)arg1 withSuccess:(BOOL)arg2 ;
@end

