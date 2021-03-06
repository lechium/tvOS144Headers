/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ACAccountStore, PKAppleAccountInformation;

@interface PKAppleAccountManager : NSObject {

	ACAccountStore* _accountStore;

}

@property (nonatomic,readonly) PKAppleAccountInformation * appleAccountInformation; 
@property (nonatomic,readonly) ACAccountStore * accountStore; 
+(id)sharedInstance;
-(ACAccountStore *)accountStore;
-(id)_primaryAppleAccount;
-(id)_aidaAccount;
-(void)renewAppleAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(PKAppleAccountInformation *)appleAccountInformation;
@end

