/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CDPDDeviceSecretValidatorDelegate <NSObject>
@optional
-(void)secretValidatorWillAttemptRecovery;
-(BOOL)secretValidator:(id)arg1 shouldAcceptRecoveryError:(id*)arg2;
-(void)secretValidator:(id)arg1 didFailRecoveryWithErrors:(id)arg2 completion:(/*^block*/id)arg3;
-(void)secretValidator:(id)arg1 didFailRecovery:(id)arg2 withError:(id)arg3 completion:(/*^block*/id)arg4;

@required
-(void)secretValidator:(id)arg1 recoverSecureBackupWithContext:(id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)secretValidator:(id)arg1 shouldContinueValidationAfterError:(id)arg2;

@end

