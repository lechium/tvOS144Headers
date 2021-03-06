/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIInputViewSetPlacement_FloatingApplicator.h>

@class UIKeyboardPopoverContainer;

@interface UIInputViewSetPlacement_DockResponderApplicator : UIInputViewSetPlacement_FloatingApplicator {

	UIKeyboardPopoverContainer* _popover;
	CGRect _popoverRectPlaceholder;

}

@property (nonatomic,retain) UIKeyboardPopoverContainer * popover;              //@synthesize popover=_popover - In the implementation block
@property (assign,nonatomic) CGRect popoverRectPlaceholder;                     //@synthesize popoverRectPlaceholder=_popoverRectPlaceholder - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(void)invalidate;
-(void)prepare;
-(UIEdgeInsets)contentInsets;
-(void)applyChanges:(id)arg1 ;
-(UIKeyboardPopoverContainer *)popover;
-(void)setPopover:(UIKeyboardPopoverContainer *)arg1 ;
-(id)draggableView;
-(BOOL)preBeginGesture:(id)arg1 shouldBegin:(BOOL*)arg2 ;
-(BOOL)isGesture:(id)arg1 inDraggableView:(CGPoint)arg2 ;
-(id)twoFingerDraggableView;
-(CGRect)popoverFrame;
-(BOOL)isPopoverRequired;
-(void)invalidatePopover;
-(void)setPopoverRectPlaceholder:(CGRect)arg1 ;
-(CGRect)popoverRectPlaceholder;
@end

