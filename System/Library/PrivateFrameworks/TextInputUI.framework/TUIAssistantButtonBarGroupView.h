/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol TUIButtonBarViewProvider;
@class NSMutableArray, UIBarButtonItemGroup, _UIButtonBarButtonVisualProvider, NSArray;

@interface TUIAssistantButtonBarGroupView : UIView {

	NSMutableArray* _visibleButtons;
	BOOL _collapsed;
	UIBarButtonItemGroup* _barButtonItemGroup;
	double _itemSpacing;
	id<TUIButtonBarViewProvider> _buttonProvider;
	_UIButtonBarButtonVisualProvider* _visualProvider;

}

@property (assign,nonatomic,__weak) id<TUIButtonBarViewProvider> buttonProvider;              //@synthesize buttonProvider=_buttonProvider - In the implementation block
@property (nonatomic,retain) _UIButtonBarButtonVisualProvider * visualProvider;               //@synthesize visualProvider=_visualProvider - In the implementation block
@property (nonatomic,retain) UIBarButtonItemGroup * barButtonItemGroup;                       //@synthesize barButtonItemGroup=_barButtonItemGroup - In the implementation block
@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed; 
@property (nonatomic,readonly) NSArray * visibleButtons; 
@property (assign,nonatomic) double itemSpacing;                                              //@synthesize itemSpacing=_itemSpacing - In the implementation block
@property (nonatomic,readonly) BOOL containsFlexibleItems; 
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(BOOL)isCollapsed;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setCollapsed:(BOOL)arg1 ;
-(id)initWithBarButtonItemGroup:(id)arg1 visualProvider:(id)arg2 buttonProvider:(id)arg3 ;
-(BOOL)_canBeCollapsed;
-(void)setBarButtonItemGroup:(UIBarButtonItemGroup *)arg1 ;
-(void)setItemSpacing:(double)arg1 ;
-(id)_visibleItemsAllowingCollapse:(BOOL)arg1 ;
-(id)_visibleItems;
-(BOOL)containsFlexibleItems;
-(CGSize)_preferredSizeForItems:(id)arg1 fittingWidth:(double)arg2 ;
-(void)_ensureVisibleButtonsForVisibleItems;
-(NSArray *)visibleButtons;
-(id)_buttonBarItemViewForBarButtonItem:(id)arg1 ;
-(void)_itemDidChangeSelectionState:(id)arg1 ;
-(void)_itemDidChangeEnabledState:(id)arg1 ;
-(void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2 ;
-(void)_itemStandardViewNeedsUpdate:(id)arg1 ;
-(void)_itemDidChangeWidth:(id)arg1 ;
-(void)_itemDidChangeHiddenState:(id)arg1 ;
-(UIBarButtonItemGroup *)barButtonItemGroup;
-(double)itemSpacing;
-(id<TUIButtonBarViewProvider>)buttonProvider;
-(void)setButtonProvider:(id<TUIButtonBarViewProvider>)arg1 ;
-(_UIButtonBarButtonVisualProvider *)visualProvider;
-(void)setVisualProvider:(_UIButtonBarButtonVisualProvider *)arg1 ;
@end

