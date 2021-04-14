/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFMessageTransport.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageTransportDelegate.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSObject, NSMutableSet, NSXPCInterface, HMDXPCMessageCountTracker, HMDProcessMonitor, NSXPCListener, HMDApplicationRegistry, NSArray, NSString;

@interface HMDXPCMessageTransport : HMFMessageTransport <NSXPCListenerDelegate, HMFLogging, HMFMessageTransportDelegate> {

	id<HMFLocking> _lock;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _connections;
	NSXPCInterface* _exportedInterface;
	NSXPCInterface* _remoteObjectInterface;
	HMDXPCMessageCountTracker* _xpcCounterTracker;
	HMDProcessMonitor* _processMonitor;
	NSXPCListener* _listener;

}

@property (readonly) NSXPCListener * listener;                                  //@synthesize listener=_listener - In the implementation block
@property (readonly) HMDProcessMonitor * processMonitor;                        //@synthesize processMonitor=_processMonitor - In the implementation block
@property (readonly) HMDApplicationRegistry * applicationRegistry; 
@property (copy,readonly) NSArray * connections; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)defaultTransport;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(BOOL)start;
-(BOOL)stop;
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSXPCListener *)listener;
-(NSArray *)connections;
-(HMDProcessMonitor *)processMonitor;
-(id)dumpState;
-(id)activeRequests;
-(void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)submitCounters;
-(HMDApplicationRegistry *)applicationRegistry;
@end

