/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/VSCredentialEntryFieldViewControllerDelegate.h>
#import <libobjc.A.dylib/VSCredentialEntryPickerViewControllerDelegate.h>
#import <libobjc.A.dylib/VSCredentialEntryViewController.h>

@protocol VSAuthenticationViewControllerDelegate;
@class VSCredentialEntryViewModel, UIViewController, NSString;

@interface VSCredentialEntryViewController_tvOS : UIViewController <UIGestureRecognizerDelegate, VSCredentialEntryFieldViewControllerDelegate, VSCredentialEntryPickerViewControllerDelegate, VSCredentialEntryViewController> {

	BOOL _cancellationAllowed;
	BOOL _hasAppeared;
	VSCredentialEntryViewModel* _viewModel;
	id<VSAuthenticationViewControllerDelegate> _delegate;
	UIViewController* _currentChildViewController;

}

@property (nonatomic,retain) UIViewController * currentChildViewController;                           //@synthesize currentChildViewController=_currentChildViewController - In the implementation block
@property (assign,nonatomic) BOOL hasAppeared;                                                        //@synthesize hasAppeared=_hasAppeared - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) VSCredentialEntryViewModel * viewModel;                                  //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<VSAuthenticationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isCancellationAllowed,nonatomic) BOOL cancellationAllowed;                   //@synthesize cancellationAllowed=_cancellationAllowed - In the implementation block
@property (nonatomic,readonly) CGSize preferredLogoSize; 
-(void)dealloc;
-(id<VSAuthenticationViewControllerDelegate>)delegate;
-(void)setDelegate:(id<VSAuthenticationViewControllerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(VSCredentialEntryViewModel *)viewModel;
-(void)setViewModel:(VSCredentialEntryViewModel *)arg1 ;
-(BOOL)hasAppeared;
-(void)setHasAppeared:(BOOL)arg1 ;
-(void)credentialEntryFieldViewControllerDidFinish:(id)arg1 ;
-(void)credentialEntryFieldViewControllerDidCancel:(id)arg1 ;
-(void)_stopObservingViewModel:(id)arg1 ;
-(void)_updateChildViewControllerForCredentialEntryField:(id)arg1 ;
-(void)_startObservingViewModel:(id)arg1 ;
-(id)_credentialEntryFieldViewControllerForField:(id)arg1 ;
-(void)setCurrentChildViewController:(UIViewController *)arg1 ;
-(UIViewController *)currentChildViewController;
-(void)_updateChildViewControllerForPicker:(id)arg1 ;
-(id)_currentCredentialEntryFieldViewController;
-(void)credentialEntryPickerViewController:(id)arg1 pickerDidSelectRow:(unsigned long long)arg2 ;
-(void)credentialEntryPickerViewControllerDidCancel:(id)arg1 ;
-(BOOL)isCancellationAllowed;
-(void)setCancellationAllowed:(BOOL)arg1 ;
-(CGSize)preferredLogoSize;
@end

