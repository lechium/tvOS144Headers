/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UINavigationBarAugmentedTitleView.h>

@protocol _UINavigationBarTitleViewDataSource;
@class NSLayoutConstraint, _UINavigationBarTitleViewOverlayRects, UINavigationItem, NSArray, UIMenu, NSString;

@interface _UINavigationBarTitleView : UIView <_UINavigationBarAugmentedTitleView> {

	NSLayoutConstraint* _heightConstraint;
	_UINavigationBarTitleViewOverlayRects* _overlayRects;
	id<_UINavigationBarTitleViewDataSource> _dataSource;
	BOOL _underlayBarContent;
	BOOL _hideBackButton;
	BOOL _hideLeadingBarButtons;
	BOOL _hideStandardTitle;
	BOOL _hideTrailingBarButtons;
	UINavigationItem* _navigationItem;
	long long _titleLocation;
	double _height;
	double _backButtonMaximumWidth;
	double _backButtonAlpha;
	double _leadingBarAlpha;
	double _trailingBarAlpha;
	long long _preferredContentAlignment;

}

@property (nonatomic,__weak,readonly) UINavigationItem * navigationItem;                  //@synthesize navigationItem=_navigationItem - In the implementation block
@property (nonatomic,readonly) long long titleLocation;                                   //@synthesize titleLocation=_titleLocation - In the implementation block
@property (assign,nonatomic) BOOL underlayBarContent;                                     //@synthesize underlayBarContent=_underlayBarContent - In the implementation block
@property (assign,nonatomic) double height;                                               //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) double backButtonMaximumWidth;                               //@synthesize backButtonMaximumWidth=_backButtonMaximumWidth - In the implementation block
@property (assign,nonatomic) BOOL hideBackButton;                                         //@synthesize hideBackButton=_hideBackButton - In the implementation block
@property (assign,nonatomic) BOOL hideLeadingBarButtons;                                  //@synthesize hideLeadingBarButtons=_hideLeadingBarButtons - In the implementation block
@property (assign,nonatomic) BOOL hideStandardTitle;                                      //@synthesize hideStandardTitle=_hideStandardTitle - In the implementation block
@property (assign,nonatomic) BOOL hideTrailingBarButtons;                                 //@synthesize hideTrailingBarButtons=_hideTrailingBarButtons - In the implementation block
@property (assign,nonatomic) double backButtonAlpha;                                      //@synthesize backButtonAlpha=_backButtonAlpha - In the implementation block
@property (assign,nonatomic) double leadingBarAlpha;                                      //@synthesize leadingBarAlpha=_leadingBarAlpha - In the implementation block
@property (assign,nonatomic) double trailingBarAlpha;                                     //@synthesize trailingBarAlpha=_trailingBarAlpha - In the implementation block
@property (nonatomic,copy,readonly) NSArray * contentOverlayRects; 
@property (nonatomic,readonly) long long leadingOverlayCount; 
@property (nonatomic,readonly) long long trailingOverlayCount; 
@property (nonatomic,readonly) double largeTitleHeight; 
@property (nonatomic,readonly) CGSize largeTitleHeightRange; 
@property (nonatomic,readonly) double contentBaselineOffsetFromTop; 
@property (nonatomic,readonly) double contentBaseHeight; 
@property (assign,nonatomic) long long preferredContentAlignment;                         //@synthesize preferredContentAlignment=_preferredContentAlignment - In the implementation block
@property (nonatomic,copy,readonly) UIMenu * backButtonMenu; 
@property (nonatomic,readonly) BOOL _underlayNavigationBarContent; 
@property (nonatomic,readonly) double _navigationBarContentHeight; 
@property (nonatomic,readonly) double _navigationBarBackButtonMaximumWidth; 
@property (nonatomic,readonly) BOOL _hideNavigationBarBackButton; 
@property (nonatomic,readonly) BOOL _hideNavigationBarLeadingBarButtons; 
@property (nonatomic,readonly) BOOL _hideNavigationBarStandardTitle; 
@property (nonatomic,readonly) BOOL _hideNavigationBarTrailingBarButtons; 
@property (nonatomic,readonly) double _navigationBarBackButtonAlpha; 
@property (nonatomic,readonly) double _navigationBarLeadingBarButtonsAlpha; 
@property (nonatomic,readonly) double _navigationBarTrailingBarButtonsAlpha; 
@property (nonatomic,readonly) long long _preferredAlignment; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(double)height;
-(void)setHeight:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UINavigationItem *)navigationItem;
-(void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1 ;
-(void)contentDidChange;
-(double)backButtonMaximumWidth;
-(void)_setDataSource:(id)arg1 navigationItem:(id)arg2 titleLocation:(long long)arg3 ;
-(long long)_preferredContentSizeForSize:(long long)arg1 ;
-(void)_contentDidChange;
-(BOOL)_wantsTwoPartTransition;
-(void)_navigationBarTransitionWillBegin:(long long)arg1 willBeDisplayed:(BOOL)arg2 ;
-(void)_performNavigationBarTransition:(long long)arg1 willBeDisplayed:(BOOL)arg2 ;
-(void)_navigationBarTransitionCompleted:(long long)arg1 willBeDisplayed:(BOOL)arg2 ;
-(void)_navigationBarTraitCollectionDidChangeTo:(id)arg1 from:(id)arg2 ;
-(id)_traitCollectionOverridesForNavigationBarTraitCollection:(id)arg1 ;
-(BOOL)_underlayNavigationBarContent;
-(double)_navigationBarContentHeight;
-(double)_navigationBarBackButtonMaximumWidth;
-(BOOL)_hideNavigationBarBackButton;
-(BOOL)_hideNavigationBarLeadingBarButtons;
-(BOOL)_hideNavigationBarStandardTitle;
-(BOOL)_hideNavigationBarTrailingBarButtons;
-(double)_navigationBarBackButtonAlpha;
-(double)_navigationBarLeadingBarButtonsAlpha;
-(double)_navigationBarTrailingBarButtonsAlpha;
-(long long)_preferredAlignment;
-(long long)preferredContentSizeForSize:(long long)arg1 ;
-(void)transitionWillBegin:(long long)arg1 willBeDisplayed:(BOOL)arg2 ;
-(void)performTransition:(long long)arg1 willBeDisplayed:(BOOL)arg2 ;
-(void)transitionCompleted:(long long)arg1 willBeDisplayed:(BOOL)arg2 ;
-(void)navigationBarTraitCollectionDidChangeTo:(id)arg1 from:(id)arg2 ;
-(void)setPreferredContentAlignment:(long long)arg1 ;
-(UIMenu *)backButtonMenu;
-(void)setUnderlayBarContent:(BOOL)arg1 ;
-(void)setBackButtonMaximumWidth:(double)arg1 ;
-(void)setHideBackButton:(BOOL)arg1 ;
-(void)setHideLeadingBarButtons:(BOOL)arg1 ;
-(void)setHideStandardTitle:(BOOL)arg1 ;
-(void)setHideTrailingBarButtons:(BOOL)arg1 ;
-(void)setBackButtonAlpha:(double)arg1 ;
-(void)setLeadingBarAlpha:(double)arg1 ;
-(void)setTrailingBarAlpha:(double)arg1 ;
-(NSArray *)contentOverlayRects;
-(long long)leadingOverlayCount;
-(long long)trailingOverlayCount;
-(double)largeTitleHeight;
-(CGSize)largeTitleHeightRange;
-(double)contentBaselineOffsetFromTop;
-(double)contentBaseHeight;
-(void)preferredContentSizeDidChange;
-(long long)titleLocation;
-(BOOL)underlayBarContent;
-(BOOL)hideBackButton;
-(BOOL)hideLeadingBarButtons;
-(BOOL)hideStandardTitle;
-(BOOL)hideTrailingBarButtons;
-(double)backButtonAlpha;
-(double)leadingBarAlpha;
-(double)trailingBarAlpha;
-(long long)preferredContentAlignment;
@end

