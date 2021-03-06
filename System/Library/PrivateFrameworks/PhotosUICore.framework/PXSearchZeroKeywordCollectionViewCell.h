/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, UILabel, PXRoundedCornerOverlayView;

@interface PXSearchZeroKeywordCollectionViewCell : UICollectionViewCell {

	UIImageView* _imageView;
	UILabel* _textLabel;
	PXRoundedCornerOverlayView* _imageCornerOverlayView;

}

@property (nonatomic,retain) UILabel * textLabel;                                                //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                            //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) PXRoundedCornerOverlayView * imageCornerOverlayView;              //@synthesize imageCornerOverlayView=_imageCornerOverlayView - In the implementation block
+(CGSize)thumbnailSize;
+(id)reuseIdentifier;
+(double)verticalSpacing;
+(CGSize)cellSizeWithoutTextLabel;
+(CGSize)cellSizeWithTextLabelNumberOfLines:(unsigned long long)arg1 ;
+(CGSize)cellSizeForAccessibilityTextWithoutTextLabelUsingCollectionInset:(UIEdgeInsets)arg1 collectionCellSpacing:(double)arg2 screenWidth:(double)arg3 ;
+(CGSize)cellSizeForAccessibilityTextWithTextLabelNumberOfLines:(unsigned long long)arg1 collectionInset:(UIEdgeInsets)arg2 collectionCellSpacing:(double)arg3 screenWidth:(double)arg4 ;
+(CGSize)thumbnailSizeForAccessibilityTextUsingCollectionInset:(UIEdgeInsets)arg1 cellSpacing:(double)arg2 screenWidth:(double)arg3 ;
+(CGSize)_thumbnailSizeWithMetric:(double)arg1 ;
+(double)expectedNumberOfCellsVisibleWithAccessibilityText:(BOOL)arg1 withInset:(UIEdgeInsets)arg2 cellSpacing:(double)arg3 screenWidth:(double)arg4 ;
+(double)_calculateHeightNeededForTextLabelWithNumberOfLines:(unsigned long long)arg1 ;
+(id)attributedStringForCellLabelWithString:(id)arg1 ;
+(BOOL)cellLabelTextNeedsMultipleLines:(id)arg1 cellWidth:(double)arg2 ;
+(id)thumbnailWidthInterpolator;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)textLabel;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setTextLabel:(UILabel *)arg1 ;
-(PXRoundedCornerOverlayView *)imageCornerOverlayView;
@end

