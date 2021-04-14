/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/TVLTextEntryViewController.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@class NSString, UITapGestureRecognizer, UIView;

@interface TVLAuthenticationViewController : TVLTextEntryViewController <ATVUpdatable> {

	NSString* _accountName;
	UITapGestureRecognizer* _menuRecognizer;
	NSString* _password;
	long long _state;
	UIView* preferedFocusView;

}

@property (assign,setter=_setState:,getter=_state,nonatomic) long long _state; 
@property (setter=_setAccountName:,getter=_accountName,nonatomic,copy) NSString * _accountName; 
@property (setter=_setPassword:,getter=_password,nonatomic,copy) NSString * _password; 
-(long long)_state;
-(NSString *)_password;
-(NSString *)_accountName;
-(void)_setPassword:(id)arg1 ;
-(void)_setState:(long long)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)_menuButtonAction:(id)arg1 ;
-(void)didUpdateFeedElementRequiringUserInterfaceUpdate:(BOOL)arg1 previousElement:(id)arg2 ;
-(id)initWithAuthenticationElement:(id)arg1 ;
-(id)_authenticationElement;
-(void)_didSelectDefaultButton;
-(void)_cancelAuthentication;
-(void)_authenticationFinished:(BOOL)arg1 withFailureMessage:(id)arg2 ;
-(void)_setAccountName:(id)arg1 ;
-(void)_attemptJSAuthentication;
@end

