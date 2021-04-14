/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@class _PFResultArray;

@interface _PFResultObject : NSDictionary {

	_PFResultArray* _parent_buffer;
	int _cd_rc;
	unsigned _count;
	unsigned long long _sql_entity_id;
	unsigned long long _primary_key;

}
+(Class)classForKeyedUnarchiver;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(void)dealloc;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(Class)classForCoder;
-(id)objectForKey:(id)arg1 ;
-(id)keyEnumerator;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(void)_setParentBuffer:(id)arg1 ;
-(id)valueAtIndex:(unsigned long long)arg1 ;
@end

