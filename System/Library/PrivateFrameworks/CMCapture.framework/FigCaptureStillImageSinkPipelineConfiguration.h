/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/FigCaptureBaseStillImageSinkPipelineConfiguration.h>

@class NSNumber, NSDictionary;

@interface FigCaptureStillImageSinkPipelineConfiguration : FigCaptureBaseStillImageSinkPipelineConfiguration {

	NSNumber* _clientPID;
	NSDictionary* _stillImageColorInfoForFramesOriginatingFromVideoStream;
	BOOL _stillImageISPChromaNoiseReductionEnabled;
	BOOL _stereoFusionSupported;
	BOOL _isIrisSupported;
	BOOL _hdrSupported;
	BOOL _gnrHDRSupported;

}

@property (nonatomic,retain) NSNumber * clientPID;                                                               //@synthesize clientPID=_clientPID - In the implementation block
@property (nonatomic,retain) NSDictionary * stillImageColorInfoForFramesOriginatingFromVideoStream;              //@synthesize stillImageColorInfoForFramesOriginatingFromVideoStream=_stillImageColorInfoForFramesOriginatingFromVideoStream - In the implementation block
@property (assign,nonatomic) BOOL stillImageISPChromaNoiseReductionEnabled;                                      //@synthesize stillImageISPChromaNoiseReductionEnabled=_stillImageISPChromaNoiseReductionEnabled - In the implementation block
@property (assign,nonatomic) BOOL stereoFusionSupported;                                                         //@synthesize stereoFusionSupported=_stereoFusionSupported - In the implementation block
@property (assign,nonatomic) BOOL isIrisSupported;                                                               //@synthesize isIrisSupported=_isIrisSupported - In the implementation block
@property (assign,nonatomic) BOOL hdrSupported;                                                                  //@synthesize hdrSupported=_hdrSupported - In the implementation block
@property (assign,nonatomic) BOOL gnrHDRSupported;                                                               //@synthesize gnrHDRSupported=_gnrHDRSupported - In the implementation block
-(void)dealloc;
-(BOOL)isIrisSupported;
-(void)setClientPID:(NSNumber *)arg1 ;
-(void)setStillImageISPChromaNoiseReductionEnabled:(BOOL)arg1 ;
-(void)setStereoFusionSupported:(BOOL)arg1 ;
-(void)setIsIrisSupported:(BOOL)arg1 ;
-(void)setHdrSupported:(BOOL)arg1 ;
-(void)setGnrHDRSupported:(BOOL)arg1 ;
-(void)setStillImageColorInfoForFramesOriginatingFromVideoStream:(NSDictionary *)arg1 ;
-(NSNumber *)clientPID;
-(NSDictionary *)stillImageColorInfoForFramesOriginatingFromVideoStream;
-(BOOL)stillImageISPChromaNoiseReductionEnabled;
-(BOOL)stereoFusionSupported;
-(BOOL)hdrSupported;
-(BOOL)gnrHDRSupported;
@end

