/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CLPLocationConsumptionScoreInfo : PBCodable <NSCopying> {

	double _startTime;
	double _stopTime;
	NSString* _clientKey;
	int _score;
	SCD_Struct_CL1 _has;

}

@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) double startTime;                  //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL hasStopTime; 
@property (assign,nonatomic) double stopTime;                   //@synthesize stopTime=_stopTime - In the implementation block
@property (nonatomic,readonly) BOOL hasClientKey; 
@property (nonatomic,retain) NSString * clientKey;              //@synthesize clientKey=_clientKey - In the implementation block
@property (assign,nonatomic) BOOL hasScore; 
@property (assign,nonatomic) int score;                         //@synthesize score=_score - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(id)dictionaryRepresentation;
-(int)score;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasStartTime:(BOOL)arg1 ;
-(BOOL)hasStartTime;
-(void)setClientKey:(NSString *)arg1 ;
-(void)setStopTime:(double)arg1 ;
-(void)setHasStopTime:(BOOL)arg1 ;
-(BOOL)hasStopTime;
-(BOOL)hasClientKey;
-(void)setScore:(int)arg1 ;
-(void)setHasScore:(BOOL)arg1 ;
-(BOOL)hasScore;
-(double)stopTime;
-(NSString *)clientKey;
@end

