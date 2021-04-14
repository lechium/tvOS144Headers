/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GEOTileServerProxyDelegate <NSObject>
@optional
-(void)proxyDidDownloadRegionalResources:(id)arg1;

@required
-(void)proxy:(id)arg1 loadedTile:(id)arg2 forKey:(const GEOTileKey*)arg3 info:(id)arg4;
-(void)proxy:(id)arg1 failedToLoadTiles:(id)arg2 error:(id)arg3;
-(void)proxy:(id)arg1 failedToLoadAllPendingTilesWithError:(id)arg2;
-(void)proxy:(id)arg1 willGoToNetworkForTiles:(id)arg2;
-(void)proxy:(id)arg1 canShrinkDiskCacheByAmount:(unsigned long long)arg2;
-(void)proxyDidDeleteExternalTileData:(id)arg1;

@end

