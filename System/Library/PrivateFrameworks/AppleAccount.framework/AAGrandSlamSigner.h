/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ACAccountStore, ACAccount, NSString;

@interface AAGrandSlamSigner : NSObject {

	ACAccountStore* _accountStore;
	ACAccount* _grandSlamAccount;
	NSString* _appTokenID;
	BOOL _useAltDSID;
	NSString* _headerFieldKey;

}

@property (nonatomic,readonly) ACAccount * grandSlamAccount;               //@synthesize grandSlamAccount=_grandSlamAccount - In the implementation block
@property (nonatomic,readonly) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (assign,nonatomic) BOOL useAltDSID;                              //@synthesize useAltDSID=_useAltDSID - In the implementation block
@property (nonatomic,retain) NSString * headerFieldKey;                    //@synthesize headerFieldKey=_headerFieldKey - In the implementation block
-(ACAccountStore *)accountStore;
-(ACAccount *)grandSlamAccount;
-(id)initWithAccountStore:(id)arg1 grandSlamAccount:(id)arg2 appTokenID:(id)arg3 ;
-(void)setHeaderFieldKey:(NSString *)arg1 ;
-(BOOL)signURLRequest:(id)arg1 isUserInitiated:(BOOL)arg2 ;
-(void)setUseAltDSID:(BOOL)arg1 ;
-(id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 accountStore:(id)arg3 appTokenID:(id)arg4 ;
-(BOOL)signURLRequest:(id)arg1 ;
-(BOOL)useAltDSID;
-(NSString *)headerFieldKey;
@end

