/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PKDiscoveryCardViewDelegate;
@class PKDiscoveryCallToAction, PKDiscoveryMedia, UIImageView, PKContinuousButton, UILabel;

@interface PKDiscoveryCallToActionFooterView : UIView {

	PKDiscoveryCallToAction* _callToAction;
	PKDiscoveryMedia* _media;
	UIImageView* _iconImageView;
	PKContinuousButton* _button;
	UILabel* _titleLabel;
	UILabel* _editorialDescriptionLabel;
	UILabel* _expandedTitleLabel;
	UILabel* _expandedEditorialDescriptionLabel;
	long long _displayType;
	BOOL _hasIcon;
	BOOL _hasButton;
	BOOL _useAccessibilityLayout;
	/*^block*/id _callToActionTappedOverride;
	BOOL _showActivityIndicator;
	id<PKDiscoveryCardViewDelegate> _delegate;

}

@property (assign,nonatomic) BOOL showActivityIndicator;                                   //@synthesize showActivityIndicator=_showActivityIndicator - In the implementation block
@property (assign,nonatomic,__weak) id<PKDiscoveryCardViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long displayType;                                        //@synthesize displayType=_displayType - In the implementation block
-(id<PKDiscoveryCardViewDelegate>)delegate;
-(void)setDelegate:(id<PKDiscoveryCardViewDelegate>)arg1 ;
-(long long)displayType;
-(void)setDisplayType:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)_iconSize;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_buttonPressed:(id)arg1 ;
-(id)_titleLabelColor;
-(id)_titleLabelWithLocalizedTitle:(id)arg1 ;
-(id)_descriptionLabelWithLocalizedDescription:(id)arg1 ;
-(void)_loadImageData;
-(CGSize)_buttonSizeForBounds:(CGRect)arg1 ;
-(id)_titleLabelFont;
-(id)_editorialDescriptionLabelFont;
-(id)_descriptionLabelColor;
-(double)_buttonWidthForLabelWidth:(double)arg1 ;
-(id)initWithCallToAction:(id)arg1 displayType:(long long)arg2 ;
-(void)setShowActivityIndicator:(BOOL)arg1 ;
-(void)setCallToActionTappedOverride:(/*^block*/id)arg1 ;
-(BOOL)showActivityIndicator;
@end

