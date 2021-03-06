/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface LTSchemaError : PBCodable {

	NSString* _domain;
	unsigned _code;
	SCD_Struct_SI1 _has;
	BOOL _hasDomain;

}

@property (nonatomic,copy) NSString * domain;                  //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) BOOL hasDomain;                   //@synthesize hasDomain=_hasDomain - In the implementation block
@property (assign,nonatomic) unsigned code;                    //@synthesize code=_code - In the implementation block
@property (assign,nonatomic) BOOL hasCode; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)domain;
-(unsigned)code;
-(id)initWithDictionary:(id)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setCode:(unsigned)arg1 ;
-(void)setHasCode:(BOOL)arg1 ;
-(BOOL)hasCode;
-(BOOL)hasDomain;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(void)setHasDomain:(BOOL)arg1 ;
@end

