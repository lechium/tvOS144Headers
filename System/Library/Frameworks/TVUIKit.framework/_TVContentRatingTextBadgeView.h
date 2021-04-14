/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVUIKit.framework/TVUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVUIKit/TVUIKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSAttributedString, UILayoutGuide, NSString;

@interface _TVContentRatingTextBadgeView : UIView {

	NSAttributedString* _contentRatingAttributedText;
	UILayoutGuide* _contentGuide;

}

@property (nonatomic,retain) UILayoutGuide * contentGuide;                                //@synthesize contentGuide=_contentGuide - In the implementation block
@property (nonatomic,copy) NSAttributedString * contentRatingAttributedText;              //@synthesize contentRatingAttributedText=_contentRatingAttributedText - In the implementation block
@property (nonatomic,copy) NSString * contentRatingText; 
+(id)_badgeImageWithAttributedRatingText:(id)arg1 andColor:(id)arg2 ;
+(id)_attributedRatingTextForText:(id)arg1 color:(id)arg2 ;
+(CGSize)_badgeSizeForAttributedRatingText:(id)arg1 ;
+(void)_drawBadgeWithAttributedRatingText:(id)arg1 inContext:(CGContextRef)arg2 rect:(CGRect)arg3 color:(id)arg4 ;
+(UIEdgeInsets)_paddingEdgeInsets;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(NSString *)contentRatingText;
-(void)setContentRatingText:(NSString *)arg1 ;
-(CGSize)_intrinsicContentSize;
-(void)tintColorDidChange;
-(id)firstBaselineAnchor;
-(id)lastBaselineAnchor;
-(void)_updateContentRatingAttributedText:(id)arg1 ;
-(NSAttributedString *)contentRatingAttributedText;
-(UILayoutGuide *)contentGuide;
-(void)setContentRatingAttributedText:(NSAttributedString *)arg1 ;
-(id)initWithBaselineOffsetFromBottom:(double)arg1 ;
-(void)setContentGuide:(UILayoutGuide *)arg1 ;
@end
