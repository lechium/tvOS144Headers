/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CertInfo/CertInfo-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIImage, UILabel, _CertInfoActionButton, _CertInfoGradientLabel, NSString;

@interface _CertInfoTrustSummaryHeaderCell : UITableViewCell {

	UIImage* _certificateImage;
	UIImage* _notTrustedGradient;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	_CertInfoActionButton* _actionButton;
	_CertInfoGradientLabel* _trustedLabel;
	BOOL _trusted;

}

@property (nonatomic,__weak,readonly) _CertInfoActionButton * actionButton; 
@property (nonatomic,readonly) double rowHeight; 
@property (nonatomic,copy) NSString * trustTitle; 
@property (nonatomic,copy) NSString * trustSubtitle; 
@property (assign,getter=isTrusted,nonatomic) BOOL trusted;                              //@synthesize trusted=_trusted - In the implementation block
-(BOOL)isTrusted;
-(void)setExpired:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(_CertInfoActionButton *)actionButton;
-(void)layoutSubviews;
-(id)_titleLabel;
-(id)_subtitleLabel;
-(double)rowHeight;
-(void)setTrusted:(BOOL)arg1 ;
-(NSString *)trustTitle;
-(void)setTrustTitle:(NSString *)arg1 ;
-(NSString *)trustSubtitle;
-(void)setTrustSubtitle:(NSString *)arg1 ;
-(id)_trustedLabel;
-(void)setActionButtonTitle:(id)arg1 destructive:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_layoutSubviewsWithActionButtonSize:(CGSize)arg1 ;
@end

