/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKExplanationViewControllerDelegate.h>

@protocol PKPeerPaymentUpdatedTermsViewControllerDelegate;
@class NSString;

@interface PKPeerPaymentUpdatedTermsViewController : PKExplanationViewController <PKExplanationViewControllerDelegate> {

	NSString* _uniqueID;
	id<PKPeerPaymentUpdatedTermsViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKPeerPaymentUpdatedTermsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PKPeerPaymentUpdatedTermsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKPeerPaymentUpdatedTermsViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)loadView;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewControllerDidSelectCancel:(id)arg1 ;
-(void)showSpinner:(BOOL)arg1 ;
-(id)initWithPassUniqueID:(id)arg1 ;
@end
