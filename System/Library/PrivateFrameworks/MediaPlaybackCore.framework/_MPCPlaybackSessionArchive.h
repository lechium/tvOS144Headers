/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaServices/MSVSegmentedCodingPackage.h>

@class MPNowPlayingContentItem, UIImage, NSString, NSDate;

@interface _MPCPlaybackSessionArchive : MSVSegmentedCodingPackage {

	MPNowPlayingContentItem* _contentItem;
	UIImage* _artworkImage;
	NSString* _identifier;
	NSDate* _lastModifiedDate;

}

@property (nonatomic,copy,readonly) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) MPNowPlayingContentItem * contentItem;              //@synthesize contentItem=_contentItem - In the implementation block
@property (nonatomic,copy) UIImage * artworkImage;                             //@synthesize artworkImage=_artworkImage - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate;                 //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
+(id)packageTypeIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(NSString *)identifier;
-(NSDate *)lastModifiedDate;
-(BOOL)saveWithError:(id*)arg1 ;
-(BOOL)writeWithError:(id*)arg1 ;
-(void)setContentItem:(MPNowPlayingContentItem *)arg1 ;
-(MPNowPlayingContentItem *)contentItem;
-(id)initWithURL:(id)arg1 identifier:(id)arg2 ;
-(UIImage *)artworkImage;
-(void)setArtworkImage:(UIImage *)arg1 ;
@end

