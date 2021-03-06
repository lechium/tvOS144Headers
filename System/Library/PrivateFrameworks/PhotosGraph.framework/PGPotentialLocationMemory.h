/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, PGGraphLocationCityNode, NSArray, NSDate, NSString;

@interface PGPotentialLocationMemory : PGPotentialMemory {

	NSMutableSet* _mutableMomentNodes;
	PGGraphLocationCityNode* _cityNode;
	long long _year;
	NSArray* _assetLocalIdentifiersInCity;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (readonly) PGGraphLocationCityNode * cityNode;               //@synthesize cityNode=_cityNode - In the implementation block
@property (readonly) long long year;                                   //@synthesize year=_year - In the implementation block
@property (readonly) NSString * city; 
@property (retain) NSArray * assetLocalIdentifiersInCity;              //@synthesize assetLocalIdentifiersInCity=_assetLocalIdentifiersInCity - In the implementation block
@property (retain) NSDate * startDate;                                 //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * endDate;                                   //@synthesize endDate=_endDate - In the implementation block
-(long long)year;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSString *)city;
-(void)addMomentNode:(id)arg1 ;
-(PGGraphLocationCityNode *)cityNode;
-(id)initWithCityNode:(id)arg1 year:(long long)arg2 ;
-(NSArray *)assetLocalIdentifiersInCity;
-(void)setAssetLocalIdentifiersInCity:(NSArray *)arg1 ;
@end

