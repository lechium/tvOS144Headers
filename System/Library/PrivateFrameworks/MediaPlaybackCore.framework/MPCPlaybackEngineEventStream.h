/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, MPCPlabackEngineEventStreamTestingDelegate;
#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
@class NSMutableArray, NSHashTable, MSVSQLDatabase, NSObject, NSUUID, MPCPlaybackEngineEvent;

@interface MPCPlaybackEngineEventStream : NSObject {

	unsigned long long _maximumEventDeliveryTimestamp;
	NSMutableArray* _subscriptions;
	NSHashTable* _deferralAssertions;
	MSVSQLDatabase* _database;
	NSObject*<OS_dispatch_queue> _queue;
	NSUUID* _lastReceivedEventIdentifier;
	id<MPCPlabackEngineEventStreamTestingDelegate> _testingDelegate;

}

@property (assign,nonatomic,__weak) id<MPCPlabackEngineEventStreamTestingDelegate> testingDelegate;              //@synthesize testingDelegate=_testingDelegate - In the implementation block
@property (nonatomic,readonly) MPCPlaybackEngineEvent * lastEvent; 
@property (assign,nonatomic) unsigned long long maximumEventDeliveryTimestamp; 
-(id)debugDescription;
-(id)initWithPlayerID:(id)arg1 ;
-(void)emitEventType:(id)arg1 payload:(id)arg2 atTime:(SCD_Struct_MP10)arg3 ;
-(void)emitEventType:(id)arg1 payload:(id)arg2 ;
-(id)initWithDatabaseCreationBlock:(/*^block*/id)arg1 ;
-(id<MPCPlabackEngineEventStreamTestingDelegate>)testingDelegate;
-(id)lastEventsWithCount:(long long)arg1 ;
-(void)addConsumer:(id)arg1 ;
-(void)removeConsumer:(id)arg1 ;
-(id)eventDeliveryDeferralAssertionForReason:(id)arg1 ;
-(MPCPlaybackEngineEvent *)lastEvent;
-(unsigned long long)maximumEventDeliveryTimestamp;
-(void)setMaximumEventDeliveryTimestamp:(unsigned long long)arg1 ;
-(void)resetConsumerEventDeliveryToTimestamp:(unsigned long long)arg1 ;
-(void)setTestingDelegate:(id<MPCPlabackEngineEventStreamTestingDelegate>)arg1 ;
@end

