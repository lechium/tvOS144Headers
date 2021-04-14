/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface HKHealthWrapCodableValue : PBCodable <NSCopying> {

	long long _integer;
	NSData* _bytes;
	NSString* _string;
	int _type;
	SCD_Struct_HK27 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasBytes; 
@property (nonatomic,retain) NSData * bytes;                 //@synthesize bytes=_bytes - In the implementation block
@property (nonatomic,readonly) BOOL hasString; 
@property (nonatomic,retain) NSString * string;              //@synthesize string=_string - In the implementation block
@property (assign,nonatomic) BOOL hasInteger; 
@property (assign,nonatomic) long long integer;              //@synthesize integer=_integer - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSData *)bytes;
-(NSString *)string;
-(void)setType:(int)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(int)type;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setBytes:(NSData *)arg1 ;
-(BOOL)hasString;
-(BOOL)hasBytes;
-(void)setInteger:(long long)arg1 ;
-(void)setHasInteger:(BOOL)arg1 ;
-(BOOL)hasInteger;
-(long long)integer;
@end

