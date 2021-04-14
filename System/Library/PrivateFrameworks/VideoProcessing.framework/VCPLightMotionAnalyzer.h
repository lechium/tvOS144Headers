/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoAnalyzer.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface VCPLightMotionAnalyzer : VCPVideoAnalyzer {

	EncodeAnalysis* _encodeAnalysis;
	NSObject*<OS_dispatch_queue> _queue;
	Frame* _frame;
	EncodeStatsHW* _stats;
	float _cameraMotionParams[6][5];
	float _cameraMotionConfidences[6][5];
	unsigned long long _flags;
	BOOL _turbo;
	float _actionScore;

}

@property (readonly) float actionScore;              //@synthesize actionScore=_actionScore - In the implementation block
+(float)autoLiveMotionScore:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(float)actionScore;
-(int)analyzeFrame:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 flags:(unsigned long long*)arg4 ;
-(int)cameraMotionDetection:(MotionResult*)arg1 ;
-(int)generateThresholds:(float)arg1 withConfidences:(float)arg2 ;
-(id)initWithQueue:(id)arg1 turbo:(BOOL)arg2 ;
-(int)prewarmWithWidth:(int)arg1 height:(int)arg2 ;
-(void)analyzeFrame:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 completion:(/*^block*/id)arg4 ;
@end

