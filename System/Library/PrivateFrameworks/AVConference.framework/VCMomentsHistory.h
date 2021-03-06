/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCMomentsHistoryBufferDelegate.h>

@protocol VCMovieWriterProtocol, OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString, NSMutableArray, VCMomentsHistoryBuffer, VideoAttributes;

@interface VCMomentsHistory : NSObject <VCMomentsHistoryBufferDelegate> {

	NSMutableDictionary* _writers;
	NSObject*<VCMovieWriterProtocol> _writer;
	NSString* _masterTransactionID;
	NSMutableArray* _pendingRequests;
	NSObject*<OS_dispatch_queue> _momentsQueue;
	VCMomentsHistoryBuffer* _frameBuffer;
	VCMomentsHistoryBuffer* _localAudioBuffer;
	VCMomentsHistoryBuffer* _remoteAudioBuffer;
	NSMutableDictionary* _completionHandlers;
	NSMutableDictionary* _stillImageURLs;
	VideoAttributes* _remoteScreenAttributes;
	CVPixelBufferPoolRef _bufferPool;
	CGSize _bufferPoolResolution;
	CVPixelBufferPoolRef _copyPool;
	OpaqueVTPixelTransferSessionRef _transferSession;
	OpaqueVTPixelTransferSessionRef _copyTransferSession;
	int _captureHeight;
	int _captureWidth;
	BOOL _resize;
	BOOL _isFirstFrame;
	int _imageType;
	int videoPayload;
	CFAllocatorRef _audioSampleBufferAllocator;
	BOOL _enableLocalVideoRecording;
	int _videoCodec;

}

@property (nonatomic,retain) VideoAttributes * remoteScreenAttributes;              //@synthesize remoteScreenAttributes=_remoteScreenAttributes - In the implementation block
@property (assign,nonatomic) int imageType;                                         //@synthesize imageType=_imageType - In the implementation block
@property (assign,nonatomic) int videoCodec;                                        //@synthesize videoCodec=_videoCodec - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(int)imageType;
-(void)setImageType:(int)arg1 ;
-(void)setFrameRate:(float)arg1 ;
-(void)cleanupTransferSession;
-(void)updateAudioBuffer:(id)arg1 WithSample:(opaqueCMSampleBufferRef)arg2 timestamp:(unsigned)arg3 ;
-(void)updateCaptureSizesWithFirstFrame:(opaqueCMSampleBufferRef)arg1 ;
-(CVBufferRef)copyBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)updateVideoBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_VC63)arg2 cameraStatusBits:(unsigned char)arg3 timestamp:(unsigned)arg4 ;
-(void)setRemoteScreenAttributes:(VideoAttributes *)arg1 ;
-(void)updateResizeFlag;
-(VideoAttributes *)remoteScreenAttributes;
-(BOOL)writeToFileWithTimestamp:(unsigned)arg1 transactionID:(id)arg2 URL:(id*)arg3 imageType:(int)arg4 ;
-(id)getFilePathWithTransactionID:(id)arg1 type:(unsigned char)arg2 ;
-(void)registerDirectoryWithFilePath:(id)arg1 ;
-(void)setCompeletionHandler:(/*^block*/id)arg1 forTransactionID:(id)arg2 ;
-(SCD_Struct_VC63)setupStillImageWithTimestamp:(unsigned)arg1 transactionID:(id)arg2 visibleRect:(CGRect*)arg3 cameraStatusBit:(char*)arg4 imageType:(int)arg5 ;
-(void)setupWriterWithTransactionID:(id)arg1 filePath:(id)arg2 stillImageTime:(SCD_Struct_VC63)arg3 visibleRect:(CGRect)arg4 cameraStatusBit:(unsigned char)arg5 ;
-(unsigned char)_mediaTypeForBuffer:(id)arg1 ;
-(id)_getActiveWriters;
-(void)handlePendingRequestsWithSourceURL:(id)arg1 error:(id)arg2 ;
-(void)appendSampleWithWriter:(id)arg1 buffer:(id)arg2 sample:(opaqueCMSampleBufferRef)arg3 ;
-(void)flushHistoryBuffers;
-(void)setupResizingSessionsWithVisibleRect:(CGRect)arg1 cameraStatusBit:(unsigned char)arg2 ;
-(BOOL)writeToLivePhotoToFileWithFrame:(CVBufferRef)arg1 transactionID:(id)arg2 URL:(id*)arg3 imageType:(int)arg4 cameraStatusBits:(unsigned char)arg5 ;
-(CGSize)calculateVisibleAreaWithVisibleRect:(CGRect)arg1 cameraStatusBit:(unsigned char)arg2 ;
-(int)rewriteMovieMetadataWithURL:(id)arg1 transactionID:(id)arg2 ;
-(void)handleSinglePendingRequestWithTransactionID:(id)arg1 sourceURL:(id)arg2 ;
-(void)handlePendingRequestWithError:(id)arg1 ;
-(void)handlePendingRequestSuccessWithSourceURL:(id)arg1 ;
-(void)historyBuffer:(id)arg1 didDequeueSample:(opaqueCMSampleBufferRef)arg2 timestamp:(unsigned)arg3 ;
-(void)addLocalAudioSample:(opaqueVCAudioBufferListRef)arg1 timestamp:(unsigned)arg2 ;
-(void)addRemoteAudioSample:(opaqueVCAudioBufferListRef)arg1 timestamp:(unsigned)arg2 ;
-(void)addLocalVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 cameraStatusBits:(unsigned char)arg2 timestamp:(unsigned)arg3 ;
-(void)updateRemoteScreenAttributes:(id)arg1 ;
-(void)getPhotoWithTransactionID:(id)arg1 timestamp:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getLivePhotoWithTransactionID:(id)arg1 timestamp:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)startRecording:(unsigned char)arg1 transactionID:(id)arg2 timestamp:(unsigned)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)endRecording:(id)arg1 timestamp:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cleanupActiveRequests;
-(void)cancelRequestWithTransactionID:(id)arg1 ;
-(void)setVideoCodec:(int)arg1 ;
-(int)videoCodec;
@end

