/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ACAccountStore;

@interface AASignInOperationHelper : NSObject {

	ACAccountStore* _accountStore;

}
-(id)init;
-(void)_saveAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)signInAccount:(id)arg1 enablingDataclasses:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_refreshEnabledDataclassesForAccount:(id)arg1 ;
@end

