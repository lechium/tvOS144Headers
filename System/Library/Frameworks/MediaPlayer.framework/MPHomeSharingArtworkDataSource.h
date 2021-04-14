/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPAbstractNetworkArtworkDataSource.h>

@class HSHomeSharingLibrary;

@interface MPHomeSharingArtworkDataSource : MPAbstractNetworkArtworkDataSource {

	HSHomeSharingLibrary* _library;

}

@property (nonatomic,retain) HSHomeSharingLibrary * library;              //@synthesize library=_library - In the implementation block
-(HSHomeSharingLibrary *)library;
-(void)setLibrary:(HSHomeSharingLibrary *)arg1 ;
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg1 ;
-(void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)supportedSizesForCatalog:(id)arg1 ;
-(id)requestForCatalog:(id)arg1 size:(CGSize)arg2 ;
-(id)cacheKeyForCatalog:(id)arg1 size:(CGSize)arg2 ;
-(BOOL)shouldLookForLargerImageRepresentationsWhenBestRepresentationIsUnavailable;
@end

