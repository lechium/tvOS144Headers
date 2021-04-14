/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <TVMLKit/TVCarouselViewDataSource.h>
#import <TVMLKit/TVCarouselViewDelegate.h>
#import <TVMLKit/TVCollectionViewLockupCellDelegate.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>

@class TVCarouselLayout, IKCollectionElement, _TVCarouselView, IKViewElement, NSString;

@interface _TVCarouselViewController : UIViewController <TVCarouselViewDataSource, TVCarouselViewDelegate, TVCollectionViewLockupCellDelegate, TVAppTemplateImpressionable> {

	TVCarouselLayout* _carouselLayout;
	IKCollectionElement* _collectionElement;
	_TVCarouselView* _carouselView;
	IKViewElement* _headerElement;
	struct {
		BOOL didAppear;
		BOOL indexesDirty;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)headerElementFromCollectionElement:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)preferredFocusEnvironments;
-(void)_updateHeaderView;
-(void)_updateLayout;
-(void)_cancelImpressionsUpdate;
-(void)_selectButtonAction:(id)arg1 ;
-(void)_playButtonAction:(id)arg1 ;
-(BOOL)_needsDefaultCarouselCells;
-(void)_registerCellClasses;
-(void)_updateAutoScrollInterval;
-(void)_updateLayoutAndReload;
-(void)_updateImpressions;
-(void)_dispatchEvent:(id)arg1 forItemAtIndex:(unsigned long long)arg2 cell:(id)arg3 ;
-(void)_recordImpressionsForVisibleView;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(void)centerItemAtPageIndex:(long long)arg1 ;
-(unsigned long long)numberOfItemsInCarouselView:(id)arg1 ;
-(id)carouselView:(id)arg1 cellForItemAtIndex:(unsigned long long)arg2 ;
-(void)carouselView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3 ;
-(void)carouselView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3 ;
-(void)carouselView:(id)arg1 willDisplayItemAtIndex:(unsigned long long)arg2 ;
-(void)carouselView:(id)arg1 didEndDisplayingItemAtIndex:(unsigned long long)arg2 ;
-(void)carouselViewDidScroll:(id)arg1 ;
-(void)carouselView:(id)arg1 didFocusItemAtIndex:(unsigned long long)arg2 ;
-(void)collectionViewCellDidSelect:(id)arg1 ;
-(id)layeredImageContainerLayerWithinCollectionViewCell:(id)arg1 ;
-(CGSize)viewSizeThatFits:(CGSize)arg1 ;
-(void)updateWithViewElement:(id)arg1 layout:(id)arg2 ;
@end

