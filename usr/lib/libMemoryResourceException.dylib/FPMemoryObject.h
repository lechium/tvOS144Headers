/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libMemoryResourceException.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libMemoryResourceException.dylib/libMemoryResourceException.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSMutableDictionary, FPRangeList, NSString;

@interface FPMemoryObject : NSObject <NSCopying> {

	unsigned long long _totalDirtySize;
	unsigned long long _totalCleanSize;
	unsigned long long _totalSwappedSize;
	unsigned long long _totalReclaimableSize;
	BOOL _accurateSizes;
	int _ownerPid;
	unsigned long long _totalWiredSize;
	NSMutableArray* _memoryRegions;
	NSMutableDictionary* _processMemoryRegions;
	FPRangeList* _rangeList;

}

@property (nonatomic,retain) NSMutableArray * memoryRegions;                          //@synthesize memoryRegions=_memoryRegions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * processMemoryRegions;              //@synthesize processMemoryRegions=_processMemoryRegions - In the implementation block
@property (nonatomic,retain) FPRangeList * rangeList;                                 //@synthesize rangeList=_rangeList - In the implementation block
@property (nonatomic,readonly) unsigned long long totalDirtySize;                     //@synthesize totalDirtySize=_totalDirtySize - In the implementation block
@property (nonatomic,readonly) unsigned long long totalCleanSize;                     //@synthesize totalCleanSize=_totalCleanSize - In the implementation block
@property (nonatomic,readonly) unsigned long long totalReclaimableSize;               //@synthesize totalReclaimableSize=_totalReclaimableSize - In the implementation block
@property (nonatomic,readonly) unsigned long long totalSwappedSize;                   //@synthesize totalSwappedSize=_totalSwappedSize - In the implementation block
@property (nonatomic,readonly) unsigned long long totalWiredSize;                     //@synthesize totalWiredSize=_totalWiredSize - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * detailedName; 
@property (nonatomic,readonly) NSString * fullName; 
@property (nonatomic,readonly) BOOL verbose; 
@property (nonatomic,readonly) BOOL containsFakeRegion; 
@property (assign,nonatomic) int ownerPid;                                            //@synthesize ownerPid=_ownerPid - In the implementation block
@property (nonatomic,readonly) BOOL couldHaveProcessView; 
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)finalize;
-(NSString *)fullName;
-(BOOL)verbose;
-(void)addRegion:(id)arg1 pageSize:(unsigned long long)arg2 ;
-(unsigned long long)totalDirtySize;
-(unsigned long long)totalSwappedSize;
-(void)setMemoryRegions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)memoryRegions;
-(NSString *)detailedName;
-(unsigned long long)totalCleanSize;
-(unsigned long long)totalReclaimableSize;
-(unsigned long long)totalWiredSize;
-(void)_addRegion:(id)arg1 pageSize:(unsigned long long)arg2 forProcess:(id)arg3 ;
-(void)finalizeUsingRegionDirtySize:(BOOL)arg1 ;
-(BOOL)containsFakeRegion;
-(id)_canonicalRegion;
-(int)ownerPid;
-(void)addRegion:(id)arg1 forProcess:(id)arg2 ;
-(BOOL)couldHaveProcessView;
-(id)viewForProcess:(id)arg1 ;
-(void)setOwnerPid:(int)arg1 ;
-(NSMutableDictionary *)processMemoryRegions;
-(void)setProcessMemoryRegions:(NSMutableDictionary *)arg1 ;
-(FPRangeList *)rangeList;
-(void)setRangeList:(FPRangeList *)arg1 ;
@end

