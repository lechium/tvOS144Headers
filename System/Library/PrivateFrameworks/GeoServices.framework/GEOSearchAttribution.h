/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString;

@interface GEOSearchAttribution : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _attributionURLs;
	NSString* _sourceIdentifier;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _sourceVersion;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_attributionURLs : 1;
		unsigned read_sourceIdentifier : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSString * sourceIdentifier; 
@property (assign,nonatomic) unsigned sourceVersion; 
@property (nonatomic,retain) NSMutableArray * attributionURLs; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)attributionURLsType;
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
-(NSString *)sourceIdentifier;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSMutableArray *)attributionURLs;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(void)setSourceVersion:(unsigned)arg1 ;
-(void)addAttributionURLs:(id)arg1 ;
-(unsigned long long)attributionURLsCount;
-(void)clearAttributionURLs;
-(id)attributionURLsAtIndex:(unsigned long long)arg1 ;
-(unsigned)sourceVersion;
-(void)setAttributionURLs:(NSMutableArray *)arg1 ;
@end

