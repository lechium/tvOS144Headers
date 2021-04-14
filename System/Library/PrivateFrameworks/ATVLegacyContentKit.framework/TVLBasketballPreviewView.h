/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class TVLBasketballScoreboardView, TVLBasketballCourtView;

@interface TVLBasketballPreviewView : UIView {

	TVLBasketballScoreboardView* _scoreboardView;
	TVLBasketballCourtView* _courtView;

}

@property (nonatomic,retain) TVLBasketballScoreboardView * scoreboardView;              //@synthesize scoreboardView=_scoreboardView - In the implementation block
@property (nonatomic,retain) TVLBasketballCourtView * courtView;                        //@synthesize courtView=_courtView - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(void)layoutSubviews;
-(TVLBasketballScoreboardView *)scoreboardView;
-(void)setScoreboardView:(TVLBasketballScoreboardView *)arg1 ;
-(TVLBasketballCourtView *)courtView;
-(void)setCourtView:(TVLBasketballCourtView *)arg1 ;
@end

