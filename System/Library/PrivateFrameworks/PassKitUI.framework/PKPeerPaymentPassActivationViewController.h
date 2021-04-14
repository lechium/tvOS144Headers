/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKExplanationViewControllerDelegate.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>
#import <libobjc.A.dylib/PKPeerPaymentSetupFlowControllerDataSource.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKPeerPaymentSetupFlowController, PKPeerPaymentSetupFlowHeroView, NSString;

@interface PKPeerPaymentPassActivationViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKExplanationViewDelegate, PKPeerPaymentSetupFlowControllerDataSource> {

	PKPeerPaymentSetupFlowController* _peerPaymentSetupFlowController;
	PKPeerPaymentSetupFlowHeroView* _heroView;
	unsigned long long _state;
	unsigned long long _operations;
	BOOL _shouldShowAddDebitCardViewController;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(void)_setState:(unsigned long long)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)_terminateSetupFlow;
-(void)explanationViewControllerDidSelectCancel:(id)arg1 ;
-(void)_showSpinner:(BOOL)arg1 ;
-(void)_beginSetup;
-(void)_handleActivatedState;
-(void)_handleNextStep;
-(void)_presentDisplayableError:(id)arg1 ;
-(id)_titleStringForState;
-(id)_bodyStringForState;
-(BOOL)_shouldShowAddDebitCardViewController;
-(void)_presentActivationFailedErrorAlert;
-(id)initWithPeerPaymentSetupFlowController:(id)arg1 ;
-(BOOL)shouldPushTerms;
@end

