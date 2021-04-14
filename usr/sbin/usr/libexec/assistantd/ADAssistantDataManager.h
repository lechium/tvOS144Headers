//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADAddressBookManagerDelegate-Protocol.h"
#import "ADDisplayScaleContextCollectorDelegate-Protocol.h"
#import "ADLocalMeCardStoreObserving-Protocol.h"
#import "MCProfileConnectionObserver-Protocol.h"
#import "TUCallCapabilitiesDelegate-Protocol.h"

@class ADAddressBookManager, ADDisplayScaleContextCollector, NSArray, NSHashTable, NSString, SAMediaContentRatingRestrictions, SASetAssistantData, SAVoice;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface ADAssistantDataManager : NSObject <TUCallCapabilitiesDelegate, MCProfileConnectionObserver, ADAddressBookManagerDelegate, ADDisplayScaleContextCollectorDelegate, ADLocalMeCardStoreObserving>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
    NSArray *_cachedMeCards;	// 24 = 0x18
    NSObject<OS_dispatch_group> *_fetchingMeCardGroup;	// 32 = 0x20
    NSArray *_cachedRestrictions;	// 40 = 0x28
    _Bool _cachedCensorSpeech;	// 48 = 0x30
    _Bool _cachedAllowUserGeneratedContent;	// 49 = 0x31
    _Bool _cachedInRetailStoreDemoMode;	// 50 = 0x32
    NSString *_cachedCountryCode;	// 56 = 0x38
    _Bool _receivedGeoCountryConfigurationResponse;	// 64 = 0x40
    _Bool _voiceTriggerEnabled;	// 65 = 0x41
    SAVoice *_cachedVoice;	// 72 = 0x48
    _Bool _initialFetchComplete;	// 80 = 0x50
    _Bool _cachedAllowsExplicitContent;	// 81 = 0x51
    SAMediaContentRatingRestrictions *_cachedContentRatingRestrictions;	// 88 = 0x58
    _Bool _cachedSupportsTelephonyCalls;	// 96 = 0x60
    _Bool _cachedIsSiriServerLoggingEnabled;	// 97 = 0x61
    ADDisplayScaleContextCollector *_displayScaleMonitor;	// 104 = 0x68
    _Bool _cachedServerFlagsEnabled;	// 112 = 0x70
    _Bool _watchIsInverted;	// 113 = 0x71
    _Bool _watchIsOnLeftWrist;	// 114 = 0x72
    NSString *_cachedStoreFrontId;	// 120 = 0x78
    _Bool _observingiTunesChanges;	// 128 = 0x80
    SASetAssistantData *_cachedSAD;	// 136 = 0x88
    NSString *_unredactedAnchor;	// 144 = 0x90
    _Bool _voiceOverIsActive;	// 152 = 0x98
    ADAddressBookManager *_addressBookManager;	// 160 = 0xa0
}

+ (id)sharedDataManager;	// IMP=0x000000010024c454
- (void).cxx_destruct;	// IMP=0x0000000100252674
@property(readonly, nonatomic, getter=_addressBookManager) ADAddressBookManager *addressBookManager; // @synthesize addressBookManager=_addressBookManager;
@property(nonatomic) _Bool voiceOverIsActive; // @synthesize voiceOverIsActive=_voiceOverIsActive;
- (void)localMeCardDidUpdate:(id)arg1;	// IMP=0x00000001002524a4
- (void)_updateVoiceOverStatus:(CDUnknownBlockType)arg1;	// IMP=0x00000001002523c0
- (void)_updateItunesStoreIdentifier:(CDUnknownBlockType)arg1;	// IMP=0x000000010025210c
- (void)_updateCallCapability:(CDUnknownBlockType)arg1;	// IMP=0x0000000100251f60
- (void)_updateVoice:(CDUnknownBlockType)arg1;	// IMP=0x0000000100251430
- (id)_cachedRestrictions;	// IMP=0x00000001002513fc
- (void)_updateRestrictions:(CDUnknownBlockType)arg1;	// IMP=0x0000000100250870
- (void)_fetchSiriServerLoggingSetting:(CDUnknownBlockType)arg1;	// IMP=0x0000000100250788
- (id)_mcQueue;	// IMP=0x000000010025071c
- (id)_cachedAssistantData;	// IMP=0x0000000100250654
- (void)_onMainThreadUpdateCountryCodeWithCountryConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100250394
- (void)_notifyObserversOfSiriServerLoggingStatus;	// IMP=0x00000001002500c0
- (void)_notifyObserversOfSAD:(id)arg1;	// IMP=0x000000010024ff4c
- (void)_generateAssistantData;	// IMP=0x000000010024f6d8
- (id)_redactedCopyMeCards:(id)arg1;	// IMP=0x000000010024f548
- (void)_censorSpeechDidChange:(id)arg1;	// IMP=0x000000010024f3f0
- (void)_safeUpdateVoiceOverStatus;	// IMP=0x000000010024f324
- (void)_safeGenerateAssistantDataForVoiceTriggerEnabled;	// IMP=0x000000010024f1c0
- (void)_countryCodeDidChange:(id)arg1;	// IMP=0x000000010024f01c
- (void)_outputVoiceDidChange:(id)arg1;	// IMP=0x000000010024eec4
- (void)_systemTimeZoneDidChange:(id)arg1;	// IMP=0x000000010024eda4
- (void)_storeFrontDidChange:(id)arg1;	// IMP=0x000000010024eafc
- (void)_locationRestrictionDidChange:(id)arg1;	// IMP=0x000000010024e9a4
- (void)_currentLocaleDidChange:(id)arg1;	// IMP=0x000000010024e86c
- (void)_voiceAssetsUpdated:(id)arg1;	// IMP=0x000000010024e714
- (void)contextCollector:(id)arg1 didChangeDisplayScale:(double)arg2;	// IMP=0x000000010024e5b8
- (void)addressBookManagerDidUpdateData:(id)arg1 meCard:(id)arg2;	// IMP=0x000000010024e384
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000010024e210
- (void)didChangeTelephonyCallingSupport;	// IMP=0x000000010024e10c
- (id)unredactedAnchor;	// IMP=0x000000010024dffc
- (void)getMeCardsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010024da48
- (void)getiTunesStoreFrontIdentifierWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010024d850
- (void)removeiTunesObserver;	// IMP=0x000000010024d84c
- (void)addiTunesObserver;	// IMP=0x000000010024d848
- (void)requestAssistantDataUpdate;	// IMP=0x000000010024d71c
- (void)removeObserver:(id)arg1;	// IMP=0x000000010024d684
- (void)addObserver:(id)arg1;	// IMP=0x000000010024d5ec
- (void)dealloc;	// IMP=0x000000010024d534
- (id)init;	// IMP=0x000000010024c4c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
