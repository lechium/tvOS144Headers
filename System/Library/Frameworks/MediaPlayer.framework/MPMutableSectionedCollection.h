/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPSectionedCollection.h>

@interface MPMutableSectionedCollection : MPSectionedCollection
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeAllObjects;
-(void)appendItem:(id)arg1 ;
-(void)_initializeAsEmptySectionedCollection;
-(void)insertSection:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeSectionAtIndex:(long long)arg1 ;
-(void)moveSectionFromIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(void)replaceSectionAtIndex:(long long)arg1 withObject:(id)arg2 ;
-(void)appendSection:(id)arg1 ;
-(void)insertItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)removeItemAtIndexPath:(id)arg1 ;
-(void)replaceObjectAtIndexPath:(id)arg1 withObject:(id)arg2 ;
-(void)moveItemFromIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)appendItems:(id)arg1 ;
-(void)replaceSectionsUsingBlock:(/*^block*/id)arg1 ;
-(void)replaceItemsUsingBlock:(/*^block*/id)arg1 ;
@end

