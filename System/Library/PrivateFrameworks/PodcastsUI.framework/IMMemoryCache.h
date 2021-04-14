/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSString, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSObject;

@interface IMMemoryCache : NSObject {

	BOOL _evictsItemsWithDiscardedContent;
	NSString* _name;
	id _delegate;
	unsigned long long _totalCostLimit;
	unsigned long long _countLimit;
	NSMutableArray* _itemsArray;
	NSMutableDictionary* _items;
	unsigned long long _totalCost;
	unsigned long long _count;
	NSOperationQueue* _queue;
	double _lastCheckTime;
	NSObject*<OS_dispatch_queue> _accessQueue;

}

@property (nonatomic,retain) NSMutableArray * itemsArray;                           //@synthesize itemsArray=_itemsArray - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * items;                           //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) unsigned long long totalCost;                          //@synthesize totalCost=_totalCost - In the implementation block
@property (assign,nonatomic) unsigned long long count;                              //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) NSOperationQueue * queue;                              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) double lastCheckTime;                                  //@synthesize lastCheckTime=_lastCheckTime - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) id delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL evictsItemsWithDiscardedContent;                  //@synthesize evictsItemsWithDiscardedContent=_evictsItemsWithDiscardedContent - In the implementation block
@property (assign,nonatomic) unsigned long long totalCostLimit;                     //@synthesize totalCostLimit=_totalCostLimit - In the implementation block
@property (assign,nonatomic) unsigned long long countLimit;                         //@synthesize countLimit=_countLimit - In the implementation block
-(NSString *)name;
-(id)description;
-(id)init;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)allKeys;
-(void)setName:(NSString *)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3 ;
-(unsigned long long)totalCostLimit;
-(void)setTotalCostLimit:(unsigned long long)arg1 ;
-(unsigned long long)countLimit;
-(void)setCountLimit:(unsigned long long)arg1 ;
-(NSOperationQueue *)queue;
-(void)setCount:(unsigned long long)arg1 ;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(NSMutableDictionary *)items;
-(void)setItems:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)_removeObjectForKey:(id)arg1 ;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableArray *)itemsArray;
-(void)_addItem:(id)arg1 forKey:(id)arg2 ;
-(void)setTotalCost:(unsigned long long)arg1 ;
-(void)_checkLimitsAndEvictObjects;
-(BOOL)_shouldRemoveIndex:(unsigned long long)arg1 ;
-(unsigned long long)totalCost;
-(void)_checkLimits;
-(void)removeObjectsForKeyWithPrefix:(id)arg1 ;
-(void)checkLimitsAndEvictObjects;
-(unsigned long long)costForObjectWithKey:(id)arg1 ;
-(long long)numberOfCachedItems;
-(BOOL)evictsItemsWithDiscardedContent;
-(void)setEvictsItemsWithDiscardedContent:(BOOL)arg1 ;
-(void)setItemsArray:(NSMutableArray *)arg1 ;
-(double)lastCheckTime;
-(void)setLastCheckTime:(double)arg1 ;
@end

