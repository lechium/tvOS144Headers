/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIViewControllerTransitionCoordinator.h>

@class NSMutableArray, UIView, NSString;

@interface _UIViewControllerNullAnimationTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator> {

	BOOL _transitionIsInFlight;
	NSMutableArray* _alongsideAnimations;
	NSMutableArray* _alongsideCompletions;
	UIView* _containerView;

}

@property (assign,nonatomic) UIView * containerView;                               //@synthesize containerView=_containerView - In the implementation block
@property (getter=isAnimated,nonatomic,readonly) BOOL animated; 
@property (nonatomic,readonly) long long presentationStyle; 
@property (nonatomic,readonly) BOOL initiallyInteractive; 
@property (nonatomic,readonly) BOOL isInterruptible; 
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (nonatomic,readonly) double transitionDuration; 
@property (nonatomic,readonly) double percentComplete; 
@property (nonatomic,readonly) double completionVelocity; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) CGAffineTransform targetTransform; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isCancelled;
-(BOOL)isInterruptible;
-(double)percentComplete;
-(long long)presentationStyle;
-(BOOL)isAnimated;
-(BOOL)animateAlongsideTransition:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)notifyWhenInteractionChangesUsingBlock:(/*^block*/id)arg1 ;
-(id)viewControllerForKey:(id)arg1 ;
-(UIView *)containerView;
-(void)notifyWhenInteractionEndsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isRotating;
-(id)viewForKey:(id)arg1 ;
-(double)transitionDuration;
-(CGAffineTransform)targetTransform;
-(BOOL)isInteractive;
-(void)setContainerView:(UIView *)arg1 ;
-(long long)completionCurve;
-(BOOL)animateAlongsideTransitionInView:(id)arg1 animation:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)initiallyInteractive;
-(void)_runAlongsideAnimations;
-(void)_runAlongsideCompletionsAfterCommit;
-(BOOL)_animateAlongsideTransitionInView:(id)arg1 systemAnimation:(BOOL)arg2 systemCompletion:(BOOL)arg3 animation:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(id)_mainContext;
-(double)completionVelocity;
-(void)_runAlongsideCompletions;
-(void)_applyBlocks:(id)arg1 releaseBlocks:(/*^block*/id)arg2 ;
-(id)_alongsideAnimations:(BOOL)arg1 ;
-(id)_alongsideCompletions:(BOOL)arg1 ;
-(void)_runAlongsideCompletionsAndClearAlongsideAnimations;
@end

