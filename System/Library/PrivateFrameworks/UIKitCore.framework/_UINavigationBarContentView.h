/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIBarContentView.h>
#import <UIKitCore/_UIBarButtonItemViewOwner.h>
#import <UIKitCore/_UINavigationBarTitleViewDataSource.h>
#import <UIKitCore/_UINavigationBarTransitionContextParticipant.h>
#import <UIKitCore/_UIButtonBarButtonChangeObserver.h>

@protocol _UINavigationBarContentViewDelegate;
@class _UINavigationBarTransitionContext, UIImage, _UIButtonBarButton, UILayoutGuide, NSLayoutConstraint, NSArray, NSMutableArray, NSDictionary, UIBarButtonItem, NSString, UIView, UIColor, _UINavigationBarContentViewLayout, _UIBarButtonItemData;

@interface _UINavigationBarContentView : _UIBarContentView <_UIBarButtonItemViewOwner, _UINavigationBarTitleViewDataSource, _UINavigationBarTransitionContextParticipant, _UIButtonBarButtonChangeObserver> {

	_UINavigationBarTransitionContext* _transitionContext;
	UIImage* _backIndicatorImage;
	_UIButtonBarButton* _staticNavBarButton;
	UILayoutGuide* _navItemContentLayoutGuide;
	NSLayoutConstraint* _staticNavBarButtonXPositionConstraint;
	NSArray* _staticNavBarButtonVerticalAlignmentConstraints;
	NSArray* _navItemContentLayoutGuideHorizEdgeConstraints;
	NSLayoutConstraint* _navItemContentLayoutGuideStaticButtonVisibilityAnimationConstraint;
	double _backButtonMaximumWidth;
	NSMutableArray* _currentAnimations;
	NSMutableArray* _currentCompletions;
	struct {
		unsigned deferResolvedSizeChange : 1;
		unsigned outstandingDeferredResolvedSizeChange : 1;
		unsigned needsStaticNavBarButtonUpdate : 1;
		unsigned isHidingBackButton : 1;
		unsigned isShowingBackButton : 1;
		unsigned isHidingLeadingBar : 1;
		unsigned isAnimatingNavItemContentLayoutGuideForStaticNavBarButtonVisibility : 1;
		unsigned navItemContentLayoutGuideStaticButtonVisibilityAnimationConstraintNeedsInitialization : 1;
		unsigned shouldFadeStaticNavBarButton : 1;
		unsigned staticNavBarButtonLingers : 1;
		unsigned staticNavBarButtonIsActingAsFakeBackButton : 1;
	}  _navigationBarContentViewFlags;
	BOOL _backButtonHidden;
	BOOL _staticNavBarButtonTrailing;
	BOOL _leadingItemsSupplementBackItem;
	NSDictionary* _effectiveTitleAttributes;
	double _backButtonMargin;
	id<_UINavigationBarContentViewDelegate> _delegate;
	UIBarButtonItem* _backButtonItem;
	UIBarButtonItem* _staticNavBarButtonItem;
	NSArray* _leadingBarButtonItems;
	NSArray* _trailingBarButtonItems;
	NSString* _title;
	UIView* _titleView;
	double _inlineTitleViewAlpha;
	NSDictionary* _titleAttributes;
	UIColor* _textColor;
	double _overrideSize;
	long long _requestedContentSize;
	long long _barMetrics;
	_UINavigationBarContentViewLayout* _layout;
	UIOffset _titlePositionAdjustment;

}

@property (nonatomic,readonly) NSDictionary * effectiveTitleAttributes;                                                                                                                        //@synthesize effectiveTitleAttributes=_effectiveTitleAttributes - In the implementation block
@property (assign,nonatomic,__weak) id<_UINavigationBarContentViewDelegate> delegate;                                                                                                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * backButtonItem;                                                                                                                                 //@synthesize backButtonItem=_backButtonItem - In the implementation block
@property (assign,nonatomic) BOOL backButtonHidden;                                                                                                                                            //@synthesize backButtonHidden=_backButtonHidden - In the implementation block
@property (assign,nonatomic) double backButtonMargin;                                                                                                                                          //@synthesize backButtonMargin=_backButtonMargin - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * staticNavBarButtonItem;                                                                                                                         //@synthesize staticNavBarButtonItem=_staticNavBarButtonItem - In the implementation block
@property (assign,getter=isStaticNavBarButtonTrailing,nonatomic) BOOL staticNavBarButtonTrailing;                                                                                              //@synthesize staticNavBarButtonTrailing=_staticNavBarButtonTrailing - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * navItemContentLayoutGuide; 
@property (nonatomic,readonly) BOOL isNavItemContentLayoutGuideFlushLeading; 
@property (nonatomic,readonly) BOOL isNavItemContentLayoutGuideFlushTrailing; 
@property (nonatomic,copy) NSArray * leadingBarButtonItems;                                                                                                                                    //@synthesize leadingBarButtonItems=_leadingBarButtonItems - In the implementation block
@property (assign,nonatomic) BOOL leadingItemsSupplementBackItem;                                                                                                                              //@synthesize leadingItemsSupplementBackItem=_leadingItemsSupplementBackItem - In the implementation block
@property (nonatomic,copy) NSArray * trailingBarButtonItems;                                                                                                                                   //@synthesize trailingBarButtonItems=_trailingBarButtonItems - In the implementation block
@property (nonatomic,copy) NSString * title;                                                                                                                                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIView * titleView;                                                                                                                                               //@synthesize titleView=_titleView - In the implementation block
@property (assign,nonatomic) double inlineTitleViewAlpha;                                                                                                                                      //@synthesize inlineTitleViewAlpha=_inlineTitleViewAlpha - In the implementation block
@property (nonatomic,copy) NSDictionary * titleAttributes;                                                                                                                                     //@synthesize titleAttributes=_titleAttributes - In the implementation block
@property (assign,nonatomic) UIOffset titlePositionAdjustment;                                                                                                                                 //@synthesize titlePositionAdjustment=_titlePositionAdjustment - In the implementation block
@property (nonatomic,copy) UIColor * textColor;                                                                                                                                                //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) double overrideSize;                                                                                                                                              //@synthesize overrideSize=_overrideSize - In the implementation block
@property (nonatomic,copy) _UIBarButtonItemData * plainItemAppearance; 
@property (nonatomic,copy) _UIBarButtonItemData * doneItemAppearance; 
@property (nonatomic,copy) _UIBarButtonItemData * backButtonAppearance; 
@property (nonatomic,readonly) UIView * accessibilityTitleView; 
@property (nonatomic,readonly) UIView * accessibilityBackButtonView; 
@property (assign,nonatomic) long long requestedContentSize;                                                                                                                                   //@synthesize requestedContentSize=_requestedContentSize - In the implementation block
@property (nonatomic,readonly) long long currentContentSize; 
@property (nonatomic,readonly) double currentHeight; 
@property (assign,nonatomic) long long barMetrics;                                                                                                                                             //@synthesize barMetrics=_barMetrics - In the implementation block
@property (assign,nonatomic) BOOL shouldFadeStaticNavBarButton; 
@property (assign,nonatomic) BOOL staticNavBarButtonLingers; 
@property (getter=isAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange,nonatomic,readonly) BOOL animatingNavItemContentLayoutGuideForStaticButtonVisibilityChange; 
@property (nonatomic,readonly) double navItemContentLayoutGuideAnimationDistance; 
@property (assign,setter=_setBackButtonMaximumWidth:,nonatomic) double backButtonMaximumWidth; 
@property (nonatomic,readonly) _UINavigationBarContentViewLayout * layout;                                                                                                                     //@synthesize layout=_layout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id<_UINavigationBarContentViewDelegate>)delegate;
-(void)setDelegate:(id<_UINavigationBarContentViewDelegate>)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(_UINavigationBarContentViewLayout *)layout;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)textColor;
-(void)setTextColor:(UIColor *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isRTL;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)tintColorDidChange;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(void)layoutMarginsDidChange;
-(void)updateContent;
-(double)currentHeight;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(void)setDirectionalLayoutMargins:(NSDirectionalEdgeInsets)arg1 ;
-(void)setTitleView:(UIView *)arg1 ;
-(void)setTitleAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)titleAttributes;
-(UIView *)titleView;
-(double)_intrinsicHeight;
-(void)_setupTitleViewAnimated:(BOOL)arg1 ;
-(void)_itemDidChangeSelectionState:(id)arg1 ;
-(void)_itemDidChangeEnabledState:(id)arg1 ;
-(void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2 ;
-(void)_itemStandardViewNeedsUpdate:(id)arg1 ;
-(void)_itemDidChangeWidth:(id)arg1 ;
-(void)_itemDidChangeHiddenState:(id)arg1 ;
-(id)_traitCollectionForChildEnvironment:(id)arg1 ;
-(long long)_currentContentSize;
-(id)backIndicatorImage;
-(void)_setDirectionalLayoutMargins:(NSDirectionalEdgeInsets)arg1 ;
-(void)_appearanceChanged;
-(void)setPlainItemAppearance:(_UIBarButtonItemData *)arg1 ;
-(void)setDoneItemAppearance:(_UIBarButtonItemData *)arg1 ;
-(_UIBarButtonItemData *)plainItemAppearance;
-(_UIBarButtonItemData *)doneItemAppearance;
-(unsigned long long)edgesPaddingBarButtonItem:(id)arg1 ;
-(BOOL)compactMetrics;
-(long long)barType;
-(double)backButtonMargin;
-(double)defaultEdgeSpacing;
-(double)backButtonMaximumWidth;
-(void)backButtonTitleDidChange;
-(_UIBarButtonItemData *)backButtonAppearance;
-(void)setBackIndicatorImage:(id)arg1 ;
-(long long)barMetrics;
-(long long)currentContentSize;
-(void)setStaticNavBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)staticNavBarButtonItem;
-(void)setNeedsStaticNavBarButtonUpdate;
-(void)setShouldFadeStaticNavBarButton:(BOOL)arg1 ;
-(BOOL)shouldFadeStaticNavBarButton;
-(void)setStaticNavBarButtonLingers:(BOOL)arg1 ;
-(BOOL)staticNavBarButtonLingers;
-(void)beginAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
-(BOOL)isAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
-(double)navItemContentLayoutGuideAnimationDistance;
-(BOOL)updateNavItemContentLayoutGuideAnimationConstraintConstant:(double)arg1 ;
-(void)endAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
-(id)_accessibility_HUDItemForPoint:(CGPoint)arg1 ;
-(id)_accessibility_controlToActivateForHUDGestureLiftAtPoint:(CGPoint)arg1 ;
-(void)setRequestedContentSize:(long long)arg1 ;
-(long long)requestedContentSize;
-(void)titleViewChangedLayout:(id)arg1 ;
-(id)titleViewBackButtonMenu:(id)arg1 ;
-(void)titleViewChangedUnderlayContent:(id)arg1 ;
-(void)titleViewChangedHeight:(id)arg1 ;
-(void)titleViewChangedMaximumBackButtonWidth:(id)arg1 ;
-(void)titleViewChangedStandardDisplayItems:(id)arg1 ;
-(void)titleViewChangedDisplayItemAlpha:(id)arg1 ;
-(void)titleView:(id)arg1 needsUpdatedContentOverlayRects:(id)arg2 ;
-(double)titleViewLargeTitleHeight:(id)arg1 ;
-(CGSize)titleViewLargeTitleHeightRange:(id)arg1 ;
-(double)titleViewContentBaselineOffsetFromTop:(id)arg1 ;
-(double)titleViewContentBaseHeight:(id)arg1 ;
-(void)titleViewChangedPreferredDisplaySize:(id)arg1 ;
-(void)_updateLayoutMarginsForLayout:(id)arg1 ;
-(id)_newLayout;
-(void)_updateNavItemContentLayoutGuideEdgeConstraints;
-(double)_contentLayoutGuideAnimationConstraintConstantForFullyVisibleButton;
-(double)_contentLayoutGuideAnimationConstraintConstantForFullyHiddenButton;
-(BOOL)_backButtonLayoutGuideIncludesFullyHiddenConstant;
-(BOOL)_isStaticNavBarButtonOnRight;
-(BOOL)_effectiveStaticNavBarButtonLingers;
-(void)_updateStaticNavBarButtonVerticalAlignmentConstraints;
-(void)_addCoordinatedAnimation:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)__backButtonAction:(id)arg1 ;
-(void)_clearAllAnimations;
-(NSDictionary *)effectiveTitleAttributes;
-(void)_applyTitleAttributesToLabel:(id)arg1 withString:(id)arg2 ;
-(void)setInlineTitleViewAlpha:(double)arg1 ;
-(void)_setBackButtonMaximumWidth:(double)arg1 ;
-(void)setTitlePositionAdjustment:(UIOffset)arg1 ;
-(void)_safeAreaInsetsDidChangeFromOldInsets:(UIEdgeInsets)arg1 ;
-(void)setOverrideSize:(double)arg1 ;
-(void)_setupStaticNavBarButtonAnimated:(BOOL)arg1 ;
-(void)_setupBackButtonAnimated:(BOOL)arg1 ;
-(void)_setupLeadingButtonBarAnimated:(BOOL)arg1 ;
-(void)_setupTrailingButtonBarAnimated:(BOOL)arg1 ;
-(void)_runAllScheduledAnimations:(BOOL)arg1 ;
-(void)_setAssistants;
-(void)updateContentAnimated:(BOOL)arg1 ;
-(void)_clearAssistants;
-(void)setBackButtonAppearance:(_UIBarButtonItemData *)arg1 ;
-(id)_layoutForAugmentedTitleView:(id)arg1 ;
-(CGRect)_overlayRectForView:(id)arg1 inTargetView:(id)arg2 ;
-(id)_accessibility_barButtonItemAtPoint:(CGPoint)arg1 ;
-(void)recordFromStateForTransition:(id)arg1 ;
-(void)prepareToRecordToState:(id)arg1 ;
-(void)recordToStateForTransition:(id)arg1 ;
-(void)ensureBackButtonTruncationOccursWithContext:(id)arg1 ;
-(void)finalizeStateFromTransition:(id)arg1 ;
-(void)setBarMetrics:(long long)arg1 ;
-(UILayoutGuide *)navItemContentLayoutGuide;
-(BOOL)isNavItemContentLayoutGuideFlushLeading;
-(BOOL)isNavItemContentLayoutGuideFlushTrailing;
-(void)setBackButtonItem:(UIBarButtonItem *)arg1 ;
-(void)resolvedSizeDidChange;
-(UIView *)accessibilityTitleView;
-(UIView *)accessibilityBackButtonView;
-(void)clearTransitionContext;
-(void)adoptLayout:(id)arg1 ;
-(void)adoptNewLayout;
-(void)updateAugmentedTitleViewNavigationBarTraitsTo:(id)arg1 from:(id)arg2 ;
-(void)setBackButtonMargin:(double)arg1 ;
-(UIBarButtonItem *)backButtonItem;
-(BOOL)backButtonHidden;
-(void)setBackButtonHidden:(BOOL)arg1 ;
-(BOOL)isStaticNavBarButtonTrailing;
-(void)setStaticNavBarButtonTrailing:(BOOL)arg1 ;
-(NSArray *)leadingBarButtonItems;
-(void)setLeadingBarButtonItems:(NSArray *)arg1 ;
-(BOOL)leadingItemsSupplementBackItem;
-(void)setLeadingItemsSupplementBackItem:(BOOL)arg1 ;
-(NSArray *)trailingBarButtonItems;
-(void)setTrailingBarButtonItems:(NSArray *)arg1 ;
-(double)inlineTitleViewAlpha;
-(UIOffset)titlePositionAdjustment;
-(double)overrideSize;
@end

