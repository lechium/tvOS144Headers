/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVContentPartnerKitUI/TVContentPartnerKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, TVCKBadgeView;

@interface TVCKBadgeOverlayView : UIView {

	NSString* _badgeValue;
	double _maximumBadgeWidth;
	TVCKBadgeView* _badgeView;

}

@property (nonatomic,retain) TVCKBadgeView * badgeView;              //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,copy) NSString * badgeValue;                    //@synthesize badgeValue=_badgeValue - In the implementation block
@property (assign,nonatomic) double maximumBadgeWidth;               //@synthesize maximumBadgeWidth=_maximumBadgeWidth - In the implementation block
-(NSString *)badgeValue;
-(void)setBadgeValue:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(TVCKBadgeView *)badgeView;
-(void)setBadgeView:(TVCKBadgeView *)arg1 ;
-(double)maximumBadgeWidth;
-(void)setMaximumBadgeWidth:(double)arg1 ;
@end

