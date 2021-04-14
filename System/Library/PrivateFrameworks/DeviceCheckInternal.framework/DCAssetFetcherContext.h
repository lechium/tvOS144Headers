/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceCheckInternal.framework/DeviceCheckInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface DCAssetFetcherContext : NSObject {

	BOOL _allowCatalogRefresh;
	BOOL _ignoreCachedMetadata;

}

@property (assign,nonatomic) BOOL allowCatalogRefresh;               //@synthesize allowCatalogRefresh=_allowCatalogRefresh - In the implementation block
@property (assign,nonatomic) BOOL ignoreCachedMetadata;              //@synthesize ignoreCachedMetadata=_ignoreCachedMetadata - In the implementation block
-(id)description;
-(BOOL)allowCatalogRefresh;
-(void)setAllowCatalogRefresh:(BOOL)arg1 ;
-(BOOL)ignoreCachedMetadata;
-(void)setIgnoreCachedMetadata:(BOOL)arg1 ;
@end

