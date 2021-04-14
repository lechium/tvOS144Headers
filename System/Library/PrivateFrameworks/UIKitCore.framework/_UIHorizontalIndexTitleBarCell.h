/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class _UIFocusFastScrollingIndexBarEntry, UILabel, UIView;

@interface _UIHorizontalIndexTitleBarCell : UICollectionViewCell {

	_UIFocusFastScrollingIndexBarEntry* _entry;
	UILabel* _titleLabel;
	UIView* _roundedCornersBackground;

}

@property (nonatomic,retain) _UIFocusFastScrollingIndexBarEntry * entry;              //@synthesize entry=_entry - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * roundedCornersBackground;                       //@synthesize roundedCornersBackground=_roundedCornersBackground - In the implementation block
+(id)cellFont;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(_UIFocusFastScrollingIndexBarEntry *)entry;
-(void)setEntry:(_UIFocusFastScrollingIndexBarEntry *)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_updateColors;
-(void)updateForEntry:(id)arg1 ;
-(UIView *)roundedCornersBackground;
-(BOOL)_isAnotherIndexTitleCellFocused;
-(void)setRoundedCornersBackground:(UIView *)arg1 ;
@end

