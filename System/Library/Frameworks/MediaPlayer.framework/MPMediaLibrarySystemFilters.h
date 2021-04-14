/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MPMediaLibraryView;

@interface MPMediaLibrarySystemFilters : NSObject {

	MPMediaLibraryView* _libraryView;
	BOOL _shouldExcludePurchaseHistoryContent;

}
+(id)globalSerialQueue;
+(id)systemFiltersPerLibrary;
+(id)filtersForLibrary:(id)arg1 ;
-(void)_updateFilters;
-(id)_initWithLibrary:(id)arg1 ;
-(BOOL)shouldExcludePurchaseHistoryContent;
-(void)_cloudLibraryAvailabilityDidChange:(id)arg1 ;
@end
