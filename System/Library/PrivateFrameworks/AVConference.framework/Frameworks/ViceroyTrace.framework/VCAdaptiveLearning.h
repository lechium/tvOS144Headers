/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface VCAdaptiveLearning : NSObject {

	NSMutableDictionary* _callHistory;
	BOOL _dirty;
	int _adaptiveLearningState;
	int _shortTermHistoryLength;
	int _longTermHistoryLength;
	double _shortTermAdjustmentFactor;
	double _longTermAdjustmentFactor;
	double _shortTermValueWeight;
	double _longTermValueWeight;
	NSObject*<OS_dispatch_queue> _stateQueue;

}

@property (readonly) int adaptiveLearningState;              //@synthesize adaptiveLearningState=_adaptiveLearningState - In the implementation block
-(void)dealloc;
-(id)initWithParameters:(id)arg1 ;
-(int)previousISBRForSegment:(id)arg1 ;
-(int)adaptiveLearningState;
-(void)updateSegment:(id)arg1 TBR:(int)arg2 ISBTR:(int)arg3 SATXBR:(int)arg4 SARBR:(int)arg5 BWE:(int)arg6 ;
-(int)shortTermAverageTBRForSegment:(id)arg1 ;
-(int)longTermAverageTBRForSegment:(id)arg1 ;
-(int)longTermAverageISBRForSegment:(id)arg1 ;
-(int)shortTermAverageISBRForSegment:(id)arg1 ;
-(int)longTermAverageSATXBRForSegment:(id)arg1 ;
-(int)shortTermAverageSATXBRForSegment:(id)arg1 ;
-(int)longTermAverageSARBRForSegment:(id)arg1 ;
-(int)shortTermAverageSARBRForSegment:(id)arg1 ;
-(int)longTermAverageBWEForSegment:(id)arg1 ;
-(int)shortTermAverageBWEForSegment:(id)arg1 ;
-(void)saveCallSegmentHistory;
-(int)learntBitrateForSegment:(id)arg1 defaultValue:(int)arg2 ;
@end

