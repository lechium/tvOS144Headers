//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CSEventMonitor.h"

#import "CSOpportuneSpeakBehaviorMonitorDelegate-Protocol.h"

@class CSAudioRecordContext, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface CSOpportuneSpeakEventMonitor : CSEventMonitor <CSOpportuneSpeakBehaviorMonitorDelegate>
{
    _Bool _isOpportuneSpeakListening;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSString *_audioProviderUUID;	// 24 = 0x18
    CSAudioRecordContext *_audioRecordContext;	// 32 = 0x20
    NSUUID *_token;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x000000010002f614
- (void).cxx_destruct;	// IMP=0x00000001000300f8
@property(retain, nonatomic) NSUUID *token; // @synthesize token=_token;
@property(retain, nonatomic) CSAudioRecordContext *audioRecordContext; // @synthesize audioRecordContext=_audioRecordContext;
@property(retain, nonatomic) NSString *audioProviderUUID; // @synthesize audioProviderUUID=_audioProviderUUID;
@property(nonatomic) _Bool isOpportuneSpeakListening; // @synthesize isOpportuneSpeakListening=_isOpportuneSpeakListening;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_notifyStopOpportuneSpeakWithDelay:(double)arg1;	// IMP=0x000000010002fe30
- (void)opportuneSpeakBehaviorMonitor:(id)arg1 didStopStream:(id)arg2;	// IMP=0x000000010002fe20
- (void)opportuneSpeakBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;	// IMP=0x000000010002fe10
- (void)opportuneSpeakBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 audioProviderUUID:(id)arg3 successfully:(_Bool)arg4 option:(id)arg5;	// IMP=0x000000010002fbdc
- (void)opportuneSpeakBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 audioProviderUUID:(id)arg3 option:(id)arg4;	// IMP=0x000000010002fbd8
- (_Bool)isStreaming;	// IMP=0x000000010002f864
- (void)_stopMonitoring;	// IMP=0x000000010002f7b0
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x000000010002f6fc
- (id)init;	// IMP=0x000000010002f680

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

