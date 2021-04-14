/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPNondurableMediaItem.h>

@class MPStoreItemMetadata;

@interface MPStorePlatformMediaItem : MPNondurableMediaItem {

	MPStoreItemMetadata* _storeItemMetadata;

}

@property (nonatomic,retain) MPStoreItemMetadata * storeItemMetadata;              //@synthesize storeItemMetadata=_storeItemMetadata - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultPropertyValues;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(id)artworkCatalog;
-(id)initWithStoreItemMetadata:(id)arg1 ;
-(id)_valueFromMetadataForProperty:(id)arg1 ;
-(MPStoreItemMetadata *)storeItemMetadata;
-(void)setStoreItemMetadata:(MPStoreItemMetadata *)arg1 ;
@end
