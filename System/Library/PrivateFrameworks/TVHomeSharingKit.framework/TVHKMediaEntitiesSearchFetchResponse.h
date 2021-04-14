/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TVHKMediaEntitiesFetchResponse;

@interface TVHKMediaEntitiesSearchFetchResponse : NSObject {

	unsigned long long _fromRevision;
	unsigned long long _toRevision;
	TVHKMediaEntitiesFetchResponse* _mediaItemsResponse;
	TVHKMediaEntitiesFetchResponse* _albumsResponse;
	TVHKMediaEntitiesFetchResponse* _albumArtistsResponse;

}

@property (assign,nonatomic) unsigned long long fromRevision;                                    //@synthesize fromRevision=_fromRevision - In the implementation block
@property (assign,nonatomic) unsigned long long toRevision;                                      //@synthesize toRevision=_toRevision - In the implementation block
@property (nonatomic,retain) TVHKMediaEntitiesFetchResponse * mediaItemsResponse;                //@synthesize mediaItemsResponse=_mediaItemsResponse - In the implementation block
@property (nonatomic,retain) TVHKMediaEntitiesFetchResponse * albumsResponse;                    //@synthesize albumsResponse=_albumsResponse - In the implementation block
@property (nonatomic,retain) TVHKMediaEntitiesFetchResponse * albumArtistsResponse;              //@synthesize albumArtistsResponse=_albumArtistsResponse - In the implementation block
-(id)description;
-(id)init;
-(unsigned long long)toRevision;
-(unsigned long long)fromRevision;
-(void)setFromRevision:(unsigned long long)arg1 ;
-(void)setToRevision:(unsigned long long)arg1 ;
-(void)setMediaItemsResponse:(TVHKMediaEntitiesFetchResponse *)arg1 ;
-(void)setAlbumsResponse:(TVHKMediaEntitiesFetchResponse *)arg1 ;
-(void)setAlbumArtistsResponse:(TVHKMediaEntitiesFetchResponse *)arg1 ;
-(TVHKMediaEntitiesFetchResponse *)mediaItemsResponse;
-(TVHKMediaEntitiesFetchResponse *)albumsResponse;
-(TVHKMediaEntitiesFetchResponse *)albumArtistsResponse;
@end

