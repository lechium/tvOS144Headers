/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIScrollView, NSArray, UIView, _UIRepeatingPressGestureRecognizer, UIImage, UIImageView, NSString;

@interface _TVDescriptiveAlertView : UIView <UIScrollViewDelegate> {

	UIScrollView* _scrollView;
	NSArray* _viewsAboveScrollView;
	NSArray* _viewsBelowScrollView;
	UIView* _defaultFocusView;
	BOOL _isCenteredLayout;
	_UIRepeatingPressGestureRecognizer* _upButtonGesture;
	_UIRepeatingPressGestureRecognizer* _downButtonGesture;
	BOOL _waiting;
	UIImage* _bgImage;
	UIImageView* _bgImageView;
	NSArray* _childViews;

}

@property (nonatomic,retain) NSArray * childViews;                   //@synthesize childViews=_childViews - In the implementation block
@property (nonatomic,retain) UIView * defaultFocusView;              //@synthesize defaultFocusView=_defaultFocusView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)preferredFocusEnvironments;
-(void)setBgImage:(id)arg1 ;
-(void)setDefaultFocusView:(UIView *)arg1 ;
-(UIView *)defaultFocusView;
-(void)setChildViews:(NSArray *)arg1 ;
-(void)_setupGestureRecognizers;
-(void)_scrollUp:(id)arg1 ;
-(void)_scrollDown:(id)arg1 ;
-(void)_scrollUp;
-(void)_scrollInDirection:(double)arg1 ;
-(void)_scrollDown;
-(NSArray *)childViews;
@end

