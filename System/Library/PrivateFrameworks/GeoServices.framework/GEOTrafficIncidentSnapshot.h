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

@class PBDataReader, NSMutableArray, GEOTrafficSnapshotMetaData;

@interface GEOTrafficIncidentSnapshot : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _incidents;
	unsigned long long _receivedTime;
	GEOTrafficSnapshotMetaData* _snapshotMetaData;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_receivedTime : 1;
		unsigned read_incidents : 1;
		unsigned read_snapshotMetaData : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasSnapshotMetaData; 
@property (nonatomic,retain) GEOTrafficSnapshotMetaData * snapshotMetaData; 
@property (nonatomic,retain) NSMutableArray * incidents; 
@property (assign,nonatomic) BOOL hasReceivedTime; 
@property (assign,nonatomic) unsigned long long receivedTime; 
+(BOOL)isValid:(id)arg1 ;
+(Class)incidentsType;
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
-(void)addIncidents:(id)arg1 ;
-(unsigned long long)incidentsCount;
-(void)clearIncidents;
-(id)incidentsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)incidents;
-(void)setIncidents:(NSMutableArray *)arg1 ;
-(GEOTrafficSnapshotMetaData *)snapshotMetaData;
-(void)setSnapshotMetaData:(GEOTrafficSnapshotMetaData *)arg1 ;
-(void)setReceivedTime:(unsigned long long)arg1 ;
-(BOOL)hasSnapshotMetaData;
-(unsigned long long)receivedTime;
-(void)setHasReceivedTime:(BOOL)arg1 ;
-(BOOL)hasReceivedTime;
@end

