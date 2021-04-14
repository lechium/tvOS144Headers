/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class _PASLock, NSObject;

@interface PPEventStorage : NSObject {

	_PASLock* _lock;
	atomic_flag _pendingReset;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(id)defaultStorage;
-(id)init;
-(id)_init;
-(void)clearCaches;
-(id)eventWithIdentifier:(id)arg1 ;
-(id)eventsInRange:(NSRange)arg1 ;
-(id)eventWithExternalID:(id)arg1 ;
-(id)suggestedEventsInRange:(NSRange)arg1 ;
-(void)iterateEventsFrom:(id)arg1 to:(id)arg2 inChunks:(int)arg3 withBlock:(/*^block*/id)arg4 ;
-(id)resolveEventFromEKChange:(id)arg1 ;
-(void)setCalendarVisibilityChangeHandler:(/*^block*/id)arg1 ;
-(BOOL)eventKitChangeIsEvent:(id)arg1 ;
-(BOOL)shouldIngestEvent:(id)arg1 ;
-(void)resetAfterQueryWithCompletion:(/*^block*/id)arg1 ;
-(void)_loadCalendars;
-(id)_predicateForRange:(NSRange)arg1 ;
-(BOOL)_isAllDayOrMultiDayEvent:(id)arg1 guardedData:(id)arg2 ;
-(BOOL)_isSuggestedEvent:(id)arg1 guardedData:(id)arg2 ;
@end

