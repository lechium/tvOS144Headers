/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MediaPlayer/MediaPlayer-Structs.h>
@interface MPModelLibraryResponseKeepLocalStatusConfiguration : NSObject {

	/*^block*/id _downloadablePlaylistItemEntityQueryBlock;
	shared_ptr<mlcore::EntityQuery>* _downloadableItemsQuery;

}

@property (nonatomic,copy) id downloadablePlaylistItemEntityQueryBlock;                            //@synthesize downloadablePlaylistItemEntityQueryBlock=_downloadablePlaylistItemEntityQueryBlock - In the implementation block
@property (assign,nonatomic) shared_ptr<mlcore::EntityQuery>* downloadableItemsQuery;              //@synthesize downloadableItemsQuery=_downloadableItemsQuery - In the implementation block
-(void)setDownloadablePlaylistItemEntityQueryBlock:(id)arg1 ;
-(id)downloadablePlaylistItemEntityQueryBlock;
-(void)setDownloadableItemsQuery:(shared_ptr<mlcore::EntityQuery>*)arg1 ;
-(shared_ptr<mlcore::EntityQuery>*)downloadableItemsQuery;
@end

