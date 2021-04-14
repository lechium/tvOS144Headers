/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MPMediaDownloadObserver <NSObject>
@optional
-(void)downloadManager:(id)arg1 didEnqueueAssetDownloads:(id)arg2 didRemoveAssetDownloads:(id)arg3;
-(void)downloadManager:(id)arg1 didUpdateDownloadProgress:(id)arg2;
-(void)downloadManager:(id)arg1 didFinishAsset:(id)arg2 withError:(id)arg3;
-(void)downloadManager:(id)arg1 didCancelAssets:(id)arg2;
-(void)downloadManager:(id)arg1 didChangeDownloadPausedReasonForAssets:(id)arg2;

@end

