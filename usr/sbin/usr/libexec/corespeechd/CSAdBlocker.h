//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSAdBlockerAssetDownloadMonitorDelegate-Protocol.h"
#import "CSCATAssetManagerDelegate-Protocol.h"
#import "CSContinuousAudioFingerprintProviderDelegate-Protocol.h"
#import "CSSiriClientBehaviorMonitorDelegate-Protocol.h"
#import "CSVoiceTriggerDelegate-Protocol.h"
#import "SHRecognitionSessionDelegate-Protocol.h"

@class CSAsset, CSCATAssetManager, CSContinuousAudioFingerprintProvider, NSMutableDictionary, NSString, NSURL, NSUUID, SHRecognitionSession;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSAdBlocker : NSObject <SHRecognitionSessionDelegate, CSSiriClientBehaviorMonitorDelegate, CSContinuousAudioFingerprintProviderDelegate, CSAdBlockerAssetDownloadMonitorDelegate, CSCATAssetManagerDelegate, CSVoiceTriggerDelegate>
{
    NSObject<OS_dispatch_source> *_downloadTimer;	// 8 = 0x8
    _Bool _hasCancelled;	// 16 = 0x10
    SHRecognitionSession *_mainRecognitionSession;	// 24 = 0x18
    SHRecognitionSession *_hotfixRecognitionSession;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    CSContinuousAudioFingerprintProvider *_fingerprintProvider;	// 48 = 0x30
    CSAsset *_assetForAdBlockerFile;	// 56 = 0x38
    NSUUID *_uuid;	// 64 = 0x40
    CSCATAssetManager *_catAssetanager;	// 72 = 0x48
    NSURL *_urlForManifest;	// 80 = 0x50
    NSString *_previousHotfixAssetVersion;	// 88 = 0x58
    NSString *_languageCode;	// 96 = 0x60
    unsigned long long _startTime;	// 104 = 0x68
    NSMutableDictionary *_mainShouldResetDictionary;	// 112 = 0x70
    NSMutableDictionary *_hotfixShouldResetDictionary;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000010001e268
@property(retain, nonatomic) NSMutableDictionary *hotfixShouldResetDictionary; // @synthesize hotfixShouldResetDictionary=_hotfixShouldResetDictionary;
@property(retain, nonatomic) NSMutableDictionary *mainShouldResetDictionary; // @synthesize mainShouldResetDictionary=_mainShouldResetDictionary;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(retain, nonatomic) NSString *previousHotfixAssetVersion; // @synthesize previousHotfixAssetVersion=_previousHotfixAssetVersion;
@property(retain, nonatomic) NSURL *urlForManifest; // @synthesize urlForManifest=_urlForManifest;
@property(retain, nonatomic) CSCATAssetManager *catAssetanager; // @synthesize catAssetanager=_catAssetanager;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) _Bool hasCancelled; // @synthesize hasCancelled=_hasCancelled;
@property(retain, nonatomic) CSAsset *assetForAdBlockerFile; // @synthesize assetForAdBlockerFile=_assetForAdBlockerFile;
@property(nonatomic) __weak CSContinuousAudioFingerprintProvider *fingerprintProvider; // @synthesize fingerprintProvider=_fingerprintProvider;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) SHRecognitionSession *hotfixRecognitionSession; // @synthesize hotfixRecognitionSession=_hotfixRecognitionSession;
@property(retain, nonatomic) SHRecognitionSession *mainRecognitionSession; // @synthesize mainRecognitionSession=_mainRecognitionSession;
- (void)_createPeriodicalCATAssetDownloadTimer;	// IMP=0x000000010001dec4
- (void)sendAnalyticInformation:(_Bool)arg1 withAdName:(id)arg2 withTimeForAdBlockerDecision:(float)arg3;	// IMP=0x000000010001dc64
- (void)catAssetManagerDelegate:(id)arg1 withVersion:(id)arg2 withError:(id)arg3;	// IMP=0x000000010001da40
- (void)CSAdBlockerAssetDownloadMonitor:(id)arg1 didInstallNewAsset:(_Bool)arg2 assetProviderType:(unsigned long long)arg3;	// IMP=0x000000010001d66c
- (void)continuousAudioFingerprintProvider:(id)arg1 hasNewFingerprintBuffer:(id)arg2;	// IMP=0x000000010001d478
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3;	// IMP=0x000000010001d474
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;	// IMP=0x000000010001d2e0
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(_Bool)arg3 option:(id)arg4 withEventUUID:(id)arg5;	// IMP=0x000000010001d2dc
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;	// IMP=0x000000010001d2d8
- (void)session:(id)arg1 didNotFindMatchforSignature:(id)arg2 needsMinimumSignatureLength:(double)arg3;	// IMP=0x000000010001d1f4
- (void)session:(id)arg1 didNotFindMatchForSignature:(id)arg2;	// IMP=0x000000010001d1f0
- (void)session:(id)arg1 willMatch:(id)arg2;	// IMP=0x000000010001d1ec
- (void)session:(id)arg1 didFailForSignature:(id)arg2 withError:(id)arg3;	// IMP=0x000000010001d0e4
- (void)session:(id)arg1 didFindMatch:(id)arg2;	// IMP=0x000000010001cba8
- (void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2;	// IMP=0x000000010001c8f4
- (void)_populateAdBlockerWithSignaturesWithAsset:(id)arg1 useMainDatabase:(_Bool)arg2;	// IMP=0x000000010001c3c4
- (void)start;	// IMP=0x000000010001bcf0
- (void)dealloc;	// IMP=0x000000010001bb8c
- (id)init;	// IMP=0x000000010001ba54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
