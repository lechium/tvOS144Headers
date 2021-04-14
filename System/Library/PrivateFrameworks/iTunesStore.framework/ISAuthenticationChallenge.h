/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURLAuthenticationChallenge, NSString;

@interface ISAuthenticationChallenge : NSObject {

	NSURLAuthenticationChallenge* _challenge;
	NSString* _localizedMessage;
	NSString* _localizedTitle;

}

@property (retain) NSString * localizedMessage;                                  //@synthesize localizedMessage=_localizedMessage - In the implementation block
@property (retain) NSString * localizedTitle;                                    //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (readonly) BOOL hasPassword; 
@property (retain,readonly) NSString * password; 
@property (retain,readonly) NSString * user; 
@property (readonly) long long failureCount; 
@property (readonly) BOOL userNameIsEditable; 
@property (readonly) BOOL userNameIsEmail; 
@property (readonly) id<NSURLAuthenticationChallengeSender> sender; 
-(void)dealloc;
-(NSString *)user;
-(NSString *)password;
-(id<NSURLAuthenticationChallengeSender>)sender;
-(BOOL)hasPassword;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(long long)failureCount;
-(NSString *)localizedMessage;
-(id)initWithAuthenticationChallenge:(id)arg1 ;
-(void)setLocalizedMessage:(NSString *)arg1 ;
-(void)cancelAuthentication;
-(void)useCredential:(id)arg1 ;
-(BOOL)userNameIsEditable;
-(BOOL)userNameIsEmail;
@end

