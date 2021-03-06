/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@class FigDepthDataCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration, BWPipelineStage, NSDictionary, FigCaptureSourceVideoFormat;

@interface FigCaptureDepthDataPipelineConfiguration : NSObject {

	FigDepthDataCaptureConnectionConfiguration* _depthDataConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _videoDataConnectionConfiguration;
	BOOL _depthConvertedUpstream;
	BOOL _hardwareDepthFilteringEnabled;
	BOOL _videoAndConvertedDepthDataOutputEnabled;
	BWPipelineStage* _pipelineStage;
	SCD_Struct_Fi79 _clientAuditToken;
	int _depthDataBaseRotationDegrees;
	NSDictionary* _cameraInfoByPortType;
	FigCaptureSourceVideoFormat* _requiredFormat;

}

@property (nonatomic,retain) FigDepthDataCaptureConnectionConfiguration * depthDataConnectionConfiguration;              //@synthesize depthDataConnectionConfiguration=_depthDataConnectionConfiguration - In the implementation block
@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * videoDataConnectionConfiguration;                  //@synthesize videoDataConnectionConfiguration=_videoDataConnectionConfiguration - In the implementation block
@property (assign,nonatomic) BOOL depthConvertedUpstream;                                                                //@synthesize depthConvertedUpstream=_depthConvertedUpstream - In the implementation block
@property (assign,nonatomic) BOOL hardwareDepthFilteringEnabled;                                                         //@synthesize hardwareDepthFilteringEnabled=_hardwareDepthFilteringEnabled - In the implementation block
@property (assign,nonatomic) BOOL videoAndConvertedDepthDataOutputEnabled;                                               //@synthesize videoAndConvertedDepthDataOutputEnabled=_videoAndConvertedDepthDataOutputEnabled - In the implementation block
@property (assign,nonatomic) int depthDataBaseRotationDegrees;                                                           //@synthesize depthDataBaseRotationDegrees=_depthDataBaseRotationDegrees - In the implementation block
@property (nonatomic,retain) BWPipelineStage * pipelineStage;                                                            //@synthesize pipelineStage=_pipelineStage - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi79 clientAuditToken;                                                           //@synthesize clientAuditToken=_clientAuditToken - In the implementation block
@property (nonatomic,retain) NSDictionary * cameraInfoByPortType;                                                        //@synthesize cameraInfoByPortType=_cameraInfoByPortType - In the implementation block
@property (nonatomic,retain) FigCaptureSourceVideoFormat * requiredFormat;                                               //@synthesize requiredFormat=_requiredFormat - In the implementation block
-(void)dealloc;
-(SCD_Struct_Fi79)clientAuditToken;
-(void)setRequiredFormat:(FigCaptureSourceVideoFormat *)arg1 ;
-(FigCaptureSourceVideoFormat *)requiredFormat;
-(FigDepthDataCaptureConnectionConfiguration *)depthDataConnectionConfiguration;
-(FigVideoCaptureConnectionConfiguration *)videoDataConnectionConfiguration;
-(NSDictionary *)cameraInfoByPortType;
-(void)setCameraInfoByPortType:(NSDictionary *)arg1 ;
-(void)setDepthDataConnectionConfiguration:(FigDepthDataCaptureConnectionConfiguration *)arg1 ;
-(BOOL)hardwareDepthFilteringEnabled;
-(BWPipelineStage *)pipelineStage;
-(void)setClientAuditToken:(SCD_Struct_Fi79)arg1 ;
-(void)setVideoDataConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(void)setDepthConvertedUpstream:(BOOL)arg1 ;
-(void)setVideoAndConvertedDepthDataOutputEnabled:(BOOL)arg1 ;
-(void)setDepthDataBaseRotationDegrees:(int)arg1 ;
-(void)setPipelineStage:(BWPipelineStage *)arg1 ;
-(void)setHardwareDepthFilteringEnabled:(BOOL)arg1 ;
-(BOOL)depthConvertedUpstream;
-(BOOL)videoAndConvertedDepthDataOutputEnabled;
-(int)depthDataBaseRotationDegrees;
@end

