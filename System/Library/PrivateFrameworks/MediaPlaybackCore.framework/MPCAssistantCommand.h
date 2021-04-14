/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_group;
@class MPCAssistantSendCommand, MPCAssistantEndpointContext, NSObject, NSMutableDictionary, NSDate;

@interface MPCAssistantCommand : NSObject {

	MPCAssistantSendCommand* _sendCommand;
	MPCAssistantEndpointContext* _context;
	NSObject*<OS_dispatch_queue> _sendCommandQueue;
	NSMutableDictionary* _analytics;
	NSObject*<OS_dispatch_queue> _analyticsQueue;
	NSObject*<OS_dispatch_group> _analyticsGroup;
	NSDate* _startDate;

}
-(id)init;
-(void)sendCommand:(unsigned)arg1 toDestination:(id)arg2 withOptions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_setAnalyticsKey:(id)arg1 value:(id)arg2 ;
-(void)_setAnalyticsError:(id)arg1 ;
-(void)sendPlaybackQueue:(id)arg1 toDestination:(id)arg2 withOptions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_findOutputDevicesForDestination:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendPlaybackQueue:(id)arg1 toDestination:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendPlaybackArchive:(id)arg1 toDestination:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

