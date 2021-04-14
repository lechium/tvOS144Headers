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

@interface GEOPBTransitRoutingIncidentMessage : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE17* _transitIncidentIndexs;
	NSString* _routingMessage;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _routingIncidentMessageIndex;
	struct {
		unsigned has_routingIncidentMessageIndex : 1;
		unsigned read_unknownFields : 1;
		unsigned read_transitIncidentIndexs : 1;
		unsigned read_routingMessage : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasRoutingIncidentMessageIndex; 
@property (assign,nonatomic) unsigned routingIncidentMessageIndex; 
@property (nonatomic,readonly) BOOL hasRoutingMessage; 
@property (nonatomic,retain) NSString * routingMessage; 
@property (nonatomic,readonly) unsigned long long transitIncidentIndexsCount; 
@property (nonatomic,readonly) unsigned* transitIncidentIndexs; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
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
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSString *)routingMessage;
-(void)setRoutingIncidentMessageIndex:(unsigned)arg1 ;
-(void)setRoutingMessage:(NSString *)arg1 ;
-(void)addTransitIncidentIndex:(unsigned)arg1 ;
-(unsigned long long)transitIncidentIndexsCount;
-(void)clearTransitIncidentIndexs;
-(unsigned)transitIncidentIndexAtIndex:(unsigned long long)arg1 ;
-(unsigned)routingIncidentMessageIndex;
-(void)setHasRoutingIncidentMessageIndex:(BOOL)arg1 ;
-(BOOL)hasRoutingIncidentMessageIndex;
-(BOOL)hasRoutingMessage;
-(unsigned*)transitIncidentIndexs;
-(void)setTransitIncidentIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end

