/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCVideoSink.h>
#import <libobjc.A.dylib/VCVideoCaptureClient.h>

@class NSString;

@interface VCVideoCaptureConverter : NSObject <VCVideoSink, VCVideoCaptureClient> {

	unsigned _destinationFramerate;
	unsigned _sourceFramerate;
	double _throttleRate;
	unsigned _sourceFrameCount;
	unsigned _lastDestinationFrameCount;
	BOOL _isThrottling;
	id _delegate;

}

@property (assign,nonatomic) unsigned sourceFramerate;                   //@synthesize sourceFramerate=_sourceFramerate - In the implementation block
@property (assign,nonatomic) unsigned destinationFramerate;              //@synthesize destinationFramerate=_destinationFramerate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)setSourceFramerate:(unsigned)arg1 ;
-(void)thermalLevelDidChange:(int)arg1 ;
-(id)clientCaptureRule;
-(BOOL)onVideoFrame:(opaqueCMSampleBufferRef)arg1 frameTime:(SCD_Struct_AV88)arg2 attribute:(SCD_Struct_Vi128)arg3 ;
-(void)avConferencePreviewError:(id)arg1 ;
-(void)cameraAvailabilityDidChange:(BOOL)arg1 ;
-(void)sourceFrameRateDidChange:(unsigned)arg1 ;
-(void)updateThrottleRate;
-(BOOL)processFrame:(opaqueCMSampleBufferRef)arg1 ;
-(void)setDestinationFramerate:(unsigned)arg1 ;
-(unsigned)sourceFramerate;
-(unsigned)destinationFramerate;
@end

