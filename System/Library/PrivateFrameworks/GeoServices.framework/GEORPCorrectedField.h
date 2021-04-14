/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEORPCorrectedField : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _correctedValue;
	NSString* _fieldName;
	NSString* _originalValue;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _field;
	BOOL _isMarkedIncorrect;
	struct {
		unsigned has_field : 1;
		unsigned has_isMarkedIncorrect : 1;
		unsigned read_correctedValue : 1;
		unsigned read_fieldName : 1;
		unsigned read_originalValue : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasField; 
@property (assign,nonatomic) int field; 
@property (nonatomic,readonly) BOOL hasFieldName; 
@property (nonatomic,retain) NSString * fieldName; 
@property (nonatomic,readonly) BOOL hasOriginalValue; 
@property (nonatomic,retain) NSString * originalValue; 
@property (nonatomic,readonly) BOOL hasCorrectedValue; 
@property (nonatomic,retain) NSString * correctedValue; 
@property (assign,nonatomic) BOOL hasIsMarkedIncorrect; 
@property (assign,nonatomic) BOOL isMarkedIncorrect; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)originalValue;
-(NSString *)correctedValue;
-(void)setOriginalValue:(NSString *)arg1 ;
-(void)setCorrectedValue:(NSString *)arg1 ;
-(BOOL)hasOriginalValue;
-(BOOL)hasCorrectedValue;
-(int)field;
-(void)setField:(int)arg1 ;
-(BOOL)hasField;
-(NSString *)fieldName;
-(void)setFieldName:(NSString *)arg1 ;
-(void)setIsMarkedIncorrect:(BOOL)arg1 ;
-(void)setHasField:(BOOL)arg1 ;
-(id)fieldAsString:(int)arg1 ;
-(int)StringAsField:(id)arg1 ;
-(BOOL)hasFieldName;
-(BOOL)isMarkedIncorrect;
-(void)setHasIsMarkedIncorrect:(BOOL)arg1 ;
-(BOOL)hasIsMarkedIncorrect;
@end
