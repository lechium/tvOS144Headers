//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MCProfileConnectionObserver-Protocol.h"
#import "PBAppInfoStorePolicyProviding-Protocol.h"

@class NSArray, NSObservation, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface PBAppInfoPolicy : NSObject <MCProfileConnectionObserver, PBAppInfoStorePolicyProviding>
{
    _Bool _queue_showInternalApps;	// 8 = 0x8
    _Bool _queue_showNonDefaultSystemApps;	// 9 = 0x9
    _Bool _queue_enforceSystemAppProvisioning;	// 10 = 0xa
    NSObservation *_enforceProvisioningObserver;	// 16 = 0x10
    NSObservation *_internalAppsEnabledObserver;	// 24 = 0x18
    NSObservation *_nonDefaultSystemAppsEnabledObserver;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_accessQueue;	// 40 = 0x28
    NSArray *_queue_appWhitelistOptions;	// 48 = 0x30
    NSArray *_queue_restrictedHomscreenLayout;	// 56 = 0x38
    NSSet *_queue_exclusionTags;	// 64 = 0x40
}

+ (_Bool)_isApplicationHiddenWithPreference:(id)arg1;	// IMP=0x0000000100080d28
+ (id)_whitelistBlacklistExemptBundleIdentifiers;	// IMP=0x0000000100080c34
+ (id)_provisioningExemptBundleIdentifiers;	// IMP=0x0000000100080a70
+ (_Bool)_isAppRestrictionProfileInstalled;	// IMP=0x00000001000808b8
+ (_Bool)_checkApplicationIsRestricted:(id)arg1;	// IMP=0x0000000100080444
- (void).cxx_destruct;	// IMP=0x0000000100081264
@property(readonly, nonatomic) _Bool queue_enforceSystemAppProvisioning; // @synthesize queue_enforceSystemAppProvisioning=_queue_enforceSystemAppProvisioning;
@property(readonly, nonatomic) _Bool queue_showNonDefaultSystemApps; // @synthesize queue_showNonDefaultSystemApps=_queue_showNonDefaultSystemApps;
@property(readonly, nonatomic) _Bool queue_showInternalApps; // @synthesize queue_showInternalApps=_queue_showInternalApps;
@property(readonly, copy, nonatomic) NSSet *queue_exclusionTags; // @synthesize queue_exclusionTags=_queue_exclusionTags;
@property(readonly, copy, nonatomic) NSArray *queue_restrictedHomscreenLayout; // @synthesize queue_restrictedHomscreenLayout=_queue_restrictedHomscreenLayout;
@property(readonly, copy, nonatomic) NSArray *queue_appWhitelistOptions; // @synthesize queue_appWhitelistOptions=_queue_appWhitelistOptions;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(readonly, nonatomic) NSObservation *nonDefaultSystemAppsEnabledObserver; // @synthesize nonDefaultSystemAppsEnabledObserver=_nonDefaultSystemAppsEnabledObserver;
@property(readonly, nonatomic) NSObservation *internalAppsEnabledObserver; // @synthesize internalAppsEnabledObserver=_internalAppsEnabledObserver;
@property(readonly, nonatomic) NSObservation *enforceProvisioningObserver; // @synthesize enforceProvisioningObserver=_enforceProvisioningObserver;
- (void)_refreshCachedManagedAppLayout;	// IMP=0x00000001000802cc
- (void)_refreshCachedAppWhitelistOptions;	// IMP=0x0000000100080154
- (void)_setNeedsReload;	// IMP=0x00000001000800e4
- (void)_updateCachedPreferences;	// IMP=0x000000010007fe74
- (_Bool)_queueUpdateCachedPreferences;	// IMP=0x000000010007fb54
- (void)programmingGuideDidUpdate:(id)arg1;	// IMP=0x000000010007faf0
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000010007fa5c
- (void)profileConnectionDidReceiveAppWhitelistChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000010007f9b4
- (void)managedHomeScreenLayoutChanged:(id)arg1;	// IMP=0x000000010007f93c
- (id)configurationForProposedAppInfos:(id)arg1;	// IMP=0x000000010007e0e8
- (_Bool)isPlaceholderHidden:(id)arg1;	// IMP=0x000000010007e08c
- (_Bool)isApplicationHidden:(id)arg1;	// IMP=0x000000010007dd38
- (_Bool)isPlaceholderEnabled:(id)arg1 reasons:(unsigned long long *)arg2;	// IMP=0x000000010007dcd0
- (_Bool)isApplicationEnabled:(id)arg1 reasons:(unsigned long long *)arg2;	// IMP=0x000000010007d054
- (void)dealloc;	// IMP=0x000000010007cec0
- (id)init;	// IMP=0x000000010007c42c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
