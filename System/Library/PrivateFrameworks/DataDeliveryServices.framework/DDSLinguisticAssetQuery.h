/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DataDeliveryServices/DDSAssetQuery.h>

@class DDSLinguisticAttributeFilter;

@interface DDSLinguisticAssetQuery : DDSAssetQuery

@property (nonatomic,readonly) DDSLinguisticAttributeFilter * filter; 
-(void)addRegionWithCountry:(id)arg1 province:(id)arg2 city:(id)arg3 ;
-(id)initWithLanguageIdentifier:(id)arg1 ;
@end

