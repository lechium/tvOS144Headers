/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol TUIEmojiSearchResultsCollectionViewControllerDelegate;
@class NSArray, UICollectionViewDiffableDataSource, _InvertibleFlowLayout, UILongPressGestureRecognizer, NSString;

@interface TUIEmojiSearchResultsCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout> {

	NSArray* _displayedEmojis;
	unsigned long long _animationBeginOffset;
	unsigned long long _lastAnimatedCellCount;
	BOOL _animatingCellUpdates;
	NSArray* _placeholderIdentifiers;
	BOOL _cellHighlightFrozen;
	BOOL _displayingVerbatimResults;
	id<TUIEmojiSearchResultsCollectionViewControllerDelegate> _delegate;
	UICollectionViewDiffableDataSource* _dataSource;
	_InvertibleFlowLayout* _flowLayout;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;

}

@property (assign,nonatomic) BOOL displayingVerbatimResults;                                                         //@synthesize displayingVerbatimResults=_displayingVerbatimResults - In the implementation block
@property (nonatomic,retain) UICollectionViewDiffableDataSource * dataSource;                                        //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) _InvertibleFlowLayout * flowLayout;                                                     //@synthesize flowLayout=_flowLayout - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;                              //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<TUIEmojiSearchResultsCollectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isCellHighlightFrozen,nonatomic) BOOL cellHighlightFrozen;                                  //@synthesize cellHighlightFrozen=_cellHighlightFrozen - In the implementation block
@property (nonatomic,retain) NSArray * displayedEmojis;                                                              //@synthesize displayedEmojis=_displayedEmojis - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)emojiTextAttributes;
-(id)init;
-(id<TUIEmojiSearchResultsCollectionViewControllerDelegate>)delegate;
-(void)setDelegate:(id<TUIEmojiSearchResultsCollectionViewControllerDelegate>)arg1 ;
-(UICollectionViewDiffableDataSource *)dataSource;
-(void)setDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(_InvertibleFlowLayout *)flowLayout;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setFlowLayout:(_InvertibleFlowLayout *)arg1 ;
-(id)_userPreferredEmojiStringVariantForToken:(id)arg1 ;
-(id)configuredEmojiCollectionViewCellForCollectionView:(id)arg1 atIndexPath:(id)arg2 forEmojiString:(id)arg3 ;
-(void)setDisplayedEmojis:(id)arg1 verbatimSkinTones:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)setDisplayedEmojis:(NSArray *)arg1 ;
-(void)resetScrollPositionAnimated:(BOOL)arg1 ;
-(void)setCellHighlightFrozen:(BOOL)arg1 ;
-(BOOL)_isSelectableEmojiTokenAtIndexPath:(id)arg1 ;
-(void)_didRecognizeLongPressGesture:(id)arg1 ;
-(BOOL)isCellHighlightFrozen;
-(NSArray *)displayedEmojis;
-(BOOL)displayingVerbatimResults;
-(void)setDisplayingVerbatimResults:(BOOL)arg1 ;
@end

