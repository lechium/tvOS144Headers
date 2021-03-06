/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialProto/TrialProto-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@class TRIPBMessage, NSMutableArray;

@interface TRIPBAutocreatedArray : NSMutableArray {

	TRIPBMessage* _autocreator;
	NSMutableArray* _array;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_TR9*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)removeObject:(id)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeLastObject;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
@end

