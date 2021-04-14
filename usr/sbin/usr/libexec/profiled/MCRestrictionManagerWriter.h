//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCRestrictionManager.h>

@class NSDictionary, NSMutableSet, NSNumber;

@interface MCRestrictionManagerWriter : MCRestrictionManager
{
    int _senderPID;	// 8 = 0x8
    NSDictionary *_clientTypeLoaders;	// 16 = 0x10
    NSNumber *_memberQueuePasscodeCompliesWithRestrictions;	// 24 = 0x18
    NSNumber *_memberQueuePasscodeCompliesWithProfileRestrictions;	// 32 = 0x20
    NSMutableSet *_memberQueueRecomputePasscodeComplianceForClientUUID;	// 40 = 0x28
}

+ (id)enforcedAppWhitelistRestrictions;	// IMP=0x0000000100063928
+ (id)sharedManager;	// IMP=0x00000001000638ec
- (void).cxx_destruct;	// IMP=0x000000010006b9a8
@property(retain, nonatomic) NSMutableSet *memberQueueRecomputePasscodeComplianceForClientUUID; // @synthesize memberQueueRecomputePasscodeComplianceForClientUUID=_memberQueueRecomputePasscodeComplianceForClientUUID;
@property(retain, nonatomic) NSNumber *memberQueuePasscodeCompliesWithProfileRestrictions; // @synthesize memberQueuePasscodeCompliesWithProfileRestrictions=_memberQueuePasscodeCompliesWithProfileRestrictions;
@property(retain, nonatomic) NSNumber *memberQueuePasscodeCompliesWithRestrictions; // @synthesize memberQueuePasscodeCompliesWithRestrictions=_memberQueuePasscodeCompliesWithRestrictions;
@property(readonly, nonatomic) NSDictionary *clientTypeLoaders; // @synthesize clientTypeLoaders=_clientTypeLoaders;
@property(nonatomic) int senderPID; // @synthesize senderPID=_senderPID;
- (void)recomputeUserRestrictionsAndEffectiveUserSettings;	// IMP=0x000000010006b594
- (void)recomputeEffectiveUserSettingsPasscode:(id)arg1;	// IMP=0x000000010006b4c8
- (void)resetAllSettingsToDefaultsSender:(id)arg1;	// IMP=0x000000010006b384
- (void)removeValueSetting:(id)arg1 sender:(id)arg2;	// IMP=0x000000010006b178
- (void)removeBoolSetting:(id)arg1 sender:(id)arg2;	// IMP=0x000000010006af3c
- (void)setUnionValues:(id)arg1 forSetting:(id)arg2 sender:(id)arg3;	// IMP=0x000000010006ad14
- (void)setIntersectionValues:(id)arg1 forSetting:(id)arg2 sender:(id)arg3;	// IMP=0x000000010006aaec
- (void)setValue:(id)arg1 forSetting:(id)arg2 sender:(id)arg3;	// IMP=0x000000010006a968
- (void)setBoolValue:(_Bool)arg1 ask:(_Bool)arg2 forSetting:(id)arg3 sender:(id)arg4;	// IMP=0x000000010006a744
- (void)setBoolValue:(_Bool)arg1 forSetting:(id)arg2 sender:(id)arg3;	// IMP=0x000000010006a6e8
- (_Bool)setParametersForSettingsByType:(id)arg1 configurationUUID:(id)arg2 toSystem:(_Bool)arg3 user:(_Bool)arg4 passcode:(id)arg5 credentialSet:(id)arg6 sender:(id)arg7;	// IMP=0x000000010006a3dc
- (_Bool)setParametersForSettingsByType:(id)arg1 sender:(id)arg2;	// IMP=0x000000010006a364
- (_Bool)memberQueueSetParametersForSettingsByType:(id)arg1 configurationUUID:(id)arg2 toSystem:(_Bool)arg3 user:(_Bool)arg4 passcode:(id)arg5 credentialSet:(id)arg6 sender:(id)arg7;	// IMP=0x000000010006a068
- (id)_memberQueueNewUserSettingsWithParametersForSettingsByType:(id)arg1 currentUserSettings:(id)arg2;	// IMP=0x0000000100069c5c
- (_Bool)memberQueueRecomputeEffectiveUserSettingsPasscode:(id)arg1 credentialSet:(id)arg2;	// IMP=0x0000000100068edc
- (void)memberQueueCommitEffectiveUserSettingsToDiskOldEffectiveUserSettings:(id)arg1;	// IMP=0x0000000100068c6c
- (void)memberQueueCommitUserSettingsToDisk;	// IMP=0x0000000100068a74
- (void)notifyHaveSeenComplianceMessageWithLastLockDate:(id)arg1;	// IMP=0x0000000100068910
- (void)setShowNagMessage;	// IMP=0x0000000100068828
- (void)clearAllPasscodeComplianceCaches;	// IMP=0x000000010006879c
- (void)memberQueueClearAllPasscodeComplianceCaches;	// IMP=0x00000001000686f8
- (void)memberQueueClearProfileRestrictionPasscodeComplianceCache;	// IMP=0x000000010006867c
- (void)memberQueueClearRestrictionPasscodeComplianceCache;	// IMP=0x0000000100068600
- (void)memberQueueCacheClientRestrictionPasscodeCompliance;	// IMP=0x0000000100067ff0
- (void)memberQueueMarkToClearPasscodeComplianceCacheWithOldSystemClientRestrictions:(id)arg1 newSystemClientRestrictions:(id)arg2;	// IMP=0x0000000100067adc
- (_Bool)recomputeNagMetadata;	// IMP=0x0000000100066db8
- (_Bool)removeOrphanedClientRestrictions;	// IMP=0x00000001000669c8
- (id)orphanedClientUUIDsForClientRestrictionDictionary:(id)arg1;	// IMP=0x0000000100066418
- (void)notifyClientsToRecomputeCompliance;	// IMP=0x0000000100066238
- (id)_liveClientUUIDsForClientType:(id)arg1 outLoaderMissing:(_Bool *)arg2;	// IMP=0x0000000100066090
- (id)orphanCheckUnexemptClientTypes;	// IMP=0x0000000100065fc0
- (id)orphanCheckExemptClientTypes;	// IMP=0x0000000100065f80
- (_Bool)setClientRestrictions:(id)arg1 appsAndOptions:(id)arg2 system:(_Bool)arg3 clientType:(id)arg4 clientUUID:(id)arg5 sender:(id)arg6 localizedClientDescription:(id)arg7 localizedWarning:(id)arg8 shouldRecomputeNag:(_Bool)arg9 outRestrictionsChanged:(_Bool *)arg10 outEffectiveSettingsChanged:(_Bool *)arg11 outRecomputedNag:(_Bool *)arg12 outError:(id *)arg13;	// IMP=0x00000001000656d0
- (_Bool)setClientRestrictions:(id)arg1 system:(_Bool)arg2 clientType:(id)arg3 clientUUID:(id)arg4 sender:(id)arg5 localizedClientDescription:(id)arg6 localizedWarning:(id)arg7 shouldRecomputeNag:(_Bool)arg8 outRestrictionsChanged:(_Bool *)arg9 outEffectiveSettingsChanged:(_Bool *)arg10 outRecomputedNag:(_Bool *)arg11 outError:(id *)arg12;	// IMP=0x00000001000655bc
- (_Bool)setClientRestrictions:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 sender:(id)arg4 localizedClientDescription:(id)arg5 localizedWarning:(id)arg6 shouldRecomputeNag:(_Bool)arg7 outRestrictionsChanged:(_Bool *)arg8 outEffectiveSettingsChanged:(_Bool *)arg9 outRecomputedNag:(_Bool *)arg10 outError:(id *)arg11;	// IMP=0x00000001000654ac
- (_Bool)setClientRestrictions:(id)arg1 system:(_Bool)arg2 clientType:(id)arg3 clientUUID:(id)arg4 sender:(id)arg5 localizedClientDescription:(id)arg6 localizedWarning:(id)arg7 outRestrictionsChanged:(_Bool *)arg8 outEffectiveSettingsChanged:(_Bool *)arg9 outRecomputedNag:(_Bool *)arg10 outError:(id *)arg11;	// IMP=0x0000000100065398
- (_Bool)setClientRestrictions:(id)arg1 appsAndOptions:(id)arg2 clientType:(id)arg3 clientUUID:(id)arg4 sender:(id)arg5 localizedClientDescription:(id)arg6 localizedWarning:(id)arg7 outRestrictionsChanged:(_Bool *)arg8 outEffectiveSettingsChanged:(_Bool *)arg9 outRecomputedNag:(_Bool *)arg10 outError:(id *)arg11;	// IMP=0x0000000100065270
- (_Bool)setClientRestrictions:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 sender:(id)arg4 localizedClientDescription:(id)arg5 localizedWarning:(id)arg6 outRestrictionsChanged:(_Bool *)arg7 outEffectiveSettingsChanged:(_Bool *)arg8 outRecomputedNag:(_Bool *)arg9 outError:(id *)arg10;	// IMP=0x0000000100065160
- (_Bool)setAllClientRestrictions:(id)arg1 sender:(id)arg2 outRestrictionsChanged:(_Bool *)arg3 outEffectiveSettingsChanged:(_Bool *)arg4 outRecomputedNag:(_Bool *)arg5 outError:(id *)arg6;	// IMP=0x0000000100064e6c
- (_Bool)memberQueueSetSystemClientRestrictions:(id)arg1 userClientRestrictions:(id)arg2 sender:(id)arg3 outRestrictionsChanged:(_Bool *)arg4 outEffectiveSettingsChanged:(_Bool *)arg5 outError:(id *)arg6;	// IMP=0x0000000100064a80
- (_Bool)memberQueueSetAllClientRestrictions:(id)arg1 sender:(id)arg2 outRestrictionsChanged:(_Bool *)arg3 outEffectiveSettingsChanged:(_Bool *)arg4 outError:(id *)arg5;	// IMP=0x00000001000649bc
- (void)setUserInfo:(id)arg1 forClientUUID:(id)arg2 sender:(id)arg3;	// IMP=0x000000010006471c
- (void)setUserInfo:(id)arg1 forClientUUID:(id)arg2;	// IMP=0x00000001000646c8
- (void)memberQueueCommitClientRestrictionsToDisk;	// IMP=0x000000010006456c
- (_Bool)setSystemProfileRestrictions:(id)arg1 userProfileRestrictions:(id)arg2 sender:(id)arg3 outRestrictionsChanged:(_Bool *)arg4 outEffectiveSettingsChanged:(_Bool *)arg5 outAppWhitelistSettingsChanged:(_Bool *)arg6 outRecomputedNag:(_Bool *)arg7 outError:(id *)arg8;	// IMP=0x0000000100063b9c
- (void)memberQueueCommitRestrictionsToDisk;	// IMP=0x0000000100063a8c
- (id)_init;	// IMP=0x0000000100063a34

@end

