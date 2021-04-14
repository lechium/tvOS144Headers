/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKPaymentToken, PKContact, PKShippingMethod, NSData, NSMutableDictionary, NSString;

@interface PKPayment : NSObject <NSSecureCoding> {

	PKPaymentToken* _token;
	PKContact* _billingContact;
	PKContact* _shippingContact;
	PKShippingMethod* _shippingMethod;
	NSData* _credential;
	NSMutableDictionary* _authKitAuthenticationResults;
	long long _biometricAuthorizationAttempts;
	NSString* _installmentAuthorizationToken;

}

@property (nonatomic,retain) PKContact * billingContact;                                      //@synthesize billingContact=_billingContact - In the implementation block
@property (nonatomic,retain) PKContact * shippingContact;                                     //@synthesize shippingContact=_shippingContact - In the implementation block
@property (nonatomic,retain) PKPaymentToken * token;                                          //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) PKShippingMethod * shippingMethod;                               //@synthesize shippingMethod=_shippingMethod - In the implementation block
@property (nonatomic,retain) NSData * credential;                                             //@synthesize credential=_credential - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * authKitAuthenticationResults;              //@synthesize authKitAuthenticationResults=_authKitAuthenticationResults - In the implementation block
@property (assign,nonatomic) long long biometricAuthorizationAttempts;                        //@synthesize biometricAuthorizationAttempts=_biometricAuthorizationAttempts - In the implementation block
@property (nonatomic,copy) NSString * installmentAuthorizationToken;                          //@synthesize installmentAuthorizationToken=_installmentAuthorizationToken - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)version;
+(id)paymentWithProtobuf:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)credential;
-(PKPaymentToken *)token;
-(id)dictionaryRepresentation;
-(void)setToken:(PKPaymentToken *)arg1 ;
-(id)initWithToken:(id)arg1 ;
-(void)setCredential:(NSData *)arg1 ;
-(long long)biometricAuthorizationAttempts;
-(void)setBiometricAuthorizationAttempts:(long long)arg1 ;
-(id)protobuf;
-(PKContact *)shippingContact;
-(PKShippingMethod *)shippingMethod;
-(void)setBillingContact:(PKContact *)arg1 ;
-(void)setShippingContact:(PKContact *)arg1 ;
-(void)setShippingMethod:(PKShippingMethod *)arg1 ;
-(PKContact *)billingContact;
-(void)setAuthKitAuthenticationResults:(NSMutableDictionary *)arg1 ;
-(void)setInstallmentAuthorizationToken:(NSString *)arg1 ;
-(NSString *)installmentAuthorizationToken;
-(NSMutableDictionary *)authKitAuthenticationResults;
@end

