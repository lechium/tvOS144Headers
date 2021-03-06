/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/WiFiAwareSubscriberDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, WiFiAwareSubscriber, NSObject, NSString, NSArray;

@interface CUNANSubscriber : NSObject <WiFiAwareSubscriberDelegate> {

	/*^block*/id _activateCompletion;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	opaque_pthread_mutex_t _mutex;
	LogCategory* _ucat;
	NSMutableDictionary* _wfaEndpoints;
	WiFiAwareSubscriber* _wfaSubscriber;
	unsigned _changeFlags;
	unsigned _controlFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _label;
	NSString* _serviceType;
	/*^block*/id _endpointFoundHandler;
	/*^block*/id _endpointLostHandler;
	/*^block*/id _endpointChangedHandler;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	/*^block*/id _receiveHandler;

}

@property (assign,nonatomic) unsigned changeFlags;                                    //@synthesize changeFlags=_changeFlags - In the implementation block
@property (assign,nonatomic) unsigned controlFlags;                                   //@synthesize controlFlags=_controlFlags - In the implementation block
@property (copy,readonly) NSArray * discoveredEndpoints; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                    //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) id endpointFoundHandler;                                   //@synthesize endpointFoundHandler=_endpointFoundHandler - In the implementation block
@property (nonatomic,copy) id endpointLostHandler;                                    //@synthesize endpointLostHandler=_endpointLostHandler - In the implementation block
@property (nonatomic,copy) id endpointChangedHandler;                                 //@synthesize endpointChangedHandler=_endpointChangedHandler - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id receiveHandler;                                         //@synthesize receiveHandler=_receiveHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(NSString *)serviceType;
-(void)setServiceType:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)_invalidate;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_invalidated;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)descriptionWithLevel:(int)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setChangeFlags:(unsigned)arg1 ;
-(unsigned)changeFlags;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(unsigned)controlFlags;
-(void)setControlFlags:(unsigned)arg1 ;
-(void)setEndpointFoundHandler:(id)arg1 ;
-(void)setEndpointLostHandler:(id)arg1 ;
-(void)setEndpointChangedHandler:(id)arg1 ;
-(NSArray *)discoveredEndpoints;
-(void)sendMessageData:(id)arg1 endpoint:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)receiveHandler;
-(void)setReceiveHandler:(id)arg1 ;
-(void)subscriber:(id)arg1 receivedMessage:(id)arg2 fromPublishID:(unsigned char)arg3 address:(id)arg4 ;
-(void)subscriberStarted:(id)arg1 ;
-(void)subscriber:(id)arg1 failedToStartWithError:(long long)arg2 ;
-(void)subscriber:(id)arg1 terminatedWithReason:(long long)arg2 ;
-(void)subscriber:(id)arg1 receivedDiscoveyResult:(id)arg2 ;
-(void)subscriber:(id)arg1 lostDiscoveryResultForPublishID:(unsigned char)arg2 address:(id)arg3 ;
-(void)_lostAllEndpoints;
-(void)_subscriber:(id)arg1 receivedDiscoveyResult:(id)arg2 ;
-(void)_subscriber:(id)arg1 lostDiscoveryResultForPublishID:(unsigned char)arg2 address:(id)arg3 ;
-(id)endpointFoundHandler;
-(id)endpointLostHandler;
-(id)endpointChangedHandler;
@end

