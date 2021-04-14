/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureOutput.h>

@class AVCaptureVideoThumbnailOutputInternal, NSArray;

@interface AVCaptureVideoThumbnailOutput : AVCaptureOutput {

	AVCaptureVideoThumbnailOutputInternal* _internal;

}

@property (assign,nonatomic) id<AVCaptureVideoThumbnailContentsDelegate> thumbnailContentsDelegate; 
@property (nonatomic,copy) NSArray * filters; 
@property (assign,nonatomic) CGSize thumbnailSize; 
+(void)initialize;
+(CGRect)contentsRectForFilterAtIndex:(unsigned long long)arg1 thumbnailSize:(CGSize)arg2 filterCount:(unsigned long long)arg3 ;
-(id)init;
-(void)dealloc;
-(NSArray *)filters;
-(void)setFilters:(NSArray *)arg1 ;
-(CGSize)thumbnailSize;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)_signalInvalidationOfPropagatedContentsIfNecessary;
-(void)safelyHandleServerConnectionDeathForFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)setThumbnailContentsDelegate:(id<AVCaptureVideoThumbnailContentsDelegate>)arg1 ;
-(id<AVCaptureVideoThumbnailContentsDelegate>)thumbnailContentsDelegate;
-(id)connectionMediaTypes;
-(BOOL)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
@end

