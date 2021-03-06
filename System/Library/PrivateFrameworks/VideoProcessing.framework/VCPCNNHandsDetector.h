/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPCNNHandsDetector : NSObject {

	int cnnInputWidth;
	int cnnInputHeight;

}
+(id)detector:(int)arg1 forceCPU:(BOOL)arg2 sharedModel:(BOOL)arg3 inputConfig:(id)arg4 ;
-(float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4 ;
-(int)copyImage:(CVBufferRef)arg1 toData:(float*)arg2 ;
-(int)handsDetectionGFT:(CVBufferRef)arg1 handsRegions:(id)arg2 cancel:(/*^block*/id)arg3 ;
-(int)createInput:(float*)arg1 withBuffer:(CVBufferRef)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4 ;
-(int)updateModelWithResConfig:(id)arg1 ;
-(int)handsDetection:(CVBufferRef)arg1 handsRegions:(id)arg2 cancel:(/*^block*/id)arg3 ;
-(int)retrieveBoxes:(float*)arg1 outHeight:(int)arg2 outWidth:(int)arg3 boxes:(id)arg4 anchorBox:(float)arg5 ;
-(void)nonMaxSuppression:(id)arg1 ;
-(int)drawLine:(char*)arg1 width:(int)arg2 height:(int)arg3 stride:(int)arg4 point0:(CGPoint)arg5 point1:(CGPoint)arg6 drawPoint:(int)arg7 ;
-(int)generateHandsBoxes:(id)arg1 ;
-(int)generateHandsRegions:(const vector<espresso_buffer_t, std::__1::allocator<espresso_buffer_t> >*)arg1 boxes:(id)arg2 maxNumRegions:(int)arg3 ;
-(int)drawRectangle:(char*)arg1 width:(int)arg2 height:(int)arg3 stride:(int)arg4 keypoints:(CGPoint*)arg5 ;
@end

