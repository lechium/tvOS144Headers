/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureOutput.h>
#import <AVFCapture/AVCaptureDataOutputDelegateOverride.h>

@class AVCaptureAudioDataOutputInternal, NSDictionary, NSString;

@interface AVCaptureAudioDataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride> {

	AVCaptureAudioDataOutputInternal* _internal;

}

@property (nonatomic,readonly) id<AVCaptureAudioDataOutputSampleBufferDelegate> sampleBufferDelegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> sampleBufferCallbackQueue; 
@property (nonatomic,copy) NSDictionary * audioSettings; 
@property (nonatomic,readonly) id delegateOverride; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateOverrideCallbackQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)new;
-(id)init;
-(void)dealloc;
-(NSDictionary *)audioSettings;
-(void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setAudioSettings:(NSDictionary *)arg1 ;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)connectionMediaTypes;
-(BOOL)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(void)_updateLocalQueue:(localQueueOpaqueRef)arg1 ;
-(void)_handleLocalQueueMessage:(FigLocalQueueMessage*)arg1 ;
-(id)delegateOverride;
-(NSObject*<OS_dispatch_queue>)delegateOverrideCallbackQueue;
-(void)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2 ;
-(id)supportedAssetWriterOutputFileTypes;
-(id<AVCaptureAudioDataOutputSampleBufferDelegate>)sampleBufferDelegate;
-(NSObject*<OS_dispatch_queue>)sampleBufferCallbackQueue;
-(void)_handleConfigurationLiveEventForID:(long long)arg1 updatedFormatDescription:(opaqueCMFormatDescriptionRef)arg2 ;
-(void)_handleSampleBufferEventForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)recommendedAudioSettingsForAssetWriterWithOutputFileType:(id)arg1 ;
@end

