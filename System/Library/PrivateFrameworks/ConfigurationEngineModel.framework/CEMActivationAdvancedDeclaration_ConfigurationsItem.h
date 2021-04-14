/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, CEMAnyPayload;

@interface CEMActivationAdvancedDeclaration_ConfigurationsItem : CEMPayloadBase {

	NSString* _payloadIdentifier;
	CEMAnyPayload* _payloadOverrides;

}

@property (nonatomic,copy) NSString * payloadIdentifier;                  //@synthesize payloadIdentifier=_payloadIdentifier - In the implementation block
@property (nonatomic,copy) CEMAnyPayload * payloadOverrides;              //@synthesize payloadOverrides=_payloadOverrides - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg1 withOverrides:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)payloadIdentifier;
-(void)setPayloadIdentifier:(NSString *)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadOverrides:(CEMAnyPayload *)arg1 ;
-(CEMAnyPayload *)payloadOverrides;
@end

