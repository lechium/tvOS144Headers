/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceCheckInternal.framework/DeviceCheckInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface DCAssetFetcher : NSObject
+(id)sharedFetcher;
-(void)initiateMetadataFetchIgnoringCachesWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchAssetWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_queryMetadataWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_assetQuery;
-(void)_handleMissingMetadataWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleSuccessForQuery:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_validateAsset:(id)arg1 error:(id*)arg2 ;
-(void)fetchPublicKeyAssetWithCompletion:(/*^block*/id)arg1 ;
@end
