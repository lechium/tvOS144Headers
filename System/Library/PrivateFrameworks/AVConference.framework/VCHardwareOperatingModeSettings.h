/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface VCHardwareOperatingModeSettings : NSObject {

	unsigned _usageMode;
	int _avcOperatingMode;
	BOOL _supportVCPDecoderHEVC;
	BOOL _supportVCPEncoderHEVC;
	BOOL _vcpInitializedForHEVC;
	NSString* _featureListStringHEVC;
	NSString* _featureListStringH264;
	unsigned _tilesPerVideoFrame;

}

@property (nonatomic,readonly) unsigned usageMode;                            //@synthesize usageMode=_usageMode - In the implementation block
@property (nonatomic,readonly) BOOL supportVCPDecoderHEVC;                    //@synthesize supportVCPDecoderHEVC=_supportVCPDecoderHEVC - In the implementation block
@property (nonatomic,readonly) BOOL supportVCPEncoderHEVC;                    //@synthesize supportVCPEncoderHEVC=_supportVCPEncoderHEVC - In the implementation block
@property (nonatomic,readonly) BOOL vcpInitializedForHEVC;                    //@synthesize vcpInitializedForHEVC=_vcpInitializedForHEVC - In the implementation block
@property (nonatomic,readonly) NSString * featureListStringHEVC;              //@synthesize featureListStringHEVC=_featureListStringHEVC - In the implementation block
@property (nonatomic,readonly) NSString * featureListStringH264;              //@synthesize featureListStringH264=_featureListStringH264 - In the implementation block
@property (nonatomic,readonly) unsigned tilesPerVideoFrame;                   //@synthesize tilesPerVideoFrame=_tilesPerVideoFrame - In the implementation block
+(unsigned)encoderUsageTypeWithOperatingMode:(int)arg1 ;
-(void)dealloc;
-(id)initWithMode:(int)arg1 ;
-(BOOL)vcpSupportsHEVCEncoder;
-(unsigned)tilesPerVideoFrame;
-(void)featureListString;
-(BOOL)vcpSupportsHEVCDecoder;
-(unsigned)numTilesPerVideoFrameForHDRMode:(unsigned long long)arg1 ;
-(void)vcpCodecGetPropertiesForID:(int)arg1 block:(/*^block*/id)arg2 ;
-(unsigned)usageMode;
-(BOOL)supportVCPDecoderHEVC;
-(BOOL)supportVCPEncoderHEVC;
-(BOOL)vcpInitializedForHEVC;
-(NSString *)featureListStringHEVC;
-(NSString *)featureListStringH264;
@end

