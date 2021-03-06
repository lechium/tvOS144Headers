/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVIdleServices.framework/TVIdleServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface TVISIndexSetMuxer : NSObject {

	NSMutableDictionary* _indexSetDictionary;
	NSMutableDictionary* _pickedCounts;

}

@property (nonatomic,retain) NSMutableDictionary * indexSetDictionary;              //@synthesize indexSetDictionary=_indexSetDictionary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pickedCounts;                    //@synthesize pickedCounts=_pickedCounts - In the implementation block
-(id)init;
-(id)_unrepresentedSets;
-(id)remainingCounts;
-(id)remainingIndexSet;
-(void)addIndexSet:(id)arg1 withName:(id)arg2 ;
-(id)nextIndexSet;
-(void)pickedIndex:(unsigned long long)arg1 ;
-(unsigned long long)remainingCount;
-(NSMutableDictionary *)indexSetDictionary;
-(void)setIndexSetDictionary:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)pickedCounts;
-(void)setPickedCounts:(NSMutableDictionary *)arg1 ;
@end

