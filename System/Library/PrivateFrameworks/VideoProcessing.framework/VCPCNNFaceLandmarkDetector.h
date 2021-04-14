/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSMutableArray;

@interface VCPCNNFaceLandmarkDetector : NSObject {

	NSMutableArray* _landmarks;

}
+(id)detector;
-(id)landmarks;
-(int)computeLandmarks:(float*)arg1 ;
-(int)analyzeFrame:(CVBufferRef)arg1 withFaceBounds:(CGRect)arg2 ;
-(float*)getInputBuffer;
@end

