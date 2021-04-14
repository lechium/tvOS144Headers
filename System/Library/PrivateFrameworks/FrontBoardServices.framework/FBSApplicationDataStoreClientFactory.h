/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, FBSApplicationDataStoreRepositoryClient;
@class NSObject, NSArray;

@interface FBSApplicationDataStoreClientFactory : NSObject {

	unsigned long long _count;
	NSObject*<OS_dispatch_queue> _queue;
	id<FBSApplicationDataStoreRepositoryClient> _sharedClient;
	NSArray* _prefetchedKeys;

}

@property (nonatomic,retain) NSArray * prefetchedKeys;              //@synthesize prefetchedKeys=_prefetchedKeys - In the implementation block
+(id)sharedInstance;
+(BOOL)isServerProcess;
-(id)init;
-(void)setPrefetchedKeys:(NSArray *)arg1 ;
-(id)checkout;
-(void)checkin;
-(NSArray *)prefetchedKeys;
@end

