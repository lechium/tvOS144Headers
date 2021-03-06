/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class SSLRUCache, NSObject;

@interface ISURLBagCache : NSObject {

	SSLRUCache* _cachedBags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}
+(id)sharedCache;
+(id)URLWithBagContext:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)URLBagForContext:(id)arg1 ;
-(void)addURLBag:(id)arg1 ;
-(void)_storeFrontChangedNotification:(id)arg1 ;
-(id)_newRequestWithURLBagContext:(id)arg1 ;
-(void)invalidateAllURLBags;
-(void)invalidateURLBagForContext:(id)arg1 ;
-(id)URLBagForContext:(id)arg1 withOptions:(long long)arg2 ;
@end

