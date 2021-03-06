/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol DDSAssetProvidingDelegate <NSObject>
@required
-(void)didCompleteDownloadForAssertions:(id)arg1 error:(id)arg2;
-(void)didCompleteDownloadForAssertion:(id)arg1 error:(id)arg2;
-(void)didChangeDownloadState:(unsigned long long)arg1 forAsset:(id)arg2;
-(void)didUpdateCatalogWithError:(id)arg1;
-(void)didBeginUpdateCatalog;

@end

