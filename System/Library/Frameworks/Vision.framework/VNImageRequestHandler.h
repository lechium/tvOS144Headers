/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Vision/Vision-Structs.h>
@class VNSession, VNImageBuffer, VNRequestPerformer, VNObservationsCache;

@interface VNImageRequestHandler : NSObject {

	VNSession* _session;
	VNImageBuffer* _imageBuffer;
	VNRequestPerformer* _requestPerformer;
	VNObservationsCache* _observationsCache;

}
+(void)requestForcedCleanup;
+(void)forcedCleanup;
+(void)requestForcedCleanupWithOptions:(id)arg1 ;
+(void)requestForcedCleanupWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)forcedCleanupWithOptions:(id)arg1 ;
-(id)initWithCIImage:(id)arg1 options:(id)arg2 ;
-(BOOL)performRequests:(id)arg1 error:(id*)arg2 ;
-(id)initWithCGImage:(CGImageRef)arg1 options:(id)arg2 ;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 options:(id)arg2 ;
-(id)initWithData:(id)arg1 options:(id)arg2 ;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(void)cancelAllRequests;
-(BOOL)prepareForPerformingRequestsOfClass:(id)arg1 error:(id*)arg2 ;
-(BOOL)prepareForPerformingRequests:(id)arg1 error:(id*)arg2 ;
-(BOOL)performRequests:(id)arg1 gatheredForensics:(id*)arg2 error:(id*)arg3 ;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 orientation:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithCGImage:(CGImageRef)arg1 orientation:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithCIImage:(id)arg1 orientation:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithData:(id)arg1 orientation:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithURL:(id)arg1 orientation:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithCMSampleBuffer:(opaqueCMSampleBufferRef)arg1 options:(id)arg2 ;
-(id)initWithCMSampleBuffer:(opaqueCMSampleBufferRef)arg1 orientation:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithSession:(id)arg1 imageBuffer:(id)arg2 ;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 options:(id)arg2 session:(id)arg3 ;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 orientation:(unsigned)arg2 options:(id)arg3 session:(id)arg4 ;
-(id)initWithCGImage:(CGImageRef)arg1 options:(id)arg2 session:(id)arg3 ;
-(id)initWithCGImage:(CGImageRef)arg1 orientation:(unsigned)arg2 options:(id)arg3 session:(id)arg4 ;
-(id)initWithCIImage:(id)arg1 options:(id)arg2 session:(id)arg3 ;
-(id)initWithCIImage:(id)arg1 orientation:(unsigned)arg2 options:(id)arg3 session:(id)arg4 ;
-(id)initWithURL:(id)arg1 options:(id)arg2 session:(id)arg3 ;
-(id)initWithURL:(id)arg1 orientation:(unsigned)arg2 options:(id)arg3 session:(id)arg4 ;
-(id)initWithData:(id)arg1 options:(id)arg2 session:(id)arg3 ;
-(id)initWithData:(id)arg1 orientation:(unsigned)arg2 options:(id)arg3 session:(id)arg4 ;
-(id)initWithCMSampleBuffer:(opaqueCMSampleBufferRef)arg1 options:(id)arg2 session:(id)arg3 ;
-(id)initWithCMSampleBuffer:(opaqueCMSampleBufferRef)arg1 orientation:(unsigned)arg2 options:(id)arg3 session:(id)arg4 ;
@end

