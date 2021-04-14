/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UIKeyboardAutoRespondingScrollViewController;
@class UIViewController;

@interface UIAutoRespondingScrollViewControllerKeyboardSupport : NSObject {

	UIViewController*<_UIKeyboardAutoRespondingScrollViewController> _viewController;
	double _adjustmentForKeyboard;
	unsigned _viewIsDisappearing : 1;
	unsigned _registeredForNotifications : 1;

}

@property (assign,nonatomic) double adjustmentForKeyboard;                 //@synthesize adjustmentForKeyboard=_adjustmentForKeyboard - In the implementation block
@property (assign,nonatomic) BOOL viewIsDisappearing; 
@property (assign,nonatomic) BOOL registeredForNotifications; 
-(BOOL)registeredForNotifications;
-(void)setRegisteredForNotifications:(BOOL)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)_keyboardDidHide:(id)arg1 ;
-(void)_keyboardDidChangeFrame:(id)arg1 ;
-(void)_keyboardDidShow:(id)arg1 ;
-(id)initWithViewController:(id)arg1 ;
-(void)_adjustScrollViewForKeyboardInfo:(id)arg1 ;
-(void)setViewIsDisappearing:(BOOL)arg1 ;
-(BOOL)viewIsDisappearing;
-(double)adjustmentForKeyboard;
-(void)setAdjustmentForKeyboard:(double)arg1 ;
@end
