/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface MRVVIClient : NSObject {

	NSMutableDictionary* _deviceIDToCallbackMap;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(id)sharedClient;
-(id)init;
-(void)dealloc;
-(void)setRecordingStateCallback:(/*^block*/id)arg1 forDeviceID:(unsigned)arg2 ;
-(void)_recordingStateChangedNotification:(id)arg1 ;
@end

