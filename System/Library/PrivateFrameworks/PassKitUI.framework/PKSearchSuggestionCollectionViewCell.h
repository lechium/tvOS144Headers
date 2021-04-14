/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class UILabel, UIImageView, NSString, UIImage;

@interface PKSearchSuggestionCollectionViewCell : PKDashboardCollectionViewCell {

	UILabel* _labelSuggestion;
	UIImageView* _imageViewIcon;
	BOOL _isTemplateLayout;
	NSString* _suggestion;
	UIImage* _icon;

}

@property (nonatomic,retain) NSString * suggestion;              //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,retain) UIImage * icon;                     //@synthesize icon=_icon - In the implementation block
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setSuggestion:(NSString *)arg1 ;
-(NSString *)suggestion;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(void)resetFonts;
@end

