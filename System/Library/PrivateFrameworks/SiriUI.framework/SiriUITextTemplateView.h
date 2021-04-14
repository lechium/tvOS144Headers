/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriUI/SiriUILabelStackTemplateView.h>
#import <SiriUI/SiriUITemplateView.h>

@class UIImageView, UILabel, UIButton, NSString;

@interface SiriUITextTemplateView : SiriUILabelStackTemplateView <SiriUITemplateView> {

	UIImageView* _chevronView;
	UILabel* _detailTextLabel;
	UIButton* _disclosureButton;

}

@property (nonatomic,retain) UIImageView * chevronView;                                      //@synthesize chevronView=_chevronView - In the implementation block
@property (nonatomic,retain) UILabel * detailTextLabel;                                      //@synthesize detailTextLabel=_detailTextLabel - In the implementation block
@property (__weak) id<SiriUITextTemplateModel> dataSource; 
@property (nonatomic,retain) UIButton * disclosureButton;                                    //@synthesize disclosureButton=_disclosureButton - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUITemplatedView> templatedSuperview; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDataSource:(id)arg1 ;
-(void)reloadData;
-(void)layoutSubviews;
-(UILabel *)detailTextLabel;
-(UIImageView *)chevronView;
-(void)setChevronView:(UIImageView *)arg1 ;
-(void)layoutDetailText;
-(void)setupDisclosureIndicator;
-(void)_setupDisclosureButton;
-(void)addTargetForDisclosure:(id)arg1 action:(SEL)arg2 ;
-(void)removeTargetForDisclosure:(id)arg1 action:(SEL)arg2 ;
-(void)setDetailTextLabel:(UILabel *)arg1 ;
-(UIButton *)disclosureButton;
-(void)setDisclosureButton:(UIButton *)arg1 ;
@end

