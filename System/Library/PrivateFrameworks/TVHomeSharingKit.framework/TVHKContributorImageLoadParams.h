/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHKImageLoadParams.h>

@class NSString;

@interface TVHKContributorImageLoadParams : NSObject <TVHKImageLoadParams> {

	NSString* _imageIdentifier;
	NSString* _contributorName;
	unsigned long long _mediaItemType;
	unsigned long long _mediaCategoryType;
	NSString* _mediaItemTitle;
	unsigned long long _storeID;
	unsigned long long _storefrontID;

}

@property (nonatomic,copy) NSString * contributorName;                          //@synthesize contributorName=_contributorName - In the implementation block
@property (assign,nonatomic) unsigned long long mediaItemType;                  //@synthesize mediaItemType=_mediaItemType - In the implementation block
@property (assign,nonatomic) unsigned long long mediaCategoryType;              //@synthesize mediaCategoryType=_mediaCategoryType - In the implementation block
@property (nonatomic,copy) NSString * mediaItemTitle;                           //@synthesize mediaItemTitle=_mediaItemTitle - In the implementation block
@property (assign,nonatomic) unsigned long long storeID;                        //@synthesize storeID=_storeID - In the implementation block
@property (assign,nonatomic) unsigned long long storefrontID;                   //@synthesize storefrontID=_storefrontID - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageIdentifier;                 //@synthesize imageIdentifier=_imageIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)imageLoadParamsWithContributorName:(id)arg1 mediaItem:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)debugDescription;
-(NSString *)description;
-(unsigned long long)storeID;
-(void)setStoreID:(unsigned long long)arg1 ;
-(unsigned long long)mediaItemType;
-(void)setMediaItemType:(unsigned long long)arg1 ;
-(unsigned long long)storefrontID;
-(void)setStorefrontID:(unsigned long long)arg1 ;
-(NSString *)imageIdentifier;
-(unsigned long long)mediaCategoryType;
-(void)setContributorName:(NSString *)arg1 ;
-(void)setMediaCategoryType:(unsigned long long)arg1 ;
-(void)setMediaItemTitle:(NSString *)arg1 ;
-(NSString *)contributorName;
-(NSString *)mediaItemTitle;
@end
