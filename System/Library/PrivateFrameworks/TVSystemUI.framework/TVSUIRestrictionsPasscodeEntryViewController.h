/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class TVDigitEntryViewController, UIViewController;

@interface TVSUIRestrictionsPasscodeEntryViewController : UIViewController {

	TVDigitEntryViewController* _passcodeEntryViewController;
	UIViewController* _guardedViewController;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) TVDigitEntryViewController * passcodeEntryViewController;              //@synthesize passcodeEntryViewController=_passcodeEntryViewController - In the implementation block
@property (nonatomic,retain) UIViewController * guardedViewController;                              //@synthesize guardedViewController=_guardedViewController - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                    //@synthesize completionHandler=_completionHandler - In the implementation block
+(id)restrictionsPasscodeEntryViewControllerGuarding:(id)arg1 ;
+(id)restrictionsPasscodeEntryViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(id)preferredFocusEnvironments;
-(void)setOverrideUserInterfaceStyle:(long long)arg1 ;
-(void)shake;
-(id)initWithTitle:(id)arg1 prompt:(id)arg2 guarding:(id)arg3 completion:(/*^block*/id)arg4 ;
-(TVDigitEntryViewController *)passcodeEntryViewController;
-(UIViewController *)guardedViewController;
-(id)initWithTitle:(id)arg1 prompt:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setPasscodeEntryViewController:(TVDigitEntryViewController *)arg1 ;
-(void)setGuardedViewController:(UIViewController *)arg1 ;
-(void)_handleFinishedWithResult:(id)arg1 ;
-(void)_handleCancelled;
@end

