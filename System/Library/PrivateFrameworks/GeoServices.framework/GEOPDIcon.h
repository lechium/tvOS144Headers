/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDPhoto;

@interface GEOPDIcon : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDPhoto* _image;
	int _iconType;
	struct {
		unsigned has_iconType : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasImage; 
@property (nonatomic,retain) GEOPDPhoto * image; 
@property (assign,nonatomic) BOOL hasIconType; 
@property (assign,nonatomic) int iconType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEOPDPhoto *)image;
-(void)setImage:(GEOPDPhoto *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(int)iconType;
-(void)setIconType:(int)arg1 ;
-(BOOL)hasImage;
-(void)setHasIconType:(BOOL)arg1 ;
-(BOOL)hasIconType;
-(id)iconTypeAsString:(int)arg1 ;
-(int)StringAsIconType:(id)arg1 ;
@end

