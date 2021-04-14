/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSNumber, CEMNetworkVPNDeclaration_SecurityAssociationParameters;

@interface CEMNetworkVPNDeclaration_IKEv2 : CEMPayloadBase {

	NSString* _payloadRemoteAddress;
	NSString* _payloadLocalIdentifier;
	NSString* _payloadRemoteIdentifier;
	NSString* _payloadAuthenticationMethod;
	NSString* _payloadPayloadCertificateUUID;
	NSString* _payloadSharedSecret;
	NSNumber* _payloadExtendedAuthEnabled;
	NSString* _payloadAuthName;
	NSNumber* _payloadDisableRedirect;
	NSNumber* _payloadDisableMOBIKE;
	NSNumber* _payloadUseConfigurationAttributeInternalIPSubnet;
	NSNumber* _payloadEnablePFS;
	NSNumber* _payloadEnableCertificateRevocationCheck;
	NSString* _payloadAuthPassword;
	NSString* _payloadDeadPeerDetectionRate;
	NSString* _payloadCertificateType;
	NSString* _payloadServerCertificateIssuerCommonName;
	NSString* _payloadServerCertificateCommonName;
	CEMNetworkVPNDeclaration_SecurityAssociationParameters* _payloadIKESecurityAssociationParameters;
	CEMNetworkVPNDeclaration_SecurityAssociationParameters* _payloadChildSecurityAssociationParameters;
	NSString* _payloadTLSMinimumVersion;
	NSString* _payloadTLSMaximumVersion;
	NSNumber* _payloadNATKeepAliveOffloadEnable;
	NSNumber* _payloadNATKeepAliveInterval;

}

@property (nonatomic,copy) NSString * payloadRemoteAddress;                                                                                 //@synthesize payloadRemoteAddress=_payloadRemoteAddress - In the implementation block
@property (nonatomic,copy) NSString * payloadLocalIdentifier;                                                                               //@synthesize payloadLocalIdentifier=_payloadLocalIdentifier - In the implementation block
@property (nonatomic,copy) NSString * payloadRemoteIdentifier;                                                                              //@synthesize payloadRemoteIdentifier=_payloadRemoteIdentifier - In the implementation block
@property (nonatomic,copy) NSString * payloadAuthenticationMethod;                                                                          //@synthesize payloadAuthenticationMethod=_payloadAuthenticationMethod - In the implementation block
@property (nonatomic,copy) NSString * payloadPayloadCertificateUUID;                                                                        //@synthesize payloadPayloadCertificateUUID=_payloadPayloadCertificateUUID - In the implementation block
@property (nonatomic,copy) NSString * payloadSharedSecret;                                                                                  //@synthesize payloadSharedSecret=_payloadSharedSecret - In the implementation block
@property (nonatomic,copy) NSNumber * payloadExtendedAuthEnabled;                                                                           //@synthesize payloadExtendedAuthEnabled=_payloadExtendedAuthEnabled - In the implementation block
@property (nonatomic,copy) NSString * payloadAuthName;                                                                                      //@synthesize payloadAuthName=_payloadAuthName - In the implementation block
@property (nonatomic,copy) NSNumber * payloadDisableRedirect;                                                                               //@synthesize payloadDisableRedirect=_payloadDisableRedirect - In the implementation block
@property (nonatomic,copy) NSNumber * payloadDisableMOBIKE;                                                                                 //@synthesize payloadDisableMOBIKE=_payloadDisableMOBIKE - In the implementation block
@property (nonatomic,copy) NSNumber * payloadUseConfigurationAttributeInternalIPSubnet;                                                     //@synthesize payloadUseConfigurationAttributeInternalIPSubnet=_payloadUseConfigurationAttributeInternalIPSubnet - In the implementation block
@property (nonatomic,copy) NSNumber * payloadEnablePFS;                                                                                     //@synthesize payloadEnablePFS=_payloadEnablePFS - In the implementation block
@property (nonatomic,copy) NSNumber * payloadEnableCertificateRevocationCheck;                                                              //@synthesize payloadEnableCertificateRevocationCheck=_payloadEnableCertificateRevocationCheck - In the implementation block
@property (nonatomic,copy) NSString * payloadAuthPassword;                                                                                  //@synthesize payloadAuthPassword=_payloadAuthPassword - In the implementation block
@property (nonatomic,copy) NSString * payloadDeadPeerDetectionRate;                                                                         //@synthesize payloadDeadPeerDetectionRate=_payloadDeadPeerDetectionRate - In the implementation block
@property (nonatomic,copy) NSString * payloadCertificateType;                                                                               //@synthesize payloadCertificateType=_payloadCertificateType - In the implementation block
@property (nonatomic,copy) NSString * payloadServerCertificateIssuerCommonName;                                                             //@synthesize payloadServerCertificateIssuerCommonName=_payloadServerCertificateIssuerCommonName - In the implementation block
@property (nonatomic,copy) NSString * payloadServerCertificateCommonName;                                                                   //@synthesize payloadServerCertificateCommonName=_payloadServerCertificateCommonName - In the implementation block
@property (nonatomic,copy) CEMNetworkVPNDeclaration_SecurityAssociationParameters * payloadIKESecurityAssociationParameters;                //@synthesize payloadIKESecurityAssociationParameters=_payloadIKESecurityAssociationParameters - In the implementation block
@property (nonatomic,copy) CEMNetworkVPNDeclaration_SecurityAssociationParameters * payloadChildSecurityAssociationParameters;              //@synthesize payloadChildSecurityAssociationParameters=_payloadChildSecurityAssociationParameters - In the implementation block
@property (nonatomic,copy) NSString * payloadTLSMinimumVersion;                                                                             //@synthesize payloadTLSMinimumVersion=_payloadTLSMinimumVersion - In the implementation block
@property (nonatomic,copy) NSString * payloadTLSMaximumVersion;                                                                             //@synthesize payloadTLSMaximumVersion=_payloadTLSMaximumVersion - In the implementation block
@property (nonatomic,copy) NSNumber * payloadNATKeepAliveOffloadEnable;                                                                     //@synthesize payloadNATKeepAliveOffloadEnable=_payloadNATKeepAliveOffloadEnable - In the implementation block
@property (nonatomic,copy) NSNumber * payloadNATKeepAliveInterval;                                                                          //@synthesize payloadNATKeepAliveInterval=_payloadNATKeepAliveInterval - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithRemoteAddress:(id)arg1 withLocalIdentifier:(id)arg2 withRemoteIdentifier:(id)arg3 withAuthenticationMethod:(id)arg4 withPayloadCertificateUUID:(id)arg5 withSharedSecret:(id)arg6 withExtendedAuthEnabled:(id)arg7 withAuthName:(id)arg8 withDisableRedirect:(id)arg9 withDisableMOBIKE:(id)arg10 withUseConfigurationAttributeInternalIPSubnet:(id)arg11 withEnablePFS:(id)arg12 withEnableCertificateRevocationCheck:(id)arg13 withAuthPassword:(id)arg14 withDeadPeerDetectionRate:(id)arg15 withCertificateType:(id)arg16 withServerCertificateIssuerCommonName:(id)arg17 withServerCertificateCommonName:(id)arg18 withIKESecurityAssociationParameters:(id)arg19 withChildSecurityAssociationParameters:(id)arg20 withTLSMinimumVersion:(id)arg21 withTLSMaximumVersion:(id)arg22 withNATKeepAliveOffloadEnable:(id)arg23 withNATKeepAliveInterval:(id)arg24 ;
+(id)buildRequiredOnlyWithRemoteAddress:(id)arg1 withLocalIdentifier:(id)arg2 withRemoteIdentifier:(id)arg3 withAuthenticationMethod:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAuthName:(NSString *)arg1 ;
-(void)setPayloadAuthPassword:(NSString *)arg1 ;
-(void)setPayloadAuthenticationMethod:(NSString *)arg1 ;
-(void)setPayloadPayloadCertificateUUID:(NSString *)arg1 ;
-(void)setPayloadRemoteAddress:(NSString *)arg1 ;
-(NSString *)payloadAuthName;
-(NSString *)payloadAuthPassword;
-(NSString *)payloadAuthenticationMethod;
-(NSString *)payloadPayloadCertificateUUID;
-(NSString *)payloadRemoteAddress;
-(void)setPayloadLocalIdentifier:(NSString *)arg1 ;
-(void)setPayloadSharedSecret:(NSString *)arg1 ;
-(NSString *)payloadLocalIdentifier;
-(NSString *)payloadSharedSecret;
-(void)setPayloadRemoteIdentifier:(NSString *)arg1 ;
-(void)setPayloadExtendedAuthEnabled:(NSNumber *)arg1 ;
-(void)setPayloadDisableRedirect:(NSNumber *)arg1 ;
-(void)setPayloadDisableMOBIKE:(NSNumber *)arg1 ;
-(void)setPayloadUseConfigurationAttributeInternalIPSubnet:(NSNumber *)arg1 ;
-(void)setPayloadEnablePFS:(NSNumber *)arg1 ;
-(void)setPayloadEnableCertificateRevocationCheck:(NSNumber *)arg1 ;
-(void)setPayloadDeadPeerDetectionRate:(NSString *)arg1 ;
-(void)setPayloadCertificateType:(NSString *)arg1 ;
-(void)setPayloadServerCertificateIssuerCommonName:(NSString *)arg1 ;
-(void)setPayloadServerCertificateCommonName:(NSString *)arg1 ;
-(void)setPayloadIKESecurityAssociationParameters:(CEMNetworkVPNDeclaration_SecurityAssociationParameters *)arg1 ;
-(void)setPayloadChildSecurityAssociationParameters:(CEMNetworkVPNDeclaration_SecurityAssociationParameters *)arg1 ;
-(void)setPayloadTLSMinimumVersion:(NSString *)arg1 ;
-(void)setPayloadTLSMaximumVersion:(NSString *)arg1 ;
-(void)setPayloadNATKeepAliveOffloadEnable:(NSNumber *)arg1 ;
-(void)setPayloadNATKeepAliveInterval:(NSNumber *)arg1 ;
-(NSString *)payloadRemoteIdentifier;
-(NSNumber *)payloadExtendedAuthEnabled;
-(NSNumber *)payloadDisableRedirect;
-(NSNumber *)payloadDisableMOBIKE;
-(NSNumber *)payloadUseConfigurationAttributeInternalIPSubnet;
-(NSNumber *)payloadEnablePFS;
-(NSNumber *)payloadEnableCertificateRevocationCheck;
-(NSString *)payloadDeadPeerDetectionRate;
-(NSString *)payloadCertificateType;
-(NSString *)payloadServerCertificateIssuerCommonName;
-(NSString *)payloadServerCertificateCommonName;
-(CEMNetworkVPNDeclaration_SecurityAssociationParameters *)payloadIKESecurityAssociationParameters;
-(CEMNetworkVPNDeclaration_SecurityAssociationParameters *)payloadChildSecurityAssociationParameters;
-(NSString *)payloadTLSMinimumVersion;
-(NSString *)payloadTLSMaximumVersion;
-(NSNumber *)payloadNATKeepAliveOffloadEnable;
-(NSNumber *)payloadNATKeepAliveInterval;
@end

