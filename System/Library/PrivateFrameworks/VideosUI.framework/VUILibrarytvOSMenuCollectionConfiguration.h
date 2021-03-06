/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VUICollectionConfiguration.h>

@class VUIMenuCollectionViewCell;

@interface VUILibrarytvOSMenuCollectionConfiguration : VUICollectionConfiguration {

	BOOL _shouldMarkFirstCellSelected;
	VUIMenuCollectionViewCell* _menuItemSizingCell;

}

@property (nonatomic,retain) VUIMenuCollectionViewCell * menuItemSizingCell;              //@synthesize menuItemSizingCell=_menuItemSizingCell - In the implementation block
@property (assign,nonatomic) BOOL shouldMarkFirstCellSelected;                            //@synthesize shouldMarkFirstCellSelected=_shouldMarkFirstCellSelected - In the implementation block
-(id)init;
-(double)minimumLineSpacing;
-(void)setShouldMarkFirstCellSelected:(BOOL)arg1 ;
-(BOOL)shouldMarkFirstCellSelected;
-(VUIMenuCollectionViewCell *)menuItemSizingCell;
-(void)setMenuItemSizingCell:(VUIMenuCollectionViewCell *)arg1 ;
-(id)generateCollectionView;
-(id)configureCollectionViewCellForCollectionView:(id)arg1 ForItem:(id)arg2 AtIndexPath:(id)arg3 ;
-(id)configureSizingCellForItem:(id)arg1 AtIndexPath:(id)arg2 ;
-(Class)classForCollectionViewCell;
@end

