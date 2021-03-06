/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Proximity/Proximity-Structs.h>
#import <Proximity/PRRangingDevice.h>
#import <libobjc.A.dylib/PRRangingClientProtocol.h>

@protocol PRBeaconListenerDelegate, OS_dispatch_queue;
@class NSObject, NSString;

@interface PRBeaconListener : PRRangingDevice <PRRangingClientProtocol> {

	DaemonBackedService _service;
	id<PRBeaconListenerDelegate> _delegate;
	unsigned long long _state;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic,__weak) id<PRBeaconListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long state;                                          //@synthesize state=_state - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                                  //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<PRBeaconListenerDelegate>)delegate;
-(void)setDelegate:(id<PRBeaconListenerDelegate>)arg1 ;
-(unsigned long long)state;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)_updateState:(unsigned long long)arg1 ;
-(void)didFailWithError:(id)arg1 ;
-(void)clearBeaconWhitelistWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)pushBeaconWhitelist:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)didReceiveNewSolutions:(id)arg1 ;
-(void)rangingRequestDidUpdateStatus:(unsigned long long)arg1 ;
-(void)rangingServiceDidUpdateState:(unsigned long long)arg1 cause:(long long)arg2 ;
-(void)deamonConnectionInvalidated;
-(void)deamonConnectionInterrupted;
@end

