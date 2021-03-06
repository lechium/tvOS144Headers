/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSpeech/CSEventMonitor.h>
#import <libobjc.A.dylib/CSTrialAssetDownloadMonitorDelegate.h>

@class CSTrialAssetDownloadMonitor, NSString;

@interface CSAdBlockerAssetDownloadMonitor : CSEventMonitor <CSTrialAssetDownloadMonitorDelegate> {

	int _notifyToken;
	unsigned long long _lastUpdatedAssetType;
	CSTrialAssetDownloadMonitor* _monitor;

}

@property (nonatomic,retain) CSTrialAssetDownloadMonitor * monitor;              //@synthesize monitor=_monitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(CSTrialAssetDownloadMonitor *)monitor;
-(void)_stopMonitoring;
-(void)setMonitor:(CSTrialAssetDownloadMonitor *)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_notifyObserver:(id)arg1 ;
-(const char*)_notificationKey;
-(void)trialAssetDownloadMonitorDelegate:(id)arg1 didInstallNewAsset:(BOOL)arg2 assetType:(unsigned long long)arg3 ;
-(void)_didInstalledNewAdBlockerAsset;
@end

