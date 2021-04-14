/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned timestamp : 1;
} SCD_Struct_Wi1;

typedef struct {
	unsigned kCtlTxRTS : 1;
	unsigned kMACRxDataFrameMatchingRA : 1;
	unsigned kMACRxDataFrameOtherRA : 1;
	unsigned kRxBadFCS : 1;
	unsigned kRxBadPLCP : 1;
	unsigned kRxCRCGlitch : 1;
	unsigned kRxDataErrors : 1;
	unsigned kRxFrames : 1;
	unsigned kRxGoodPLCP : 1;
	unsigned kRxRetryBitSet : 1;
	unsigned kTxFrames : 1;
	unsigned kTxRetransmission : 1;
	unsigned kdot11MultipleRetryCount : 1;
	unsigned kdot11RTSFailureCount : 1;
	unsigned kdot11RTSSuccessCount : 1;
	unsigned kdot11RetryCount : 1;
	unsigned kMACRxControlFrameMatchingRA : 1;
	unsigned kMACRxControlFrameOtherRA : 1;
} SCD_Struct_Wi2;

typedef struct {
	unsigned activechains0 : 1;
	unsigned activechains1 : 1;
	unsigned ctlmid0 : 1;
	unsigned ctlmid1 : 1;
	unsigned ppm0 : 1;
	unsigned ppm1 : 1;
	unsigned temp0 : 1;
	unsigned temp1 : 1;
	unsigned tvpmindex0 : 1;
	unsigned tvpmindex1 : 1;
	unsigned txduty0 : 1;
	unsigned txduty1 : 1;
	unsigned txpowerbackoff0 : 1;
	unsigned txpowerbackoff1 : 1;
	unsigned voltage0 : 1;
	unsigned voltage1 : 1;
} SCD_Struct_Wi3;

typedef struct {
	unsigned ac : 1;
	unsigned dpsNotifications : 1;
	unsigned durSinceLastEnqueue : 1;
	unsigned durSinceLastEnqueueAtLastCheck : 1;
	unsigned durSinceLastFailedComp : 1;
	unsigned durSinceLastSuccessfulComp : 1;
	unsigned expiredComp : 1;
	unsigned failedComp : 1;
	unsigned failedCompletionsAtLastCheck : 1;
	unsigned noAckComp : 1;
	unsigned otherErrComp : 1;
	unsigned qeuedPackets : 1;
	unsigned sinceLastEnqueueHowManyFailed : 1;
	unsigned sinceLastEnqueueHowManySuccess : 1;
	unsigned sinceLastSuccessHowManyFailed : 1;
	unsigned success : 1;
	unsigned successfulCompletionsAtLastCheck : 1;
} SCD_Struct_Wi4;

typedef struct {
	unsigned timestamp : 1;
	unsigned rttGatewayBE : 1;
	unsigned rttGatewayBK : 1;
	unsigned rttGatewayVI : 1;
	unsigned rttGatewayVO : 1;
	unsigned rttPrimaryDnsBE : 1;
	unsigned rttPrimaryDnsBK : 1;
	unsigned rttPrimaryDnsVI : 1;
	unsigned rttPrimaryDnsVO : 1;
} SCD_Struct_Wi5;

typedef struct {
	unsigned ts : 1;
	unsigned duration : 1;
	unsigned sdb : 1;
	unsigned use : 1;
} SCD_Struct_Wi6;

typedef struct {
	unsigned kRadioPhyReportRxDur : 1;
	unsigned kRadioPhyReportTxDur : 1;
} SCD_Struct_Wi7;

typedef struct {
	unsigned long long list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_Wi8;

typedef struct {
	unsigned ts : 1;
	unsigned duration : 1;
	unsigned use : 1;
} SCD_Struct_Wi9;

typedef struct {
	unsigned chipmodeerror : 1;
	unsigned expired : 1;
	unsigned internalerror : 1;
	unsigned ioerror : 1;
	unsigned mbfree : 1;
	unsigned noack : 1;
	unsigned nobuf : 1;
	unsigned noremotepeer : 1;
	unsigned noresources : 1;
	unsigned success : 1;
	unsigned txfailure : 1;
} SCD_Struct_Wi10;

typedef struct {
	unsigned assocCount : 1;
	unsigned assocDur : 1;
	unsigned otherCount : 1;
	unsigned otherDur : 1;
	unsigned pnoBSSIDCount : 1;
	unsigned pnoBSSIDDur : 1;
	unsigned pnoSSIDCount : 1;
	unsigned pnoSSIDDur : 1;
	unsigned roamCount : 1;
	unsigned roamDur : 1;
	unsigned userCount : 1;
	unsigned userDur : 1;
} SCD_Struct_Wi11;

typedef struct {
	unsigned timestamp : 1;
	unsigned changedChannel : 1;
	unsigned changedDNSPrimary : 1;
	unsigned changedDNSSecondary : 1;
	unsigned changedMAC : 1;
	unsigned newBSSID : 1;
} SCD_Struct_Wi12;

typedef struct {
	unsigned timestamp : 1;
	unsigned actionField : 1;
	unsigned recoveryAction : 1;
	unsigned recoveryReason : 1;
	unsigned userInput : 1;
} SCD_Struct_Wi13;

typedef struct {
	unsigned aPTxDataStall : 1;
	unsigned accessPointOUI : 1;
	unsigned availWLANDurMS : 1;
	unsigned availWLANRxDurMS : 1;
	unsigned availWLANTxDurMS : 1;
	unsigned avgTxLatencyMS : 1;
	unsigned bTAntennaDurMS : 1;
	unsigned baselineThroughput : 1;
	unsigned cCA : 1;
	unsigned concurrentIntDurMS : 1;
	unsigned delayedThroughput : 1;
	unsigned expectedThroughput : 1;
	unsigned highRxDataPERFalse : 1;
	unsigned highRxDataPERTrue : 1;
	unsigned highRxDecryptErrsFalse : 1;
	unsigned highRxDecryptErrsTrue : 1;
	unsigned highRxDupsFalse : 1;
	unsigned highRxDupsTrue : 1;
	unsigned highRxFCSErrsFalse : 1;
	unsigned highRxFCSErrsTrue : 1;
	unsigned highRxOverflowsFalse : 1;
	unsigned highRxOverflowsTrue : 1;
	unsigned highRxPhyPERFalse : 1;
	unsigned highRxPhyPERTrue : 1;
	unsigned highRxReplaysFalse : 1;
	unsigned highRxReplaysTrue : 1;
	unsigned highRxRetriesFalse : 1;
	unsigned highRxRetriesTrue : 1;
	unsigned highTxLatencyFalse : 1;
	unsigned highTxLatencyTrue : 1;
	unsigned highTxPerFalse : 1;
	unsigned highTxPerTrue : 1;
	unsigned highTxRetriesFalse : 1;
	unsigned highTxRetriesTrue : 1;
	unsigned infraDutyCycle : 1;
	unsigned inputThroughput : 1;
	unsigned is2GBand : 1;
	unsigned isFGTraffic : 1;
	unsigned lTECoexDurationMS : 1;
	unsigned lastScanReason : 1;
	unsigned lowAvailWLANDurFalse : 1;
	unsigned lowAvailWLANDurTrue : 1;
	unsigned lowAvailWLANRxDurFalse : 1;
	unsigned lowAvailWLANRxDurTrue : 1;
	unsigned lowAvailWLANTxDurFalse : 1;
	unsigned lowAvailWLANTxDurTrue : 1;
	unsigned lowTxAMPDUDensityFalse : 1;
	unsigned lowTxAMPDUDensityTrue : 1;
	unsigned lowTxPhyRateFalse : 1;
	unsigned lowTxPhyRateTrue : 1;
	unsigned maxQueueFullDurMS : 1;
	unsigned measurementDurMS : 1;
	unsigned offChanDurMS : 1;
	unsigned outputThroughput : 1;
	unsigned phyRxActivityDurMS : 1;
	unsigned phyTxActivityDurMS : 1;
	unsigned rC1CoexDurationMS : 1;
	unsigned rC2CoexDurationMS : 1;
	unsigned rSSI : 1;
	unsigned rxAmpduTxBaMismatch : 1;
	unsigned rxCRSErrs : 1;
	unsigned rxDecryErrs : 1;
	unsigned rxDupErrs : 1;
	unsigned rxFCSErrs : 1;
	unsigned rxFrames : 1;
	unsigned rxGoodPlcps : 1;
	unsigned rxLowFrameCountFalse : 1;
	unsigned rxLowFrameCountTrue : 1;
	unsigned rxOvflErrs : 1;
	unsigned rxPLCPErrs : 1;
	unsigned rxPhyRate : 1;
	unsigned rxReplayErrs : 1;
	unsigned rxRetries : 1;
	unsigned rxThroughput : 1;
	unsigned sNR : 1;
	unsigned symptomsFails : 1;
	unsigned tVPMActiveDurationMS : 1;
	unsigned testThroughput : 1;
	unsigned timeSinceLastRecovery : 1;
	unsigned timestamp : 1;
	unsigned txAMPDUDensity : 1;
	unsigned txCompBytes : 1;
	unsigned txCompPkts : 1;
	unsigned txDelayBytes : 1;
	unsigned txExpectedAMPDUDensity : 1;
	unsigned txFails : 1;
	unsigned txFrames : 1;
	unsigned txLowFrameCountFalse : 1;
	unsigned txLowFrameCountTrue : 1;
	unsigned txOutputBelowExpectedFalse : 1;
	unsigned txOutputBelowExpectedTrue : 1;
	unsigned txOutputBelowInputFalse : 1;
	unsigned txOutputBelowInputTrue : 1;
	unsigned txPhyRate : 1;
	unsigned txQueueFullFalse : 1;
	unsigned txQueueFullTrue : 1;
	unsigned txRetries : 1;
	unsigned txSubBytes : 1;
	unsigned txSubPkts : 1;
} SCD_Struct_Wi14;

typedef struct {
	unsigned a2dp : 1;
	unsigned acl : 1;
	unsigned ble : 1;
	unsigned blescan : 1;
	unsigned esco : 1;
	unsigned inquiry : 1;
	unsigned inquiryscan : 1;
	unsigned mss : 1;
	unsigned other : 1;
	unsigned page : 1;
	unsigned pagescan : 1;
	unsigned park : 1;
	unsigned sco : 1;
	unsigned sniff : 1;
} SCD_Struct_Wi15;

