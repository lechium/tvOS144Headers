/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, ICURLBag, NSDate, NSURL, NSString, ICStoreFinanceItemMetadata, NSArray, ICStoreHLSAssetInfo;

@interface ICStoreMediaResponseItem : NSObject <NSCopying> {

	NSDictionary* _itemResponseDictionary;
	ICURLBag* _urlBag;
	NSDate* _assetExpirationDate;

}

@property (nonatomic,copy) NSDate * assetExpirationDate;                                //@synthesize assetExpirationDate=_assetExpirationDate - In the implementation block
@property (nonatomic,readonly) long long storeAdamID; 
@property (nonatomic,copy,readonly) NSURL * artworkURL; 
@property (nonatomic,copy,readonly) NSURL * cancelDownloadURL; 
@property (nonatomic,copy,readonly) NSString * downloadIdentifier; 
@property (nonatomic,readonly) BOOL isPurchasedRedownload; 
@property (nonatomic,copy,readonly) ICStoreFinanceItemMetadata * metadata; 
@property (nonatomic,copy,readonly) NSDate * purchaseDate; 
@property (nonatomic,copy,readonly) NSString * redownloadParameters; 
@property (nonatomic,copy,readonly) NSArray * fileAssets; 
@property (nonatomic,copy,readonly) ICStoreHLSAssetInfo * hlsAsset; 
@property (nonatomic,readonly) id suzeLeaseID; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(ICStoreFinanceItemMetadata *)metadata;
-(NSString *)downloadIdentifier;
-(NSURL *)artworkURL;
-(NSDate *)purchaseDate;
-(NSURL *)cancelDownloadURL;
-(long long)storeAdamID;
-(NSArray *)fileAssets;
-(id)initWithItemResponseDictionary:(id)arg1 urlBag:(id)arg2 ;
-(BOOL)isPurchasedRedownload;
-(NSString *)redownloadParameters;
-(id)suzeLeaseID;
-(ICStoreHLSAssetInfo *)hlsAsset;
-(id)downloadableAsset;
-(id)downloadableAssetMatchingFlavorType:(long long)arg1 ;
-(NSDate *)assetExpirationDate;
-(void)setAssetExpirationDate:(NSDate *)arg1 ;
@end
