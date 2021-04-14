/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKSecureElementCertificateSet, PKPaymentPass, PKServiceProviderOrder, NSData;

@interface PKPaymentServiceProviderPerformPaymentRequest : PKPaymentWebServiceRequest {

	PKSecureElementCertificateSet* _certificates;
	PKPaymentPass* _pass;
	PKServiceProviderOrder* _serviceProviderOrder;
	NSData* _nonce;
	long long _cryptogramType;

}

@property (nonatomic,retain) PKPaymentPass * pass;                                       //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) PKServiceProviderOrder * serviceProviderOrder;              //@synthesize serviceProviderOrder=_serviceProviderOrder - In the implementation block
@property (nonatomic,copy) NSData * nonce;                                               //@synthesize nonce=_nonce - In the implementation block
@property (assign,nonatomic) long long cryptogramType;                                   //@synthesize cryptogramType=_cryptogramType - In the implementation block
-(NSData *)nonce;
-(void)setNonce:(NSData *)arg1 ;
-(PKPaymentPass *)pass;
-(void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 webService:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(long long)cryptogramType;
-(void)setCryptogramType:(long long)arg1 ;
-(PKServiceProviderOrder *)serviceProviderOrder;
-(void)setServiceProviderOrder:(PKServiceProviderOrder *)arg1 ;
@end

