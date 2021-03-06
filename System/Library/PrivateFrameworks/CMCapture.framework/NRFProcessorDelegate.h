/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NRFProcessorDelegate <NSObject>
@optional
-(void)processor:(id)arg1 outputReadyWithFrameType:(int)arg2 outputPixelBuffer:(CVBufferRef)arg3 outputMetadata:(id)arg4 error:(int)arg5;
-(id)processorGetInferenceResults:(id)arg1;
-(void)processor:(id)arg1 didSelectFusionMode:(int)arg2;
-(void)processor:(id)arg1 didEnqueueProcessingForSurfaceID:(unsigned)arg2;
-(void)processor:(id)arg1 didCompleteProcessingForSurfaceID:(unsigned)arg2;
-(void)processor:(id)arg1 didSelectProgressiveFusionReferenceFrameIndex:(int)arg2;
-(void)didFinishProcessingWithCompletionStatus:(id)arg1;

@end

