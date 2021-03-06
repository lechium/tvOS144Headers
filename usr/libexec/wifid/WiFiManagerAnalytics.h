//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAClientConfigChangedDelegate-Protocol.h"

@class NSString, WAClient;
@protocol OS_dispatch_queue;

@interface WiFiManagerAnalytics : NSObject <WAClientConfigChangedDelegate>
{
    _Bool _hasRegisteredWithDaemon;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_wifiManagerQueue;	// 16 = 0x10
    WAClient *_waClient;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serialQ;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00000001000f1000
- (void).cxx_destruct;	// IMP=0x0000000100109bf4
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQ; // @synthesize serialQ=_serialQ;
@property(nonatomic) _Bool hasRegisteredWithDaemon; // @synthesize hasRegisteredWithDaemon=_hasRegisteredWithDaemon;
@property(retain, nonatomic) WAClient *waClient; // @synthesize waClient=_waClient;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *wifiManagerQueue; // @synthesize wifiManagerQueue=_wifiManagerQueue;
- (void)_populateSlowWiFiNotificationMessage:(const struct __CFDictionary *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100109864
- (void)_populateDPSLinkStateChangeMessage:(CDStruct_de0e5961 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100109588
- (void)_populateDPSProbeResultMessage:(CDStruct_95ce6899 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010010923c
- (void)_populateDPSNotificationMessage:(const struct __CFDictionary *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100108f9c
- (void)_populateAirplayStatisticsMessage:(struct WiFiMetricsManagerAirplayStatistics *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100107d00
- (void)_populateOtaSystemInfoMessage:(CDStruct_d361f42f *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100107574
- (void)_populateSidecarUsageMessage:(struct WiFiMetricsManagerSidecarStatistics *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100106678
- (void)_loadSidecarHistogramBin:(id)arg1 blankAWDSHBInstance:(id)arg2 histogram:(CDStruct_39925896 *)arg3 histogramCount:(unsigned int)arg4 fieldForKey:(id)arg5;	// IMP=0x0000000100106474
- (void)configDidChangeWithConfiguredMetricIDs:(id)arg1 andInterestedMetricIDs:(id)arg2 forGroupType:(long long)arg3;	// IMP=0x00000001001062a0
- (void)trigger11axPerfStudy;	// IMP=0x00000001001061b8
- (void)collectInterfaceStatsForEventType:(int)arg1 andEvent:(_Bool)arg2 wifiDevice:(struct __WiFiDevice *)arg3 andCellularInterfaceName:(struct __CFString *)arg4;	// IMP=0x0000000100106028
- (int)_getAssociationEventIDForEventTypeString:(id)arg1;	// IMP=0x0000000100105f28
- (void)_populateActionFrameMessage:(CDStruct_a9c4f86c *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100105818
- (void)_populateWiFiConnectionQualityMessageWithScorecard:(id)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100102f54
- (void)_populateAlwaysOnWiFiReportMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100102198
- (void)_populateBlacklistingEventMessage:(CDStruct_853d9d76 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100101e3c
- (void)_populateAssocHistoryMessageWithString:(id)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001001010f4
- (void)_populateSoftErrorCountersMessage:(struct softErrorCounters *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100100ee8
- (void)_getPrepopulatedMessageWithID:(unsigned int)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100100c5c
- (void)_populateRetStatsMessageAndReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100100ad8
- (void)_populateLprxStatsMessageAndReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100100954
- (void)_populateWcpsStatsMessageAndReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001007d0
- (void)_populateScanStatsMessageAndReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010010064c
- (void)_populateAssocInfoMessageAndReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001004c8
- (void)_populatePHClientMessage:(CDStruct_f2c29a7a *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001001001b0
- (void)_populateSoftAPMessage:(CDStruct_1fc1c3b2 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ffcc0
- (void)_populateWoWBlacklistHistoryMessage:(CDStruct_46441b56 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ff10c
- (void)_populateNetworkTransitionCumulativeMessage:(struct __WiFiMetricsManagerNetworkTransitionCumulative *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000feedc
- (void)_populateNetworkTransitionSessionRecordsMessage:(CDStruct_32e92d78 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fe8a0
- (void)_populateAutoJoinCumulativeMessage:(CDStruct_5478c3ab *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fe48c
- (void)_populateAutoJoinSessionRecordsMessage:(CDStruct_0b3a2485 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fd85c
- (void)_populateTXInhibitEventMessage:(CDStruct_b31ca263 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fd694
- (void)_populateUserBlacklistingMessage:(CDStruct_d0632ee2 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fd39c
- (void)_populateRoamStatusMessage:(CDStruct_0031ec31 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fca44
- (void)_populateLastSSIDInfoStatsMessage:(CDStruct_5bae0375 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fc7c4
- (void)_populateActiveProbeStatsMessage:(CDStruct_0307c87d *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fc384
- (void)_populateLeakyAPStatsMessage:(CDStruct_1490e47e *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fc08c
- (void)_populateLinkQualityStatsMessage:(CDStruct_b75b73a9 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fb438
- (void)_populateKnownNetworksEventMessage:(CDStruct_30ae134f *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fb188
- (void)_populatePowerStatsUpdateMessage:(CDStruct_cc4e5495 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000faed0
- (void)_populateWifidAvailabilityMessage:(CDStruct_20c13360 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000facc0
- (void)_populateWatchdogEvent:(CDStruct_4a093ba1 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f96d0
- (void)_populateDeviceCountMessage:(CDStruct_eb5aa7f0 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f944c
- (void)_populateCustomNetworkSettingMessage:(CDStruct_a561fd19 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f9124
- (void)_populateIPV4DHCPLatencyMessage:(CDStruct_4cef2586 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f8e1c
- (void)_populateTetheredDeviceOUIMessage:(CDStruct_8356e4f6 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f8c20
- (void)_populateHotspotTransportMessage:(CDStruct_f4b747e6 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f89d8
- (void)_populateNetworkPrefsMessage:(CDStruct_e0daccdd *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f7e78
- (void)_populateAssocErrorMessage:(CDStruct_ee00bbfb *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f79ec
- (void)_populateAWDLUsageMessage:(CDStruct_ab83e539 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f64f0
- (void)_populateWoWStateMessage:(CDStruct_b31ca263 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f6328
- (void)_populateInterfaceStatsMessage:(CDStruct_aaf269f3 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f5e40
- (void)_populateHardwareVersionMessage:(CDStruct_1d7abdeb *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f5c34
- (void)_populateLQMHistoryMessage:(CDStruct_c203e5c3 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f587c
- (void)_populatePowerMessage:(CDStruct_6b48f683 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f56ac
- (void)_populate11axLinkChangedMessage:(CDStruct_f998206b *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f491c
- (void)_populateLinkChangedMessage:(CDStruct_8e6166fd *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f3998
- (id)__copyHashOfSSID:(id)arg1;	// IMP=0x00000001000f3788
- (id)_initPrivate;	// IMP=0x00000001000f36cc
- (id)init;	// IMP=0x00000001000f3688
- (void)_registerForQueryableMessages;	// IMP=0x00000001000f3468
- (void)prepareMessageForSubmission:(unsigned int)arg1 withData:(void *)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000f2940
- (void)_runReplyBlock:(CDUnknownBlockType)arg1 withMessage:(id)arg2 andError:(id)arg3;	// IMP=0x00000001000f28e0
- (void *)_gatherDataForMessageWithIdentifier:(unsigned int)arg1 andArguments:(id)arg2;	// IMP=0x00000001000f269c
- (void)_triggerQueryableMessageSubmissionOnMasterThread:(unsigned int)arg1 andArguments:(id)arg2;	// IMP=0x00000001000f249c
- (void)getDeviceAnalyticsConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000f22bc
- (void)setDeviceAnalyticsConfiguration:(id)arg1;	// IMP=0x00000001000f215c
- (void)triggerDatapathDiagnosticsNoReply:(id)arg1;	// IMP=0x00000001000f1fa0
- (void)submitGeoServicesMessage:(id)arg1;	// IMP=0x00000001000f1db8
- (void)submitWiFiAnalyticsMessage:(id)arg1;	// IMP=0x00000001000f1be8
- (void)submitMessage:(id)arg1;	// IMP=0x00000001000f1934
- (void)setWiFiManagerQueue:(id)arg1;	// IMP=0x00000001000f18b0
- (void)_registerQueryableMessageWithIdentifier:(unsigned int)arg1;	// IMP=0x00000001000f15cc
- (void)_register;	// IMP=0x00000001000f117c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

