/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _UIPointVector : NSObject {

	unsigned long long _count;
	unsigned long long _capacity;
	* _vectors;

}

@property (assign,nonatomic) unsigned long long capacity;              //@synthesize capacity=_capacity - In the implementation block
@property (assign,nonatomic) unsigned long long count;                 //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) * vectors;                                //@synthesize vectors=_vectors - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(unsigned long long)capacity;
-(void)setCount:(unsigned long long)arg1 ;
-(void)reset;
-(void)clear;
-(void)setCapacity:(unsigned long long)arg1 ;
-(*)vectors;
-(void)setVectors:(*)arg1 ;
-(void)addVector:;
-(void)removeVectorAtIndex:(unsigned long long)arg1 ;
-(2)vectorAtIndex:(unsigned long long)arg1 ;
-(1)lastVector;
@end

