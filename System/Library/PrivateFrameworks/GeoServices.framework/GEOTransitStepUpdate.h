/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOInstructionSet, GEOTransitScheduleInfo, NSData, GEOTransitVehiclePositionInfo;

@interface GEOTransitStepUpdate : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOInstructionSet* _instructions;
	GEOTransitScheduleInfo* _scheduleInfo;
	NSData* _updateIdentifier;
	GEOTransitVehiclePositionInfo* _vehiclePositionInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_instructions : 1;
		unsigned read_scheduleInfo : 1;
		unsigned read_updateIdentifier : 1;
		unsigned read_vehiclePositionInfo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasUpdateIdentifier; 
@property (nonatomic,retain) NSData * updateIdentifier; 
@property (nonatomic,readonly) BOOL hasInstructions; 
@property (nonatomic,retain) GEOInstructionSet * instructions; 
@property (nonatomic,readonly) BOOL hasVehiclePositionInfo; 
@property (nonatomic,retain) GEOTransitVehiclePositionInfo * vehiclePositionInfo; 
@property (nonatomic,readonly) BOOL hasScheduleInfo; 
@property (nonatomic,retain) GEOTransitScheduleInfo * scheduleInfo; 
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
-(NSData *)updateIdentifier;
-(GEOInstructionSet *)instructions;
-(GEOTransitVehiclePositionInfo *)vehiclePositionInfo;
-(GEOTransitScheduleInfo *)scheduleInfo;
-(void)setUpdateIdentifier:(NSData *)arg1 ;
-(void)setInstructions:(GEOInstructionSet *)arg1 ;
-(void)setVehiclePositionInfo:(GEOTransitVehiclePositionInfo *)arg1 ;
-(void)setScheduleInfo:(GEOTransitScheduleInfo *)arg1 ;
-(BOOL)hasUpdateIdentifier;
-(BOOL)hasInstructions;
-(BOOL)hasVehiclePositionInfo;
-(BOOL)hasScheduleInfo;
@end

