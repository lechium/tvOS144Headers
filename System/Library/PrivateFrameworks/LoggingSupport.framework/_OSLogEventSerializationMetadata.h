/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSPredicate, NSDate;

@interface _OSLogEventSerializationMetadata : NSObject {

	NSMutableDictionary* _indexToStringMapping;
	NSMutableDictionary* _stringToIndexMapping;
	unsigned long long _flags;
	NSPredicate* _filterPredicate;
	unsigned long long _maxLogEventBatchSize;
	unsigned long long _serializedEventCount;
	NSDate* _firstDate;
	NSDate* _lastDate;

}

@property (nonatomic,readonly) NSMutableDictionary * stringToIndexMapping;              //@synthesize stringToIndexMapping=_stringToIndexMapping - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * indexToStringMapping;              //@synthesize indexToStringMapping=_indexToStringMapping - In the implementation block
@property (assign,nonatomic) unsigned long long flags;                                  //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) NSPredicate * filterPredicate;                             //@synthesize filterPredicate=_filterPredicate - In the implementation block
@property (assign,nonatomic) unsigned long long maxLogEventBatchSize;                   //@synthesize maxLogEventBatchSize=_maxLogEventBatchSize - In the implementation block
@property (assign,nonatomic) unsigned long long serializedEventCount;                   //@synthesize serializedEventCount=_serializedEventCount - In the implementation block
@property (nonatomic,retain) NSDate * firstDate;                                        //@synthesize firstDate=_firstDate - In the implementation block
@property (nonatomic,retain) NSDate * lastDate;                                         //@synthesize lastDate=_lastDate - In the implementation block
-(id)init;
-(unsigned long long)flags;
-(id)dataRepresentation;
-(id)initWithDataRepresentation:(id)arg1 ;
-(void)setFlags:(unsigned long long)arg1 ;
-(NSPredicate *)filterPredicate;
-(void)setFilterPredicate:(NSPredicate *)arg1 ;
-(id)indexForString:(id)arg1 ;
-(id)stringForIndex:(id)arg1 ;
-(NSMutableDictionary *)indexToStringMapping;
-(NSMutableDictionary *)stringToIndexMapping;
-(unsigned long long)maxLogEventBatchSize;
-(void)setMaxLogEventBatchSize:(unsigned long long)arg1 ;
-(unsigned long long)serializedEventCount;
-(void)setSerializedEventCount:(unsigned long long)arg1 ;
-(NSDate *)firstDate;
-(void)setFirstDate:(NSDate *)arg1 ;
-(NSDate *)lastDate;
-(void)setLastDate:(NSDate *)arg1 ;
@end

