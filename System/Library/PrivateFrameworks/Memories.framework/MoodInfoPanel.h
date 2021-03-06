/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UICollectionViewController.h>

@class PMMoodProvider;

@interface MoodInfoPanel : UICollectionViewController {

	PMMoodProvider* _moodProvider;

}

@property (nonatomic,retain) PMMoodProvider * moodProvider;              //@synthesize moodProvider=_moodProvider - In the implementation block
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(CGSize)preferredContentSize;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(id)preferredFocusEnvironments;
-(id)initWithCollectionViewLayout:(id)arg1 andMoodProvider:(id)arg2 ;
-(PMMoodProvider *)moodProvider;
-(double)_estimatedWidth;
-(CGSize)cellSizeForMoodString:(id)arg1 ;
-(double)_estimatedPanelWidth;
-(void)setMoodProvider:(PMMoodProvider *)arg1 ;
@end

