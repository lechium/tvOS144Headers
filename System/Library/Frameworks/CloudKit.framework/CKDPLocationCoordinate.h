/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CloudKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPDate;

@interface CKDPLocationCoordinate : PBCodable <NSCopying> {

	double _altitude;
	double _course;
	double _horizontalAccuracy;
	double _latitude;
	double _longitude;
	double _speed;
	double _verticalAccuracy;
	CKDPDate* _timestamp;
	SCD_Struct_CK9 _has;

}

@property (assign,nonatomic) BOOL hasLatitude; 
@property (assign,nonatomic) double latitude;                         //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) BOOL hasLongitude; 
@property (assign,nonatomic) double longitude;                        //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) BOOL hasHorizontalAccuracy; 
@property (assign,nonatomic) double horizontalAccuracy;               //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (assign,nonatomic) BOOL hasAltitude; 
@property (assign,nonatomic) double altitude;                         //@synthesize altitude=_altitude - In the implementation block
@property (assign,nonatomic) BOOL hasVerticalAccuracy; 
@property (assign,nonatomic) double verticalAccuracy;                 //@synthesize verticalAccuracy=_verticalAccuracy - In the implementation block
@property (assign,nonatomic) BOOL hasCourse; 
@property (assign,nonatomic) double course;                           //@synthesize course=_course - In the implementation block
@property (assign,nonatomic) BOOL hasSpeed; 
@property (assign,nonatomic) double speed;                            //@synthesize speed=_speed - In the implementation block
@property (nonatomic,readonly) BOOL hasTimestamp; 
@property (nonatomic,retain) CKDPDate * timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(CKDPDate *)timestamp;
-(void)setSpeed:(double)arg1 ;
-(double)speed;
-(double)latitude;
-(double)longitude;
-(void)setLongitude:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(CKDPDate *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(void)setHasHorizontalAccuracy:(BOOL)arg1 ;
-(BOOL)hasHorizontalAccuracy;
-(double)horizontalAccuracy;
-(void)setAltitude:(double)arg1 ;
-(void)setHasAltitude:(BOOL)arg1 ;
-(BOOL)hasAltitude;
-(void)setVerticalAccuracy:(double)arg1 ;
-(void)setHasVerticalAccuracy:(BOOL)arg1 ;
-(BOOL)hasVerticalAccuracy;
-(void)setHasSpeed:(BOOL)arg1 ;
-(BOOL)hasSpeed;
-(void)setCourse:(double)arg1 ;
-(void)setHasCourse:(BOOL)arg1 ;
-(BOOL)hasCourse;
-(double)altitude;
-(double)verticalAccuracy;
-(double)course;
-(void)setHasLatitude:(BOOL)arg1 ;
-(BOOL)hasLatitude;
-(void)setHasLongitude:(BOOL)arg1 ;
-(BOOL)hasLongitude;
@end

