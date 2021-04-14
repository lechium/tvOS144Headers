/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface SignpostSupportMachTimeTranslator : NSObject {

	BOOL _isMonitoringSleepWake;
	NSMutableArray* _translationRanges;
	NSMutableArray* _startMachAbsoluteTimes;
	NSMutableArray* _startMachContinuousTimes;
	unsigned long long _maxEntries;
	NSObject*<OS_dispatch_queue> _synchronizationQueue;

}

@property (nonatomic,readonly) NSMutableArray * translationRanges;                           //@synthesize translationRanges=_translationRanges - In the implementation block
@property (nonatomic,readonly) NSMutableArray * startMachAbsoluteTimes;                      //@synthesize startMachAbsoluteTimes=_startMachAbsoluteTimes - In the implementation block
@property (nonatomic,readonly) NSMutableArray * startMachContinuousTimes;                    //@synthesize startMachContinuousTimes=_startMachContinuousTimes - In the implementation block
@property (assign,nonatomic) unsigned long long maxEntries;                                  //@synthesize maxEntries=_maxEntries - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> synchronizationQueue;              //@synthesize synchronizationQueue=_synchronizationQueue - In the implementation block
@property (assign) BOOL isMonitoringSleepWake;                                               //@synthesize isMonitoringSleepWake=_isMonitoringSleepWake - In the implementation block
@property (nonatomic,readonly) BOOL containsContinuousTimeJumps; 
-(BOOL)isEqual:(id)arg1 ;
-(id)init;
-(id)dataRepresentation;
-(id)initWithDataRepresentation:(id)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)synchronizationQueue;
-(void)setSynchronizationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)machAbsoluteTimeForMachContinuousTime:(unsigned long long)arg1 ;
-(unsigned long long)machContinuousTimeForMachAbsoluteTime:(unsigned long long)arg1 ;
-(NSMutableArray *)translationRanges;
-(id)serializableDictionaryRepresentation;
-(NSMutableArray *)startMachAbsoluteTimes;
-(NSMutableArray *)startMachContinuousTimes;
-(unsigned long long)maxEntries;
-(BOOL)containsContinuousTimeJumps;
-(void)addTimestampPairWithMachAbsoluteTime:(unsigned long long)arg1 machContinuousTime:(unsigned long long)arg2 ;
-(void)setMaxEntries:(unsigned long long)arg1 ;
-(BOOL)isMonitoringSleepWake;
-(void)setIsMonitoringSleepWake:(BOOL)arg1 ;
@end

