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

@class PBUnknownFields, NSMutableArray;

@interface GEORPFeedbackImageUploadParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _images;
	BOOL _isEnrichment;
	struct {
		unsigned has_isEnrichment : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * images; 
@property (assign,nonatomic) BOOL hasIsEnrichment; 
@property (assign,nonatomic) BOOL isEnrichment; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)imageType;
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
-(NSMutableArray *)images;
-(void)addImage:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setIsEnrichment:(BOOL)arg1 ;
-(unsigned long long)imagesCount;
-(void)clearImages;
-(id)imageAtIndex:(unsigned long long)arg1 ;
-(void)setImages:(NSMutableArray *)arg1 ;
-(BOOL)isEnrichment;
-(void)setHasIsEnrichment:(BOOL)arg1 ;
-(BOOL)hasIsEnrichment;
@end

