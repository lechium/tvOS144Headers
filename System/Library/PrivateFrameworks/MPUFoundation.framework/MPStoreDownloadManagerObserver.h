/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MPStoreDownloadManagerObserver <NSObject>
@optional
-(void)downloadManagerNetworkUsageDidChange:(id)arg1;
-(void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
-(void)downloadManager:(id)arg1 didAddActiveDownloads:(id)arg2 removeActiveDownloads:(id)arg3;
-(void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
-(void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2;
-(void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2;
-(void)downloadManager:(id)arg1 downloadsDidProgress:(id)arg2;

@end

