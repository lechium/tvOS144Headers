//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVPlayback/TVPPlaylist.h>

#import "MPRequestResponseControllerDelegate-Protocol.h"
#import "TVMusicAirplayDetectorDelegate-Protocol.h"
#import "TVPMusicPlaylistTransitioning-Protocol.h"

@class MPAVRoute, MPAVRoutingController, MPCPlayerResponse, MPCPlayerResponseItem, MPModelGenericObject, MPRequestResponseController, NSArray, NSObject, NSString, TVMusicAirplayDetector;
@protocol OS_dispatch_queue, OS_dispatch_source, TVMusicPlayQueueDelegate;

@interface TVMusicPlayQueue : TVPPlaylist <MPRequestResponseControllerDelegate, TVMusicAirplayDetectorDelegate, TVPMusicPlaylistTransitioning>
{
    _Bool _supportsShuffle;	// 8 = 0x8
    _Bool _supportsRepeat;	// 9 = 0x9
    long long _repeatMode;	// 16 = 0x10
    _Bool _shuffleEnabled;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_invalidationQueue;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_invalidationTimer;	// 40 = 0x28
    TVMusicAirplayDetector *_airplayDetector;	// 48 = 0x30
    _Bool _isRadioPlayback;	// 56 = 0x38
    _Bool _isVideoPlayback;	// 57 = 0x39
    _Bool _isAirplayActive;	// 58 = 0x3a
    _Bool _isUpdating;	// 59 = 0x3b
    _Bool _externalEndpointsAvailable;	// 60 = 0x3c
    _Bool _pendingElapsedTimeChange;	// 61 = 0x3d
    _Bool _transitioningPlaylist;	// 62 = 0x3e
    NSObject<TVMusicPlayQueueDelegate> *_delegate;	// 64 = 0x40
    MPCPlayerResponseItem *_lastPlayingItem;	// 72 = 0x48
    NSString *_radioStationName;	// 80 = 0x50
    double _pendingElapsedTime;	// 88 = 0x58
    MPRequestResponseController *_requestResponseController;	// 96 = 0x60
    MPCPlayerResponse *_playerResponse;	// 104 = 0x68
    NSArray *_mediaItems;	// 112 = 0x70
    MPCPlayerResponse *_previousPlayerResponse;	// 120 = 0x78
    NSString *_tracklistIdentifier;	// 128 = 0x80
    MPModelGenericObject *_currentSectionMetadataObject;	// 136 = 0x88
    MPAVRoutingController *_routingController;	// 144 = 0x90
    CDStruct_fce57115 _durationSnapshot;	// 152 = 0x98
}

+ (id)_stringForMPCPlayerState:(long long)arg1;	// IMP=0x00000001000406ec
+ (_Bool)_isNewTracklist:(id)arg1 equalToOldTracklist:(id)arg2;	// IMP=0x0000000100040260
- (void).cxx_destruct;	// IMP=0x0000000100041524
@property(retain, nonatomic) MPAVRoutingController *routingController; // @synthesize routingController=_routingController;
@property(retain, nonatomic) MPModelGenericObject *currentSectionMetadataObject; // @synthesize currentSectionMetadataObject=_currentSectionMetadataObject;
@property(retain, nonatomic) NSString *tracklistIdentifier; // @synthesize tracklistIdentifier=_tracklistIdentifier;
@property(nonatomic, getter=isTransitioningPlaylist) _Bool transitioningPlaylist; // @synthesize transitioningPlaylist=_transitioningPlaylist;
@property(retain, nonatomic) MPCPlayerResponse *previousPlayerResponse; // @synthesize previousPlayerResponse=_previousPlayerResponse;
@property(retain, nonatomic) NSArray *mediaItems; // @synthesize mediaItems=_mediaItems;
@property(retain, nonatomic) MPCPlayerResponse *playerResponse; // @synthesize playerResponse=_playerResponse;
@property(retain, nonatomic) MPRequestResponseController *requestResponseController; // @synthesize requestResponseController=_requestResponseController;
@property(nonatomic, getter=isPendingElapsedTimeChange) _Bool pendingElapsedTimeChange; // @synthesize pendingElapsedTimeChange=_pendingElapsedTimeChange;
@property(nonatomic) double pendingElapsedTime; // @synthesize pendingElapsedTime=_pendingElapsedTime;
@property _Bool externalEndpointsAvailable; // @synthesize externalEndpointsAvailable=_externalEndpointsAvailable;
@property(nonatomic) _Bool isUpdating; // @synthesize isUpdating=_isUpdating;
@property(nonatomic) _Bool isAirplayActive; // @synthesize isAirplayActive=_isAirplayActive;
@property(nonatomic) _Bool isVideoPlayback; // @synthesize isVideoPlayback=_isVideoPlayback;
@property(nonatomic) _Bool isRadioPlayback; // @synthesize isRadioPlayback=_isRadioPlayback;
@property(retain, nonatomic) NSString *radioStationName; // @synthesize radioStationName=_radioStationName;
@property(nonatomic) CDStruct_fce57115 durationSnapshot; // @synthesize durationSnapshot=_durationSnapshot;
@property(retain, nonatomic) MPCPlayerResponseItem *lastPlayingItem; // @synthesize lastPlayingItem=_lastPlayingItem;
@property(nonatomic) __weak NSObject<TVMusicPlayQueueDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool supportsRepeat; // @synthesize supportsRepeat=_supportsRepeat;
@property(nonatomic) _Bool supportsShuffle; // @synthesize supportsShuffle=_supportsShuffle;
- (void)_libraryWasUpdated:(id)arg1;	// IMP=0x000000010004112c
- (void)_activeSystemRouteDidChange:(id)arg1;	// IMP=0x0000000100041060
- (void)_repeatModeSettingDidChange:(id)arg1;	// IMP=0x0000000100040e90
- (void)_applicationWillResignActive:(id)arg1;	// IMP=0x0000000100040da0
- (void)_applicationDidBecomeActive:(id)arg1;	// IMP=0x0000000100040ca0
- (id)convertPreviousIndexPathToIndexPathForUpdatedPlaylist:(id)arg1;	// IMP=0x0000000100040790
- (_Bool)_isUserSubscribed;	// IMP=0x000000010004020c
- (void)_updatePlayQueue;	// IMP=0x000000010003e6ec
- (long long)_repeatModeFromRepeatType:(long long)arg1;	// IMP=0x000000010003e6d4
- (long long)_tracklistRepeatMode;	// IMP=0x000000010003e670
- (id)_displaySectionMetadataForItemAtIndexPath:(id)arg1 tracklist:(id)arg2;	// IMP=0x000000010003e504
- (id)_mediaItemForMPCPlayerResponseItem:(id)arg1 section:(id)arg2 atIndexPath:(id)arg3 tracklist:(id)arg4;	// IMP=0x000000010003dc64
- (void)_updateMediaItemsWithTrackList:(id)arg1;	// IMP=0x000000010003d994
- (void)_performPlayerCommandRequest:(id)arg1 name:(id)arg2;	// IMP=0x000000010003d6ec
- (void)_performPlayerCommand:(long long)arg1 name:(id)arg2;	// IMP=0x000000010003d538
- (id)_createGlobalPlayerPathWithRoute:(id)arg1;	// IMP=0x000000010003d3d4
- (void)_updatePlayerPathWithRoute:(id)arg1;	// IMP=0x000000010003d1fc
- (void)airplayDetectorAirplayEnded:(id)arg1;	// IMP=0x000000010003cedc
- (void)airplayDetectorAirplayStarted:(id)arg1;	// IMP=0x000000010003cbbc
- (_Bool)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2;	// IMP=0x000000010003c7b8
- (void)controller:(id)arg1 defersResponseReplacement:(CDUnknownBlockType)arg2;	// IMP=0x000000010003c60c
- (id)sectionForItemWithIdentifiers:(id)arg1;	// IMP=0x000000010003c2e4
- (id)metadataObjectMatchingIdentifierSet:(id)arg1;	// IMP=0x000000010003bfb0
@property(readonly, nonatomic) _Bool isMusicAppQueue;
@property(readonly, nonatomic) _Bool isLocalDeviceQueue;
- (void)addToPlayQueueWithPlaybackIntent:(id)arg1 playNext:(_Bool)arg2;	// IMP=0x000000010003ba44
- (_Bool)canAddToPlayQueueAtEndWithPlaybackIntent:(id)arg1;	// IMP=0x000000010003b96c
- (_Bool)canAddToPlayQueueNextWithPlaybackIntent:(id)arg1;	// IMP=0x000000010003b894
- (void)clearPlayQueueWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010003b4e0
- (void)replacePlayQueueWithPlaybackIntent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003af94
- (void)_setQueueEndAction:(long long)arg1;	// IMP=0x000000010003ac3c
@property(nonatomic) long long queueEndAction;
- (_Bool)_isQueueEndActionAvailable:(long long)arg1 forTracklist:(id)arg2;	// IMP=0x000000010003aab0
- (_Bool)isQueueEndActionAvailable:(long long)arg1;	// IMP=0x000000010003aa48
- (long long)_mpcQueueEndActionFromQueueEndAction:(long long)arg1;	// IMP=0x000000010003aa3c
- (long long)repeatMode;	// IMP=0x000000010003aa2c
- (void)_setRepeatMode:(long long)arg1;	// IMP=0x000000010003a920
- (void)_setRepeatType:(long long)arg1;	// IMP=0x000000010003a668
- (void)setRepeatMode:(long long)arg1;	// IMP=0x000000010003a534
- (_Bool)shuffleEnabled;	// IMP=0x000000010003a524
- (void)_setShuffleEnabled:(_Bool)arg1;	// IMP=0x000000010003a41c
- (void)setShuffleEnabled:(_Bool)arg1 preserveCurrentItem:(_Bool)arg2;	// IMP=0x000000010003a1a4
@property(readonly, nonatomic) MPCPlayerResponse *lastPlayerResponse;
@property(readonly, nonatomic) double currentPlayingDuration;
@property(readonly, nonatomic) double currentPlayingElapsedTime;
- (void)setElapsedTime:(double)arg1;	// IMP=0x0000000100039e34
- (void)changeToItemAtIndex:(long long)arg1;	// IMP=0x0000000100039a78
- (void)changeToPreviousItem;	// IMP=0x00000001000399dc
- (void)changeToNextItem;	// IMP=0x0000000100039940
- (void)rewind;	// IMP=0x0000000100039898
- (void)fastForward;	// IMP=0x00000001000397f0
- (void)stop;	// IMP=0x00000001000397d8
- (void)pause;	// IMP=0x00000001000397c0
- (void)play;	// IMP=0x00000001000396bc
- (id)responseTrackList;	// IMP=0x0000000100039668
@property(readonly, nonatomic) long long playerState;
@property(readonly, nonatomic) MPCPlayerResponseItem *currentPlayingItem;
- (void)stopUpdating;	// IMP=0x0000000100039478
- (void)startUpdating;	// IMP=0x0000000100039400
- (void)updatePlayerPath;	// IMP=0x00000001000392e4
- (void)insertAfterCurrentPlayingItem:(id)arg1;	// IMP=0x0000000100038fa0
- (_Bool)canInsertAfterCurrentPlayingItem:(id)arg1;	// IMP=0x0000000100038e48
- (long long)_bestStoreIdentifierForIdentifierSet:(id)arg1;	// IMP=0x0000000100038da0
- (void)moveItemAtIndexToPlayNext:(long long)arg1;	// IMP=0x0000000100038970
- (_Bool)canMoveItemAtIndexToPlayNext:(long long)arg1;	// IMP=0x00000001000386ac
@property(retain, nonatomic) MPAVRoute *audioRoute;
@property(readonly, nonatomic) NSString *audioRouteName;
- (_Bool)isMediaItem:(id)arg1 matchingResponseItem:(id)arg2;	// IMP=0x0000000100038460
- (id)currentMediaItem;	// IMP=0x0000000100038354
- (unsigned long long)activeListIndex;	// IMP=0x00000001000382ac
- (unsigned long long)count;	// IMP=0x0000000100038260
- (id)trackList;	// IMP=0x0000000100038254
- (id)activeList;	// IMP=0x0000000100038248
- (void)dealloc;	// IMP=0x00000001000381d0
- (id)initWithMediaItems:(id)arg1 index:(long long)arg2 isCollection:(_Bool)arg3;	// IMP=0x00000001000373e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
