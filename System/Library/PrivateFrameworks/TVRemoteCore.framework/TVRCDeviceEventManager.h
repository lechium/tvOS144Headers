/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TVRCDevice;

@interface TVRCDeviceEventManager : NSObject {

	TVRCDevice* _device;
	/*^block*/id _eventResponseHandler;

}

@property (nonatomic,retain) TVRCDevice * device;                //@synthesize device=_device - In the implementation block
@property (nonatomic,copy) id eventResponseHandler;              //@synthesize eventResponseHandler=_eventResponseHandler - In the implementation block
-(TVRCDevice *)device;
-(void)setDevice:(TVRCDevice *)arg1 ;
-(id)eventResponseHandler;
-(id)initWithDevice:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)sendEvent:(id)arg1 options:(id)arg2 ;
-(void)setEventResponseHandler:(id)arg1 ;
@end

