/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrivateFederatedLearning/PrivateFederatedLearning-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GPBMessage;

@interface GPBBoolArray : NSObject <NSCopying> {

	GPBMessage* _autocreator;
	BOOL* _values;
	unsigned long long _count;
	unsigned long long _capacity;

}

@property (nonatomic,readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
+(id)array;
+(id)arrayWithCapacity:(unsigned long long)arg1 ;
+(id)arrayWithValue:(BOOL)arg1 ;
+(id)arrayWithValueArray:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)addValue:(BOOL)arg1 ;
-(BOOL)valueAtIndex:(unsigned long long)arg1 ;
-(id)initWithValues:(const BOOL*)arg1 count:(unsigned long long)arg2 ;
-(void)removeValueAtIndex:(unsigned long long)arg1 ;
-(void)removeAll;
-(id)initWithValueArray:(id)arg1 ;
-(void)internalResizeToCapacity:(unsigned long long)arg1 ;
-(void)enumerateValuesWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)addValues:(const BOOL*)arg1 count:(unsigned long long)arg2 ;
-(void)insertValue:(BOOL)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceValueAtIndex:(unsigned long long)arg1 withValue:(BOOL)arg2 ;
-(void)exchangeValueAtIndex:(unsigned long long)arg1 withValueAtIndex:(unsigned long long)arg2 ;
-(void)addValuesFromArray:(id)arg1 ;
-(void)enumerateValuesWithBlock:(/*^block*/id)arg1 ;
@end

