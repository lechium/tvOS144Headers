/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIFocusableCollectionViewCell.h>
#import <libobjc.A.dylib/VUIRentalExpirationLabelDelegate.h>

@class VUIOfferView, VUILabel, VUIVideosImageView, IKViewElement, NSString;

@interface VUIOfferCell : VUIFocusableCollectionViewCell <VUIRentalExpirationLabelDelegate> {

	VUIOfferView* _offerView;
	VUILabel* _belowCardTextLabel;
	VUIVideosImageView* _secondChinImageView;
	IKViewElement* _viewElement;
	CGSize _cardSize;

}

@property (nonatomic,retain) IKViewElement * viewElement;                           //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) VUIOfferView * offerView;                              //@synthesize offerView=_offerView - In the implementation block
@property (nonatomic,retain) VUILabel * belowCardTextLabel;                         //@synthesize belowCardTextLabel=_belowCardTextLabel - In the implementation block
@property (nonatomic,retain) VUIVideosImageView * secondChinImageView;              //@synthesize secondChinImageView=_secondChinImageView - In the implementation block
@property (assign,nonatomic) CGSize cardSize;                                       //@synthesize cardSize=_cardSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)configureViewWithElement:(id)arg1 existingCell:(id)arg2 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(IKViewElement *)viewElement;
-(VUIOfferView *)offerView;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)rentalExpirationLabelNeedsRelayout:(id)arg1 ;
-(VUILabel *)belowCardTextLabel;
-(VUIVideosImageView *)secondChinImageView;
-(void)setCardSize:(CGSize)arg1 ;
-(void)setOfferView:(VUIOfferView *)arg1 ;
-(void)setBelowCardTextLabel:(VUILabel *)arg1 ;
-(void)setSecondChinImageView:(VUIVideosImageView *)arg1 ;
-(void)_updateBackgroundAndHighlightColor;
-(CGSize)cardSize;
@end

