/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableDictionary, MRAVRoutingDiscoverySession, NSArray, NSSet, NSString, NSMutableArray, MRAVEndpoint;

@interface MRAVReconnaissanceSession : NSObject {

	double _timeoutTimerTimeout;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _localMatchingDevicesFound;
	BOOL _useWeakMatching;
	BOOL _returnPartialResults;
	BOOL _waitForCompleteClusters;
	BOOL _searchInProgress;
	BOOL _shouldWaitForUnanimousEndpoints;
	MRAVRoutingDiscoverySession* _discoverySession;
	NSArray* _matchingLogicalDeviceIDs;
	NSSet* _matchingOutputDeviceUIDsSet;
	NSString* _matchingOutputDeviceGroupID;
	id _discoverySessionCallbackToken;
	/*^block*/id _callback;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	NSObject*<OS_dispatch_queue> _callbackSyncQueue;
	NSMutableDictionary* _matchingDevicesFound;
	NSMutableArray* _matchingEndpointsFound;
	MRAVEndpoint* _unanimousEndpoint;
	NSArray* _availableOutputDevices;
	NSArray* _availableEndpoints;
	unsigned long long _updatesReceived;
	NSArray* _lastProcessedOutputDevices;
	NSArray* _lastProcessedEndpoints;
	unsigned long long _expectedLogicalDevices;

}

@property (nonatomic,readonly) NSArray * matchingOutputDeviceUIDs; 
@property (nonatomic,readonly) NSString * matchingOutputDeviceGroupID; 
@property (nonatomic,readonly) unsigned endpointFeatures; 
@property (nonatomic,readonly) MRAVRoutingDiscoverySession * discoverySession; 
@property (assign,nonatomic) BOOL useWeakMatching;                                          //@synthesize useWeakMatching=_useWeakMatching - In the implementation block
@property (assign,nonatomic) BOOL returnPartialResults;                                     //@synthesize returnPartialResults=_returnPartialResults - In the implementation block
@property (assign,nonatomic) BOOL waitForCompleteClusters;                                  //@synthesize waitForCompleteClusters=_waitForCompleteClusters - In the implementation block
@property (nonatomic,copy) NSArray * matchingLogicalDeviceIDs;                              //@synthesize matchingLogicalDeviceIDs=_matchingLogicalDeviceIDs - In the implementation block
-(void)dealloc;
-(id)initWithOutputDeviceUIDs:(id)arg1 outputDeviceGroupID:(id)arg2 features:(unsigned)arg3 ;
-(void)setMatchingLogicalDeviceIDs:(NSArray *)arg1 ;
-(void)beginSearchWithTimeout:(double)arg1 completion:(/*^block*/id)arg2 ;
-(MRAVRoutingDiscoverySession *)discoverySession;
-(unsigned)endpointFeatures;
-(void)setReturnPartialResults:(BOOL)arg1 ;
-(void)beginSearchWithTimeout:(double)arg1 endpointsCompletion:(/*^block*/id)arg2 ;
-(void)beginSearchWithTimeout:(double)arg1 mapCompletion:(/*^block*/id)arg2 ;
-(void)cancelSearch;
-(BOOL)waitForCompleteClusters;
-(NSArray *)matchingOutputDeviceUIDs;
-(NSString *)matchingOutputDeviceGroupID;
-(BOOL)useWeakMatching;
-(void)setUseWeakMatching:(BOOL)arg1 ;
-(BOOL)returnPartialResults;
-(void)setWaitForCompleteClusters:(BOOL)arg1 ;
-(NSArray *)matchingLogicalDeviceIDs;
@end

