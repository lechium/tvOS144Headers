/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSDecimalNumber, NSString, NSDictionary;

@interface PKPaymentPrepareTransactionDetailsResponse : PKPaymentWebServiceResponse {

	NSDecimalNumber* _amount;
	NSString* _secureElementIdentifier;
	NSDictionary* _instructionsDictionary;

}

@property (nonatomic,readonly) NSDecimalNumber * amount;                           //@synthesize amount=_amount - In the implementation block
@property (nonatomic,readonly) NSString * secureElementIdentifier;                 //@synthesize secureElementIdentifier=_secureElementIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * instructionsDictionary;              //@synthesize instructionsDictionary=_instructionsDictionary - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSDecimalNumber *)amount;
-(NSString *)secureElementIdentifier;
-(NSDictionary *)instructionsDictionary;
@end
