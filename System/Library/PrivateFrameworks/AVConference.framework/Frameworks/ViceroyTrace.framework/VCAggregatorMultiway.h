/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ViceroyTrace/VCAggregator.h>
#import <libobjc.A.dylib/SegmentStatsDelegate.h>

@class NSString, UplinkSegment, DownlinkSegment, NSMutableDictionary;

@interface VCAggregatorMultiway : VCAggregator <SegmentStatsDelegate> {

	NSString* _currentUplinkSegmentKey;
	UplinkSegment* _currentUplinkSegment;
	NSString* _currentDownlinkSegmentKey;
	DownlinkSegment* _currentDownlinkSegment;
	NSMutableDictionary* _calls;
	NSMutableDictionary* _internalErrors;
	unsigned _participantCounter;
	double _lastParticipantNumberChangeTime;
	double _numberOfParticipantsDuration[40];
	double _totalParticipantMeasuredTime;
	unsigned _numberOfUplinkSegments;
	unsigned _numberOfDownlinkSegments;
	unsigned _sessionTotalDurationTicks;
	unsigned _sessionAggregatedDurationTicks;
	unsigned _sessionUplinkTargetBitrateSwitchCount;
	unsigned long long _sessionUplinkBWEstimationSum;
	unsigned _sessionUplinkBWEstimationCounter;
	unsigned long long _sessionDownlinkBWEstimationSum;
	unsigned _sessionDownlinkBWEstimationCounter;
	unsigned long long _sessionUplinkTargetBitrateSum;
	unsigned _sessionUplinkTargetBitrateCounter;
	unsigned long long _sessionDownlinkTargetBitrateSum;
	unsigned _sessionDownlinkTargetBitrateCounter;
	unsigned long long _sessionUplinkActualBitrateSum;
	unsigned _sessionUplinkActualBitrateCounter;
	unsigned long long _sessionDownlinkActualBitrateSum;
	unsigned _sessionDownlinkActualBitrateCounter;
	unsigned long long _sessionDownlinkRoundTripTimeSum;
	unsigned _sessionDownlinkRoundTripTimeCounter;
	unsigned long long _sessionDownlinkTotalPacketsReceivedSum;
	unsigned long long _sessionDownlinkTotalLostSum;
	unsigned long long _sessionUplinkTotalPacketsSentSum;
	unsigned long long _sessionUplinkTotalLostSum;
	unsigned _sessionEndReason;
	unsigned _sessionDetailedEndReason;
	unsigned _lastReportedDownlinkPacketsReceived;
	unsigned _lastReportedDownlinkBytesReceived;
	unsigned _lastReportedUplinkPacketsReceived;
	unsigned _lastReportedUplinkPacketsSent;
	unsigned _lastReportedUplinkBytesSent;
	unsigned _videoDegradedTotalCounter;
	unsigned _videoDegradedMaxPercentOfParticipant;
	unsigned _significantVideoStallMaxPercentOfParticipant;
	unsigned _significantAudioErasureMaxPercentOfParticipant;
	unsigned _totalDuplicationTicks;
	double _sessionCreatedTime;
	BOOL _isFullsizeUI;
	BOOL _isDuplicationEnabled;
	unsigned long long _totalCellTxDataBytes;
	unsigned long long _totalCellRxDataBytes;
	unsigned long long _totalCellDupTxDataBytes;
	unsigned long long _totalCellDupRxDataBytes;
	unsigned long long _localWRMDuplicationSwitchCount;
	unsigned long long _remoteWRMDuplicationSwitchCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)isWhitelistedEvent:(unsigned short)arg1 ;
-(BOOL)isVideoDegraded;
-(unsigned)RTPeriod;
-(void)flushCurrentSegment;
-(void)processEventWithCategory:(unsigned short)arg1 type:(unsigned short)arg2 payload:(id)arg3 ;
-(id)aggregatedSegmentReport:(int)arg1 ;
-(int)initialSettledBitrate;
-(int)adaptiveLearningState;
-(void)updateSegment:(id)arg1 TBR:(int)arg2 ISBTR:(int)arg3 SATXBR:(int)arg4 SARBR:(int)arg5 BWE:(int)arg6 ;
-(void)saveCallSegmentHistory;
-(int)learntBitrateForSegment:(id)arg1 defaultValue:(int)arg2 ;
-(id)aggregatedSegmentQRReport;
-(void)updateWRMMetrics:(unsigned)arg1 payload:(id)arg2 ;
-(void)initAdaptiveLearningWithParameters:(id)arg1 ;
-(id)aggregatedCallReports;
-(id)aggregatedSessionReport;
-(unsigned)significantVideoStallCount;
-(unsigned)audioErasureCount;
-(double)audioErasureTotalTime;
-(unsigned short)maxAudioErasureCount;
-(unsigned short)maxVideoStallCount;
-(double)averageJitterBufferDelay;
-(unsigned short)maxJBTargetSizeChanges;
-(unsigned short)minVideoFrameRate;
-(void)processDownlinkRateChange:(id)arg1 ;
-(double)significantVideoStallTotalTime;
-(double)avgJBTargetSizeChanges;
-(double)timeWeightedNumberOfParticipants;
-(void)addCellByteCountStats:(id)arg1 ;
-(id)aggregatedUplinkSegmentReport;
-(id)aggregatedDownlinkSegmentReport;
-(void)flushCurrentUplinkSegment;
-(void)flushCurrentDownlinkSegment;
-(void)processStatsForNumberOfParticipants:(unsigned)arg1 ;
-(id)interfaceTypeIndicator;
-(void)resetUplinkSegment;
-(BOOL)currentUISize;
-(void)resetDownlinkSegment;
-(void)processVideoDegraded:(BOOL)arg1 participantID:(id)arg2 ;
-(void)processUplinkTargetBitrate:(unsigned)arg1 ;
-(void)processUplinkActualBitrate:(unsigned)arg1 ;
-(void)processUplinkBWEstimation:(unsigned)arg1 ;
-(void)processDownlinkRoundTripTime:(unsigned)arg1 ;
-(void)processDownlinkBWEstimation:(unsigned)arg1 ;
-(void)processDownlinkTargetBitrate:(unsigned)arg1 ;
-(void)processDownlinkActualBitrate:(unsigned)arg1 ;
-(void)processActualBitrateChange:(id)arg1 ;
-(void)startDownlinkSegment;
-(unsigned)currentDegragedParticipantCount;
-(void)startUplinkSegment;
-(BOOL)isDuplicationChanged:(BOOL)arg1 ;
-(BOOL)isParticipantLive:(id)arg1 ;
-(void)addNewCall:(id)arg1 ;
-(void)finalizeCall:(id)arg1 ;
-(void)audioEnabled:(id)arg1 ;
-(void)videoEnabled:(id)arg1 ;
-(void)processRTEvent:(id)arg1 ;
-(void)processVideoStreamSwitch:(id)arg1 ;
-(void)processAudioStreamSwitch:(id)arg1 ;
-(void)processParticipantTimingInfo:(id)arg1 ;
-(void)processSessionInit;
-(void)processSessionStart;
-(void)processInternalErrorDetectedWithCode:(id)arg1 ;
-(void)processUISizeEventForParticipant:(id)arg1 isFullSize:(BOOL)arg2 ;
-(void)updateAlgoMetrics:(unsigned)arg1 participantID:(id)arg2 ;
-(void)updateVideoQualityWithPayload:(id)arg1 participantID:(id)arg2 ;
@end

