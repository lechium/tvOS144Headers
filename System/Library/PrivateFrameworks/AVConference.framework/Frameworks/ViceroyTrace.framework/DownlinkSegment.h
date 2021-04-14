/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ViceroyTrace/MultiwaySegment.h>

@interface DownlinkSegment : MultiwaySegment {

	double _videoDegradedStartTime;
	BOOL _isVideoDegraded;
	unsigned _videoDegradedTotalCounter;
	double _videoDegradedTotalTime;
	double _videoDegradedMaxLength;
	unsigned long long _totalCellRxDataBytes;
	unsigned long long _totalCellDupRxDataBytes;

}

@property (assign) double videoDegradedStartTime;                           //@synthesize videoDegradedStartTime=_videoDegradedStartTime - In the implementation block
@property (assign) BOOL isVideoDegraded;                                    //@synthesize isVideoDegraded=_isVideoDegraded - In the implementation block
@property (assign) unsigned videoDegradedTotalCounter;                      //@synthesize videoDegradedTotalCounter=_videoDegradedTotalCounter - In the implementation block
@property (assign) double videoDegradedTotalTime;                           //@synthesize videoDegradedTotalTime=_videoDegradedTotalTime - In the implementation block
@property (assign) unsigned long long totalCellRxDataBytes;                 //@synthesize totalCellRxDataBytes=_totalCellRxDataBytes - In the implementation block
@property (assign) unsigned long long totalCellDupRxDataBytes;              //@synthesize totalCellDupRxDataBytes=_totalCellDupRxDataBytes - In the implementation block
-(void)dealloc;
-(BOOL)isVideoDegraded;
-(id)segmentReport;
-(unsigned long long)totalCellDupRxDataBytes;
-(void)setTotalCellDupRxDataBytes:(unsigned long long)arg1 ;
-(unsigned long long)totalCellRxDataBytes;
-(void)setTotalCellRxDataBytes:(unsigned long long)arg1 ;
-(void)processVideoDegraded:(BOOL)arg1 ;
-(double)videoDegradedTotalTime;
-(void)setVideoDegradedTotalTime:(double)arg1 ;
-(double)videoDegradedStartTime;
-(void)setVideoDegradedStartTime:(double)arg1 ;
-(void)setIsVideoDegraded:(BOOL)arg1 ;
-(unsigned)videoDegradedTotalCounter;
-(void)setVideoDegradedTotalCounter:(unsigned)arg1 ;
-(id)initWithSegmentName:(id)arg1 previousSegmentName:(id)arg2 delegate:(id)arg3 ;
-(void)addCellByteCountStats:(id)arg1 ;
@end

