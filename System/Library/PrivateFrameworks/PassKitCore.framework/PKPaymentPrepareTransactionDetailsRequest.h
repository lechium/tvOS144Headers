/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPaymentMerchantSession, NSString, NSDecimalNumber;

@interface PKPaymentPrepareTransactionDetailsRequest : PKPaymentWebServiceRequest {

	PKPaymentMerchantSession* _merchantSession;
	NSString* _secureElementIdentifier;
	NSDecimalNumber* _amount;
	NSString* _currencyCode;

}

@property (nonatomic,retain) PKPaymentMerchantSession * merchantSession;              //@synthesize merchantSession=_merchantSession - In the implementation block
@property (nonatomic,copy) NSString * secureElementIdentifier;                        //@synthesize secureElementIdentifier=_secureElementIdentifier - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * amount;                                  //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                                   //@synthesize currencyCode=_currencyCode - In the implementation block
+(id)serverSupportedLanguages;
-(NSString *)currencyCode;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(NSDecimalNumber *)amount;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(PKPaymentMerchantSession *)merchantSession;
-(void)setMerchantSession:(PKPaymentMerchantSession *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
-(NSString *)secureElementIdentifier;
-(void)setSecureElementIdentifier:(NSString *)arg1 ;
-(id)initWithMerchantSession:(id)arg1 secureElementIdentifier:(id)arg2 amount:(id)arg3 currencyCode:(id)arg4 ;
@end
