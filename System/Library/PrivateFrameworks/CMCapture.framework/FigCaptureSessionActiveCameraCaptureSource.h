/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@class BWFigVideoCaptureDevice, NSString;

@interface FigCaptureSessionActiveCameraCaptureSource : NSObject {

	OpaqueFigCaptureSourceRef _source;
	BWFigVideoCaptureDevice* _device;
	NSString* _nonLocalizedName;
	int _deviceType;

}

@property (nonatomic,readonly) OpaqueFigCaptureSourceRef source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) BWFigVideoCaptureDevice * device;              //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) NSString * nonLocalizedName;                   //@synthesize nonLocalizedName=_nonLocalizedName - In the implementation block
@property (nonatomic,readonly) int deviceType;                                //@synthesize deviceType=_deviceType - In the implementation block
-(void)dealloc;
-(OpaqueFigCaptureSourceRef)source;
-(BWFigVideoCaptureDevice *)device;
-(int)deviceType;
-(NSString *)nonLocalizedName;
-(id)initWithSource:(OpaqueFigCaptureSourceRef)arg1 device:(id)arg2 ;
@end
