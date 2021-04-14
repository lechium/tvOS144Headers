/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoAnalyzer.h>

@class VCPImageMotionFlowAnalyzer;

@interface VCPMotionFlowSubtleMotionAnalyzer : VCPVideoAnalyzer {

	float* _flow;
	float* _block;
	BOOL _scale;
	Scaler* _scaler;
	VCPImageMotionFlowAnalyzer* _motionFlowAnalyzer;
	vector<__CVBuffer *, std::__1::allocator<__CVBuffer *> >* _frameArray;
	OpaqueVTPixelTransferSessionRef _transferSession;
	int _frameWidth;
	int _frameHeight;
	int _downScaleWidth;
	int _downScaleHeight;
	int _flowWidth;
	int _flowHeight;
	int _blockSize;
	int _frameNum;
	int _sceneType;
	BOOL _initialized;
	float _subtleMotionScore;

}

@property (readonly) float subtleMotionScore;              //@synthesize subtleMotionScore=_subtleMotionScore - In the implementation block
-(id)init;
-(void)dealloc;
-(int)analyzePixelBuffer:(CVBufferRef)arg1 withFrame:(Frame*)arg2 withTimestamp:(SCD_Struct_VC6)arg3 andDuration:(SCD_Struct_VC6)arg4 hasSubtleScene:(int)arg5 ;
-(int)createPixelBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(int)arg3 pixelBuffer:(_CVBuffer*)arg4 ;
-(int)convertPixelBuffer:(CVBufferRef)arg1 toPixelBuffer:(_CVBuffer*)arg2 withPixelFormat:(int)arg3 ;
-(int)prepareAnalyzerWithCVPixelBuffer:(CVBufferRef)arg1 ;
-(int)preProcessing:(CVBufferRef)arg1 ;
-(int)generateMotionFlow;
-(int)generateSubleMotionScore:(Frame*)arg1 ;
-(float)subtleMotionScore;
@end

