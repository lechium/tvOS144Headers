/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSString;

@interface CEMSystemAirPrintSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadAllowAirPrint;
	NSNumber* _payloadForceAirPrintTrustedTLSRequirement;
	NSNumber* _payloadAllowAirPrintiBeaconDiscovery;
	NSNumber* _payloadAllowAirPrintCredentialsStorage;

}

@property (nonatomic,copy) NSNumber * payloadAllowAirPrint;                                   //@synthesize payloadAllowAirPrint=_payloadAllowAirPrint - In the implementation block
@property (nonatomic,copy) NSNumber * payloadForceAirPrintTrustedTLSRequirement;              //@synthesize payloadForceAirPrintTrustedTLSRequirement=_payloadForceAirPrintTrustedTLSRequirement - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowAirPrintiBeaconDiscovery;                   //@synthesize payloadAllowAirPrintiBeaconDiscovery=_payloadAllowAirPrintiBeaconDiscovery - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowAirPrintCredentialsStorage;                 //@synthesize payloadAllowAirPrintCredentialsStorage=_payloadAllowAirPrintCredentialsStorage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg1 withAllowAirPrint:(id)arg2 withForceAirPrintTrustedTLSRequirement:(id)arg3 withAllowAirPrintiBeaconDiscovery:(id)arg4 withAllowAirPrintCredentialsStorage:(id)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAllowAirPrint:(NSNumber *)arg1 ;
-(void)setPayloadForceAirPrintTrustedTLSRequirement:(NSNumber *)arg1 ;
-(void)setPayloadAllowAirPrintiBeaconDiscovery:(NSNumber *)arg1 ;
-(void)setPayloadAllowAirPrintCredentialsStorage:(NSNumber *)arg1 ;
-(NSNumber *)payloadAllowAirPrint;
-(NSNumber *)payloadForceAirPrintTrustedTLSRequirement;
-(NSNumber *)payloadAllowAirPrintiBeaconDiscovery;
-(NSNumber *)payloadAllowAirPrintCredentialsStorage;
@end

