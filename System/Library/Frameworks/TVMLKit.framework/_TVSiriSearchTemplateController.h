/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVBgImageLoadingViewController.h>
#import <TVMLKit/_TVSiriSearchTemplateViewDelegate.h>
#import <libobjc.A.dylib/IKAppKeyboardDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UISearchBarDelegate.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>

@class IKViewElement, IKTextFieldElement, IKAppKeyboard, IKImageElement, _TVSiriSearchTemplateView, UISearchBar, UISystemInputViewController, UIViewController, NSArray, NSIndexPath, UIImage, NSString;

@interface _TVSiriSearchTemplateController : _TVBgImageLoadingViewController <_TVSiriSearchTemplateViewDelegate, IKAppKeyboardDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UISearchBarDelegate, TVAppTemplateImpressionable> {

	IKViewElement* _templateElement;
	IKTextFieldElement* _searchFieldElement;
	IKAppKeyboard* _ikKeyboard;
	IKViewElement* _scopeElement;
	IKViewElement* _suggestionsElement;
	IKViewElement* _collectionListElement;
	IKImageElement* _bgImageElement;
	IKImageElement* _heroImgElement;
	_TVSiriSearchTemplateView* _searchTemplateView;
	UISearchBar* _searchBar;
	UISystemInputViewController* _systemInputViewController;
	UIViewController* _scopeViewController;
	UIViewController* _suggestionsViewController;
	NSArray* _viewControllers;
	NSArray* _rowSpacingMetricsList;
	NSIndexPath* _focusedViewControllerIndexPath;
	double _impressionThreshold;
	UIImage* _backgroundImage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_viewControllerFromElement:(id)arg1 existingController:(id)arg2 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)viewDidLoad;
-(void)loadView;
-(void)scrollToTop;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(id)_viewControllers;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)textDidChangeForKeyboard:(id)arg1 ;
-(long long)_blurEffectStyle;
-(void)_doneButtonPressed:(id)arg1 ;
-(BOOL)_disableAutomaticKeyboardUI;
-(BOOL)_enableAutomaticKeyboardPressDone;
-(void)tv_updateViewLayout;
-(void)_cancelImpressionsUpdate;
-(void)updateWithViewElement:(id)arg1 ;
-(void)siri_beginInteractiveTransition;
-(void)siri_endInteractiveTransition;
-(CGSize)_backgroundImageProxySize;
-(id)_backgroundImageProxy;
-(void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2 ;
-(void)_updateImpressions;
-(void)_recordImpressionsForVisibleView;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(void)_updateKeyboardText;
-(void)_updateViewIgnoringSparseUpdates:(BOOL)arg1 ;
-(BOOL)_backgroundImageRequiresBlur;
-(id)tabBarObservedScrollView;
-(void)searchTemplateView:(id)arg1 willAddKeyboard:(id)arg2 ;
-(void)searchTemplateView:(id)arg1 didAddKeyboard:(id)arg2 ;
-(void)searchTemplateView:(id)arg1 willRemoveKeyboard:(id)arg2 ;
-(void)searchTemplateView:(id)arg1 didRemoveKeyboard:(id)arg2 ;
-(void)searchTemplateView:(id)arg1 didOffsetOriginForCollectionView:(id)arg2 ;
-(id)searchTemplateView:(id)arg1 preferredFocusEnvironmentForKeyboard:(id)arg2 ;
-(void)_updateSearchFieldText;
-(void)_buildSpacingMetrics;
-(UIEdgeInsets)_adjustedCollectionMargins;
-(BOOL)_shouldShowScope;
-(void)_adjustFrameForScopeView:(id)arg1 inCell:(id)arg2 ;
-(BOOL)_shouldShowSuggestions;
-(void)_adjustOriginForSuggestionsView:(id)arg1 inCell:(id)arg2 ;
-(long long)_viewControllerIndexForSection:(long long)arg1 ;
-(long long)_sectionForViewControllerIndex:(long long)arg1 ;
-(void)_setFocusedIndexPath:(id)arg1 ;
-(TVRowMetrics)_collapsedRowMetricsForViewController:(id)arg1 ;
-(BOOL)_updateCollectionList;
-(CGRect)_visibleRectInRect:(CGRect)arg1 ;
@end

