/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSCopying;
@class TLAccessQueue, NSDictionary, NSString;

@interface TLToneManager : NSObject {

	TLAccessQueue* _accessQueue;
	NSDictionary* _tonesByIdentifier;
	NSDictionary* _toneIdentifiersBySyncIdentifier;
	NSDictionary* _alertTonesByIdentifier;
	NSDictionary* _toneIdentifierAliasMap;
	id<NSCopying> _contentProtectionStateObserverToken;
	BOOL _shouldUseServiceToAccessTonePreferences;
	NSDictionary* _cachedTonePreferences;
	BOOL _shouldIgnoreNextToneDidChangeNotification;

}

@property (nonatomic,readonly) NSString * _rootDirectory; 
@property (nonatomic,readonly) NSString * _deviceITunesRingtoneDirectory; 
@property (nonatomic,readonly) NSString * _deviceITunesRingtoneInformationPlist; 
@property (nonatomic,readonly) NSString * _iTunesRingtoneDirectory; 
@property (nonatomic,readonly) NSString * _iTunesRingtoneInformationPlist; 
@property (nonatomic,readonly) NSString * _systemRingtoneDirectory; 
+(id)sharedToneManager;
+(id)_systemWideTonePreferenceKeyForAlertType:(long long)arg1 ;
+(id)_defaultToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2 ;
+(BOOL)_ensureTCCAccessPreflightAndCheckForFileExistenceAtPath:(id)arg1 ;
+(id)_currentOverridePolicyPreferenceKeyForAlertType:(long long)arg1 ;
+(id)_abbreviatedDescriptionOfMediaPlaybackArchive:(id)arg1 ;
+(id)_abbreviatedDescriptionOfToneIdentifierWithUnderlyingMediaPlaybackArchiveForLogging:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)_hasUnderlyingPlaybackArchiveForToneIdentifier:(id)arg1 ;
-(id)initWithITunesRingtonePlistAtPath:(id)arg1 ;
-(BOOL)_loadITunesRingtoneInfoPlistAtPath:(id)arg1 ;
-(void)_loadAlertToneInfo;
-(void)_loadToneIdentifierAliasMap;
-(void)_performBlockInAccessQueue:(/*^block*/id)arg1 ;
-(void)_handleProtectionContentUnlockedEvent;
-(NSString *)_rootDirectory;
-(NSString *)_iTunesRingtoneDirectory;
-(id)_tonesFromManifestPath:(id)arg1 mediaDirectoryPath:(id)arg2 ;
-(NSString *)_deviceITunesRingtoneInformationPlist;
-(NSString *)_deviceITunesRingtoneDirectory;
-(void)_reloadTonesAfterExternalChange;
-(id)_installedTones;
-(id)_addToneEntries:(id)arg1 toManifestAtPath:(id)arg2 mediaDirectory:(id)arg3 shouldSkipReload:(BOOL)arg4 ;
-(BOOL)_ensureDirectoryExistsAtPath:(id)arg1 ;
-(int)_lockManifestAtPath:(id)arg1 ;
-(void)_reloadTones;
-(BOOL)_removeToneWithIdentifier:(id)arg1 orSyncIdentifier:(id)arg2 ;
-(NSString *)_iTunesRingtoneInformationPlist;
-(BOOL)_removeTonesFromManifestAtPath:(id)arg1 fileNames:(id)arg2 shouldSkipReload:(BOOL)arg3 alreadyLockedManifest:(BOOL)arg4 removedEntries:(id*)arg5 ;
-(id)_systemEmbeddedSoundDirectory;
-(id)_baseDirectoryForAlertToneSoundFiles;
-(id)_systemSoundDirectory;
-(id)_systemNewSoundDirectory;
-(id)_systemWatchSoundDirectory;
-(id)_systemEmbeddedModernSoundDirectory;
-(id)defaultRingtoneIdentifier;
-(BOOL)_toneWithIdentifierIsSystemAlertTone:(id)arg1 ;
-(id)_aliasForToneIdentifier:(id)arg1 ;
-(id)_underlyingPlaybackArchiveForToneIdentifier:(id)arg1 ;
-(id)_newServiceConnection;
-(id)currentToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2 ;
-(void)setCurrentToneIdentifier:(id)arg1 forAlertType:(long long)arg2 topic:(id)arg3 ;
-(id)_tonePreferencesFromService;
-(BOOL)toneWithIdentifierIsValid:(id)arg1 ;
-(id)_currentToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2 ;
-(id)_defaultPreferablyNonSilentToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2 ;
-(id)defaultToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2 ;
-(BOOL)_setToneIdentifierUsingService:(id)arg1 keyedByTopic:(id)arg2 forPreferenceKey:(id)arg3 ;
-(void)_didSetTonePreferenceSuccessfullyWithKey:(id)arg1 inDomain:(id)arg2 usingPreferencesOfKind:(unsigned long long)arg3 ;
-(id)currentToneIdentifierForAlertType:(long long)arg1 ;
-(id)nameForToneIdentifier:(id)arg1 ;
-(unsigned)currentToneSoundIDForAlertType:(long long)arg1 topic:(id)arg2 ;
-(id)_soundForToneIdentifier:(id)arg1 ;
-(id)defaultToneIdentifierForAlertType:(long long)arg1 ;
-(id)filePathForToneIdentifier:(id)arg1 ;
-(BOOL)_toneWithIdentifierIsITunesRingtone:(id)arg1 ;
-(BOOL)_toneWithIdentifierIsNonDefaultSystemRingtone:(id)arg1 ;
-(BOOL)_toneWithIdentifierIsDefaultRingtone:(id)arg1 ;
-(BOOL)_toneWithIdentifierIsAlarmWakeUp:(id)arg1 ;
-(id)_filePathForToneIdentifier:(id)arg1 isValid:(BOOL*)arg2 ;
-(id)_fileNameFromToneIdentifier:(id)arg1 withPrefix:(id)arg2 ;
-(NSString *)_systemRingtoneDirectory;
-(id)_alarmWakeUpRingtoneDirectory;
-(id)_defaultRingtonePath;
-(id)_nameForToneIdentifier:(id)arg1 isValid:(BOOL*)arg2 ;
-(id)_localizedNameOfToneWithIdentifier:(id)arg1 ;
-(id)_defaultRingtoneName;
-(BOOL)_toneWithIdentifierIsMediaPlaybackArchive:(id)arg1 ;
-(BOOL)_toneWithIdentifierIsValid:(id)arg1 ;
-(id)_addToneToManifestAtPath:(id)arg1 metadata:(id)arg2 fileName:(id)arg3 mediaDirectory:(id)arg4 ;
-(id)_toneWithIdentifier:(id)arg1 ;
-(BOOL)_removeToneWithIdentifier:(id)arg1 ;
-(long long)_evaluateOrphanEntriesCleanupStatusForcingReevaluationIfPreviouslyDone:(BOOL)arg1 returningFilePathsForFoundOrphans:(id*)arg2 wasAffectedByAccidentalToneDeletion:(BOOL*)arg3 ;
-(id)_removeOrphanedPlistEntriesInManifestAtPath:(id)arg1 mediaDirectory:(id)arg2 ;
-(long long)_currentOverridePolicyForAlertType:(long long)arg1 didFindAlertOverridePolicy:(BOOL*)arg2 ;
-(void)_handleTonePreferencesChangedNotificationForPreferencesKinds:(unsigned long long)arg1 ;
-(unsigned long long)_installedTonesSize;
-(BOOL)_removeToneFromManifestAtPath:(id)arg1 fileName:(id)arg2 ;
-(BOOL)_removeAllTones;
-(void)setCurrentToneIdentifier:(id)arg1 forAlertType:(long long)arg2 ;
-(id)currentToneNameForAlertType:(long long)arg1 ;
-(unsigned)currentToneSoundIDForAlertType:(long long)arg1 ;
-(BOOL)hasSpecificDefaultToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2 ;
-(id)_previewSoundForToneIdentifier:(id)arg1 ;
-(id)subtitleForToneIdentifier:(id)arg1 ;
-(id)_toneIdentifierForFileAtPath:(id)arg1 isValid:(BOOL*)arg2 ;
-(void)importTone:(id)arg1 metadata:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)removeImportedToneWithIdentifier:(id)arg1 ;
-(id)_importPurchasedToneWithMetadata:(id)arg1 fileName:(id)arg2 ;
-(BOOL)_transferPurchasedToITunes:(id)arg1 ;
-(BOOL)_wasAffectedByAccidentalToneDeletion;
-(long long)_removeOrphanedManifestEntriesReturningFilePathsForFoundOrphans:(id*)arg1 ;
-(void)_registerDidRequestResetSyncPostAccidentalToneDeletion;
-(long long)_currentOverridePolicyForAlertType:(long long)arg1 ;
-(void)_setCurrentOverridePolicy:(long long)arg1 forAlertType:(long long)arg2 ;
-(id)_toneIdentifierWithUnderlyingPlaybackArchive:(id)arg1 ;
-(void)_handleDeviceRingtonesChangedNotification;
-(id)currentToneIdentifierForAlertType:(long long)arg1 accountIdentifier:(id)arg2 ;
-(void)setCurrentToneIdentifier:(id)arg1 forAlertType:(long long)arg2 accountIdentifier:(id)arg3 ;
@end

