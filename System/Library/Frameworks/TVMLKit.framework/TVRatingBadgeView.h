/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class TVRatingBadgeLayout;

@interface TVRatingBadgeView : UIView {

	TVRatingBadgeLayout* _ratingBadgeLayout;
	double _ratingValue;

}

@property (nonatomic,retain) TVRatingBadgeLayout * ratingBadgeLayout;              //@synthesize ratingBadgeLayout=_ratingBadgeLayout - In the implementation block
@property (assign,nonatomic) double ratingValue;                                   //@synthesize ratingValue=_ratingValue - In the implementation block
+(id)ratingBadgeViewWithValue:(double)arg1 layout:(id)arg2 existingBadgeView:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(double)ratingValue;
-(void)setRatingValue:(double)arg1 ;
-(id)_tintColor;
-(BOOL)canBecomeFocused;
-(id)_halfStarImage;
-(double)_interitemSpacing;
-(double)_circleRadius;
-(void)setRatingBadgeLayout:(TVRatingBadgeLayout *)arg1 ;
-(id)_starImage;
-(CGSize)_starSize;
-(double)_starHeight;
-(id)_ratingStyle;
-(TVRatingBadgeLayout *)ratingBadgeLayout;
@end

