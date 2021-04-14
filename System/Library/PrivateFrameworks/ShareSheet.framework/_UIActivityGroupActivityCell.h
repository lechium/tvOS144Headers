/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ShareSheet/ShareSheet-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class _UIActivityGroupActivityCellTitleLabel, UIImageView, UIView, _UIHostActivityProxy, CALayer;

@interface _UIActivityGroupActivityCell : UICollectionViewCell {

	unsigned long long _sequence;
	_UIActivityGroupActivityCellTitleLabel* _titleLabel;
	UIImageView* _imageView;
	UIView* _imageSlot;
	UIView* _titleSlot;
	_UIHostActivityProxy* _activityProxy;
	UIView* _shadowView;
	UIImageView* _highlightedImageView;
	CALayer* _highlightLayer;

}

@property (nonatomic,retain) _UIActivityGroupActivityCellTitleLabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                          //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * imageSlot;                                               //@synthesize imageSlot=_imageSlot - In the implementation block
@property (nonatomic,retain) UIView * titleSlot;                                               //@synthesize titleSlot=_titleSlot - In the implementation block
@property (nonatomic,retain) UIView * shadowView;                                              //@synthesize shadowView=_shadowView - In the implementation block
@property (nonatomic,retain) UIImageView * highlightedImageView;                               //@synthesize highlightedImageView=_highlightedImageView - In the implementation block
@property (nonatomic,retain) CALayer * highlightLayer;                                         //@synthesize highlightLayer=_highlightLayer - In the implementation block
@property (assign,nonatomic) unsigned long long sequence;                                      //@synthesize sequence=_sequence - In the implementation block
@property (nonatomic,retain) _UIHostActivityProxy * activityProxy;                             //@synthesize activityProxy=_activityProxy - In the implementation block
+(CGSize)preferredSizeForSheetWidth:(double)arg1 sizeCategory:(id)arg2 titleLabelText:(id)arg3 screenScale:(double)arg4 ;
+(void)invalidatePreferredSizes;
-(void)setSequence:(unsigned long long)arg1 ;
-(unsigned long long)sequence;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIImageView *)imageView;
-(void)layoutSubviews;
-(_UIActivityGroupActivityCellTitleLabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTitleLabel:(_UIActivityGroupActivityCellTitleLabel *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setHighlightLayer:(CALayer *)arg1 ;
-(CALayer *)highlightLayer;
-(UIImageView *)highlightedImageView;
-(void)setHighlightedImageView:(UIImageView *)arg1 ;
-(UIView *)shadowView;
-(void)setActivityProxy:(_UIHostActivityProxy *)arg1 ;
-(_UIHostActivityProxy *)activityProxy;
-(UIView *)imageSlot;
-(void)setImageSlot:(UIView *)arg1 ;
-(void)setShadowView:(UIView *)arg1 ;
-(id)draggingView;
-(void)setTitleSlot:(UIView *)arg1 ;
-(UIView *)titleSlot;
-(void)initHighlightLayerIfNeeded;
-(void)initHighlightedImageViewIfNeeded;
-(void)updateHighlightedImageViewIfNeeded;
@end

