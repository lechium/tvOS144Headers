/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreCDPUI/CDPUIController.h>

@interface CDPUIAccountRecoveryController : CDPUIController
-(id)devicePicker:(id)arg1 escapeOffersForDevices:(id)arg2 ;
-(void)devicePicker:(id)arg1 didSelectDevice:(id)arg2 ;
-(id)_accountRecoveryEscapeOfferForDevice:(id)arg1 ;
-(id)_accountRecoveryDevicePickerEscapeOffer;
-(void)_setupDevicePickerController:(/*^block*/id)arg1 ;
-(BOOL)performingAccountRecovery;
-(void)_presentRemoteSecretControllerWithNewestDevice:(id)arg1 ;
@end
