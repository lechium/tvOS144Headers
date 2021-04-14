/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOModality : PBCodable <NSCopying> {

	double _timestamp;
	int _confidence;
	BOOL _expectedModality;
	BOOL _notMoving;
	struct {
		unsigned has_timestamp : 1;
		unsigned has_confidence : 1;
		unsigned has_expectedModality : 1;
		unsigned has_notMoving : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp; 
@property (assign,nonatomic) BOOL hasExpectedModality; 
@property (assign,nonatomic) BOOL expectedModality; 
@property (assign,nonatomic) BOOL hasNotMoving; 
@property (assign,nonatomic) BOOL notMoving; 
@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) int confidence; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)confidence;
-(double)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setConfidence:(int)arg1 ;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(id)confidenceAsString:(int)arg1 ;
-(int)StringAsConfidence:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setExpectedModality:(BOOL)arg1 ;
-(void)setNotMoving:(BOOL)arg1 ;
-(BOOL)expectedModality;
-(void)setHasExpectedModality:(BOOL)arg1 ;
-(BOOL)hasExpectedModality;
-(BOOL)notMoving;
-(void)setHasNotMoving:(BOOL)arg1 ;
-(BOOL)hasNotMoving;
@end

