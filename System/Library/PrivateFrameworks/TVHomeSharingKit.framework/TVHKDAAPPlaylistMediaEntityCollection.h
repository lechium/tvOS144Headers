/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHKMediaEntityCollection.h>

@class NSString, TVHKMediaEntityType, TVHKMediaEntityIdentifier, TVHKDMAPPlaylistIdentifier;

@interface TVHKDAAPPlaylistMediaEntityCollection : TVHKMediaEntityCollection {

	NSString* _imageIdentifier;
	TVHKMediaEntityType* _type;
	unsigned long long _playlistType;
	TVHKMediaEntityIdentifier* _parentPlaylistIdentifier;
	TVHKDMAPPlaylistIdentifier* _playlistIdentifier;

}

@property (nonatomic,copy) TVHKDMAPPlaylistIdentifier * playlistIdentifier;              //@synthesize playlistIdentifier=_playlistIdentifier - In the implementation block
+(unsigned long long)_playlistTypeFromDMAPEntity:(id)arg1 ;
-(id)type;
-(id)identifier;
-(unsigned long long)playlistType;
-(id)imageIdentifier;
-(TVHKDMAPPlaylistIdentifier *)playlistIdentifier;
-(id)initWithMediaServerIdentifier:(id)arg1 requestedProperties:(id)arg2 entity:(id)arg3 ;
-(id)initWithMediaServerIdentifier:(id)arg1 requestedProperties:(id)arg2 entity:(id)arg3 kind:(id)arg4 ;
-(id)isAutoGenerated;
-(id)isOrganizational;
-(id)mediaItemCount;
-(id)parentPlaylistIdentifier;
-(void)setPlaylistIdentifier:(TVHKDMAPPlaylistIdentifier *)arg1 ;
@end

