//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MTDerivedPropertyChangeNotifying-Protocol.h"
#import "MTLibraryChangeNotifier-Protocol.h"

@class NSMutableDictionary, NSPersistentHistoryToken, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface MTPodcastDerivedPropertyObserver : NSObject <MTDerivedPropertyChangeNotifying, MTLibraryChangeNotifier>
{
    NSObject<OS_dispatch_queue> *_handlerQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 16 = 0x10
    _Bool _isObserving;	// 24 = 0x18
    NSMutableDictionary *_cache;	// 32 = 0x20
    NSMutableDictionary *_handlers;	// 40 = 0x28
    NSMutableDictionary *_podcastCache;	// 48 = 0x30
    NSSet *_episodePropertiesToFetch;	// 56 = 0x38
    NSSet *_podcastPropertiesToFetch;	// 64 = 0x40
    NSSet *_podcastStatsProperties;	// 72 = 0x48
    NSPersistentHistoryToken *_latestPersistentHistoryToken;	// 80 = 0x50
    CDUnknownBlockType _didFinishProcessingContextSaveHandlerForTests;	// 88 = 0x58
}

+ (id)sharedInstance;	// IMP=0x00000001000d953c
- (void).cxx_destruct;	// IMP=0x00000001000ded4c
@property(copy, nonatomic) CDUnknownBlockType didFinishProcessingContextSaveHandlerForTests; // @synthesize didFinishProcessingContextSaveHandlerForTests=_didFinishProcessingContextSaveHandlerForTests;
@property(nonatomic) _Bool isObserving; // @synthesize isObserving=_isObserving;
@property(retain, nonatomic) NSPersistentHistoryToken *latestPersistentHistoryToken; // @synthesize latestPersistentHistoryToken=_latestPersistentHistoryToken;
@property(retain, nonatomic) NSSet *podcastStatsProperties; // @synthesize podcastStatsProperties=_podcastStatsProperties;
@property(retain, nonatomic) NSSet *podcastPropertiesToFetch; // @synthesize podcastPropertiesToFetch=_podcastPropertiesToFetch;
@property(retain, nonatomic) NSSet *episodePropertiesToFetch; // @synthesize episodePropertiesToFetch=_episodePropertiesToFetch;
@property(retain, nonatomic) NSMutableDictionary *podcastCache; // @synthesize podcastCache=_podcastCache;
@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
@property(retain, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
- (_Bool)_shouldSkipSettingPropertiesForWatchPPT;	// IMP=0x00000001000dec9c
- (void)libraryDidChange:(id)arg1;	// IMP=0x00000001000dec90
- (void)notifyObserversForPodcast:(id)arg1;	// IMP=0x00000001000dea5c
- (id)countOfMyMediaEpisodesForEpisodes:(id)arg1 andPredicateForMyEpisodes:(id)arg2;	// IMP=0x00000001000de938
- (id)countOfUnplayedEpisodesForEpisodes:(id)arg1 andPredicateForEpisodesOnUnplayedTab:(id)arg2;	// IMP=0x00000001000de814
- (id)countOfNewEpisodesForEpisodes:(id)arg1;	// IMP=0x00000001000de734
- (void)setDependentPropertyValue:(id)arg1 forKey:(id)arg2 forPodcastUuid:(id)arg3;	// IMP=0x00000001000de63c
- (id)dependentPropertyForKey:(id)arg1 forPodcastUuid:(id)arg2;	// IMP=0x00000001000de5b8
- (_Bool)setDerivedPropertyValue:(id)arg1 forKey:(id)arg2 forPodcast:(id)arg3;	// IMP=0x00000001000de460
- (id)derivedPropertyValueForKey:(id)arg1 forPodcast:(id)arg2;	// IMP=0x00000001000de37c
- (id)derivedPropertiesForPodcast:(id)arg1;	// IMP=0x00000001000de2ac
- (id)_predicateForEpisodesToUpdateWithPodcastUuid:(id)arg1 predicateForUnplayedInUnplayedTab:(id)arg2 predicateForUserEpisodes:(id)arg3 predicateForTopLevelEpisodes:(id)arg4;	// IMP=0x00000001000ddd50
- (void)updateFlagForEpisodes:(id)arg1 predicateForUnplayedTab:(id)arg2 predicateForUserEpisodes:(id)arg3 podcastUuid:(id)arg4 ctx:(id)arg5;	// IMP=0x00000001000dce60
- (void)episodeResultsChangedForPodcastUuid:(id)arg1;	// IMP=0x00000001000dc8cc
- (void)reportStatsForPodcasts;	// IMP=0x00000001000dbf40
- (void)processLatestPersistentHistoryTransactions;	// IMP=0x00000001000dabfc
- (_Bool)_changeContainsRelevantPodcastChanges:(id)arg1;	// IMP=0x00000001000da9bc
- (_Bool)_changeContainsRelevantEpisodeChanges:(id)arg1;	// IMP=0x00000001000da77c
- (_Bool)_shouldUpdatePodcastsStatsForChange:(id)arg1;	// IMP=0x00000001000da4bc
- (id)_historyTransactionsSinceLatestPersistentHistoryToken;	// IMP=0x00000001000da084
- (void)_updateDerivedPropertiesForPodcastUUIDs:(id)arg1;	// IMP=0x00000001000d9ee0
- (void)_setLastProcessedPersistentHistoryToken:(id)arg1;	// IMP=0x00000001000d9c54
- (void)_fetchLatestProcessedPersistentHistoryToken;	// IMP=0x00000001000d9a38
- (void)stopObserving;	// IMP=0x00000001000d9980
- (void)startObserving;	// IMP=0x00000001000d98a0
- (id)init;	// IMP=0x00000001000d95a8
- (void)removeDerivedPropertyChangeHandler:(id)arg1;	// IMP=0x00000001000deeb4
- (id)addDerivedPropertyChangeHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000deddc
- (unsigned long long)countOfMyMediaEpisodesForPodcast:(id)arg1;	// IMP=0x00000001000deff4
- (unsigned long long)countOfUnplayedEpisodesForPodcast:(id)arg1;	// IMP=0x00000001000def9c
- (unsigned long long)countOfNewEpisodesForPodcast:(id)arg1;	// IMP=0x00000001000def44

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

