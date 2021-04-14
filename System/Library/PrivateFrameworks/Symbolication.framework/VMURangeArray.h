/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Symbolication/Symbolication-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VMURangeArray : NSObject <NSCopying> {

	unsigned _count;
	VMURange* _ranges;
	unsigned _max;
	BOOL _sorted;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned)count;
-(VMURange)rangeAtIndex:(unsigned)arg1 ;
-(VMURange)range;
-(void)setCapacity:(unsigned)arg1 ;
-(void)sort;
-(VMURange*)ranges;
-(void)addRange:(VMURange)arg1 ;
-(BOOL)intersectsRange:(VMURange)arg1 ;
-(unsigned long long)indexForLocation:(unsigned long long)arg1 ;
-(void)removeRangeAtIndex:(unsigned)arg1 ;
-(void)removeAllRanges;
-(BOOL)intersectsLocation:(unsigned long long)arg1 ;
-(id)initWithRanges:(const VMURange*)arg1 count:(unsigned)arg2 ;
-(void)addRanges:(id)arg1 ;
-(VMURange)rangeForLocation:(unsigned long long)arg1 ;
-(void)insertRange:(VMURange)arg1 atIndex:(unsigned)arg2 ;
-(VMURange)subrangeNotExcludedBySelfForRange:(VMURange)arg1 ;
-(VMURange)largestRange;
-(unsigned long long)sumLengths;
@end

