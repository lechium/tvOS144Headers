/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDLogEventDailyProvider.h>

@protocol HMFLocking, HMDAppleMediaAccessoryMetricsDispatcherDataSource;
@class NSArray, NSString, HMDLogEventDispatcher, HMDLogEventDailyScheduler;

@interface HMDAppleMediaAccessoryMetricsDispatcher : HMFObject <HMDLogEventDailyProvider> {

	id<HMFLocking> _lock;
	NSString* _previousRoomName;
	HMDLogEventDispatcher* _logEventDispatcher;
	HMDLogEventDailyScheduler* _logEventDailyScheduler;
	id<HMDAppleMediaAccessoryMetricsDispatcherDataSource> _dataSource;

}

@property (readonly) HMDLogEventDispatcher * logEventDispatcher;                                           //@synthesize logEventDispatcher=_logEventDispatcher - In the implementation block
@property (readonly) HMDLogEventDailyScheduler * logEventDailyScheduler;                                   //@synthesize logEventDailyScheduler=_logEventDailyScheduler - In the implementation block
@property (__weak,readonly) id<HMDAppleMediaAccessoryMetricsDispatcherDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (copy) NSString * previousRoomName;                                                              //@synthesize previousRoomName=_previousRoomName - In the implementation block
@property (nonatomic,readonly) NSArray * logEventProviderDailySubmissionBlocks; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifier;
-(id<HMDAppleMediaAccessoryMetricsDispatcherDataSource>)dataSource;
-(id)initWithDataSource:(id)arg1 ;
-(HMDLogEventDispatcher *)logEventDispatcher;
-(id)initWithDataSource:(id)arg1 logEventDispatcher:(id)arg2 logEventDailyScheduler:(id)arg3 ;
-(void)setPreviousRoomName:(NSString *)arg1 ;
-(HMDLogEventDailyScheduler *)logEventDailyScheduler;
-(NSString *)previousRoomName;
-(NSArray *)logEventProviderDailySubmissionBlocks;
-(void)submitDailySetRoomEvent;
-(void)registerForDailySetRoomLogEvents;
-(void)submitRoomChangeEvent:(id)arg1 previousRoom:(id)arg2 ;
-(void)triggerLogEventProviderDailySubmissionBlocks;
@end

