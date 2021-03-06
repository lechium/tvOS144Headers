/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSURL, NSArray, PKContactInformation, NSString;

@interface PKPaymentProvisioningResponse : PKPaymentWebServiceResponse {

	BOOL _willProvisionWithAuthenticationDisabled;
	NSURL* _passURL;
	NSArray* _moreInfoURLs;
	PKContactInformation* _idmsContactInformation;
	NSString* _ownershipToken;
	NSString* _ownershipTokenIdentifier;

}

@property (nonatomic,copy) NSURL * passURL;                                                //@synthesize passURL=_passURL - In the implementation block
@property (nonatomic,copy,readonly) NSArray * moreInfoURLs;                                //@synthesize moreInfoURLs=_moreInfoURLs - In the implementation block
@property (nonatomic,readonly) BOOL willProvisionWithAuthenticationDisabled;               //@synthesize willProvisionWithAuthenticationDisabled=_willProvisionWithAuthenticationDisabled - In the implementation block
@property (nonatomic,readonly) PKContactInformation * idmsContactInformation;              //@synthesize idmsContactInformation=_idmsContactInformation - In the implementation block
@property (nonatomic,copy,readonly) NSString * ownershipToken;                             //@synthesize ownershipToken=_ownershipToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * ownershipTokenIdentifier;                   //@synthesize ownershipTokenIdentifier=_ownershipTokenIdentifier - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSURL *)passURL;
-(void)setPassURL:(NSURL *)arg1 ;
-(NSString *)ownershipTokenIdentifier;
-(NSArray *)moreInfoURLs;
-(BOOL)willProvisionWithAuthenticationDisabled;
-(NSString *)ownershipToken;
-(PKContactInformation *)idmsContactInformation;
@end

