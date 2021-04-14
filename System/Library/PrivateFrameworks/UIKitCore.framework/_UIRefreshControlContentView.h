/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class UIRefreshControl, UIColor, NSAttributedString;

@interface _UIRefreshControlContentView : UIView {

	UIRefreshControl* _refreshControl;
	UIColor* _tintColor;

}

@property (nonatomic,readonly) long long style; 
@property (assign,nonatomic) UIRefreshControl * refreshControl;                 //@synthesize refreshControl=_refreshControl - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                               //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedTitle; 
@property (nonatomic,readonly) double minimumSnappingHeight; 
@property (nonatomic,readonly) double maximumSnappingHeight; 
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedTitle;
-(long long)style;
-(void)setTintColor:(UIColor *)arg1 ;
-(UIColor *)tintColor;
-(void)_removeAllAnimations;
-(UIRefreshControl *)refreshControl;
-(void)setRefreshControl:(UIRefreshControl *)arg1 ;
-(void)refreshControlInvalidatedSnappingHeight;
-(double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
-(double)maximumSnappingHeight;
-(double)minimumSnappingHeight;
-(void)willTransitionFromState:(long long)arg1 toState:(long long)arg2 ;
-(void)didTransitionFromState:(long long)arg1 toState:(long long)arg2 ;
@end

