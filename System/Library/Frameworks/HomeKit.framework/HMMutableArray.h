/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HMFUnfairLock, NSMutableArray, NSArray;

@interface HMMutableArray : NSObject {

	HMFUnfairLock* _lock;
	NSMutableArray* _internal;

}

@property (nonatomic,copy,readonly) NSMutableArray * internal;              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,copy) NSArray * array; 
@property (nonatomic,readonly) unsigned long long count; 
+(id)array;
+(id)arrayWithArray:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)removeObjectsInArray:(id)arg1 ;
-(void)replaceObject:(id)arg1 ;
-(void)setArray:(NSArray *)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(NSArray *)array;
-(id)filteredArrayUsingPredicate:(id)arg1 ;
-(NSMutableArray *)internal;
-(void)addObjectIfNotPresent:(id)arg1 ;
-(id)firstItemWithUUID:(id)arg1 ;
-(id)firstItemWithName:(id)arg1 ;
-(id)firstItemWithValue:(id)arg1 forKey:(id)arg2 ;
-(id)itemsWithValue:(id)arg1 forKey:(id)arg2 ;
-(void)setIfDifferent:(id)arg1 ;
-(id)firstItemWithUniqueIdentifier:(id)arg1 ;
-(id)firstItemWithInstanceID:(id)arg1 ;
-(id)firstItemWithCharacteristicType:(id)arg1 ;
@end

