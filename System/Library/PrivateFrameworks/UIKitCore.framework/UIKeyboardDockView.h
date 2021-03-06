/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIViewRepresentingKeyboardLayout.h>

@protocol UIKeyboardDockViewDelegate;
@class UIKeyboardDockItem;

@interface UIKeyboardDockView : UIView <_UIViewRepresentingKeyboardLayout> {

	id<UIKeyboardDockViewDelegate> _delegate;
	UIKeyboardDockItem* _leftDockItem;
	UIKeyboardDockItem* _rightDockItem;
	UIKeyboardDockItem* _centerDockItem;

}

@property (assign,nonatomic,__weak) id<UIKeyboardDockViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIKeyboardDockItem * leftDockItem;                           //@synthesize leftDockItem=_leftDockItem - In the implementation block
@property (nonatomic,retain) UIKeyboardDockItem * rightDockItem;                          //@synthesize rightDockItem=_rightDockItem - In the implementation block
@property (nonatomic,retain) UIKeyboardDockItem * centerDockItem;                         //@synthesize centerDockItem=_centerDockItem - In the implementation block
+(id)dockViewHomeGestureExclusionZones;
+(long long)_currentInterfaceOrientation;
+(SCD_Struct_UI98)_itemFramesForBoundingSize:(CGSize)arg1 ;
-(void)dealloc;
-(id<UIKeyboardDockViewDelegate>)delegate;
-(void)setDelegate:(id<UIKeyboardDockViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(id)_keyboardLongPressInteractionRegions;
-(void)_didReceiveHandBiasChangeNotification:(id)arg1 ;
-(id)_dockItemWithButton:(id)arg1 ;
-(void)_dockItemButtonWasTapped:(id)arg1 withEvent:(id)arg2 ;
-(UIKeyboardDockItem *)leftDockItem;
-(UIKeyboardDockItem *)rightDockItem;
-(UIKeyboardDockItem *)centerDockItem;
-(void)_configureDockItem:(id)arg1 ;
-(id)_keyboardLayoutView;
-(void)setLeftDockItem:(UIKeyboardDockItem *)arg1 ;
-(void)setRightDockItem:(UIKeyboardDockItem *)arg1 ;
-(void)setCenterDockItem:(UIKeyboardDockItem *)arg1 ;
@end

