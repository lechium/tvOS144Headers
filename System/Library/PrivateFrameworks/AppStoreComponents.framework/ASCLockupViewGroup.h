/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, ASCLockupFetcher, NSMutableDictionary, NSMutableArray;

@interface ASCLockupViewGroup : NSObject {

	BOOL _hasScheduledBatchRequest;
	NSString* _name;
	ASCLockupFetcher* _lockupFetcher;
	NSMutableDictionary* _deferredRequests;
	NSMutableArray* _prefetchSpansIfLoaded;

}

@property (nonatomic,copy,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) ASCLockupFetcher * lockupFetcher;                    //@synthesize lockupFetcher=_lockupFetcher - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * deferredRequests;              //@synthesize deferredRequests=_deferredRequests - In the implementation block
@property (assign,nonatomic) BOOL hasScheduledBatchRequest;                         //@synthesize hasScheduledBatchRequest=_hasScheduledBatchRequest - In the implementation block
@property (nonatomic,retain) NSMutableArray * prefetchSpansIfLoaded;                //@synthesize prefetchSpansIfLoaded=_prefetchSpansIfLoaded - In the implementation block
@property (nonatomic,readonly) NSMutableArray * prefetchSpans; 
+(id)log;
-(NSString *)name;
-(id)description;
-(id)init;
-(id)initWithName:(id)arg1 ;
-(void)_cacheLockupsWithCollectionRequest:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_prefetchLockupsWithRequests:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_cacheLockupsWithRequests:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(id)lockupWithRequest:(id)arg1 ;
-(ASCLockupFetcher *)lockupFetcher;
-(NSMutableArray *)prefetchSpansIfLoaded;
-(id)initWithName:(id)arg1 lockupFetcher:(id)arg2 ;
-(void)setPrefetchSpansIfLoaded:(NSMutableArray *)arg1 ;
-(BOOL)hasScheduledBatchRequest;
-(void)performBatchRequests;
-(void)setHasScheduledBatchRequest:(BOOL)arg1 ;
-(NSMutableDictionary *)deferredRequests;
-(void)scheduleBatchRequestsIfNeeded;
-(NSMutableArray *)prefetchSpans;
-(void)_lockupDictionaryForRequest:(id)arg1 includingKeys:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)_lockupRequestForBundleID:(id)arg1 withContext:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
@end

