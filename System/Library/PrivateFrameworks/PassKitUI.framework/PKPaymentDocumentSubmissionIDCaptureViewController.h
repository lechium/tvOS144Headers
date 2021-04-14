/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreRecognition/CRCameraReader.h>
#import <libobjc.A.dylib/CRCameraReaderDelegate.h>
#import <libobjc.A.dylib/PKPaymentDocumentSubmissionControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentSetupPresentationProtocol.h>

@class PKPaymentDocumentSubmissionController, UIView, PKCameraCaptureInstructionView, NSTimer, UIBarButtonItem, NSString;

@interface PKPaymentDocumentSubmissionIDCaptureViewController : CRCameraReader <CRCameraReaderDelegate, PKPaymentDocumentSubmissionControllerDelegate, PKPaymentSetupPresentationProtocol> {

	PKPaymentDocumentSubmissionController* _captureController;
	UIView* _cameraView;
	UIView* _cameraInstructionContainerView;
	PKCameraCaptureInstructionView* _cameraInstructionView;
	BOOL _reachedTimeout;
	NSTimer* _timerTryAgain;
	UIBarButtonItem* _buttonCancel;
	long long _context;
	unsigned long long _featureIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)cancel;
-(void)viewDidLoad;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)cameraReaderDidCancel:(id)arg1 ;
-(void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2 ;
-(void)cameraReaderDidEnd:(id)arg1 ;
-(void)cameraReader:(id)arg1 didFailWithError:(id)arg2 ;
-(id)onPresentationRemoveViewControllersAfterMarker;
-(void)updateUIWithState:(long long)arg1 ;
-(void)captureController:(id)arg1 showLoading:(BOOL)arg2 ;
-(void)captureController:(id)arg1 didChangeStateTo:(long long)arg2 ;
-(id)initWithController:(id)arg1 context:(long long)arg2 featureIdentifier:(unsigned long long)arg3 ;
@end
