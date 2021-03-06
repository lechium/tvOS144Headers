/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Memories/Memories-Structs.h>
@class NSMutableDictionary, NSMutableArray;

@interface FIFOCache : NSObject {

	NSMutableDictionary* m_cache;
	NSMutableArray* m_FIFO;
	int m_capacity;

}
+(void)noteApplicationDidReceiveMemoryWarning;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(long long)count;
-(id)objectEnumerator;
-(void)removeAllObjects;
-(id)initWithCapacity:(int)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)addObjectsFromDictionary:(id)arg1 ;
@end

