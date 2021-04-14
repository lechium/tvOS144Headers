/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSUUID, NSObject, NSMutableArray, HMFMessageTransport, NSString;

@interface HMCameraObjectFetchServer : HMFObject <HMFLogging> {

	NSUUID* _clientUUID;
	unsigned long long _fetchedObjectsBatchLimit;
	unsigned long long _totalFetchedObjectsLimit;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableArray* _currentlyBatchedFetchedObjects;
	HMFMessageTransport* _transport;
	unsigned long long _totalFetchedObjectsCount;

}

@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                       //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) NSMutableArray * currentlyBatchedFetchedObjects;              //@synthesize currentlyBatchedFetchedObjects=_currentlyBatchedFetchedObjects - In the implementation block
@property (__weak) HMFMessageTransport * transport;                                //@synthesize transport=_transport - In the implementation block
@property (assign) unsigned long long totalFetchedObjectsCount;                    //@synthesize totalFetchedObjectsCount=_totalFetchedObjectsCount - In the implementation block
@property (copy,readonly) NSUUID * clientUUID;                                     //@synthesize clientUUID=_clientUUID - In the implementation block
@property (readonly) BOOL canHandleMoreFetchedObjects; 
@property (assign) unsigned long long fetchedObjectsBatchLimit;                    //@synthesize fetchedObjectsBatchLimit=_fetchedObjectsBatchLimit - In the implementation block
@property (assign) unsigned long long totalFetchedObjectsLimit;                    //@synthesize totalFetchedObjectsLimit=_totalFetchedObjectsLimit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMFMessageTransport *)transport;
-(void)setTransport:(HMFMessageTransport *)arg1 ;
-(id)logIdentifier;
-(id)initWithClientUUID:(id)arg1 transport:(id)arg2 workQueue:(id)arg3 ;
-(unsigned long long)totalFetchedObjectsCount;
-(unsigned long long)totalFetchedObjectsLimit;
-(BOOL)canHandleMoreFetchedObjects;
-(NSMutableArray *)currentlyBatchedFetchedObjects;
-(unsigned long long)fetchedObjectsBatchLimit;
-(NSUUID *)clientUUID;
-(void)_notifyTransport:(id)arg1 ofFetchedObjects:(id)arg2 forClientUUID:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)setTotalFetchedObjectsCount:(unsigned long long)arg1 ;
-(id)initWithFetchMessage:(id)arg1 workQueue:(id)arg2 ;
-(void)handleFetchedObject:(id)arg1 ;
-(void)sendCurrentlyBatchedFetchedObjectsWithCompletion:(/*^block*/id)arg1 ;
-(void)setFetchedObjectsBatchLimit:(unsigned long long)arg1 ;
-(void)setTotalFetchedObjectsLimit:(unsigned long long)arg1 ;
@end

