/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoAnalyzer.h>

@class NSMutableArray;

@interface VCPHomeKitMotionAnalyzer : VCPVideoAnalyzer {

	NSMutableArray* _regions;
	float* _diff;
	float* _ptrFirst;
	float* _ptrLast;
	Scaler* _scaler;
	vector<__CVBuffer *, std::__1::allocator<__CVBuffer *> >* _frameArray;
	int _frameWidth;
	int _frameHeight;
	int _width;
	int _height;
	int _stride;
	int _blockSize;
	int _widthBlockNum;
	int _heightBlockNum;
	float _actionScore;

}

@property (readonly) float actionScore;              //@synthesize actionScore=_actionScore - In the implementation block
-(id)init;
-(void)dealloc;
-(float)actionScore;
-(int)analyzeFrame:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 flags:(unsigned long long*)arg4 ;
-(id)regionsOfInterest;
-(int)setPixelBuffer:(CVBufferRef)arg1 ;
-(int)calculateFrameDifference:(CVBufferRef)arg1 ;
-(int)computeRegionsofInterest;
@end

