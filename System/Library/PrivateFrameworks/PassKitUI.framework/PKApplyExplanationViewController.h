/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKDynamicProvisioningPageViewController.h>
#import <libobjc.A.dylib/PKApplyFlowControllerProtocol.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKApplyController, NSString;

@interface PKApplyExplanationViewController : PKDynamicProvisioningPageViewController <PKApplyFlowControllerProtocol> {

	BOOL _isLoading;
	PKApplyController* _controller;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	/*^block*/id _continueAction;
	/*^block*/id _auxiliaryAction;
	/*^block*/id _learnMoreAction;
	/*^block*/id _doneAction;

}

@property (assign,nonatomic,__weak) PKApplyController * controller;                                      //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentSetupViewControllerDelegate> setupDelegate;              //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (nonatomic,copy) id continueAction;                                                            //@synthesize continueAction=_continueAction - In the implementation block
@property (nonatomic,copy) id auxiliaryAction;                                                           //@synthesize auxiliaryAction=_auxiliaryAction - In the implementation block
@property (nonatomic,copy) id learnMoreAction;                                                           //@synthesize learnMoreAction=_learnMoreAction - In the implementation block
@property (nonatomic,copy) id doneAction;                                                                //@synthesize doneAction=_doneAction - In the implementation block
@property (nonatomic,copy) id primaryButtonAction; 
@property (nonatomic,copy) id secondaryButtonAction; 
@property (nonatomic,copy) id bodyButtonAction; 
@property (nonatomic,copy) id cancelButtonAction; 
@property (nonatomic,copy) id doneButtonAction; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_done;
-(void)_cancel;
-(void)setController:(PKApplyController *)arg1 ;
-(PKApplyController *)controller;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_learnMore;
-(id)doneAction;
-(void)_auxiliary;
-(void)showNavigationBarSpinner:(BOOL)arg1 ;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(id)currentPage;
-(void)handleNextViewController:(id)arg1 displayableError:(id)arg2 ;
-(void)_continue;
-(id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 applyPage:(id)arg4 ;
-(void)terminateSetupFlow;
-(void)_featureApplicationUpdated;
-(void)handleNextStep;
-(void)setContinueAction:(id)arg1 ;
-(void)setLearnMoreAction:(id)arg1 ;
-(void)setDoneAction:(id)arg1 ;
-(void)_performActionForBlock:(/*^block*/id)arg1 ;
-(void)_performLearnMoreAction;
-(void)_performDoneAction:(BOOL)arg1 ;
-(void)_bodyButtonAction;
-(id)continueAction;
-(id)auxiliaryAction;
-(void)setAuxiliaryAction:(id)arg1 ;
-(id)learnMoreAction;
@end

