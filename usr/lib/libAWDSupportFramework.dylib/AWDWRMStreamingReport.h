/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDWRMStreamingReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _counter;
	unsigned _duration;
	unsigned _durationLPM;
	unsigned _durationOffline;
	NSMutableArray* _instValues;
	unsigned _numStall;
	unsigned _samplePeriods;
	BOOL _isEnd;
	BOOL _lPM;
	BOOL _offline;
	BOOL _online;
	SCD_Struct_AW13 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSamplePeriods; 
@property (assign,nonatomic) unsigned samplePeriods;                    //@synthesize samplePeriods=_samplePeriods - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                         //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasIsEnd; 
@property (assign,nonatomic) BOOL isEnd;                                //@synthesize isEnd=_isEnd - In the implementation block
@property (assign,nonatomic) BOOL hasNumStall; 
@property (assign,nonatomic) unsigned numStall;                         //@synthesize numStall=_numStall - In the implementation block
@property (assign,nonatomic) BOOL hasLPM; 
@property (assign,nonatomic) BOOL lPM;                                  //@synthesize lPM=_lPM - In the implementation block
@property (assign,nonatomic) BOOL hasOnline; 
@property (assign,nonatomic) BOOL online;                               //@synthesize online=_online - In the implementation block
@property (assign,nonatomic) BOOL hasOffline; 
@property (assign,nonatomic) BOOL offline;                              //@synthesize offline=_offline - In the implementation block
@property (assign,nonatomic) BOOL hasDurationLPM; 
@property (assign,nonatomic) unsigned durationLPM;                      //@synthesize durationLPM=_durationLPM - In the implementation block
@property (assign,nonatomic) BOOL hasDurationOffline; 
@property (assign,nonatomic) unsigned durationOffline;                  //@synthesize durationOffline=_durationOffline - In the implementation block
@property (nonatomic,retain) NSMutableArray * instValues;               //@synthesize instValues=_instValues - In the implementation block
@property (assign,nonatomic) BOOL hasCounter; 
@property (assign,nonatomic) unsigned counter;                          //@synthesize counter=_counter - In the implementation block
+(Class)instValuesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(unsigned)counter;
-(unsigned long long)timestamp;
-(unsigned)duration;
-(void)setDuration:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(void)setCounter:(unsigned)arg1 ;
-(void)setHasCounter:(BOOL)arg1 ;
-(BOOL)hasCounter;
-(void)setInstValues:(NSMutableArray *)arg1 ;
-(void)addInstValues:(id)arg1 ;
-(unsigned long long)instValuesCount;
-(void)clearInstValues;
-(id)instValuesAtIndex:(unsigned long long)arg1 ;
-(void)setSamplePeriods:(unsigned)arg1 ;
-(void)setHasSamplePeriods:(BOOL)arg1 ;
-(BOOL)hasSamplePeriods;
-(void)setIsEnd:(BOOL)arg1 ;
-(void)setHasIsEnd:(BOOL)arg1 ;
-(BOOL)hasIsEnd;
-(void)setNumStall:(unsigned)arg1 ;
-(void)setHasNumStall:(BOOL)arg1 ;
-(BOOL)hasNumStall;
-(void)setLPM:(BOOL)arg1 ;
-(void)setHasLPM:(BOOL)arg1 ;
-(BOOL)hasLPM;
-(void)setOnline:(BOOL)arg1 ;
-(void)setHasOnline:(BOOL)arg1 ;
-(BOOL)hasOnline;
-(void)setOffline:(BOOL)arg1 ;
-(void)setHasOffline:(BOOL)arg1 ;
-(BOOL)hasOffline;
-(void)setDurationLPM:(unsigned)arg1 ;
-(void)setHasDurationLPM:(BOOL)arg1 ;
-(BOOL)hasDurationLPM;
-(void)setDurationOffline:(unsigned)arg1 ;
-(void)setHasDurationOffline:(BOOL)arg1 ;
-(BOOL)hasDurationOffline;
-(unsigned)samplePeriods;
-(BOOL)isEnd;
-(unsigned)numStall;
-(BOOL)lPM;
-(BOOL)online;
-(BOOL)offline;
-(unsigned)durationLPM;
-(unsigned)durationOffline;
-(NSMutableArray *)instValues;
@end

