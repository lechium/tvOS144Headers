/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSData;

@interface GEOTrafficPath : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE68* _continuingRoadIds;
	SCD_Struct_GE68* _roadIds;
	NSMutableArray* _geometrys;
	NSData* _openlr;
	long long _pathletId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	float _endOffset;
	float _startOffset;
	struct {
		unsigned has_pathletId : 1;
		unsigned has_endOffset : 1;
		unsigned has_startOffset : 1;
		unsigned read_continuingRoadIds : 1;
		unsigned read_roadIds : 1;
		unsigned read_geometrys : 1;
		unsigned read_openlr : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasOpenlr; 
@property (nonatomic,retain) NSData * openlr; 
@property (nonatomic,readonly) unsigned long long roadIdsCount; 
@property (nonatomic,readonly) long long* roadIds; 
@property (assign,nonatomic) BOOL hasStartOffset; 
@property (assign,nonatomic) float startOffset; 
@property (assign,nonatomic) BOOL hasEndOffset; 
@property (assign,nonatomic) float endOffset; 
@property (nonatomic,readonly) unsigned long long continuingRoadIdsCount; 
@property (nonatomic,readonly) long long* continuingRoadIds; 
@property (assign,nonatomic) BOOL hasPathletId; 
@property (assign,nonatomic) long long pathletId; 
@property (nonatomic,retain) NSMutableArray * geometrys; 
+(BOOL)isValid:(id)arg1 ;
+(Class)geometryType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(float)endOffset;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)openlr;
-(void)setStartOffset:(float)arg1 ;
-(void)setEndOffset:(float)arg1 ;
-(void)setOpenlr:(NSData *)arg1 ;
-(float)startOffset;
-(void)setHasStartOffset:(BOOL)arg1 ;
-(BOOL)hasStartOffset;
-(void)setHasEndOffset:(BOOL)arg1 ;
-(BOOL)hasEndOffset;
-(BOOL)hasOpenlr;
-(void)addRoadId:(long long)arg1 ;
-(void)addContinuingRoadId:(long long)arg1 ;
-(void)setPathletId:(long long)arg1 ;
-(void)addGeometry:(id)arg1 ;
-(unsigned long long)roadIdsCount;
-(void)clearRoadIds;
-(long long)roadIdAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)continuingRoadIdsCount;
-(void)clearContinuingRoadIds;
-(long long)continuingRoadIdAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)geometrysCount;
-(void)clearGeometrys;
-(id)geometryAtIndex:(unsigned long long)arg1 ;
-(long long*)roadIds;
-(void)setRoadIds:(long long*)arg1 count:(unsigned long long)arg2 ;
-(long long*)continuingRoadIds;
-(void)setContinuingRoadIds:(long long*)arg1 count:(unsigned long long)arg2 ;
-(long long)pathletId;
-(void)setHasPathletId:(BOOL)arg1 ;
-(BOOL)hasPathletId;
-(NSMutableArray *)geometrys;
-(void)setGeometrys:(NSMutableArray *)arg1 ;
@end

