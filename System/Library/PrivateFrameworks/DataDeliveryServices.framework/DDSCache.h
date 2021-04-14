/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol DDSCacheDelegate, OS_dispatch_queue;
@class NSMutableDictionary, NSMutableOrderedSet, NSObject;

@interface DDSCache : NSObject {

	id<DDSCacheDelegate> _delegate;
	NSMutableDictionary* _cache;
	NSMutableOrderedSet* _order;
	unsigned long long _maxCount;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSMutableDictionary * cache;                     //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) NSMutableOrderedSet * order;                     //@synthesize order=_order - In the implementation block
@property (nonatomic,readonly) unsigned long long maxCount;                     //@synthesize maxCount=_maxCount - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<DDSCacheDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)objectForKey:(id)arg1 ;
-(id<DDSCacheDelegate>)delegate;
-(void)setDelegate:(id<DDSCacheDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSMutableOrderedSet *)order;
-(NSMutableDictionary *)cache;
-(unsigned long long)maxCount;
-(void)clearCache;
-(id)initWithMaxCount:(unsigned long long)arg1 ;
-(void)cacheObject:(id)arg1 forKey:(id)arg2 ;
@end
