/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMSecretCredentialsDeclaration : CEMPayloadBase {

	NSString* _payloadSecret;

}

@property (nonatomic,copy) NSString * payloadSecret;              //@synthesize payloadSecret=_payloadSecret - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithSecret:(id)arg1 ;
+(id)buildRequiredOnlyWithSecret:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setPayloadSecret:(NSString *)arg1 ;
-(NSString *)payloadSecret;
@end

