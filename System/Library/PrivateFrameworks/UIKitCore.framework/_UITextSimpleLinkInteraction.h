/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextItemInteractionInteraction.h>

@class UITapGestureRecognizer, UILongPressGestureRecognizer, _UITextInteractableItem;

@interface _UITextSimpleLinkInteraction : UITextItemInteractionInteraction {

	UITapGestureRecognizer* _linkTap;
	UILongPressGestureRecognizer* _highlighter;
	_UITextInteractableItem* _highlightedItem;

}
-(id)init;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(id)gesturesForFailureRequirements;
-(BOOL)interaction_gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)interaction_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)_allowItemInteractions;
-(void)linkTapped:(id)arg1 ;
-(id)itemInteractableView;
-(BOOL)_beginInteractionSessionForLinkAtPoint:(CGPoint)arg1 asTap:(BOOL)arg2 precision:(unsigned long long)arg3 ;
-(BOOL)_canBeginInteractionSessionForLinkAtPoint:(CGPoint)arg1 asTap:(BOOL)arg2 precision:(unsigned long long)arg3 ;
-(id)textLinkInteractableView;
-(void)highlight:(id)arg1 ;
@end
