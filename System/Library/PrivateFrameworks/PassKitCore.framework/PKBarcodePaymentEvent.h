/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString, NSData;

@interface PKBarcodePaymentEvent : NSObject <NSSecureCoding> {

	BOOL _biometricsChanged;
	long long _version;
	NSDate* _timestamp;
	unsigned long long _eventType;
	NSString* _barcodeIdentifier;
	long long _authenticationType;
	NSString* _deviceAccountIdentifier;
	NSData* _eventMetadata;

}

@property (nonatomic,readonly) long long version;                           //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSDate * timestamp;                              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) unsigned long long eventType;                  //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,copy) NSString * barcodeIdentifier;                    //@synthesize barcodeIdentifier=_barcodeIdentifier - In the implementation block
@property (assign,nonatomic) BOOL biometricsChanged;                        //@synthesize biometricsChanged=_biometricsChanged - In the implementation block
@property (assign,nonatomic) long long authenticationType;                  //@synthesize authenticationType=_authenticationType - In the implementation block
@property (nonatomic,copy) NSString * deviceAccountIdentifier;              //@synthesize deviceAccountIdentifier=_deviceAccountIdentifier - In the implementation block
@property (nonatomic,copy) NSData * eventMetadata;                          //@synthesize eventMetadata=_eventMetadata - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(id)data;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)version;
-(NSDate *)timestamp;
-(unsigned long long)eventType;
-(void)setEventType:(unsigned long long)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)setAuthenticationType:(long long)arg1 ;
-(long long)authenticationType;
-(NSString *)deviceAccountIdentifier;
-(void)setDeviceAccountIdentifier:(NSString *)arg1 ;
-(NSString *)barcodeIdentifier;
-(void)setBarcodeIdentifier:(NSString *)arg1 ;
-(BOOL)isEqualToBarcodePaymentEvent:(id)arg1 ;
-(BOOL)biometricsChanged;
-(void)setBiometricsChanged:(BOOL)arg1 ;
-(NSData *)eventMetadata;
-(void)setEventMetadata:(NSData *)arg1 ;
@end

