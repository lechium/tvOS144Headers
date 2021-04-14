/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CPLNetworkWatcherDelegate.h>
#import <libobjc.A.dylib/_CPLScheduledOverrideDelegate.h>
#import <libobjc.A.dylib/CPLEngineComponent.h>

@protocol OS_dispatch_queue;
@class NSURL, NSObject, CPLNetworkWatcher, NSMutableDictionary, CPLEngineLibrary, NSString;

@interface CPLEngineSystemMonitor : NSObject <CPLNetworkWatcherDelegate, _CPLScheduledOverrideDelegate, CPLEngineComponent> {

	BOOL _closed;
	NSURL* _volumeURL;
	NSObject*<OS_dispatch_queue> _queue;
	CPLNetworkWatcher* _watcher;
	BOOL _modifyingBudgetOverride;
	unsigned long long _newBudgetsToOverride;
	unsigned long long _newBudgetsToStopOverriding;
	NSMutableDictionary* _reasonsToOverrideSystemBudget;
	NSMutableDictionary* _scheduledOverrides;
	BOOL _overrideDataSystemBudgetPermanently;
	BOOL _allowOperationsBoost;
	BOOL _allowBackgroundOperationsBoost;
	CPLEngineLibrary* _engineLibrary;

}

@property (nonatomic,__weak,readonly) CPLEngineLibrary * engineLibrary;              //@synthesize engineLibrary=_engineLibrary - In the implementation block
@property (readonly) unsigned long long diskPressureState; 
@property (readonly) unsigned long long freeDiskSpaceSize; 
@property (readonly) BOOL isNetworkConnected; 
@property (readonly) BOOL isNetworkConstrained; 
@property (readonly) BOOL isOnCellularOrUnknown; 
@property (readonly) BOOL isDataBudgetOverriden; 
@property (readonly) BOOL canBoostOperations; 
@property (readonly) BOOL canBoostBackgroundOperations; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)enumerateSystemBudgets:(unsigned long long)arg1 withBlock:(/*^block*/id)arg2 ;
+(id)descriptionForBudget:(unsigned long long)arg1 ;
+(id)descriptionForBudgets:(unsigned long long)arg1 ;
-(BOOL)isNetworkConstrained;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getStatusDictionaryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)closeAndDeactivate:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)componentName;
-(id)initWithEngineLibrary:(id)arg1 ;
-(CPLEngineLibrary *)engineLibrary;
-(unsigned long long)diskPressureState;
-(void)scheduledOverrideDidEnd:(id)arg1 ;
-(void)watcher:(id)arg1 stateDidChangeToNetworkState:(id)arg2 ;
-(void)updateDiskPressureState;
-(unsigned long long)freeDiskSpaceSize;
-(BOOL)isNetworkConnected;
-(BOOL)isOnCellularOrUnknown;
-(BOOL)canBoostOperations;
-(BOOL)canBoostBackgroundOperations;
-(void)_startOverridingBudget:(unsigned long long)arg1 reason:(id)arg2 ;
-(void)_stopOverridingBudget:(unsigned long long)arg1 reason:(id)arg2 ;
-(void)_withSystemBudgetOverride:(/*^block*/id)arg1 ;
-(void)startOverridingSystemBudgets:(unsigned long long)arg1 reason:(id)arg2 ;
-(void)stopOverridingSystemBudgets:(unsigned long long)arg1 reason:(id)arg2 ;
-(void)startOverridingSystemBudgetsForClient:(unsigned long long)arg1 ;
-(void)stopOverridingSystemBudgetsForClient:(unsigned long long)arg1 ;
-(BOOL)isDataBudgetOverriden;
-(BOOL)_hasPermanentDataOverride;
-(void)_permanentDataOverrideHasChanged;
-(void)_startWatchingPermanentDataOverride;
-(void)_stopWatchingPermanentDataOverride;
@end
