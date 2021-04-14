//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PodcastsFoundation/MTPlaylist.h>

#import "IMMetricsDataSource-Protocol.h"

@class MTEpisode, NSString;

@interface MTPlaylist (DB) <IMMetricsDataSource>
+ (id)predicateForMediaLibraryId:(long long)arg1;	// IMP=0x00000001000c6c84
+ (id)predicateForVisiblePlaylistWithUUID:(id)arg1;	// IMP=0x00000001000c6c30
+ (id)predicateForFlag:(int)arg1 isTrue:(_Bool)arg2;	// IMP=0x00000001000c6bc8
+ (id)topLevelPlaylistsExcludingFoldersPredicate;	// IMP=0x00000001000c6b34
+ (id)containerOrderOptionValues;	// IMP=0x00000001000c6b18
+ (id)containerOrderOptionArray:(_Bool)arg1;	// IMP=0x00000001000c69a0
+ (id)stringForContainerOrder:(int)arg1 short:(_Bool)arg2;	// IMP=0x00000001000c6818
+ (long long)getITunesPlaylistsCount;	// IMP=0x00000001000c65fc
+ (void)prepareForPlatform:(id)arg1;	// IMP=0x00000001000c4ad0
+ (id)insertNewPlaylistInManagedObjectContext:(id)arg1 uuid:(id)arg2 defaultSettings:(id)arg3;	// IMP=0x00000001000c48fc
+ (id)insertNewPlaylistInManagedObjectContext:(id)arg1;	// IMP=0x00000001000c483c
+ (id)topLevelPlaylistsPredicate;	// IMP=0x000000010014dcfc
+ (id)sortDescriptors;	// IMP=0x00000001001697c0
- (_Bool)needsUpdate;	// IMP=0x000000010002fd34
- (void)setNeedsUpdate:(_Bool)arg1;	// IMP=0x000000010002fcd0
- (id)metricsAdditionalData;	// IMP=0x00000001000c6d68
- (id)metricsContentIdentifier;	// IMP=0x00000001000c6d14
- (long long)getFolderSubPlaylistsCount;	// IMP=0x00000001000c63c0
@property(readonly, nonatomic) MTEpisode *nextEpisode;
@property(readonly, nonatomic) double totalDuration;
- (void)removeEpisode:(id)arg1 inBulkTransaction:(_Bool)arg2;	// IMP=0x00000001000c606c
- (void)removeEpisode:(id)arg1;	// IMP=0x00000001000c605c
- (void)removeEpisodes:(id)arg1;	// IMP=0x00000001000c5e9c
- (void)removePodcastEpisodes:(id)arg1 shouldSave:(_Bool)arg2;	// IMP=0x00000001000c5ae4
- (void)removePodcast:(id)arg1;	// IMP=0x00000001000c5814
- (void)recalculateEpisodeCounts;	// IMP=0x00000001000c56c4
@property(nonatomic) _Bool hasBeenSynced;
- (_Bool)updateUnplayedCount;	// IMP=0x00000001000c546c
@property(readonly, nonatomic) _Bool isEditable;
- (void)forceUpdate;	// IMP=0x00000001000c5404
@property(nonatomic) _Bool isUngroupedList;
@property(nonatomic) _Bool isItunesSmartPlaylist;
@property(nonatomic) _Bool includesAllPodcasts;
@property(nonatomic) _Bool isBuiltIn;
@property(nonatomic) _Bool isItunesPlaylist;
@property(nonatomic) _Bool isFolder;
- (id)podcasts;	// IMP=0x00000001000c508c
- (void)setEpisodes:(id)arg1;	// IMP=0x00000001000c4fcc
- (void)setPodcasts:(id)arg1;	// IMP=0x00000001000c4ad4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

