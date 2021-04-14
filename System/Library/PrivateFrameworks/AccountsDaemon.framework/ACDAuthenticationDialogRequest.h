/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, ACAccount, NSString;

@interface ACDAuthenticationDialogRequest : NSObject {

	BOOL _confirmationRequired;
	NSURL* _url;
	ACAccount* _account;
	NSString* _authDelegateClassName;
	NSString* _authDelegateClassBundlePath;
	/*^block*/id _completion;

}

@property (nonatomic,copy) NSURL * url;                                         //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) BOOL confirmationRequired;                         //@synthesize confirmationRequired=_confirmationRequired - In the implementation block
@property (nonatomic,retain) ACAccount * account;                               //@synthesize account=_account - In the implementation block
@property (nonatomic,copy) NSString * authDelegateClassName;                    //@synthesize authDelegateClassName=_authDelegateClassName - In the implementation block
@property (nonatomic,copy) NSString * authDelegateClassBundlePath;              //@synthesize authDelegateClassBundlePath=_authDelegateClassBundlePath - In the implementation block
@property (nonatomic,copy) id completion;                                       //@synthesize completion=_completion - In the implementation block
-(id)completion;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(void)setCompletion:(id)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(BOOL)confirmationRequired;
-(void)setConfirmationRequired:(BOOL)arg1 ;
-(NSString *)authDelegateClassName;
-(void)setAuthDelegateClassName:(NSString *)arg1 ;
-(NSString *)authDelegateClassBundlePath;
-(void)setAuthDelegateClassBundlePath:(NSString *)arg1 ;
@end

