/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@class NSIndexPath, UICollectionViewLayoutAttributes;

@interface GKCollectionFocusingLayout : UICollectionViewFlowLayout {

	double _topHeaderHeight;
	double _focusScaleFactor;
	NSIndexPath* _focusedIndexPath;
	double _focusHeaderOffset;
	double _headerToItemSpacing;
	UICollectionViewLayoutAttributes* _topHeaderAttributes;

}

@property (assign,nonatomic) double topHeaderHeight;                                              //@synthesize topHeaderHeight=_topHeaderHeight - In the implementation block
@property (assign,nonatomic) double focusScaleFactor;                                             //@synthesize focusScaleFactor=_focusScaleFactor - In the implementation block
@property (nonatomic,retain) NSIndexPath * focusedIndexPath;                                      //@synthesize focusedIndexPath=_focusedIndexPath - In the implementation block
@property (assign,nonatomic) double focusHeaderOffset;                                            //@synthesize focusHeaderOffset=_focusHeaderOffset - In the implementation block
@property (assign,nonatomic) double headerToItemSpacing;                                          //@synthesize headerToItemSpacing=_headerToItemSpacing - In the implementation block
@property (nonatomic,retain) UICollectionViewLayoutAttributes * topHeaderAttributes;              //@synthesize topHeaderAttributes=_topHeaderAttributes - In the implementation block
-(id)init;
-(void)dealloc;
-(void)awakeFromNib;
-(UIEdgeInsets)sectionInset;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)prepareLayout;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setFocusedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)focusedIndexPath;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(void)setFocusScaleFactor:(double)arg1 ;
-(void)setFocusHeaderOffset:(double)arg1 ;
-(double)topHeaderHeight;
-(void)setTopHeaderAttributes:(UICollectionViewLayoutAttributes *)arg1 ;
-(UICollectionViewLayoutAttributes *)topHeaderAttributes;
-(CGSize)sizeForHeaderInSection:(long long)arg1 ;
-(double)minimumInteritemSpacingForSectionAtIndex:(long long)arg1 ;
-(double)minimumLineSpacingForSectionAtIndex:(long long)arg1 ;
-(CGSize)sizeForItemAtIndexPath:(id)arg1 ;
-(CGSize)sizeForFooterInSection:(long long)arg1 ;
-(id)focusAdjustedAttributesForItemAttributes:(id)arg1 ;
-(id)focusAdjustedAttributesForSupplementaryViewAttributes:(id)arg1 ;
-(void)applyDefaults;
-(void)setTopHeaderHeight:(double)arg1 ;
-(void)_updateFocusOffsetsForSectionHeadersWithAnimationCoordinator:(id)arg1 ;
-(BOOL)shouldUpdateVisibleCellLayoutAttributes;
-(void)updateSectionHeaderOffsetWithAnimationCoordinator:(id)arg1 ;
-(void)_updateFocusFrameForCellAtIndexPath:(id)arg1 ;
-(double)focusScaleFactor;
-(double)focusHeaderOffset;
-(double)headerToItemSpacing;
-(void)setHeaderToItemSpacing:(double)arg1 ;
@end

