/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ASCServices;
@class ASCPendingPromises, ASCTaskCoordinator, ASCLazy;

@interface ASCLockupFetcher : NSObject {

	id<ASCServices> _connection;
	ASCPendingPromises* _pendingRequests;
	ASCTaskCoordinator* _requestCoordinator;
	ASCLazy* _bundleCoordinator;

}

@property (nonatomic,readonly) id<ASCServices> connection;                           //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) ASCPendingPromises * pendingRequests;                 //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (nonatomic,readonly) ASCTaskCoordinator * requestCoordinator;              //@synthesize requestCoordinator=_requestCoordinator - In the implementation block
@property (nonatomic,readonly) ASCLazy * bundleCoordinator;                          //@synthesize bundleCoordinator=_bundleCoordinator - In the implementation block
+(id)sharedFetcher;
-(void)dealloc;
-(id<ASCServices>)connection;
-(id)initWithConnection:(id)arg1 ;
-(ASCPendingPromises *)pendingRequests;
-(void)daemonConnectionWasLost:(id)arg1 ;
-(void)daemonDidRebootstrap:(id)arg1 ;
-(ASCTaskCoordinator *)requestCoordinator;
-(ASCLazy *)bundleCoordinator;
-(id)loadedLockupWithRequest:(id)arg1 ;
-(id)lockupWithRequest:(id)arg1 ;
-(void)submitBatchRequest:(id)arg1 ;
-(id)lockupForBundleID:(id)arg1 withContext:(id)arg2 ;
-(id)collectionWithRequest:(id)arg1 ;
@end

