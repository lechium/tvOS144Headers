/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ATAssetLinkDelegate <NSObject>
@required
-(void)assetLink:(id)arg1 didFinishAsset:(id)arg2 error:(id)arg3 retryable:(BOOL)arg4 cancelPendingAssetsInBatch:(BOOL)arg5;
-(void)assetLink:(id)arg1 didOpenWithPendingAssets:(id)arg2;
-(void)assetLink:(id)arg1 didCloseWithOutstandingAssets:(id)arg2;
-(void)assetLink:(id)arg1 didFinishAsset:(id)arg2 error:(id)arg3 retryable:(BOOL)arg4;
-(void)assetLink:(id)arg1 didUpdateAsset:(id)arg2 progress:(double)arg3;
-(void)assetLink:(id)arg1 didPauseAsseDownload:(id)arg2 error:(id)arg3;
-(void)assetLinkDidChange:(id)arg1;
-(void)assetLink:(id)arg1 didTransitionAssetStates:(id)arg2;
-(void)assetLink:(id)arg1 didUpdateDownloadPauseReasonForAssets:(id)arg2;

@end

