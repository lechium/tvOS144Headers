/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSObject, NSURLSession;

@interface PKObjectDownloader : NSObject {

	NSMutableDictionary* _downloads;
	NSMutableOrderedSet* _pendingURLs;
	NSMutableSet* _downloadingURLs;
	NSObject*<OS_dispatch_queue> _queue;
	NSURLSession* _session;
	long long _concurrentRequests;

}

@property (retain) NSURLSession * session;                    //@synthesize session=_session - In the implementation block
@property (assign) long long concurrentRequests;              //@synthesize concurrentRequests=_concurrentRequests - In the implementation block
+(id)sharedImageAssetDownloader;
-(id)init;
-(void)invalidate;
-(NSURLSession *)session;
-(void)setSession:(NSURLSession *)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(void)downloadFromUrl:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)cachedDataForURL:(id)arg1 ;
-(id)_logStringFromResponse:(id)arg1 data:(id)arg2 ;
-(void)_schedulePendingDownloads;
-(long long)concurrentRequests;
-(id)_logStringFromRequest:(id)arg1 ;
-(void)_scheduleDownload:(id)arg1 forURL:(id)arg2 ;
-(id)_logStringFromCachedResponse:(id)arg1 data:(id)arg2 ;
-(void)downloadWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleResponseForURL:(id)arg1 data:(id)arg2 response:(id)arg3 error:(id)arg4 ;
-(void)setConcurrentRequests:(long long)arg1 ;
@end
