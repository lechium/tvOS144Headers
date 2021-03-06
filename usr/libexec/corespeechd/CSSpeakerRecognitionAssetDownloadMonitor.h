//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CSEventMonitor.h"

#import "CSTrialAssetDownloadMonitorDelegate-Protocol.h"

@class CSTrialAssetDownloadMonitor, NSString;

@interface CSSpeakerRecognitionAssetDownloadMonitor : CSEventMonitor <CSTrialAssetDownloadMonitorDelegate>
{
    int _notifyToken;	// 8 = 0x8
    unsigned long long _lastUpdatedAssetType;	// 16 = 0x10
    CSTrialAssetDownloadMonitor *_trialAssetMonitor;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000010000ca54
- (void).cxx_destruct;	// IMP=0x000000010000cfc0
@property(retain, nonatomic) CSTrialAssetDownloadMonitor *trialAssetMonitor; // @synthesize trialAssetMonitor=_trialAssetMonitor;
- (void)trialAssetDownloadMonitorDelegate:(id)arg1 didInstallNewAsset:(_Bool)arg2 assetType:(unsigned long long)arg3;	// IMP=0x000000010000cf00
- (void)_notifyObserver:(id)arg1;	// IMP=0x000000010000ce90
- (void)_didInstalledNewAsset;	// IMP=0x000000010000cd90
- (void)_stopMonitoring;	// IMP=0x000000010000ccc8
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x000000010000cb78
- (const char *)_notificationKey;	// IMP=0x000000010000cb6c
- (id)init;	// IMP=0x000000010000cac0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

