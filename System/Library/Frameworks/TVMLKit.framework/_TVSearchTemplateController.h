/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVBgImageLoadingViewController.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UISearchBarDelegate.h>
#import <libobjc.A.dylib/IKAppKeyboardDelegate.h>
#import <TVMLKit/_TVStackCollectionViewControllerDelegate.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>

@class IKViewElement, IKTextFieldElement, IKAppKeyboard, IKImageElement, NSArray, IKCollectionElement, UISearchController, _TVStackCollectionViewController, UIImage, UIImageView, UISearchContainerViewController, _TVSearchResultsWrapperViewController, UIActivityIndicatorView, UIView, NSString;

@interface _TVSearchTemplateController : _TVBgImageLoadingViewController <UISearchResultsUpdating, UISearchBarDelegate, IKAppKeyboardDelegate, _TVStackCollectionViewControllerDelegate, TVAppTemplateImpressionable> {

	IKViewElement* _viewElement;
	IKTextFieldElement* _searchFieldElement;
	IKAppKeyboard* _ikKeyboard;
	IKViewElement* _collectionListElement;
	double _impressionThreshold;
	IKImageElement* _bgImageElement;
	IKImageElement* _heroImgElement;
	IKViewElement* _scopeElement;
	NSArray* _scopeButtonElements;
	IKCollectionElement* _suggestionsElement;
	IKViewElement* _defaultResultsElement;
	UISearchController* _searchController;
	_TVStackCollectionViewController* _resultsViewController;
	UIImage* _backgroundImage;
	UIImageView* _backgroundImageView;
	UISearchContainerViewController* _searchContainerViewController;
	_TVSearchResultsWrapperViewController* _resultsWrapperViewController;
	UIActivityIndicatorView* _spinner;
	UIView* _originalSearchFieldRightView;
	long long _originalSearchFieldRightViewMode;

}

@property (nonatomic,readonly) IKViewElement * viewElement;              //@synthesize viewElement=_viewElement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)loadView;
-(id)collectionView;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 selectingSearchSuggestion:(id)arg2 ;
-(void)searchBar:(id)arg1 selectedScopeButtonIndexDidChange:(long long)arg2 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(IKViewElement *)viewElement;
-(void)textDidChangeForKeyboard:(id)arg1 ;
-(void)hintsDidChangeForKeyboard:(id)arg1 ;
-(long long)_blurEffectStyle;
-(void)_cancelImpressionsUpdate;
-(void)updateWithViewElement:(id)arg1 ;
-(CGSize)_backgroundImageProxySize;
-(id)_backgroundImageProxy;
-(void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2 ;
-(void)stackCollectionViewController:(id)arg1 scrollViewDidScroll:(id)arg2 ;
-(void)_updateImpressions;
-(void)_recordImpressionsForVisibleView;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(void)_updateKeyboardText;
-(BOOL)_backgroundImageRequiresBlur;
-(id)tabBarObservedScrollView;
-(void)_scrollToTopAnimated:(BOOL)arg1 ;
-(void)_updateScope;
-(void)_updateDefaultResultsViewController;
-(BOOL)_searchBarContainsFocus;
-(void)_updateSearchFieldText;
-(void)_updateSearchSuggestions;
-(BOOL)_isAtWordEnd;
-(id)_sanitizedText;
@end

