/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AXAssetLoader.framework/AXAssetLoader
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AXAssetControllerObserver <NSObject>
@optional
-(void)assetController:(id)arg1 didFinishRefreshingAssets:(id)arg2 wasSuccessful:(BOOL)arg3 error:(id)arg4;
-(void)assetController:(id)arg1 asset:(id)arg2 downloadProgressTotalWritten:(long long)arg3 totalExpected:(long long)arg4 isStalled:(BOOL)arg5 expectedTimeRemaining:(double)arg6;
-(void)assetController:(id)arg1 didFinishDownloadingAsset:(id)arg2 wasSuccessful:(BOOL)arg3 error:(id)arg4 hasRemainingDownloads:(BOOL)arg5;
-(void)assetController:(id)arg1 didFinishPurgingAssets:(id)arg2 wasSuccessful:(BOOL)arg3 error:(id)arg4;
-(void)assetController:(id)arg1 willUpdateCatalogForPolicy:(id)arg2;
-(void)assetController:(id)arg1 didUpdateCatalogForPolicy:(id)arg2 wasSuccessful:(BOOL)arg3 error:(id)arg4;

@end

