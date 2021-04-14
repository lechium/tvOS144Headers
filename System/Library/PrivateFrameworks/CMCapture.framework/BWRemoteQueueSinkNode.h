/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWSinkNode.h>

@protocol BWRemoteQueueSinkNodeDelegate;
@class NSDictionary;

@interface BWRemoteQueueSinkNode : BWSinkNode {

	BOOL _mediaTypeIsVideo;
	BOOL _mediaTypeIsPointCloud;
	localQueueOpaqueRef _localQueue;
	unsigned _numberOfMediaBuffersLocallyEnqueued;
	unsigned _numberOfMediaBuffersLocallyDequeued;
	id<BWRemoteQueueSinkNodeDelegate> _delegate;
	int _clientVideoRetainedBufferCount;
	BOOL _discardsLateSampleBuffers;
	BOOL _attachPanoramaMetadata;
	BOOL _sentDiagnosticMetadataForPanorama;
	BOOL _disableFlatDictionaryVDOMetadata;
	OpaqueFigFlatDictionaryKeySpecRef _makerNoteKeySpec;
	NSDictionary* _videoColorInfoOverride;
	BOOL _pixelBufferAttachmentModificationAllowed;
	BOOL _cameraSupportsFlash;
	BOOL _removeCameraIntrinsicMatrixAttachment;
	opaqueCMFormatDescriptionRef _cachedFormatDescription;
	SCD_Struct_BW7 _lastPTS;
	BOOL _panoramaRequiresLTMLocking;

}

@property (assign,nonatomic) id<BWRemoteQueueSinkNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)initialize;
-(void)dealloc;
-(id<BWRemoteQueueSinkNodeDelegate>)delegate;
-(void)setDelegate:(id<BWRemoteQueueSinkNodeDelegate>)arg1 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(id)initWithMediaType:(unsigned)arg1 clientAuditToken:(SCD_Struct_Fi79)arg2 sinkID:(id)arg3 ;
-(void)setDiscardsLateSampleBuffers:(BOOL)arg1 ;
-(void)setClientVideoRetainedBufferCount:(int)arg1 ;
-(void)setCameraSupportsFlash:(BOOL)arg1 ;
-(BOOL)cameraSupportsFlash;
-(void)registerSurfacesFromSourcePool:(id)arg1 ;
-(void)setPixelBufferAttachmentModificationAllowed:(BOOL)arg1 ;
-(id)videoColorInfoOverride;
-(int)_finishRenderingSampleBufferUsingTheLocalQueue:(opaqueCMSampleBufferRef)arg1 ;
-(int)clientVideoRetainedBufferCount;
-(BOOL)discardsLateSampleBuffers;
-(void)setAttachPanoramaMetadata:(BOOL)arg1 ;
-(BOOL)attachPanoramaMetadata;
-(void)setPanoramaRequiresLTMLocking:(BOOL)arg1 ;
-(BOOL)panoramaRequiresLTMLocking;
-(void)setVideoColorInfoOverride:(id)arg1 ;
-(BOOL)pixelBufferAttachmentModificationAllowed;
-(void)setRemoveCameraIntrinsicMatrixAttachment:(BOOL)arg1 ;
-(BOOL)removeCameraIntrinsicMatrixAttachment;
-(BOOL)_includeDiagnosticMetadataIfDevicePropertiesLockedForPanorama:(opaqueCMSampleBufferRef)arg1 panoramaRequiresLTMLocking:(BOOL)arg2 ;
@end

