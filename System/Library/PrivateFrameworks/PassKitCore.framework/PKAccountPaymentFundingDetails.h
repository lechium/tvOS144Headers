/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface PKAccountPaymentFundingDetails : NSObject <NSSecureCoding> {

	NSData* _encryptedData;
	NSData* _publicKeyHash;

}
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonString;
-(id)jsonDictionaryRepresentation;
-(id)hashComponentWithCertificatesResponse:(id)arg1 ;
-(id)jsonDictionaryRepresentationWithCertificatesResponse:(id)arg1 ;
-(id)_encryptedDataWithCertificatesResponse:(id)arg1 publicKeyHash:(id*)arg2 ;
-(id)fundingDetailsUnencryptedDictionary;
@end

