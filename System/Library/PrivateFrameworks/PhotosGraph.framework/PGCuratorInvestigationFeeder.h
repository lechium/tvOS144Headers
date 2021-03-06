/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaMiningKit/CLSInvestigationFeeder.h>

@class NSArray;

@interface PGCuratorInvestigationFeeder : CLSInvestigationFeeder {

	NSArray* _items;

}
-(unsigned long long)numberOfItems;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(id)allItems;
-(id)approximateLocation;
-(id)universalStartDate;
-(id)universalEndDate;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(id)localStartDateComponents;
-(id)localEndDateComponents;
-(void)enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

