/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPAVRoutingDataSource.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSMutableDictionary, MRAVRoutingDiscoverySessionConfiguration;

@interface MPAVEndpointRoutingDataSource : MPAVRoutingDataSource {

	void* _discoverySession;
	void* _callbackToken;
	NSString* _routingContextUID;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _endpoints;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                                                //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * endpoints;                                                         //@synthesize endpoints=_endpoints - In the implementation block
@property (nonatomic,readonly) MRAVRoutingDiscoverySessionConfiguration * discoverySessionConfiguration; 
@property (nonatomic,copy) NSString * routingContextUID;                                                              //@synthesize routingContextUID=_routingContextUID - In the implementation block
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(NSString *)routingContextUID;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)endpoints;
-(void)setEndpoints:(NSMutableDictionary *)arg1 ;
-(void)setRoutingContextUID:(NSString *)arg1 ;
-(void)setDiscoveryMode:(long long)arg1 ;
-(long long)discoveryMode;
-(BOOL)devicePresenceDetected;
-(id)getRoutesForCategory:(id)arg1 ;
-(id)initWithThrottlingEnabled:(BOOL)arg1 ;
-(MRAVRoutingDiscoverySessionConfiguration *)discoverySessionConfiguration;
-(void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_endpointsDidChange:(id)arg1 ;
@end

