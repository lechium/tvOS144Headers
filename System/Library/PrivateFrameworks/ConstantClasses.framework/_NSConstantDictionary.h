/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ConstantClasses.framework/ConstantClasses
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConstantClasses/ConstantClasses-Structs.h>
#import <CoreFoundation/NSDictionary.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@interface _NSConstantDictionary : NSDictionary <NSFastEnumeration>
+(id)alloc;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectEnumerator;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS0*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectForKey:(id)arg1 ;
-(id)keyEnumerator;
-(void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(id)allKeys;
-(id)allValues;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)capacity;
@end
