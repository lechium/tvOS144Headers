/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/BWVideoFormatRequirements.h>

@interface BWInferenceVideoFormatRequirements : BWVideoFormatRequirements {

	BOOL _deviceOriented;
	long long _videoContentMode;
	BOOL _includesInvalidContent;
	BOOL _finalCropRectApplied;
	int _rotationDegrees;

}

@property (assign,nonatomic) BOOL deviceOriented;                      //@synthesize deviceOriented=_deviceOriented - In the implementation block
@property (assign,nonatomic) int rotationDegrees;                      //@synthesize rotationDegrees=_rotationDegrees - In the implementation block
@property (assign,nonatomic) long long videoContentMode;               //@synthesize videoContentMode=_videoContentMode - In the implementation block
@property (assign,nonatomic) BOOL includesInvalidContent;              //@synthesize includesInvalidContent=_includesInvalidContent - In the implementation block
@property (assign,nonatomic) BOOL finalCropRectApplied;                //@synthesize finalCropRectApplied=_finalCropRectApplied - In the implementation block
+(id)defaultEspressoFormatRequirementsWithWidth:(long long)arg1 height:(long long)arg2 ;
-(id)initWithFormat:(id)arg1 ;
-(BOOL)includesInvalidContent;
-(long long)videoContentMode;
-(void)setIncludesInvalidContent:(BOOL)arg1 ;
-(BOOL)deviceOriented;
-(void)setDeviceOriented:(BOOL)arg1 ;
-(void)setVideoContentMode:(long long)arg1 ;
-(BOOL)finalCropRectApplied;
-(void)setFinalCropRectApplied:(BOOL)arg1 ;
-(int)rotationDegrees;
-(void)setRotationDegrees:(int)arg1 ;
@end
