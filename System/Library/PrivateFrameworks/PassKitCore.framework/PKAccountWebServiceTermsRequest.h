/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL;

@interface PKAccountWebServiceTermsRequest : PKAccountWebServiceRequest {

	BOOL _termsAccepted;
	NSString* _accountIdentifier;
	NSURL* _baseURL;
	NSString* _termsIdentifier;

}

@property (nonatomic,copy) NSString * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                         //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy) NSString * termsIdentifier;                //@synthesize termsIdentifier=_termsIdentifier - In the implementation block
@property (assign,nonatomic) BOOL termsAccepted;                      //@synthesize termsAccepted=_termsAccepted - In the implementation block
-(NSURL *)baseURL;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(NSString *)accountIdentifier;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(NSString *)termsIdentifier;
-(void)setTermsIdentifier:(NSString *)arg1 ;
-(BOOL)termsAccepted;
-(void)setTermsAccepted:(BOOL)arg1 ;
@end

