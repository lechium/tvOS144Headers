/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/TVTextEntryControllerDelegate.h>

@protocol AKTVSignInViewControllerDelegate;
@class NSString, AKBasicLoginActions, UIViewController, UITapGestureRecognizer;

@interface AKTVSignInViewController : UIViewController <UIGestureRecognizerDelegate, TVTextEntryControllerDelegate> {

	NSString* _currentTitle;
	NSString* _currentSubtitle;
	BOOL _isUsernameEditable;
	BOOL _didPerformAction;
	NSString* _username;
	NSString* _password;
	NSString* _reason;
	NSString* _signInButtonString;
	id<AKTVSignInViewControllerDelegate> _signInDelegate;
	AKBasicLoginActions* _loginActions;
	UIViewController* _childViewController;
	UITapGestureRecognizer* _menuRecognizer;
	long long _state;

}

@property (nonatomic,retain) UIViewController * childViewController;                                  //@synthesize childViewController=_childViewController - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * menuRecognizer;                                 //@synthesize menuRecognizer=_menuRecognizer - In the implementation block
@property (assign,nonatomic) long long state;                                                         //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL didPerformAction;                                                   //@synthesize didPerformAction=_didPerformAction - In the implementation block
@property (nonatomic,copy) NSString * username;                                                       //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                                                       //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSString * reason;                                                         //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSString * signInButtonString;                                             //@synthesize signInButtonString=_signInButtonString - In the implementation block
@property (assign,nonatomic,__weak) id<AKTVSignInViewControllerDelegate> signInDelegate;              //@synthesize signInDelegate=_signInDelegate - In the implementation block
@property (assign,nonatomic) BOOL isUsernameEditable;                                                 //@synthesize isUsernameEditable=_isUsernameEditable - In the implementation block
@property (nonatomic,copy) AKBasicLoginActions * loginActions;                                        //@synthesize loginActions=_loginActions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)reason;
-(NSString *)password;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSString *)username;
-(void)setPassword:(NSString *)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(void)setIsUsernameEditable:(BOOL)arg1 ;
-(BOOL)isUsernameEditable;
-(void)loadView;
-(id)initWithUsername:(id)arg1 password:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)_handleMenuRecognizer:(id)arg1 ;
-(id<AKTVSignInViewControllerDelegate>)signInDelegate;
-(AKBasicLoginActions *)loginActions;
-(BOOL)didPerformAction;
-(void)performCancelAction;
-(void)setDidPerformAction:(BOOL)arg1 ;
-(void)_showUsernameEntryViewController;
-(void)_showPasswordEntryViewController;
-(void)_showActivityIndicatorViewController;
-(void)performAuthenticateAction;
-(void)_showCredentialEntryViewControllerForState:(long long)arg1 ;
-(NSString *)signInButtonString;
-(void)_textFieldTextDidChange:(id)arg1 ;
-(id)_titleStringAttributes;
-(id)_messageStringAttributes;
-(void)_submitButtonPressed:(id)arg1 ;
-(void)_showChildViewController:(id)arg1 ;
-(UIViewController *)childViewController;
-(void)textEntryControllerDidFinish:(id)arg1 ;
-(void)textEntryController:(id)arg1 didReceiveAutofillSuggestion:(id)arg2 ;
-(void)resetAuthenticatingState;
-(void)setSignInButtonString:(NSString *)arg1 ;
-(void)setSignInDelegate:(id<AKTVSignInViewControllerDelegate>)arg1 ;
-(void)setLoginActions:(AKBasicLoginActions *)arg1 ;
-(void)setChildViewController:(UIViewController *)arg1 ;
-(UITapGestureRecognizer *)menuRecognizer;
-(void)setMenuRecognizer:(UITapGestureRecognizer *)arg1 ;
@end

