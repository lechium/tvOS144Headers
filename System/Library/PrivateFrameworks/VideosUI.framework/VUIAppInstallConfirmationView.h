/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUIAppInstallLockup, UILabel, VUIBuyButtonLockup, NSLayoutConstraint, NSString, UIButton;

@interface VUIAppInstallConfirmationView : UIView {

	BOOL _didLayout;
	VUIAppInstallLockup* _lockupView;
	UILabel* _imageSubtitleView;
	VUIBuyButtonLockup* _buyLockup;
	UILabel* _titleView;
	UILabel* _messageView;
	NSLayoutConstraint* _buttonHeightConstraint;
	NSString* _title;
	NSString* _message;
	UIButton* _actionButton;
	UIButton* _cancelButton;
	UIButton* _appStoreButton;
	UIButton* _secondaryLinkButton;

}

@property (nonatomic,retain) VUIAppInstallLockup * lockupView;              //@synthesize lockupView=_lockupView - In the implementation block
@property (nonatomic,copy) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                              //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) UIButton * actionButton;                       //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                       //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIButton * appStoreButton;                     //@synthesize appStoreButton=_appStoreButton - In the implementation block
@property (nonatomic,retain) UIButton * secondaryLinkButton;                //@synthesize secondaryLinkButton=_secondaryLinkButton - In the implementation block
+(CGSize)iconSize;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAppName:(id)arg1 ;
-(void)setAppIcon:(id)arg1 ;
-(UIButton *)actionButton;
-(void)setActionButton:(UIButton *)arg1 ;
-(void)layoutSubviews;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(VUIAppInstallLockup *)lockupView;
-(void)setLockupView:(VUIAppInstallLockup *)arg1 ;
-(id)_buttonWithTitleForTV:(id)arg1 textStyle:(id)arg2 ;
-(void)setAgeRating:(id)arg1 ;
-(void)setIAP:(id)arg1 ;
-(void)_layoutForTvos;
-(void)_layoutForIos;
-(void)setAppSubtitle:(id)arg1 ;
-(UIButton *)appStoreButton;
-(void)setAppStoreButton:(UIButton *)arg1 ;
-(UIButton *)secondaryLinkButton;
-(void)setSecondaryLinkButton:(UIButton *)arg1 ;
@end

