/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UILabel, UIImageView, NSString;

@interface PKPeerPaymentActionTransferToBankCell : UITableViewCell {

	BOOL _isRTL;
	UILabel* _feeLabel;
	UILabel* _textLabel;
	UILabel* _detailTextLabel;
	UIImageView* _checkmarkImageView;
	BOOL _showCheckmark;
	NSString* _titleText;
	NSString* _subtitleText;
	NSString* _feeText;

}

@property (nonatomic,copy) NSString * titleText;                 //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * subtitleText;              //@synthesize subtitleText=_subtitleText - In the implementation block
@property (nonatomic,copy) NSString * feeText;                   //@synthesize feeText=_feeText - In the implementation block
@property (assign,nonatomic) BOOL showCheckmark;                 //@synthesize showCheckmark=_showCheckmark - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)subtitleText;
-(void)setSubtitleText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(BOOL)showCheckmark;
-(void)setShowCheckmark:(BOOL)arg1 ;
-(void)setFeeText:(NSString *)arg1 ;
-(NSString *)feeText;
@end
