/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKPaymentSetupFieldsViewController.h>
#import <libobjc.A.dylib/PKPaymentSetupPresentationProtocol.h>
#import <libobjc.A.dylib/PKApplyFlowControllerProtocol.h>

@class PKApplyController, UIBarButtonItem, PKApplyRequiredFieldsPage, NSString;

@interface PKApplyFieldsViewController : PKPaymentSetupFieldsViewController <PKPaymentSetupPresentationProtocol, PKApplyFlowControllerProtocol> {

	PKApplyController* _controller;
	UIBarButtonItem* _cancelButton;
	PKApplyRequiredFieldsPage* _applyPage;
	BOOL _isLoading;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_terminateFlow;
-(void)_handleNextStep;
-(id)defaultHeaderViewTitle;
-(id)defaultHeaderViewSubTitle;
-(void)handleNextButtonTapped:(id)arg1 ;
-(id)onPresentationRemoveViewControllersAfterMarker;
-(id)currentPage;
-(void)_cancelPressed;
-(void)_featureApplicationUpdated;
-(void)_showSubmissionSpinner:(BOOL)arg1 ;
-(void)_handleNextViewController:(id)arg1 displayableError:(id)arg2 terminationHandler:(/*^block*/id)arg3 ;
-(void)_withdrawApplicationTapped;
-(id)initWithController:(id)arg1 setupDelegate:(id)arg2 applyPage:(id)arg3 ;
-(void)_completeInWalletLater;
-(BOOL)shouldAppearWithFirstEmptyFieldAsFirstResponder;
@end

