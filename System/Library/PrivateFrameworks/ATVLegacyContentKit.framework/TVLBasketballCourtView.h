/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, TVImageView, NSMutableArray;

@interface TVLBasketballCourtView : UIView {

	UIView* _courtContainerView;
	TVImageView* _courtImageView;
	NSMutableArray* _awayPlayerViews;
	NSMutableArray* _homePlayerViews;

}

@property (nonatomic,retain) UIView * courtContainerView;                   //@synthesize courtContainerView=_courtContainerView - In the implementation block
@property (nonatomic,retain) TVImageView * courtImageView;                  //@synthesize courtImageView=_courtImageView - In the implementation block
@property (nonatomic,retain) NSMutableArray * awayPlayerViews;              //@synthesize awayPlayerViews=_awayPlayerViews - In the implementation block
@property (nonatomic,retain) NSMutableArray * homePlayerViews;              //@synthesize homePlayerViews=_homePlayerViews - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(void)commonInit;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIView *)courtContainerView;
-(void)setCourtContainerView:(UIView *)arg1 ;
-(TVImageView *)courtImageView;
-(void)setCourtImageView:(TVImageView *)arg1 ;
-(NSMutableArray *)awayPlayerViews;
-(void)setAwayPlayerViews:(NSMutableArray *)arg1 ;
-(NSMutableArray *)homePlayerViews;
-(void)setHomePlayerViews:(NSMutableArray *)arg1 ;
@end

