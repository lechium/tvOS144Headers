/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, CLLocation, NSDate;

@interface PLAssetCluster : NSObject {

	NSArray* _assets;
	CLLocation* _location;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) NSArray * assets;                   //@synthesize assets=_assets - In the implementation block
@property (nonatomic,readonly) CLLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                 //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                   //@synthesize endDate=_endDate - In the implementation block
+(id)mergedCluster:(id)arg1 ;
+(id)sortByTimeSortDescriptors;
-(id)description;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(CLLocation *)location;
-(NSArray *)assets;
-(id)initWithAssetsSortedByDate:(id)arg1 region:(id)arg2 ;
@end

