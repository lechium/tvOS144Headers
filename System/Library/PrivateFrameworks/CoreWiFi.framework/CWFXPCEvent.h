/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSDictionary, NSDate;

@interface CWFXPCEvent : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _UUID;
	long long _type;
	long long _internalType;
	NSString* _interfaceName;
	NSDictionary* _info;
	NSDate* _timestamp;
	unsigned long long _acknowledgementTimeout;

}

@property (nonatomic,copy) NSUUID * UUID;                                            //@synthesize UUID=_UUID - In the implementation block
@property (assign,nonatomic) long long type;                                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long internalType;                                 //@synthesize internalType=_internalType - In the implementation block
@property (nonatomic,copy) NSString * interfaceName;                                 //@synthesize interfaceName=_interfaceName - In the implementation block
@property (nonatomic,copy) NSDictionary * info;                                      //@synthesize info=_info - In the implementation block
@property (nonatomic,copy) NSDate * timestamp;                                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) unsigned long long acknowledgementTimeout;              //@synthesize acknowledgementTimeout=_acknowledgementTimeout - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(NSUUID *)UUID;
-(NSString *)interfaceName;
-(NSDate *)timestamp;
-(NSDictionary *)info;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)setInterfaceName:(NSString *)arg1 ;
-(void)setUUID:(NSUUID *)arg1 ;
-(void)setInfo:(NSDictionary *)arg1 ;
-(unsigned long long)acknowledgementTimeout;
-(void)setAcknowledgementTimeout:(unsigned long long)arg1 ;
-(id)__descriptionForEventType;
-(long long)internalType;
-(BOOL)isEqualToXPCEvent:(id)arg1 ;
-(void)setInternalType:(long long)arg1 ;
@end

