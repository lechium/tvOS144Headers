/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOPBTransitZoomRangeString : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _labelLanguage;
	NSString* _labelText;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _minZoom;
	struct {
		unsigned has_minZoom : 1;
		unsigned read_unknownFields : 1;
		unsigned read_labelLanguage : 1;
		unsigned read_labelText : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasMinZoom; 
@property (assign,nonatomic) unsigned minZoom; 
@property (nonatomic,readonly) BOOL hasLabelLanguage; 
@property (nonatomic,retain) NSString * labelLanguage; 
@property (nonatomic,readonly) BOOL hasLabelText; 
@property (nonatomic,retain) NSString * labelText; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
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
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setMinZoom:(unsigned)arg1 ;
-(void)setLabelText:(NSString *)arg1 ;
-(unsigned)minZoom;
-(void)setHasMinZoom:(BOOL)arg1 ;
-(BOOL)hasMinZoom;
-(NSString *)labelLanguage;
-(NSString *)labelText;
-(void)setLabelLanguage:(NSString *)arg1 ;
-(BOOL)hasLabelLanguage;
-(BOOL)hasLabelText;
@end

