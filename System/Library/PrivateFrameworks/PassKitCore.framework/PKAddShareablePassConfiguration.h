/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKAddSecureElementPassConfiguration.h>

@class NSArray, NSString;

@interface PKAddShareablePassConfiguration : PKAddSecureElementPassConfiguration {

	BOOL _noncesFetched;
	unsigned long long _primaryAction;
	NSArray* _credentialsMetadata;
	NSString* _provisioningPolicyIdentifier;

}

@property (assign,nonatomic) BOOL noncesFetched;                                     //@synthesize noncesFetched=_noncesFetched - In the implementation block
@property (nonatomic,readonly) unsigned long long primaryAction;                     //@synthesize primaryAction=_primaryAction - In the implementation block
@property (nonatomic,readonly) NSArray * credentialsMetadata;                        //@synthesize credentialsMetadata=_credentialsMetadata - In the implementation block
@property (nonatomic,readonly) NSString * provisioningPolicyIdentifier;              //@synthesize provisioningPolicyIdentifier=_provisioningPolicyIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)configurationForPassMetadata:(id)arg1 provisioningPolicyIdentifier:(id)arg2 primaryAction:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPrimaryAction:(unsigned long long)arg1 credentialsMetadata:(id)arg2 provisioningPolicyIdentifier:(id)arg3 ;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(id)_PKAddShareablePassConfigurationPrimaryActionToString:(unsigned long long)arg1 ;
-(BOOL)hasRequiredDataForProvisioning;
-(unsigned long long)primaryAction;
-(NSArray *)credentialsMetadata;
-(NSString *)provisioningPolicyIdentifier;
-(BOOL)noncesFetched;
-(void)setNoncesFetched:(BOOL)arg1 ;
@end

