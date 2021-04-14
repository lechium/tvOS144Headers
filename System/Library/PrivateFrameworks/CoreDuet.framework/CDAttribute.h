/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class CDSession, NSString, NSMutableArray, NSObject, NSMutableDictionary;

@interface CDAttribute : NSObject {

	CDSession* _session;
	NSString* _name;
	NSString* _fullName;
	long long _type;
	unsigned long long _integerId;
	NSMutableArray* resourceCallbackList;
	NSMutableArray* revocationCallbackList;
	NSObject*<OS_dispatch_queue> resourceCallbackQueue;
	int resourceCallToken;
	int focalAppToken;
	int conditionChangeToken;
	int systemConditionChangeToken;
	int localFocalInfoToken;
	int revocationToken;
	unsigned short _admissionMask;
	NSMutableDictionary* costCache;
	BOOL delayedUpdatePending;
	NSMutableDictionary* tokenCache;
	NSMutableDictionary* dateCache;
	NSMutableArray* activeReports;
	NSObject*<OS_dispatch_queue> _deferredRequestsQ;
	NSObject*<OS_dispatch_queue> admissionCacheQueue;
	NSMutableDictionary* admissionCache;
	CDSession* _sessionStrong;
	CDSession* _sessionWeak;

}

@property (readonly) unsigned long long integerId;              //@synthesize integerId=_integerId - In the implementation block
@property (readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (readonly) NSString * fullName;                       //@synthesize fullName=_fullName - In the implementation block
@property (readonly) long long type;                            //@synthesize type=_type - In the implementation block
-(NSString *)name;
-(id)description;
-(void)dealloc;
-(long long)type;
-(NSString *)fullName;
-(id)fullNameFromString:(id)arg1 clientId:(unsigned long long)arg2 error:(id*)arg3 ;
-(unsigned long long)integerId;
-(id)histogramForHistoryWindow:(id)arg1 error:(id*)arg2 ;
-(BOOL)admissionCheckOfValue:(id)arg1 type:(long long)arg2 options:(id)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
-(id)temporalForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 forecastType:(long long)arg3 maximumElements:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)peerForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 forecastType:(long long)arg3 maximumElements:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)repeatedStatistic:(long long)arg1 forHistoryWindow:(id)arg2 error:(id*)arg3 ;
-(id)initWithSession:(id)arg1 name:(id)arg2 type:(long long)arg3 integerId:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)initWithMySession:(id)arg1 name:(id)arg2 type:(long long)arg3 integerId:(unsigned long long)arg4 error:(id*)arg5 ;
-(BOOL)setCategory:(long long)arg1 error:(id*)arg2 ;
-(BOOL)associateToBudget:(id)arg1 error:(id*)arg2 ;
-(BOOL)destroyWithError:(id*)arg1 ;
-(BOOL)backgroundLaunchStartedWithValue:(id)arg1 error:(id*)arg2 ;
-(BOOL)backgroundLaunchStoppedWithValue:(id)arg1 error:(id*)arg2 ;
-(BOOL)activityStartedWithValue:(id)arg1 cost:(long long)arg2 error:(id*)arg3 ;
-(BOOL)activityStartedWithValue:(id)arg1 cost:(long long)arg2 onDate:(id)arg3 error:(id*)arg4 ;
-(BOOL)activityStoppedWithValue:(id)arg1 cost:(long long)arg2 error:(id*)arg3 ;
-(BOOL)activityStoppedWithValue:(id)arg1 cost:(long long)arg2 onDate:(id)arg3 error:(id*)arg4 ;
-(BOOL)activityWithValue:(id)arg1 cost:(long long)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 ;
-(BOOL)occurredWithValue:(id)arg1 cost:(long long)arg2 error:(id*)arg3 ;
-(BOOL)occurredWithValue:(id)arg1 cost:(long long)arg2 onDate:(id)arg3 error:(id*)arg4 ;
-(double)correlationOfValue:(id)arg1 toAttribute:(id)arg2 withValue:(id)arg3 temporalLeeway:(double)arg4 error:(id*)arg5 ;
-(id)distinctValuesForHistoryWindow:(id)arg1 error:(id*)arg2 ;
-(id)statistic:(long long)arg1 forHistoryWindow:(id)arg2 error:(id*)arg3 ;
-(BOOL)admissionCheckOfValue:(id)arg1 andStartedWithValue:(id)arg2 cost:(long long)arg3 type:(long long)arg4 options:(id)arg5 error:(id*)arg6 handler:(/*^block*/id)arg7 ;
-(BOOL)admissionCheckOfValue:(id)arg1 andOccurredWithValue:(id)arg2 cost:(long long)arg3 type:(long long)arg4 options:(id)arg5 error:(id*)arg6 handler:(/*^block*/id)arg7 ;
-(void)admissionCheckOfValueAsync:(id)arg1 type:(long long)arg2 options:(id)arg3 handleQueue:(id)arg4 handler:(/*^block*/id)arg5 ;
-(BOOL)setTrendBlockForValue:(id)arg1 withConfig:(id)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)setAdmissionRevocationBlockWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)setResourceAvailabilityBlockWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(unsigned long long)meteringStartedWithValue:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 error:(id*)arg4 ;
-(BOOL)meteringStoppedWithValue:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 meteringToken:(unsigned long long)arg4 error:(id*)arg5 ;
-(BOOL)meteringUpdateWithValue:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 meteringToken:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)temporalForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 device:(id)arg3 forecastType:(long long)arg4 temporalLeeway:(double)arg5 maximumElements:(unsigned long long)arg6 error:(id*)arg7 ;
-(id)peerForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 device:(id)arg3 forecastType:(long long)arg4 temporalLeeway:(double)arg5 maximumElements:(unsigned long long)arg6 error:(id*)arg7 ;
-(id)statistic:(long long)arg1 forHistoryWindow:(id)arg2 device:(id)arg3 error:(id*)arg4 ;
-(id)repeatedStatistic:(long long)arg1 forHistoryWindow:(id)arg2 device:(id)arg3 error:(id*)arg4 ;
-(id)historyOfValue:(id)arg1 forWindow:(id)arg2 filter:(long long)arg3 maximumElements:(unsigned long long)arg4 error:(id*)arg5 ;
-(BOOL)reset:(long long)arg1 error:(id*)arg2 ;
-(BOOL)setAdmissionBitMask:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)resetAdmissionBitMask:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)requestTemporalForecastFromDevice:(id)arg1 withValue:(id)arg2 forHistoryWindow:(id)arg3 forecastType:(long long)arg4 error:(id*)arg5 handler:(/*^block*/id)arg6 ;
-(BOOL)requestPeerForecastFromDevice:(id)arg1 withValue:(id)arg2 forHistoryWindow:(id)arg3 forecastType:(long long)arg4 error:(id*)arg5 handler:(/*^block*/id)arg6 ;
-(BOOL)requestStatisticFromDevice:(id)arg1 statistic:(long long)arg2 forHistoryWindow:(id)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
@end

