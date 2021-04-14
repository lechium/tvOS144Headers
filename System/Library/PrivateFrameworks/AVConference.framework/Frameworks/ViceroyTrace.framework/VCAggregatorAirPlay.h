/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ViceroyTrace/ViceroyTrace-Structs.h>
#import <ViceroyTrace/VCAggregator.h>

@class VCHistogram, NSMutableDictionary, NSString, NSDictionary;

@interface VCAggregatorAirPlay : VCAggregator {

	double _sessionTotalDuration;
	double _lastReportedVideoStallTime;
	double _totalVideoStallTime;
	double _maxVideoStallInterval;
	int _videoStallCount;
	int _avgFramerate;
	int _averageReceiveBitrate;
	int _averageSendBitrate;
	int _maxSendBitrate;
	int _averageTargetBitrate;
	int _maxTargetBitrate;
	int _maxPLR;
	int _totalFIRCounter;
	int _videoWidth;
	int _videoHeight;
	int _codec;
	int _transportType;
	double _averageExpirationTime;
	double _maxExpirationTime;
	double _averageWiFiPacketDelay;
	double _averageMaxAverageWiFiPacketDelay;
	unsigned _averageWiFiThroughput;
	unsigned _totalNACKCounter;
	unsigned _averageBurstyPacketLossCount;
	unsigned _maxBurstyPacketLossCount;
	unsigned _averagePacketLossRate;
	unsigned _averageBandwidthEstimation;
	unsigned _maxBandwidthEstimation;
	unsigned _averageJitterQueueSize;
	unsigned _averageJitterQueueSizeChanges;
	double _timeSpentWithNonZeroJitterQueueSize;
	double _timeWeightedJitterQueueSize;
	unsigned _maxJitterQueueSize;
	double _averagePlaybackOffset;
	double _maxPlaybackOffset;
	unsigned _averageRoundTripTime;
	unsigned _maxRoundTripTime;
	unsigned _averageHIDEventLatencySampleCount;
	unsigned _averageHIDEventLatency;
	unsigned _maxHIDEventLatency;
	unsigned _minHIDEventLatency;
	unsigned _videoFrameNonFECTotalCounter;
	unsigned _videoFrameNonFECCompleteCounter;
	unsigned _videoFrameDisplayedCounter;
	unsigned _decodedVideoFrameEnqueueCounter;
	unsigned _videoFrameReceivedCounter;
	unsigned _videoFrameExpectedCounter;
	unsigned _rtcpTimeoutCount;
	unsigned _evictedFramesLikelyRecoverableCount;
	unsigned _evictedFramesTrackedCount;
	unsigned _evictedFramesAnalysisValidIntervals;
	double _evictedFramesAverageLatePacketDelay;
	unsigned _accumVideoFrameErasureCount;
	unsigned _maxVideoFrameErasureCount;
	unsigned _maxVideoStallCount;
	unsigned _minVideoFrameRate;
	VCHistogram* _RBR;
	VCHistogram* _TBR;
	VCHistogram* _SBR;
	VCHistogram* _VST;
	VCHistogram* _PLR;
	VCHistogram* _BPL;
	VCHistogram* _EXT;
	VCHistogram* _BWE;
	VCHistogram* _VJS;
	VCHistogram* _RTT;
	VCHistogram* _HEL;
	NSMutableDictionary* _fecStatsDict;
	int _twoPtFourGhzChannelCount;
	int _fiveGhzChannelCount;
	int _dfsChannelCount;
	int _inactiveSlotCount;
	NSString* _channelSequence;
	SCD_Struct_VC1 _channelSequenceStats;
	NSString* _previousChannelSequence;
	SCD_Struct_VC1 _previousChannelSequenceStats;
	NSString* _remoteOSBuildVersion;
	NSString* _remoteFrameworkVersion;
	NSString* _remoteDeviceModel;
	NSString* _segmentName;
	NSDictionary* _wifiStats;

}

@property (nonatomic,copy) NSString * channelSequence;                        //@synthesize channelSequence=_channelSequence - In the implementation block
@property (nonatomic,retain) NSString * previousChannelSequence;              //@synthesize previousChannelSequence=_previousChannelSequence - In the implementation block
@property (nonatomic,copy) NSString * segmentName;                            //@synthesize segmentName=_segmentName - In the implementation block
-(void)dealloc;
-(void)reset;
-(id)initWithDelegate:(id)arg1 ;
-(NSString *)segmentName;
-(void)setSegmentName:(NSString *)arg1 ;
-(void)startNewSegment;
-(void)composeChannelSequenceReport:(id)arg1 ;
-(void)composeSystemInfoReport:(id)arg1 ;
-(void)composeReceiverReport:(id)arg1 ;
-(void)composeSenderReport:(id)arg1 ;
-(id)composeSegmentReport:(int)arg1 ;
-(NSString *)previousChannelSequence;
-(NSString *)channelSequence;
-(id)sessionFECReport;
-(void)setPreviousChannelSequence:(NSString *)arg1 ;
-(void)setChannelSequence:(NSString *)arg1 ;
-(void)processRealtimeStatsPart1:(id)arg1 ;
-(void)processRealtimeStatsPart2:(id)arg1 ;
-(void)processRealtimeStatsPart3:(id)arg1 ;
-(void)processRealtimeStatsPart4:(id)arg1 ;
-(void)processRealtimeStatsPart5:(id)arg1 ;
-(void)processRealtimeStatsPart6:(id)arg1 ;
-(void)flushCurrentSegment;
-(void)processRealtimeStats:(id)arg1 ;
-(void)updateReceiverVideoStreamConfiguration:(id)arg1 ;
-(void)updateSenderVideoStreamConfiguration:(id)arg1 ;
-(void)processEventWithCategory:(unsigned short)arg1 type:(unsigned short)arg2 payload:(id)arg3 ;
-(id)aggregatedSegmentReport:(int)arg1 ;
-(void)updateVideoFECStats:(id)arg1 ;
@end

