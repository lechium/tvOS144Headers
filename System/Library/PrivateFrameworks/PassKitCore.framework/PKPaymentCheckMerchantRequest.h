/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentCheckMerchantRequest : PKPaymentWebServiceRequest {

	NSString* _merchantIdentifier;
	NSString* _domainName;

}

@property (nonatomic,copy) NSString * merchantIdentifier;              //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
@property (nonatomic,copy) NSString * domainName;                      //@synthesize domainName=_domainName - In the implementation block
-(NSString *)domainName;
-(void)setDomainName:(NSString *)arg1 ;
-(NSString *)merchantIdentifier;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
-(id)initWithMerchantIdentifier:(id)arg1 domainName:(id)arg2 ;
-(id)_urlRequestWithServiceURL:(id)arg1 ;
@end

