/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SPOwner/SPBeaconScanningXPCClientProtocol.h>

@protocol OS_dispatch_queue, SPBeaconScanningXPCProtocol;
@class NSObject, FMXPCServiceDescription, FMXPCSession, NSString;

@interface SPBeaconScanningSession : NSObject <SPBeaconScanningXPCClientProtocol> {

	/*^block*/id _sessionInvalidatedCallback;
	/*^block*/id _beaconDiscoveredCallback;
	/*^block*/id _discoveryFinishedCallback;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	FMXPCServiceDescription* _serviceDescription;
	FMXPCSession* _session;
	id<SPBeaconScanningXPCProtocol> _proxy;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) FMXPCServiceDescription * serviceDescription;              //@synthesize serviceDescription=_serviceDescription - In the implementation block
@property (nonatomic,retain) FMXPCSession * session;                                    //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) id<SPBeaconScanningXPCProtocol> proxy;                     //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,copy) id sessionInvalidatedCallback;                               //@synthesize sessionInvalidatedCallback=_sessionInvalidatedCallback - In the implementation block
@property (nonatomic,copy) id beaconDiscoveredCallback;                                 //@synthesize beaconDiscoveredCallback=_beaconDiscoveredCallback - In the implementation block
@property (nonatomic,copy) id discoveryFinishedCallback;                                //@synthesize discoveryFinishedCallback=_discoveryFinishedCallback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(FMXPCSession *)session;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)exportedInterface;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSession:(FMXPCSession *)arg1 ;
-(void)setProxy:(id<SPBeaconScanningXPCProtocol>)arg1 ;
-(id<SPBeaconScanningXPCProtocol>)proxy;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(FMXPCServiceDescription *)serviceDescription;
-(id)remoteInterface;
-(void)setServiceDescription:(FMXPCServiceDescription *)arg1 ;
-(void)interruptionHandler:(id)arg1 ;
-(void)invalidationHandler:(id)arg1 ;
-(id)sessionInvalidatedCallback;
-(void)setSessionInvalidatedCallback:(id)arg1 ;
-(oneway void)discoveredObject:(id)arg1 ;
-(oneway void)discoveryFinished:(id)arg1 ;
-(id)userAgentProxy;
-(id)beaconDiscoveredCallback;
-(id)discoveryFinishedCallback;
-(void)startScanningIncludeServiceCharacteristics:(BOOL)arg1 ;
-(void)setBeaconDiscoveredCallback:(id)arg1 ;
-(void)setDiscoveryFinishedCallback:(id)arg1 ;
@end

