/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFAudio/AVFAudio-Structs.h>
@class NSString, NSUUID;

@interface AVVCRecordDeviceInfo : NSObject {

	BOOL _isRemoteDevice;
	BOOL _isUpsamplingSourceAudio;
	unsigned _remoteDeviceCategory;
	NSString* _recordRoute;
	NSString* _remoteProductIdentifier;
	NSUUID* _remoteDeviceUID;

}

@property (nonatomic,readonly) NSString * recordRoute;                          //@synthesize recordRoute=_recordRoute - In the implementation block
@property (readonly) BOOL isRemoteDevice;                                       //@synthesize isRemoteDevice=_isRemoteDevice - In the implementation block
@property (nonatomic,readonly) NSString * remoteProductIdentifier;              //@synthesize remoteProductIdentifier=_remoteProductIdentifier - In the implementation block
@property (nonatomic,readonly) NSUUID * remoteDeviceUID;                        //@synthesize remoteDeviceUID=_remoteDeviceUID - In the implementation block
@property (nonatomic,readonly) unsigned remoteDeviceCategory;                   //@synthesize remoteDeviceCategory=_remoteDeviceCategory - In the implementation block
@property (nonatomic,readonly) BOOL isUpsamplingSourceAudio;                    //@synthesize isUpsamplingSourceAudio=_isUpsamplingSourceAudio - In the implementation block
-(void)dealloc;
-(id)initWithRecordingEngine:(shared_ptr<AVVCRecordingEngine>*)arg1 ;
-(NSString *)recordRoute;
-(BOOL)isRemoteDevice;
-(NSString *)remoteProductIdentifier;
-(NSUUID *)remoteDeviceUID;
-(unsigned)remoteDeviceCategory;
-(BOOL)isUpsamplingSourceAudio;
@end
