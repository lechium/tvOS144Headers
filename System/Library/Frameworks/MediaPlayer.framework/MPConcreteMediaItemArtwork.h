/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMediaItemArtwork.h>

@class MPArtworkCatalog;

@interface MPConcreteMediaItemArtwork : MPMediaItemArtwork {

	MPArtworkCatalog* _catalog;
	CGRect _bounds;

}

@property (nonatomic,readonly) MPArtworkCatalog * artworkCatalog; 
-(CGRect)bounds;
-(MPArtworkCatalog *)artworkCatalog;
-(id)initWithArtworkCatalog:(id)arg1 ;
-(id)initWithArtworkCatalog:(id)arg1 allowsNetworking:(BOOL)arg2 ;
@end

