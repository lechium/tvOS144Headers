/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FigVisionDataCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration;

@interface FigCaptureSessionParsedVisionDataSinkConfiguration : NSObject {

	FigVisionDataCaptureConnectionConfiguration* _visionDataConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _videoDataConnectionConfiguration;

}

@property (nonatomic,readonly) FigVisionDataCaptureConnectionConfiguration * visionDataConnectionConfiguration;              //@synthesize visionDataConnectionConfiguration=_visionDataConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * videoDataConnectionConfiguration;                    //@synthesize videoDataConnectionConfiguration=_videoDataConnectionConfiguration - In the implementation block
-(void)dealloc;
-(FigVideoCaptureConnectionConfiguration *)videoDataConnectionConfiguration;
-(id)initWithVisionDataConnectionConfiguration:(id)arg1 videoDataConnectionConfiguration:(id)arg2 ;
-(FigVisionDataCaptureConnectionConfiguration *)visionDataConnectionConfiguration;
@end

