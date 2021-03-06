/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/TVLMenuItemCell.h>

@class _TVLLikeDislikeView, NSString, UILabel, TVImageView, TVImageProxy;

@interface TVLComboMenuItemView : UIView <TVLMenuItemCell> {

	_TVLLikeDislikeView* _likeDislikeView;
	NSString* _title;
	NSString* _subtitle;
	NSString* _bottomLeftText;
	NSString* _bottomCenterText;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _bottomLeftLabel;
	UILabel* _bottomCenterLabel;
	TVImageView* _imageView;

}

@property (nonatomic,retain) UILabel * titleLabel;                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                  //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * bottomLeftLabel;                //@synthesize bottomLeftLabel=_bottomLeftLabel - In the implementation block
@property (nonatomic,retain) UILabel * bottomCenterLabel;              //@synthesize bottomCenterLabel=_bottomCenterLabel - In the implementation block
@property (nonatomic,retain) TVImageView * imageView;                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                        //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * bottomLeftText;                  //@synthesize bottomLeftText=_bottomLeftText - In the implementation block
@property (nonatomic,copy) NSString * bottomCenterText;                //@synthesize bottomCenterText=_bottomCenterText - In the implementation block
@property (nonatomic,retain) TVImageProxy * imageProxy; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(id)initWithFrame:(CGRect)arg1 ;
-(TVImageView *)imageView;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)_defaultLabel;
-(void)setImageView:(TVImageView *)arg1 ;
-(TVImageProxy *)imageProxy;
-(void)setImageProxy:(TVImageProxy *)arg1 ;
-(void)configureWithMenuItemElement:(id)arg1 ;
-(id)_defaultTitleLabel;
-(UILabel *)bottomLeftLabel;
-(void)setBottomLeftText:(NSString *)arg1 ;
-(UILabel *)bottomCenterLabel;
-(void)setBottomCenterText:(NSString *)arg1 ;
-(NSString *)bottomLeftText;
-(NSString *)bottomCenterText;
-(void)setBottomLeftLabel:(UILabel *)arg1 ;
-(void)setBottomCenterLabel:(UILabel *)arg1 ;
@end

