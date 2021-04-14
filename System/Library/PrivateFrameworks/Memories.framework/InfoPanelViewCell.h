/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UILabel, UIImageView;

@interface InfoPanelViewCell : UICollectionViewCell {

	UILabel* _label;
	UIImageView* _checkmarkIcon;

}

@property (nonatomic,retain) UILabel * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIImageView * checkmarkIcon;              //@synthesize checkmarkIcon=_checkmarkIcon - In the implementation block
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setCheckmarkIcon:(UIImageView *)arg1 ;
-(UIImageView *)checkmarkIcon;
-(void)configureCell;
@end

