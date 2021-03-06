/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UILabel, UIImageView, UIButton, NSString, UIImage;

@interface PKDashboardMessageCell : UITableViewCell {

	UILabel* _labelTitle;
	UILabel* _labelMessage;
	UIImageView* _iconImageView;
	UIButton* _dismissButton;
	BOOL _isTemplateLayout;
	BOOL _smallDevice;
	NSString* _title;
	NSString* _message;
	UIImage* _iconImage;
	UIImage* _dismissImage;
	/*^block*/id _actionOnDismiss;

}

@property (assign,nonatomic) BOOL smallDevice;                      //@synthesize smallDevice=_smallDevice - In the implementation block
@property (nonatomic,readonly) UILabel * labelTitle;                //@synthesize labelTitle=_labelTitle - In the implementation block
@property (nonatomic,readonly) UILabel * labelMessage;              //@synthesize labelMessage=_labelMessage - In the implementation block
@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                      //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                   //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) UIImage * dismissImage;                //@synthesize dismissImage=_dismissImage - In the implementation block
@property (nonatomic,copy) id actionOnDismiss;                      //@synthesize actionOnDismiss=_actionOnDismiss - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIImage *)iconImage;
-(void)setIconImage:(UIImage *)arg1 ;
-(void)setActionOnDismiss:(id)arg1 ;
-(id)actionOnDismiss;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(void)dismissButtonPressed:(id)arg1 ;
-(void)setDismissImage:(UIImage *)arg1 ;
-(BOOL)smallDevice;
-(void)setSmallDevice:(BOOL)arg1 ;
-(UILabel *)labelTitle;
-(UILabel *)labelMessage;
-(UIImage *)dismissImage;
@end

