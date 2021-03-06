//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSSiriClientBehaviorMonitorDelegate-Protocol.h"
#import "CSVoiceTriggerEnabledMonitorDelegate-Protocol.h"

@class NSArray, NSDate, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerDataCollector : NSObject <CSSiriClientBehaviorMonitorDelegate, CSVoiceTriggerEnabledMonitorDelegate>
{
    NSMutableArray *_vteiList;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSDate *_lastVTEnableDate;	// 24 = 0x18
    NSDate *_lastVTDisableDate;	// 32 = 0x20
    NSArray *_privacyApprovedFields;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x000000010001f680
- (void).cxx_destruct;	// IMP=0x0000000100020e58
@property(retain, nonatomic) NSArray *privacyApprovedFields; // @synthesize privacyApprovedFields=_privacyApprovedFields;
@property(retain, nonatomic) NSDate *lastVTDisableDate; // @synthesize lastVTDisableDate=_lastVTDisableDate;
@property(retain, nonatomic) NSDate *lastVTEnableDate; // @synthesize lastVTEnableDate=_lastVTEnableDate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableArray *vteiList; // @synthesize vteiList=_vteiList;
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3;	// IMP=0x0000000100020df0
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;	// IMP=0x0000000100020dec
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;	// IMP=0x0000000100020de8
- (void)CSVoiceTriggerEnabledMonitor:(id)arg1 didReceiveEnabled:(_Bool)arg2;	// IMP=0x0000000100020b7c
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(_Bool)arg3 option:(id)arg4 withEventUUID:(id)arg5;	// IMP=0x0000000100020a40
- (void)_submitToggleReport;	// IMP=0x000000010002076c
- (void)_createAndSubmitRejectLoggingDictWithSource:(id)arg1 withPHSAcceptInfo:(id)arg2;	// IMP=0x00000001000204b4
- (id)_filteredVTEIArray;	// IMP=0x0000000100020180
- (void)addVTAcceptEntryAndSubmit:(id)arg1;	// IMP=0x0000000100020094
- (void)addVTRejectEntry:(id)arg1 truncateData:(_Bool)arg2;	// IMP=0x000000010001fcf8
- (id)fetchVoiceTriggerHeartBeatMetrics;	// IMP=0x000000010001f96c
- (id)init;	// IMP=0x000000010001f6ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

