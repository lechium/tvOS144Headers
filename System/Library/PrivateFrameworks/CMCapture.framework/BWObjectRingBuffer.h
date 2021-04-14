/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@interface BWObjectRingBuffer : NSObject {

	id* _objects;
	SCD_Struct_BW7* _times;
	int _capacity;
	int _count;
	int _oldest;
	BOOL _ascending;
	BOOL _expectAscending;

}

@property (nonatomic,readonly) int count;                       //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) int capacity;                      //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,readonly) BOOL ascending;                  //@synthesize ascending=_ascending - In the implementation block
@property (assign,nonatomic) BOOL expectAscending;              //@synthesize expectAscending=_expectAscending - In the implementation block
+(void)initialize;
-(id)description;
-(void)dealloc;
-(int)count;
-(id)initWithCapacity:(int)arg1 ;
-(id)firstObject;
-(id)lastObject;
-(BOOL)ascending;
-(int)capacity;
-(void)clear;
-(void)setCapacity:(int)arg1 ;
-(SCD_Struct_BW7)lastTime;
-(void)enumerateObjectsStartingAt:(SCD_Struct_BW7)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)appendObject:(id)arg1 forTime:(SCD_Struct_BW7)arg2 ;
-(void)_enumerateObjectsStartingAtOffset:(int)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_checkAscendingInsertAt:(int)arg1 object:(id)arg2 forTime:(SCD_Struct_BW7)arg3 ;
-(int)_findClosestOffsetToTimestamp:(SCD_Struct_BW7)arg1 ;
-(void)_reverseEnumerateObjectsStartingAtOffset:(int)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_forceAscendingTo:(BOOL)arg1 ;
-(SCD_Struct_BW7)firstTime;
-(id)getObjectForIndex:(int)arg1 ;
-(SCD_Struct_BW7)getTimeForIndex:(int)arg1 ;
-(void)reverseEnumerateObjectsStartingAt:(SCD_Struct_BW7)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)extractTimeRangeFrom:(SCD_Struct_BW7)arg1 until:(SCD_Struct_BW7)arg2 into:(id)arg3 times:(id)arg4 ;
-(void)flushEntriesEarlierThan:(SCD_Struct_BW7)arg1 ;
-(BOOL)expectAscending;
-(void)setExpectAscending:(BOOL)arg1 ;
@end

