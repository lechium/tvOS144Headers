/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOVLFCorrection;

@interface GEOVLFSuccessDetails : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE17* _inlierSuccessIndices;
	GEOVLFCorrection* _correction;
	double _poseConfidence;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_poseConfidence : 1;
		unsigned read_inlierSuccessIndices : 1;
		unsigned read_correction : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCorrection; 
@property (nonatomic,retain) GEOVLFCorrection * correction; 
@property (assign,nonatomic) BOOL hasPoseConfidence; 
@property (assign,nonatomic) double poseConfidence; 
@property (nonatomic,readonly) unsigned long long inlierSuccessIndicesCount; 
@property (nonatomic,readonly) unsigned* inlierSuccessIndices; 
+(BOOL)isValid:(id)arg1 ;
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
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(GEOVLFCorrection *)correction;
-(void)setCorrection:(GEOVLFCorrection *)arg1 ;
-(void)setPoseConfidence:(double)arg1 ;
-(void)addInlierSuccessIndices:(unsigned)arg1 ;
-(unsigned long long)inlierSuccessIndicesCount;
-(void)clearInlierSuccessIndices;
-(unsigned)inlierSuccessIndicesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasCorrection;
-(double)poseConfidence;
-(void)setHasPoseConfidence:(BOOL)arg1 ;
-(BOOL)hasPoseConfidence;
-(unsigned*)inlierSuccessIndices;
-(void)setInlierSuccessIndices:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end

