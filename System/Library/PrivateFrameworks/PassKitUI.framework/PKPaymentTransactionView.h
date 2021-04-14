/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIImageView, UIColor, NSString, UIImage, NSAttributedString;

@interface PKPaymentTransactionView : UIView {

	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UILabel* _tertiaryLabel;
	UILabel* _rewardsAmountLabel;
	UILabel* _transactionValueLabel;
	UIImageView* _primaryImageView;
	UIImageView* _disclosureView;
	BOOL _isTemplateLayout;
	BOOL _hideRewardsBackground;
	BOOL _showsAvatarView;
	BOOL _showsDisclosureView;
	BOOL _allowPrimaryStringExpansion;
	BOOL _strokeImage;
	UIColor* _primaryColor;
	UIColor* _secondaryColor;
	NSString* _primaryString;
	NSString* _secondaryString;
	NSString* _tertiaryString;
	UIImage* _primaryImage;

}

@property (nonatomic,retain) UIColor * primaryColor;                                           //@synthesize primaryColor=_primaryColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryColor;                                         //@synthesize secondaryColor=_secondaryColor - In the implementation block
@property (nonatomic,retain) NSString * primaryString;                                         //@synthesize primaryString=_primaryString - In the implementation block
@property (nonatomic,retain) NSString * secondaryString;                                       //@synthesize secondaryString=_secondaryString - In the implementation block
@property (nonatomic,retain) NSString * tertiaryString;                                        //@synthesize tertiaryString=_tertiaryString - In the implementation block
@property (nonatomic,retain) NSAttributedString * transactionValueAttributedText; 
@property (nonatomic,retain) NSString * rewardsValueString; 
@property (assign,nonatomic) BOOL hideRewardsBackground;                                       //@synthesize hideRewardsBackground=_hideRewardsBackground - In the implementation block
@property (assign,nonatomic) BOOL showsAvatarView;                                             //@synthesize showsAvatarView=_showsAvatarView - In the implementation block
@property (assign,nonatomic) BOOL showsDisclosureView;                                         //@synthesize showsDisclosureView=_showsDisclosureView - In the implementation block
@property (assign,nonatomic) BOOL allowPrimaryStringExpansion;                                 //@synthesize allowPrimaryStringExpansion=_allowPrimaryStringExpansion - In the implementation block
@property (nonatomic,retain) UIImage * primaryImage;                                           //@synthesize primaryImage=_primaryImage - In the implementation block
@property (assign,nonatomic) BOOL strokeImage;                                                 //@synthesize strokeImage=_strokeImage - In the implementation block
+(id)defaultTertiaryLabelFont;
-(void)setPrimaryImage:(UIImage *)arg1 ;
-(UIImage *)primaryImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)primaryString;
-(UIColor *)primaryColor;
-(void)setPrimaryColor:(UIColor *)arg1 ;
-(UIColor *)secondaryColor;
-(void)setSecondaryColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setPrimaryString:(NSString *)arg1 ;
-(NSString *)secondaryString;
-(void)setSecondaryString:(NSString *)arg1 ;
-(NSString *)tertiaryString;
-(void)setTertiaryString:(NSString *)arg1 ;
-(void)_updateAvatarView;
-(void)createSubviews;
-(void)setPrimaryImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)setShowsAvatarView:(BOOL)arg1 ;
-(void)setTransactionValueAttributedText:(NSAttributedString *)arg1 ;
-(void)setShowsDisclosureView:(BOOL)arg1 ;
-(void)setAllowPrimaryStringExpansion:(BOOL)arg1 ;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(id)_disclosureView;
-(void)resetFonts;
-(void)setRewardsValueString:(NSString *)arg1 ;
-(void)setStrokeImage:(BOOL)arg1 ;
-(id)defaultPrimaryColor;
-(id)defaultSecondaryColor;
-(void)_updateImageViewDynamicColors;
-(BOOL)_shouldUseStackedLayout;
-(double)_defaultLayoutHeight;
-(void)_updatePrimaryLabelString;
-(void)setHideRewardsBackground:(BOOL)arg1 ;
-(NSString *)rewardsValueString;
-(NSAttributedString *)transactionValueAttributedText;
-(BOOL)shouldShowTransactionPreviewForTouchAtPoint:(CGPoint)arg1 inView:(id)arg2 ;
-(BOOL)hideRewardsBackground;
-(BOOL)showsAvatarView;
-(BOOL)showsDisclosureView;
-(BOOL)allowPrimaryStringExpansion;
-(BOOL)strokeImage;
@end

