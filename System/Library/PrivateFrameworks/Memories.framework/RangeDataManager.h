/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Memories/Memories-Structs.h>
@interface RangeDataManager : NSObject
+(id)collapseRanges:(id)arg1 ;
+(id)unionOfRangeLists:(id)arg1 ;
+(id)intersectionOfRanges1:(id)arg1 ranges2:(id)arg2 ;
+(id)unionOfRanges1:(id)arg1 ranges2:(id)arg2 ;
+(id)intersectionOfRangeLists:(id)arg1 ;
+(id)stringForRanges:(id)arg1 ;
+(void)unionOfRangeLists:(id)arg1 interleavedIntoList1:(id*)arg2 andList2:(id*)arg3 ;
+(id)invertedRanges:(id)arg1 duration:(long long)arg2 ;
+(BOOL)location:(long long)arg1 isInRanges:(id)arg2 foundRange:(SCD_Struct_Ra27*)arg3 ;
+(void)ranges:(id)arg1 addRange:(SCD_Struct_Ra27)arg2 forKey:(id)arg3 ;
@end

