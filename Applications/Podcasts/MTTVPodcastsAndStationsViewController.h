//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTTVFetchedCollectionWithSectionsViewController.h"

#import "MTTVCreateStationButtonCollectionViewCellDelegate-Protocol.h"
#import "MTTVPodcastActionController-Protocol.h"
#import "MTTVStationActionControllerDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class MTTVPodcastActionController, MTTVStationActionController, NSString, UITextField;

@interface MTTVPodcastsAndStationsViewController : MTTVFetchedCollectionWithSectionsViewController <UITextFieldDelegate, UICollectionViewDelegateFlowLayout, MTTVPodcastActionController, MTTVStationActionControllerDelegate, MTTVCreateStationButtonCollectionViewCellDelegate>
{
    _Bool _hasStations;	// 8 = 0x8
    UITextField *_hiddenTextField;	// 16 = 0x10
    MTTVPodcastActionController *_podcastActionController;	// 24 = 0x18
    MTTVStationActionController *_stationActionController;	// 32 = 0x20
}

+ (id)notSubscribedPodcastResultsController;	// IMP=0x00000001000b4668
+ (id)subscribedPodcastResultsController;	// IMP=0x00000001000b4548
+ (id)predicateForStations;	// IMP=0x00000001000b4534
+ (id)createFirstStationResultsController;	// IMP=0x00000001000b4470
+ (id)stationResultsController;	// IMP=0x00000001000b4334
+ (id)resultsController;	// IMP=0x00000001000b41d8
- (void).cxx_destruct;	// IMP=0x00000001000b70e4
@property(nonatomic) _Bool hasStations; // @synthesize hasStations=_hasStations;
@property(retain, nonatomic) MTTVStationActionController *stationActionController; // @synthesize stationActionController=_stationActionController;
@property(retain, nonatomic) MTTVPodcastActionController *podcastActionController; // @synthesize podcastActionController=_podcastActionController;
@property(retain, nonatomic) UITextField *hiddenTextField; // @synthesize hiddenTextField=_hiddenTextField;
- (void)buttonCell:(id)arg1 didSelectButton:(id)arg2;	// IMP=0x00000001000b705c
- (void)_updateFocusabilityForCreateStationButtonFooter;	// IMP=0x00000001000b6e64
- (void)_updateSectionHeaderVisbilityForSubscribedPodcasts;	// IMP=0x00000001000b6d70
- (void)_didUpdateCollectionView:(id)arg1;	// IMP=0x00000001000b6ce4
- (id)_indexPathForPodcastUuid:(id)arg1;	// IMP=0x00000001000b6c10
- (void)_showCreateStationUI;	// IMP=0x00000001000b6b28
- (_Bool)_hasOnePodcast;	// IMP=0x00000001000b6a84
- (_Bool)_hasUnsubscribedPodcasts;	// IMP=0x00000001000b6a30
- (_Bool)_hasSubscribedPodcasts;	// IMP=0x00000001000b69dc
- (_Bool)_hasStations;	// IMP=0x00000001000b6988
- (_Bool)_isIndexPathForCreateNewStation:(id)arg1;	// IMP=0x00000001000b68d8
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x00000001000b66a8
- (void)performDeleteStation:(id)arg1;	// IMP=0x00000001000b65d8
- (void)performShowSettingsForStation:(id)arg1;	// IMP=0x00000001000b6514
- (void)performDeletePodcast:(id)arg1;	// IMP=0x00000001000b63bc
- (void)performShowSettingsForPodcast:(id)arg1;	// IMP=0x00000001000b62f8
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000001000b6264
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000001000b6080
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x00000001000b5f5c
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x00000001000b5f4c
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000001000b5e8c
- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x00000001000b5e3c
- (id)collectionView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000001000b5da0
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x00000001000b5d00
- (id)reuseIdentifierForItemAtIndexPath:(id)arg1;	// IMP=0x00000001000b5c38
- (void)tearDownEmptyContentViewController;	// IMP=0x00000001000b5bc4
- (void)standupEmptyContentViewController;	// IMP=0x00000001000b5b50
- (void)updateListState;	// IMP=0x00000001000b5a58
- (void)collectionView:(id)arg1 configureCell:(id)arg2 withPodcast:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x00000001000b5928
- (void)collectionView:(id)arg1 configureCell:(id)arg2 withStation:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x00000001000b5708
- (void)collectionView:(id)arg1 configureCell:(id)arg2 withObject:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x00000001000b560c
- (void)collectionView:(id)arg1 didLongPressItemAtIndexPath:(id)arg2;	// IMP=0x00000001000b5440
- (void)playItemAtIndexPath:(id)arg1;	// IMP=0x00000001000b5250
- (void)artworkDidChange:(id)arg1;	// IMP=0x00000001000b5078
- (void)unregisterForArtworkChangeNotifications;	// IMP=0x00000001000b5018
- (void)registerForArtworkChangeNotifications;	// IMP=0x00000001000b4fb0
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000001000b4f38
- (void)registerCollectionViewClasses;	// IMP=0x00000001000b4d38
- (void)viewWillLayoutSubviews;	// IMP=0x00000001000b4d04
- (void)viewDidLoad;	// IMP=0x00000001000b4950
- (void)dealloc;	// IMP=0x00000001000b4904
- (id)init;	// IMP=0x00000001000b4788

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

