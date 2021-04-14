/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MPLazySectionedCollectionDataSource <NSObject>
@optional
-(id)sectionIndexTitles;
-(id)identifiersForItemAtIndexPath:(id)arg1;
-(id)identifiersForSectionAtIndex:(long long)arg1;
-(id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1;
-(NSRange*)optionalSectionIndexTitlesRange;
-(long long)indexOfSectionForSectionIndexTitleAtIndex:(long long)arg1;
-(BOOL)hasSameContentAsDataSource:(id)arg1;

@required
-(id)sectionAtIndex:(unsigned long long)arg1;
-(unsigned long long)numberOfSections;
-(id)itemAtIndexPath:(id)arg1;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;

@end

