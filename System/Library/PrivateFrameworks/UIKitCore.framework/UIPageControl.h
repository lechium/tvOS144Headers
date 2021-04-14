/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>

@class _UIPageControlVisualProvider, UIColor, _UILegibilitySettings, UIImage;

@interface UIPageControl : UIControl {

	_UIPageControlVisualProvider* _visualProvider;
	struct {
		unsigned hideForSinglePage : 1;
		unsigned defersCurrentPageDisplay : 1;
		unsigned allowScrubbing : 1;
		unsigned flickToEndGestureEnabled : 1;
	}  _pageControlFlags;
	SCD_Struct_UI60 _custom;
	double _horizontalPadding;
	double _verticalPadding;
	double _indicatorSpacing;
	unsigned long long _preferredNumberOfVisibleIndicators;
	long long _numberOfPages;
	long long _currentPage;
	UIColor* _pageIndicatorTintColor;
	UIColor* _currentPageIndicatorTintColor;
	long long _backgroundStyle;
	long long _previousPage;

}

@property (assign,nonatomic) long long previousPage;                                                                                            //@synthesize previousPage=_previousPage - In the implementation block
@property (assign,setter=_setFlickToEndGestureEnabled:,nonatomic) BOOL _flickToEndGestureEnabled; 
@property (assign,setter=_setLegibilityStyle:,getter=_legibilityStyle,nonatomic) long long legibilityStyle; 
@property (setter=_setLegibilitySettings:,getter=_legibilitySettings,nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic) long long numberOfPages;                                                                                           //@synthesize numberOfPages=_numberOfPages - In the implementation block
@property (assign,nonatomic) long long currentPage;                                                                                             //@synthesize currentPage=_currentPage - In the implementation block
@property (assign,nonatomic) BOOL hidesForSinglePage; 
@property (nonatomic,retain) UIColor * pageIndicatorTintColor;                                                                                  //@synthesize pageIndicatorTintColor=_pageIndicatorTintColor - In the implementation block
@property (nonatomic,retain) UIColor * currentPageIndicatorTintColor;                                                                           //@synthesize currentPageIndicatorTintColor=_currentPageIndicatorTintColor - In the implementation block
@property (assign,nonatomic) long long backgroundStyle;                                                                                         //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,readonly) long long interactionState; 
@property (assign,nonatomic) BOOL allowsContinuousInteraction; 
@property (nonatomic,retain) UIImage * preferredIndicatorImage; 
@property (assign,nonatomic) BOOL defersCurrentPageDisplay; 
+(BOOL)doesOverrideMethod:(SEL)arg1 inBaseClass:(Class)arg2 ;
+(BOOL)_supportsInteractivePageControl;
+(id)_visualProviderForPageControl:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)backgroundStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)_displayMode;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setBackgroundStyle:(long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(BOOL)shouldTrack;
-(void)setNumberOfPages:(long long)arg1 ;
-(void)setCurrentPage:(long long)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(long long)_interactionState;
-(long long)interactionState;
-(void)setCurrentPageIndicatorTintColor:(UIColor *)arg1 ;
-(void)setPageIndicatorTintColor:(UIColor *)arg1 ;
-(long long)currentPage;
-(UIColor *)pageIndicatorTintColor;
-(UIColor *)currentPageIndicatorTintColor;
-(long long)numberOfPages;
-(void)setDefersCurrentPageDisplay:(BOOL)arg1 ;
-(void)_setCurrentPage:(long long)arg1 ;
-(void)_updateCurrentPageDisplayWithForceUpdate:(BOOL)arg1 ;
-(void)setAllowsContinuousInteraction:(BOOL)arg1 ;
-(void)setHidesForSinglePage:(BOOL)arg1 ;
-(id)indicatorImageForPage:(long long)arg1 ;
-(void)setIndicatorImage:(id)arg1 forPage:(long long)arg2 ;
-(CGSize)sizeForNumberOfPages:(long long)arg1 ;
-(id)_pageIndicatorImageForPage:(long long)arg1 ;
-(id)_pageIndicatorCurrentImageForPage:(long long)arg1 ;
-(unsigned long long)_controlEventsForActionTriggered;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(void)_traitCollectionDidChangeOnSubtreeInternal:(const UITraitCollectionChangeDescription*)arg1 ;
-(void)_setFlickToEndGestureEnabled:(BOOL)arg1 ;
-(long long)previousPage;
-(BOOL)_implementsCustomPageImagesOverride;
-(BOOL)_implementsCustomCurrentPageImagesOverride;
-(BOOL)hidesForSinglePage;
-(void)_updateCurrentPage:(long long)arg1 updateDisplayImmediately:(BOOL)arg2 ;
-(BOOL)defersCurrentPageDisplay;
-(UIImage *)preferredIndicatorImage;
-(void)setPreferredIndicatorImage:(UIImage *)arg1 ;
-(long long)_legibilityStyle;
-(id)_legibilitySettings;
-(void)_setLegibilityStyle:(long long)arg1 ;
-(void)_setLegibilitySettings:(id)arg1 ;
-(void)_drawModernIndicatorInView:(id)arg1 enabled:(BOOL)arg2 ;
-(id)_createModernIndicatorImageFromView:(id)arg1 ;
-(id)_indicatorViewEnabled:(BOOL)arg1 index:(long long)arg2 ;
-(void)_transitionIndicator:(id)arg1 toEnabled:(BOOL)arg2 index:(long long)arg3 ;
-(void)_hideBackgroundEffectView;
-(long long)_displayedPage;
-(void)updateCurrentPageDisplay;
-(BOOL)allowsContinuousInteraction;
-(void)_setDisplayMode:(long long)arg1 ;
-(void)_setIndicatorImage:(id)arg1 forPage:(long long)arg2 ;
-(void)_setIndicatorImage:(id)arg1 ;
-(BOOL)_flickToEndGestureEnabled;
-(double)_customHorizontalPadding;
-(double)_customVerticalPadding;
-(double)_customIndicatorSpacing;
-(void)_setCustomHorizontalPadding:(double)arg1 ;
-(void)_setCustomVerticalPadding:(double)arg1 ;
-(void)_setCustomIndicatorSpacing:(double)arg1 ;
-(void)_setPreferredNumberOfVisibleIndicators:(unsigned long long)arg1 ;
-(void)_invalidateIndicators;
-(void)_setPageImage:(id)arg1 ;
-(void)_setCurrentPageImage:(id)arg1 ;
-(void)setPreviousPage:(long long)arg1 ;
@end

