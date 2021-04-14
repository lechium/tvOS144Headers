/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PSIQueryToken, NSValue, PSIGroup, NSArray;

@interface PSIGroupAggregateItem : NSObject {

	PSIQueryToken* _searchToken;
	NSValue* _rangeMatchingToken;
	PSIGroup* _group;
	NSArray* _assetIds;
	NSArray* _collectionIds;

}

@property (nonatomic,retain) PSIQueryToken * searchToken;               //@synthesize searchToken=_searchToken - In the implementation block
@property (nonatomic,retain) NSValue * rangeMatchingToken;              //@synthesize rangeMatchingToken=_rangeMatchingToken - In the implementation block
@property (nonatomic,retain) PSIGroup * group;                          //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) NSArray * assetIds;                        //@synthesize assetIds=_assetIds - In the implementation block
@property (nonatomic,retain) NSArray * collectionIds;                   //@synthesize collectionIds=_collectionIds - In the implementation block
-(void)setGroup:(PSIGroup *)arg1 ;
-(void)reset;
-(PSIGroup *)group;
-(NSArray *)collectionIds;
-(void)setCollectionIds:(NSArray *)arg1 ;
-(NSArray *)assetIds;
-(void)setAssetIds:(NSArray *)arg1 ;
-(PSIQueryToken *)searchToken;
-(NSValue *)rangeMatchingToken;
-(void)setRangeMatchingToken:(NSValue *)arg1 ;
-(void)setSearchToken:(PSIQueryToken *)arg1 ;
@end

