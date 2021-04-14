/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDCameraRecordingGeneralConfiguration, HMDCameraRecordingVideoCodecConfiguration, HMDCameraRecordingAudioCodecConfiguration;

@interface HMDCameraRecordingSelectedConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	HMDCameraRecordingGeneralConfiguration* _generalConfiguration;
	HMDCameraRecordingVideoCodecConfiguration* _videoConfiguration;
	HMDCameraRecordingAudioCodecConfiguration* _audioConfiguration;

}

@property (nonatomic,copy,readonly) HMDCameraRecordingGeneralConfiguration * generalConfiguration;               //@synthesize generalConfiguration=_generalConfiguration - In the implementation block
@property (nonatomic,copy,readonly) HMDCameraRecordingVideoCodecConfiguration * videoConfiguration;              //@synthesize videoConfiguration=_videoConfiguration - In the implementation block
@property (nonatomic,copy,readonly) HMDCameraRecordingAudioCodecConfiguration * audioConfiguration;              //@synthesize audioConfiguration=_audioConfiguration - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(HMDCameraRecordingAudioCodecConfiguration *)audioConfiguration;
-(BOOL)_parseFromTLVData;
-(id)tlvData;
-(HMDCameraRecordingGeneralConfiguration *)generalConfiguration;
-(HMDCameraRecordingVideoCodecConfiguration *)videoConfiguration;
-(id)initWithGeneralConfiguration:(id)arg1 videoCodecConfiguration:(id)arg2 audioCodecConfiguration:(id)arg3 ;
@end

