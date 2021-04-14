/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPCNNHandKeypointsDetector.h>

@class VCPCNNModelEspresso;

@interface VCPCNNHandKeypointsDetectorEspresso : VCPCNNHandKeypointsDetector {

	float* _inputData;
	BOOL _forceCPU;
	VCPCNNModelEspresso* _modelEspresso;

}
-(void)dealloc;
-(id)init:(BOOL)arg1 sharedModel:(BOOL)arg2 modelName:(id)arg3 ;
-(float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4 offset:(float*)arg5 ;
-(int)generateHandKeypoints:(CGPoint*)arg1 keypointConfidence:(float*)arg2 offset:(float)arg3 ;
@end
