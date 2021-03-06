/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSSet;


@protocol PXPlacesGeotaggedItemDataSource <NSObject>
@property (__weak) id<PXPlacesGeotaggedItemDataSourceDelegate> delegate; 
@property (readonly) NSSet * allItems; 
@property (nonatomic,readonly) long long numberOfItems; 
@required
-(id<PXPlacesGeotaggedItemDataSourceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(long long)numberOfItems;
-(NSSet *)allItems;
-(id)findItemsInMapRect:(SCD_Struct_PX2)arg1;
-(SCD_Struct_PX2*)minimalEncompassingMapRect;

@end

