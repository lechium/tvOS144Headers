/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKCloudSyncObserverClientInterface.h>

@protocol HKCloudSyncObserverDelegate;
@class NSUUID, HKTaskServerProxyProvider, NSProgress, HKCloudSyncObserverStatus, NSString;

@interface HKCloudSyncObserver : NSObject <_HKXPCExportable, HKCloudSyncObserverClientInterface> {

	NSUUID* _identifier;
	HKTaskServerProxyProvider* _proxyProvider;
	NSProgress* _progress;
	HKCloudSyncObserverStatus* _status;
	id<HKCloudSyncObserverDelegate> _delegate;
	os_unfair_lock_s _lock;

}

@property (assign,nonatomic,__weak) id<HKCloudSyncObserverDelegate> delegate; 
@property (nonatomic,copy,readonly) HKCloudSyncObserverStatus * status; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serverInterface;
+(id)clientInterface;
-(id<HKCloudSyncObserverDelegate>)delegate;
-(void)setDelegate:(id<HKCloudSyncObserverDelegate>)arg1 ;
-(id)progress;
-(HKCloudSyncObserverStatus *)status;
-(id)exportedInterface;
-(void)setProgress:(id)arg1 ;
-(void)setStatus:(HKCloudSyncObserverStatus *)arg1 ;
-(void)connectionInvalidated;
-(id)remoteInterface;
-(void)_clientQueue_didCompleteSyncWithStatus:(long long)arg1 error:(id)arg2 ;
-(void)clientRemote_syncDidStart;
-(void)clientRemote_didUpdateObserverWithSyncStatus:(id)arg1 ;
-(id)initWithHealthStore:(id)arg1 delegate:(id)arg2 ;
-(void)startObservingSyncStatus;
-(void)startSyncIfRestoreNotCompleted;
@end

