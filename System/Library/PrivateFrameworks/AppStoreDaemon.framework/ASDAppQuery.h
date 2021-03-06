/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ASDNotificationCenterNotificationObserver.h>
#import <libobjc.A.dylib/ASDNotificationCenterProgressObserver.h>

@protocol OS_dispatch_queue, ASDAppQueryResultsObserver;
@class NSObject, ASDNotificationCenter, ASDAppQueryExecutor, NSMutableDictionary, ASDServiceBroker, NSPredicate, NSString;

@interface ASDAppQuery : NSObject <ASDNotificationCenterNotificationObserver, ASDNotificationCenterProgressObserver> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _hasRunOnce;
	ASDNotificationCenter* _notificationCenter;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	id<ASDAppQueryResultsObserver> _observer;
	ASDAppQueryExecutor* _queryExecutor;
	NSMutableDictionary* _resultCache;
	ASDServiceBroker* _serviceBroker;
	id _device;
	NSPredicate* _predicate;

}

@property (readonly) NSPredicate * predicate;                            //@synthesize predicate=_predicate - In the implementation block
@property (__weak) id<ASDAppQueryResultsObserver> observer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_defaultExecutor;
+(id)_newProgressForApp:(id)arg1 fromRemoteProgress:(id)arg2 usingServiceBroker:(id)arg3 ;
+(id)queryForAlmondApps;
+(id)queryForAppClipWithStoreItemID:(long long)arg1 ;
+(id)queryForBeagleApps;
+(id)queryForBetaApps;
+(id)queryForBundleIDs:(id)arg1 ;
+(id)queryForBundleAtPath:(id)arg1 ;
+(id)queryDefaultPairedWatchForBetaApps;
+(id)queryForBetaAppsOnPairedDevice:(id)arg1 ;
+(id)queryForStoreApps;
+(id)queryForStoreItemIDs:(id)arg1 ;
+(id)queryForSystemAppsOnPairedDevice:(id)arg1 ;
+(id)queryWithPredicate:(id)arg1 ;
+(void)anyWithPredicate:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(NSPredicate *)predicate;
-(void)setObserver:(id<ASDAppQueryResultsObserver>)arg1 ;
-(id<ASDAppQueryResultsObserver>)observer;
-(id)initWithPredicate:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 queryExecutor:(id)arg2 serviceBroker:(id)arg3 notificationCenter:(id)arg4 ;
-(void)_handleBrokerConnectionNotification:(id)arg1 ;
-(void)_debugReceivedApps:(id)arg1 ;
-(id)_replaceCachedResultsWithResults:(id)arg1 ;
-(void)_handleNotificationRegisteredWithUserInfo:(id)arg1 ;
-(void)_handleNotificationUnregisteredWithUserInfo:(id)arg1 ;
-(void)_handleNotificationRefreshWithUserInfo:(id)arg1 ;
-(void)_handleNotificationErrorWithUserInfo:(id)arg1 ;
-(void)_updateCachedResultsWithResults:(id)arg1 ;
-(void)_sendResultsChangedWithResults:(id)arg1 ;
-(id)_removeCachedResultsForBundleIDs:(id)arg1 ;
-(void)_handleAppsUpdatedWithResults:(id)arg1 ;
-(void)_handleAppsRemovedWithBundleIDs:(id)arg1 ;
-(void)_handleAppsReplacedWithResults:(id)arg1 ;
-(void)notificationCenter:(id)arg1 receivedNotifications:(id)arg2 ;
-(void)notificationCenter:(id)arg1 receivedProgress:(id)arg2 ;
-(void)executeQueryWithResultHandler:(/*^block*/id)arg1 ;
-(void)_unitTest_setHasRunOnce:(BOOL)arg1 ;
@end

