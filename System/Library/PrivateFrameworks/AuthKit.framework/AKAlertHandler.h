/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AKAlertHandlerUIProvider;
@interface AKAlertHandler : NSObject {

	id<AKAlertHandlerUIProvider> _uiProvider;

}

@property (assign,nonatomic,__weak) id<AKAlertHandlerUIProvider> uiProvider;              //@synthesize uiProvider=_uiProvider - In the implementation block
+(id)sharedInstance;
-(void)setUiProvider:(id<AKAlertHandlerUIProvider>)arg1 ;
-(void)showAlertForError:(id)arg1 withAuthKitAccount:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_showAlertForInvalidContextWithCompletion:(/*^block*/id)arg1 ;
-(void)_showAlertForMissingAppleAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)_showAlertForAccountNotSupportedWithCompletion:(/*^block*/id)arg1 ;
-(void)_showAlertForUnverifiedEmailWithCompletion:(/*^block*/id)arg1 ;
-(void)_showAlertForInsufficientSecurityLevelWithBundleID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_showAlertForCannotFindServerWithCompletion:(/*^block*/id)arg1 ;
-(void)_showAlertForUnderageAccount:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_showAlertForPasscodeSetupWithCompletion:(/*^block*/id)arg1 ;
-(id)notificationDictionaryWithTitle:(id)arg1 message:(id)arg2 defaultButton:(id)arg3 alternateButton:(id)arg4 ;
-(BOOL)showAlert:(id)arg1 primaryAction:(/*^block*/id)arg2 altAction:(/*^block*/id)arg3 ;
-(void)_openSpyglass;
-(void)_openPasscodeSetup;
-(BOOL)showAlert:(id)arg1 primaryAction:(/*^block*/id)arg2 altAction:(/*^block*/id)arg3 cancelAction:(/*^block*/id)arg4 ;
-(id)_URLWithString:(id)arg1 byAppendingParameters:(id)arg2 ;
-(void)showAlertForError:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_openUpgradeAccountSecurityLevelWithBundleID:(id)arg1 ;
-(id<AKAlertHandlerUIProvider>)uiProvider;
@end

