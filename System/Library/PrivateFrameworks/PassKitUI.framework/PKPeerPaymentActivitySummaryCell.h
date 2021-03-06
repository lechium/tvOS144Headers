/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKTableViewCell.h>

@class UILabel, PKSuperscriptedCurrencyAmountLabel, UIImageView, PKActivityEventPeerPaymentTransaction, UIViewController, NSString;

@interface PKPeerPaymentActivitySummaryCell : PKTableViewCell {

	UILabel* _titleView;
	UILabel* _subtitleView;
	UILabel* _timeView;
	PKSuperscriptedCurrencyAmountLabel* _amountLabel;
	UIImageView* _unreadIndicatorView;
	PKActivityEventPeerPaymentTransaction* _event;
	UIViewController* _avatarViewController;
	NSString* _contactName;

}

@property (nonatomic,retain) PKActivityEventPeerPaymentTransaction * event;              //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) UIViewController * avatarViewController;                    //@synthesize avatarViewController=_avatarViewController - In the implementation block
@property (nonatomic,retain) NSString * contactName;                                     //@synthesize contactName=_contactName - In the implementation block
+(double)height;
+(id)unreadIndicatorImage;
+(double)separatorLeadingInset;
-(void)dealloc;
-(PKActivityEventPeerPaymentTransaction *)event;
-(void)prepareForReuse;
-(void)setEvent:(PKActivityEventPeerPaymentTransaction *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)contactName;
-(void)setContactName:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateViews;
-(void)setAvatarViewController:(UIViewController *)arg1 ;
-(UIViewController *)avatarViewController;
@end

