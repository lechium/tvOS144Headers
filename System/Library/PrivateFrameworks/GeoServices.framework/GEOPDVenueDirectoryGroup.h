/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDVenueLabel;

@interface GEOPDVenueDirectoryGroup : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _directoryGroupingId;
	GEOPDVenueLabel* _label;
	unsigned long long _muid;
	struct {
		unsigned has_directoryGroupingId : 1;
		unsigned has_muid : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasDirectoryGroupingId; 
@property (assign,nonatomic) unsigned long long directoryGroupingId; 
@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) GEOPDVenueLabel * label; 
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOPDVenueLabel *)label;
-(void)setLabel:(GEOPDVenueLabel *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(BOOL)hasLabel;
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setDirectoryGroupingId:(unsigned long long)arg1 ;
-(unsigned long long)directoryGroupingId;
-(void)setHasDirectoryGroupingId:(BOOL)arg1 ;
-(BOOL)hasDirectoryGroupingId;
@end

