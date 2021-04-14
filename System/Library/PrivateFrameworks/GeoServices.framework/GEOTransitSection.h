/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray;

@interface GEOTransitSection : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE17* _actionSheetArtworkIndexs;
	SCD_Struct_GE17* _routeDetailsArtworkIndexs;
	SCD_Struct_GE17* _stepIndexs;
	NSString* _actionSheetName;
	NSMutableArray* _ticketingSegments;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _nextOptionsIndex;
	BOOL _disableAlightNotifications;
	struct {
		unsigned has_nextOptionsIndex : 1;
		unsigned has_disableAlightNotifications : 1;
		unsigned read_unknownFields : 1;
		unsigned read_actionSheetArtworkIndexs : 1;
		unsigned read_routeDetailsArtworkIndexs : 1;
		unsigned read_stepIndexs : 1;
		unsigned read_actionSheetName : 1;
		unsigned read_ticketingSegments : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long stepIndexsCount; 
@property (nonatomic,readonly) unsigned* stepIndexs; 
@property (assign,nonatomic) BOOL hasNextOptionsIndex; 
@property (assign,nonatomic) int nextOptionsIndex; 
@property (nonatomic,readonly) BOOL hasActionSheetName; 
@property (nonatomic,retain) NSString * actionSheetName; 
@property (nonatomic,readonly) unsigned long long actionSheetArtworkIndexsCount; 
@property (nonatomic,readonly) unsigned* actionSheetArtworkIndexs; 
@property (nonatomic,readonly) unsigned long long routeDetailsArtworkIndexsCount; 
@property (nonatomic,readonly) unsigned* routeDetailsArtworkIndexs; 
@property (assign,nonatomic) BOOL hasDisableAlightNotifications; 
@property (assign,nonatomic) BOOL disableAlightNotifications; 
@property (nonatomic,retain) NSMutableArray * ticketingSegments; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)ticketingSegmentType;
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
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSString *)actionSheetName;
-(void)addStepIndex:(unsigned)arg1 ;
-(void)setNextOptionsIndex:(int)arg1 ;
-(void)setActionSheetName:(NSString *)arg1 ;
-(void)addActionSheetArtworkIndex:(unsigned)arg1 ;
-(void)addRouteDetailsArtworkIndex:(unsigned)arg1 ;
-(void)setDisableAlightNotifications:(BOOL)arg1 ;
-(void)addTicketingSegment:(id)arg1 ;
-(unsigned long long)stepIndexsCount;
-(void)clearStepIndexs;
-(unsigned)stepIndexAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)actionSheetArtworkIndexsCount;
-(void)clearActionSheetArtworkIndexs;
-(unsigned)actionSheetArtworkIndexAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)routeDetailsArtworkIndexsCount;
-(void)clearRouteDetailsArtworkIndexs;
-(unsigned)routeDetailsArtworkIndexAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)ticketingSegmentsCount;
-(void)clearTicketingSegments;
-(id)ticketingSegmentAtIndex:(unsigned long long)arg1 ;
-(unsigned*)stepIndexs;
-(void)setStepIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(int)nextOptionsIndex;
-(void)setHasNextOptionsIndex:(BOOL)arg1 ;
-(BOOL)hasNextOptionsIndex;
-(BOOL)hasActionSheetName;
-(unsigned*)actionSheetArtworkIndexs;
-(void)setActionSheetArtworkIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)routeDetailsArtworkIndexs;
-(void)setRouteDetailsArtworkIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)disableAlightNotifications;
-(void)setHasDisableAlightNotifications:(BOOL)arg1 ;
-(BOOL)hasDisableAlightNotifications;
-(NSMutableArray *)ticketingSegments;
-(void)setTicketingSegments:(NSMutableArray *)arg1 ;
@end

