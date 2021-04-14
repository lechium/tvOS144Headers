/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSNumber;

@interface CEMNetworkUsageRulesDeclaration_ApplicationRulesItem : CEMPayloadBase {

	NSArray* _payloadAppIdentifierMatches;
	NSNumber* _payloadAllowRoamingCellularData;
	NSNumber* _payloadAllowCellularData;

}

@property (nonatomic,copy) NSArray * payloadAppIdentifierMatches;                   //@synthesize payloadAppIdentifierMatches=_payloadAppIdentifierMatches - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowRoamingCellularData;              //@synthesize payloadAllowRoamingCellularData=_payloadAllowRoamingCellularData - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowCellularData;                     //@synthesize payloadAllowCellularData=_payloadAllowCellularData - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithAppIdentifierMatches:(id)arg1 withAllowRoamingCellularData:(id)arg2 withAllowCellularData:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAppIdentifierMatches:(NSArray *)arg1 ;
-(void)setPayloadAllowRoamingCellularData:(NSNumber *)arg1 ;
-(void)setPayloadAllowCellularData:(NSNumber *)arg1 ;
-(NSArray *)payloadAppIdentifierMatches;
-(NSNumber *)payloadAllowRoamingCellularData;
-(NSNumber *)payloadAllowCellularData;
@end

