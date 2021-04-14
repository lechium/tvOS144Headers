/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKAccountWebServiceRequest.h>
#import <libobjc.A.dylib/PKAccountWebServiceApplePayTrustProtocol.h>

@class PKApplePayTrustHashResponse, NSURL, NSData, PKAccountScheduledPaymentList, PKAccountPaymentScheduleDetails, NSString, PKAccountWebServiceCertificatesResponse, PKPaymentDeviceMetadata;

@interface PKAccountWebServiceSchedulePaymentRequest : PKAccountWebServiceRequest <PKAccountWebServiceApplePayTrustProtocol> {

	NSURL* baseURL;
	PKApplePayTrustHashResponse* hashResponse;
	NSData* _publicKeyHash;
	PKAccountScheduledPaymentList* _scheduledPayments;
	PKAccountPaymentScheduleDetails* _scheduleDetails;
	NSString* _accountIdentifier;
	PKAccountWebServiceCertificatesResponse* _certificatesResponse;
	PKPaymentDeviceMetadata* _deviceMetadata;

}

@property (nonatomic,retain) PKAccountScheduledPaymentList * scheduledPayments;                           //@synthesize scheduledPayments=_scheduledPayments - In the implementation block
@property (nonatomic,retain) PKAccountPaymentScheduleDetails * scheduleDetails;                           //@synthesize scheduleDetails=_scheduleDetails - In the implementation block
@property (nonatomic,copy) NSString * accountIdentifier;                                                  //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,retain) PKAccountWebServiceCertificatesResponse * certificatesResponse;              //@synthesize certificatesResponse=_certificatesResponse - In the implementation block
@property (nonatomic,retain) PKPaymentDeviceMetadata * deviceMetadata;                                    //@synthesize deviceMetadata=_deviceMetadata - In the implementation block
@property (nonatomic,retain) PKApplePayTrustHashResponse * hashResponse; 
@property (nonatomic,retain) NSURL * baseURL; 
@property (nonatomic,copy) NSData * publicKeyHash;                                                        //@synthesize publicKeyHash=_publicKeyHash - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)baseURL;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(NSString *)accountIdentifier;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(PKPaymentDeviceMetadata *)deviceMetadata;
-(void)setDeviceMetadata:(PKPaymentDeviceMetadata *)arg1 ;
-(NSData *)publicKeyHash;
-(void)setPublicKeyHash:(NSData *)arg1 ;
-(id)manifestHashWithReferenceIdentifier:(id)arg1 ;
-(void)setScheduledPayments:(PKAccountScheduledPaymentList *)arg1 ;
-(void)setScheduleDetails:(PKAccountPaymentScheduleDetails *)arg1 ;
-(void)setCertificatesResponse:(PKAccountWebServiceCertificatesResponse *)arg1 ;
-(PKAccountPaymentScheduleDetails *)scheduleDetails;
-(Class)signatureResponseClass;
-(id)endpointComponents;
-(PKApplePayTrustHashResponse *)hashResponse;
-(void)setHashResponse:(PKApplePayTrustHashResponse *)arg1 ;
-(PKAccountScheduledPaymentList *)scheduledPayments;
-(PKAccountWebServiceCertificatesResponse *)certificatesResponse;
@end

