/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class HMFUnfairLock, NSMutableDictionary, NSDate, NSObject, HMDPersistentStore;

@interface HMDEventCountersManager : HMFObject {

	HMFUnfairLock* _lock;
	BOOL _saving;
	NSMutableDictionary* _eventCounters;
	NSDate* _lastSaveTime;
	unsigned long long _saveCount;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDPersistentStore* _persistentStore;
	unsigned long long _savePeriod;

}

@property (nonatomic,retain) NSMutableDictionary * eventCounters;                   //@synthesize eventCounters=_eventCounters - In the implementation block
@property (nonatomic,retain) NSDate * lastSaveTime;                                 //@synthesize lastSaveTime=_lastSaveTime - In the implementation block
@property (assign,nonatomic) unsigned long long saveCount;                          //@synthesize saveCount=_saveCount - In the implementation block
@property (assign,getter=isSaving,nonatomic) BOOL saving;                           //@synthesize saving=_saving - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) HMDPersistentStore * persistentStore;                          //@synthesize persistentStore=_persistentStore - In the implementation block
@property (assign,nonatomic) unsigned long long savePeriod;                         //@synthesize savePeriod=_savePeriod - In the implementation block
+(id)sharedEventCountersManager;
-(id)init;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDPersistentStore *)persistentStore;
-(id)initWithPersistentStore:(id)arg1 ;
-(id)dumpState;
-(void)_save;
-(void)setSaving:(BOOL)arg1 ;
-(unsigned long long)fetchAggregatedEventCountersForRequestGroup:(id)arg1 ;
-(unsigned long long)fetchEventCounterForEventName:(id)arg1 requestGroup:(id)arg2 ;
-(void)resetEventCountersForRequestGroup:(id)arg1 ;
-(void)forceSave;
-(id)fetchEventCountersForRequestGroup:(id)arg1 ;
-(void)incrementEventCounterForEventName:(id)arg1 requestGroup:(id)arg2 ;
-(void)incrementEventCounterForEventName:(id)arg1 requestGroup:(id)arg2 withValue:(unsigned long long)arg3 ;
-(void)resetEventCounterForEventName:(id)arg1 requestGroup:(id)arg2 ;
-(id)unarchivedEventCounters;
-(void)_incrementEventCounterForEventName:(id)arg1 requestGroup:(id)arg2 withValue:(long long)arg3 ;
-(void)logDiskWriteState;
-(unsigned long long)_fetchEventCounterForEventName:(id)arg1 requestGroup:(id)arg2 ;
-(id)_fetchEventCountersForRequestGroup:(id)arg1 ;
-(id)_fetchAllEventCounters;
-(void)_resetEventCounterForEventName:(id)arg1 requestGroup:(id)arg2 ;
-(void)setLastSaveTime:(NSDate *)arg1 ;
-(void)_performOnUpdate;
-(BOOL)isSaving;
-(NSDate *)lastSaveTime;
-(unsigned long long)savePeriod;
-(void)setSaveCount:(unsigned long long)arg1 ;
-(unsigned long long)saveCount;
-(void)archiveEventCountersWithEventCountersSnapshot:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)fetchAllEventCounters;
-(NSMutableDictionary *)eventCounters;
-(void)setEventCounters:(NSMutableDictionary *)arg1 ;
-(void)setSavePeriod:(unsigned long long)arg1 ;
@end

