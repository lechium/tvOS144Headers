/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libMemoryResourceException.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <libMemoryResourceException.dylib/libMemoryResourceException.dylib-Structs.h>
@interface FPRangeList : NSObject {

	FPRangeListNode* _rangeListHead;

}
-(void)dealloc;
-(SCD_Struct_FP0)sum;
-(void)_addRangeList:(id)arg1 pageSize:(unsigned long long)arg2 ;
-(void)addRange:(NSRange)arg1 pageSize:(unsigned long long)arg2 memoryTotal:(SCD_Struct_FP0*)arg3 ;
-(void)addRegion:(id)arg1 pageSize:(unsigned long long)arg2 ;
@end
