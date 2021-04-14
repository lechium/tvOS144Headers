/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <UIKit/UISystemInputViewControllerDelegate.h>

@protocol TVTextEntryControllerDelegate;
@class __TVTextEntryTextField, UIView, UILabel, UISystemInputViewController, UITextField, NSString;

@interface _TVTextEntryController : UIViewController <UISystemInputViewControllerDelegate> {

	__TVTextEntryTextField* _textField;
	UIView* _topAccessoryView;
	UIView* _bottomAccessoryView;
	BOOL _isTouchEnabled;
	UIView* _preferredFocusedView;
	BOOL _hideAccessoryViews;
	id<TVTextEntryControllerDelegate> _delegate;
	UILabel* _textFieldHeaderLabel;
	UISystemInputViewController* _systemInputViewController;

}

@property (nonatomic,readonly) UISystemInputViewController * systemInputViewController;              //@synthesize systemInputViewController=_systemInputViewController - In the implementation block
@property (assign,nonatomic,__weak) id<TVTextEntryControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UITextField * textField;                                              //@synthesize textField=_textField - In the implementation block
@property (nonatomic,readonly) UILabel * textFieldHeaderLabel;                                       //@synthesize textFieldHeaderLabel=_textFieldHeaderLabel - In the implementation block
@property (nonatomic,retain) UIView * topAccessoryView;                                              //@synthesize topAccessoryView=_topAccessoryView - In the implementation block
@property (nonatomic,retain) UIView * bottomAccessoryView;                                           //@synthesize bottomAccessoryView=_bottomAccessoryView - In the implementation block
@property (assign,nonatomic) BOOL textFieldAllowsFocus; 
@property (assign,nonatomic) unsigned long long maxLength; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<TVTextEntryControllerDelegate>)delegate;
-(void)setDelegate:(id<TVTextEntryControllerDelegate>)arg1 ;
-(unsigned long long)maxLength;
-(void)setMaxLength:(unsigned long long)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UITextField *)textField;
-(void)viewDidLayoutSubviews;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(void)setTopAccessoryView:(UIView *)arg1 ;
-(void)setBottomAccessoryView:(UIView *)arg1 ;
-(UIView *)bottomAccessoryView;
-(UIView *)topAccessoryView;
-(void)_doneButtonPressed:(id)arg1 ;
-(void)systemInputViewController:(id)arg1 didChangeAccessoryVisibility:(BOOL)arg2 ;
-(void)systemInputViewControllerDidAcceptRecentInput:(id)arg1 ;
-(BOOL)_disableAutomaticKeyboardUI;
-(BOOL)_enableAutomaticKeyboardPressDone;
-(BOOL)textFieldAllowsFocus;
-(void)setTextFieldAllowsFocus:(BOOL)arg1 ;
-(UILabel *)textFieldHeaderLabel;
-(UISystemInputViewController *)systemInputViewController;
@end

