/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/OSLogCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOTileKeyMap;

@interface GEOTileKeyList : NSObject <OSLogCoding, NSFastEnumeration, NSCopying> {

	void* _head;
	void* _tail;
	GEOTileKeyMap* _map;
	unsigned long long _count;
	unsigned long long _maxCount;
	unsigned long long _mutationsCount;

}
+(id)formatOSLogData:(id)arg1 ;
+(id)listFromXPCData:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_GE31*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(BOOL)containsKey:(const GEOTileKey*)arg1 ;
-(GEOTileKey*)keyAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)capacity;
-(GEOTileKey*)firstKey;
-(void)addKey:(const GEOTileKey*)arg1 ;
-(id)initWithMaxCapacity:(unsigned long long)arg1 ;
-(void)_addKeyToBack:(const GEOTileKey*)arg1 ;
-(BOOL)addKey:(const GEOTileKey*)arg1 lostKey:(GEOTileKey*)arg2 ;
-(BOOL)intersectsList:(id)arg1 ;
-(id)copyWithMaxCapacity:(unsigned long long)arg1 ;
-(id)listWithout:(id)arg1 ;
-(id)sublistWithRange:(NSRange)arg1 ;
-(void)sort:(/*^block*/id)arg1 ;
-(void)removeKeysMatchingPredicate:(/*^block*/id)arg1 ;
-(BOOL)removeKey:(const GEOTileKey*)arg1 ;
-(id)newXPCData;
@end

