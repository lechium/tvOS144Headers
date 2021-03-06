/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ICStoreHLSAssetInfo, NSURL;

@interface MPStoreHLSAssetInfo : NSObject {

	ICStoreHLSAssetInfo* _internalInfo;

}

@property (nonatomic,copy,readonly) NSURL * playlistURL; 
@property (nonatomic,copy,readonly) NSURL * keyCertificateURL; 
@property (nonatomic,copy,readonly) NSURL * keyServerURL; 
@property (nonatomic,copy,readonly) NSURL * alternatePlaylistURL; 
@property (nonatomic,copy,readonly) NSURL * alternateKeyCertificateURL; 
@property (nonatomic,copy,readonly) NSURL * alternateKeyServerURL; 
@property (getter=isiTunesStoreStream,nonatomic,readonly) BOOL iTunesStoreStream; 
-(NSURL *)keyServerURL;
-(BOOL)isiTunesStoreStream;
-(NSURL *)keyCertificateURL;
-(NSURL *)alternatePlaylistURL;
-(NSURL *)alternateKeyCertificateURL;
-(NSURL *)alternateKeyServerURL;
-(NSURL *)playlistURL;
-(id)initWithiTunesCloudStoreHLSAssetInfo:(id)arg1 ;
@end

