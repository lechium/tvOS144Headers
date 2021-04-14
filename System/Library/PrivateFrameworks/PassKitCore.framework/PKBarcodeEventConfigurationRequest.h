/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface PKBarcodeEventConfigurationRequest : NSObject <NSSecureCoding> {

	NSString* _deviceAccountIdentifier;
	NSData* _configurationData;
	long long _configurationDataType;

}

@property (nonatomic,copy) NSString * deviceAccountIdentifier;              //@synthesize deviceAccountIdentifier=_deviceAccountIdentifier - In the implementation block
@property (nonatomic,copy) NSData * configurationData;                      //@synthesize configurationData=_configurationData - In the implementation block
@property (assign,nonatomic) long long configurationDataType;               //@synthesize configurationDataType=_configurationDataType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)configurationData;
-(void)setConfigurationData:(NSData *)arg1 ;
-(NSString *)deviceAccountIdentifier;
-(void)setDeviceAccountIdentifier:(NSString *)arg1 ;
-(long long)configurationDataType;
-(void)setConfigurationDataType:(long long)arg1 ;
@end

