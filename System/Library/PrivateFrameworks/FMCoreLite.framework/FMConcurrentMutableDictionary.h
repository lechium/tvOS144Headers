/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, FMReadWriteLock;

@interface FMConcurrentMutableDictionary : NSObject {

	NSMutableDictionary* _underlyingDictionary;
	FMReadWriteLock* _lock;

}

@property (nonatomic,retain) NSMutableDictionary * underlyingDictionary;              //@synthesize underlyingDictionary=_underlyingDictionary - In the implementation block
@property (nonatomic,retain) FMReadWriteLock * lock;                                  //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(void)removeAllObjects;
-(FMReadWriteLock *)lock;
-(id)objectForKey:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)replaceObject:(id)arg1 forKey:(id)arg2 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLock:(FMReadWriteLock *)arg1 ;
-(NSMutableDictionary *)underlyingDictionary;
-(id)nativeDictionary;
-(id)objectForKey:(id)arg1 withConstructor:(/*^block*/id)arg2 ;
-(id)popObjectforKey:(id)arg1 ;
-(void)setUnderlyingDictionary:(NSMutableDictionary *)arg1 ;
@end
