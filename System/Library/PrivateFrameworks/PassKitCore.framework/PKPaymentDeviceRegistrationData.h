/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSArray, NSData;

@interface PKPaymentDeviceRegistrationData : NSObject <NSSecureCoding> {

	BOOL _devSigned;
	NSString* _signedAuthToken;
	NSDictionary* _secureElementStateInformation;
	NSString* _secureElementIdentifier;
	NSString* _deviceSerialNumber;
	NSArray* _additionalDeviceSerialNumbers;
	NSString* _companionSerialNumber;
	NSString* _productType;
	NSData* _platformData;
	NSData* _platformDataSignature;
	NSArray* _legacyStateInformation;

}

@property (nonatomic,copy) NSString * signedAuthToken;                                //@synthesize signedAuthToken=_signedAuthToken - In the implementation block
@property (nonatomic,copy) NSDictionary * secureElementStateInformation;              //@synthesize secureElementStateInformation=_secureElementStateInformation - In the implementation block
@property (nonatomic,copy) NSString * secureElementIdentifier;                        //@synthesize secureElementIdentifier=_secureElementIdentifier - In the implementation block
@property (nonatomic,copy) NSString * deviceSerialNumber;                             //@synthesize deviceSerialNumber=_deviceSerialNumber - In the implementation block
@property (nonatomic,copy) NSArray * additionalDeviceSerialNumbers;                   //@synthesize additionalDeviceSerialNumbers=_additionalDeviceSerialNumbers - In the implementation block
@property (nonatomic,copy) NSString * companionSerialNumber;                          //@synthesize companionSerialNumber=_companionSerialNumber - In the implementation block
@property (nonatomic,copy) NSString * productType;                                    //@synthesize productType=_productType - In the implementation block
@property (nonatomic,copy) NSData * platformData;                                     //@synthesize platformData=_platformData - In the implementation block
@property (nonatomic,copy) NSData * platformDataSignature;                            //@synthesize platformDataSignature=_platformDataSignature - In the implementation block
@property (assign,nonatomic) BOOL devSigned;                                          //@synthesize devSigned=_devSigned - In the implementation block
@property (nonatomic,readonly) NSArray * legacyStateInformation;                      //@synthesize legacyStateInformation=_legacyStateInformation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)productType;
-(void)setProductType:(NSString *)arg1 ;
-(NSString *)secureElementIdentifier;
-(BOOL)devSigned;
-(void)setSecureElementIdentifier:(NSString *)arg1 ;
-(void)setDevSigned:(BOOL)arg1 ;
-(NSString *)signedAuthToken;
-(void)setSignedAuthToken:(NSString *)arg1 ;
-(NSDictionary *)secureElementStateInformation;
-(void)setSecureElementStateInformation:(NSDictionary *)arg1 ;
-(NSString *)deviceSerialNumber;
-(void)setDeviceSerialNumber:(NSString *)arg1 ;
-(NSArray *)additionalDeviceSerialNumbers;
-(void)setAdditionalDeviceSerialNumbers:(NSArray *)arg1 ;
-(NSString *)companionSerialNumber;
-(void)setCompanionSerialNumber:(NSString *)arg1 ;
-(NSData *)platformData;
-(void)setPlatformData:(NSData *)arg1 ;
-(NSData *)platformDataSignature;
-(void)setPlatformDataSignature:(NSData *)arg1 ;
-(NSArray *)legacyStateInformation;
@end

