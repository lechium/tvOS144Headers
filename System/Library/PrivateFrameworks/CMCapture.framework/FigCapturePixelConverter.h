/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@class BWPixelBufferPool, BWVideoFormat;

@interface FigCapturePixelConverter : NSObject {

	OpaqueVTPixelTransferSessionRef _transferSession;
	BOOL _alwaysUseHardwareForConversion;
	BWPixelBufferPool* _pool;
	BWVideoFormat* _outputFormat;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	int _poolCapacity;
	BOOL _prefetchPool;

}

@property (nonatomic,readonly) BWVideoFormat * outputFormat;              //@synthesize outputFormat=_outputFormat - In the implementation block
+(void)initialize;
-(id)init;
-(void)dealloc;
-(BWVideoFormat *)outputFormat;
-(void)_purgeResources;
-(id)initWithPrefetchPool:(BOOL)arg1 ;
-(int)updateOutputPixelFormat:(unsigned)arg1 dimensions:(SCD_Struct_BW2)arg2 poolCapacity:(int)arg3 colorSpaceProperties:(int)arg4 alwaysUseHardwareForConversion:(BOOL)arg5 ;
-(int)convertSampleBuffer:(opaqueCMSampleBufferRef)arg1 cropRect:(CGRect)arg2 outputSampleBuffer:(opaqueCMSampleBuffer*)arg3 ;
-(int)convertPixelBuffer:(CVBufferRef)arg1 cropRect:(CGRect)arg2 allocateOutputFromBufferPool:(BOOL)arg3 outputPixelBuffer:(_CVBuffer*)arg4 ;
-(int)_buildBufferPool;
-(int)_buildTransferSession;
@end
