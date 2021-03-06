/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VCPCNNPetsDetector.h>

@class VCPCNNModelEspresso, NSString;

@interface VCPCNNPetsDetectorEspresso : VCPCNNPetsDetector {

	int _maxNumRegions;
	VCPCNNModelEspresso* _modelEspresso;
	float* _inputData;
	NSString* _resConfig;
	int _srcWidth;
	int _srcHeight;

}
+(id)sharedModel:(id)arg1 ;
-(void)dealloc;
-(float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4 ;
-(id)initWithMaxNumRegions:(int)arg1 ;
-(int)createModel:(int)arg1 srcWidth:(int)arg2 ;
-(int)generatePetsBoxes:(id)arg1 faceBoxes:(id)arg2 cancel:(/*^block*/id)arg3 ;
@end

