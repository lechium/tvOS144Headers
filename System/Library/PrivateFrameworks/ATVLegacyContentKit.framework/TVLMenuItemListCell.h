/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVKit/TVTableViewCell.h>
#import <libobjc.A.dylib/TVLMenuItemCell.h>

@class TVLMenuItemView, NSString;

@interface TVLMenuItemListCell : TVTableViewCell <TVLMenuItemCell> {

	TVLMenuItemView* _menuItemView;

}

@property (readonly) TVLMenuItemView * menuItemView;                //@synthesize menuItemView=_menuItemView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)layoutSubviews;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)configureWithMenuItemElement:(id)arg1 ;
-(id)labelForMarquee;
-(TVLMenuItemView *)menuItemView;
@end

