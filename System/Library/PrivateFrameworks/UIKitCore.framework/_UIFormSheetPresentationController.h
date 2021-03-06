/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISheetPresentationController.h>

@interface _UIFormSheetPresentationController : _UISheetPresentationController {

	BOOL _layoutStateShouldAvoidKeyboard;
	double _keyboardYOrigin;

}
+(long long)_initialMode;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(CGRect)frameOfPresentedViewInContainerView;
-(void)presentationTransitionWillBegin;
-(void)dismissalTransitionWillBegin;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
-(BOOL)_presentationPotentiallyUnderlapsStatusBar;
-(long long)_defaultPresentationStyleForTraitCollection:(id)arg1 ;
-(BOOL)shouldSubscribeToKeyboardNotifications;
-(void)_changeLayoutModeToAvoidKeyboard:(BOOL)arg1 withOrigin:(double)arg2 ;
-(BOOL)_shouldHideBottomCorner;
@end

