/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:19:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface NSCache : NSObject {

	id _delegate;
	void** _private[5];
	void* _reserved;

}

@property (copy) NSString * name; 
@property (assign) id<NSCacheDelegate> delegate; 
@property (assign) unsigned long long totalCostLimit; 
@property (assign) unsigned long long countLimit; 
@property (assign) BOOL evictsObjectsWithDiscardedContent; 
-(id)mapTableRepresentation;
-(NSString *)name;
-(id)init;
-(void)dealloc;
-(void)removeAllObjects;
-(id)allObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id<NSCacheDelegate>)delegate;
-(void)setDelegate:(id<NSCacheDelegate>)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3 ;
-(unsigned long long)totalCostLimit;
-(void)setTotalCostLimit:(unsigned long long)arg1 ;
-(unsigned long long)countLimit;
-(void)setCountLimit:(unsigned long long)arg1 ;
-(BOOL)evictsObjectsWithDiscardedContent;
-(void)setEvictsObjectsWithDiscardedContent:(BOOL)arg1 ;
-(void)setEvictsObjectsWhenApplicationEntersBackground:(BOOL)arg1 ;
-(void)setMinimumObjectCount:(unsigned long long)arg1 ;
-(unsigned long long)minimumObjectCount;
-(BOOL)evictsObjectsWhenApplicationEntersBackground;
-(void)__apply:(/*^block*/id)arg1 ;
@end

