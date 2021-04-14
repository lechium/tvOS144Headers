//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MTPodcastDetailEpisodeSectionDelegate-Protocol.h"

@class NSArray, NSString;
@protocol MTPodcastDetailDataSourceDelegate;

@interface MTPodcastDetailDataSource : NSObject <MTPodcastDetailEpisodeSectionDelegate>
{
    NSString *_podcastUuid;	// 8 = 0x8
    id <MTPodcastDetailDataSourceDelegate> _delegate;	// 16 = 0x10
    unsigned long long _selectedTab;	// 24 = 0x18
    NSArray *_sections;	// 32 = 0x20
}

+ (id)predicateForPodcast:(id)arg1 sectionType:(unsigned long long)arg2;	// IMP=0x0000000100083938
+ (id)predicateForPlayingPodcast:(id)arg1 sectionType:(unsigned long long)arg2;	// IMP=0x0000000100083804
+ (id)sortDescriptorsForPodcastUuid:(id)arg1;	// IMP=0x00000001000829e8
- (void).cxx_destruct;	// IMP=0x0000000100083d44
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) unsigned long long selectedTab; // @synthesize selectedTab=_selectedTab;
@property(nonatomic) __weak id <MTPodcastDetailDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *podcastUuid; // @synthesize podcastUuid=_podcastUuid;
- (id)createSectionForFeed;	// IMP=0x0000000100083634
- (id)createSectionForSaved;	// IMP=0x0000000100083478
- (id)createSectionForIsFromiTunesSync;	// IMP=0x000000010008324c
- (id)createSectionForPlayedToBeDeleted;	// IMP=0x0000000100083020
- (id)createSectionForDarkPlacard;	// IMP=0x0000000100082f88
- (id)createSectionForEmptyOverlay;	// IMP=0x0000000100082ef0
- (id)createSectionForOtherEpisodes;	// IMP=0x0000000100082cc0
- (id)createSectionForLimitedUnplayed;	// IMP=0x0000000100082ac4
- (void)episodeSection:(id)arg1 didChangeObject:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4 newIndex:(unsigned long long)arg5;	// IMP=0x0000000100082840
- (void)sectionDidChangeContent:(id)arg1;	// IMP=0x00000001000827d4
- (void)sectionWillChangeContent:(id)arg1;	// IMP=0x0000000100082768
- (unsigned long long)indexForSection:(id)arg1;	// IMP=0x00000001000826f0
- (id)savedSections;	// IMP=0x0000000100082620
- (id)feedSections;	// IMP=0x0000000100082528
- (id)unplayedSections;	// IMP=0x00000001000823d8
- (id)podcast;	// IMP=0x000000010008233c
- (void)reloadData;	// IMP=0x00000001000822e0
- (id)initWithPodcastUuid:(id)arg1;	// IMP=0x0000000100082240

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

