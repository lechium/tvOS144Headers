/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UICollectionViewLayout, UIPercentDrivenInteractiveTransition, NSString;

@interface _UICollectionViewControllerLayoutToLayoutTransition : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _crossFadeNavigationBar;
	BOOL _crossFadeBottomBars;
	BOOL _interactionAborted;
	UICollectionViewLayout* _toLayout;
	UIPercentDrivenInteractiveTransition* _interactionController;
	long long _operation;

}

@property (nonatomic,retain) UICollectionViewLayout * toLayout;                                         //@synthesize toLayout=_toLayout - In the implementation block
@property (assign,nonatomic) BOOL crossFadeNavigationBar;                                               //@synthesize crossFadeNavigationBar=_crossFadeNavigationBar - In the implementation block
@property (assign,nonatomic) BOOL crossFadeBottomBars;                                                  //@synthesize crossFadeBottomBars=_crossFadeBottomBars - In the implementation block
@property (assign,nonatomic) UIPercentDrivenInteractiveTransition * interactionController;              //@synthesize interactionController=_interactionController - In the implementation block
@property (assign,nonatomic) BOOL interactionAborted;                                                   //@synthesize interactionAborted=_interactionAborted - In the implementation block
@property (assign,nonatomic) long long operation;                                                       //@synthesize operation=_operation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 ;
-(long long)operation;
-(void)setOperation:(long long)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(UICollectionViewLayout *)toLayout;
-(UIPercentDrivenInteractiveTransition *)interactionController;
-(BOOL)_shouldCrossFadeNavigationBar;
-(void)setToLayout:(UICollectionViewLayout *)arg1 ;
-(void)setCrossFadeNavigationBar:(BOOL)arg1 ;
-(void)setCrossFadeBottomBars:(BOOL)arg1 ;
-(BOOL)_shouldCrossFadeBottomBars;
-(BOOL)crossFadeNavigationBar;
-(BOOL)crossFadeBottomBars;
-(void)setInteractionController:(UIPercentDrivenInteractiveTransition *)arg1 ;
-(BOOL)interactionAborted;
-(void)setInteractionAborted:(BOOL)arg1 ;
@end

