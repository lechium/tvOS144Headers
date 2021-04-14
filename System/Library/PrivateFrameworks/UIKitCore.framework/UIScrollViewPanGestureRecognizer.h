/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPanGestureRecognizer.h>

@class UIScrollView, UIScrollViewDirectionalPressGestureRecognizer;

@interface UIScrollViewPanGestureRecognizer : UIPanGestureRecognizer {

	UIScrollView* _scrollView;
	SEL _scrollViewAction;
	CGPoint _reconsideredLockingLocation;
	unsigned _lastLockingAxis : 2;
	unsigned _lockingAxis : 2;
	unsigned _hasParentScrollView : 1;
	unsigned _caughtDeceleratingScrollView : 1;
	unsigned _directionalLockEnabled : 1;
	unsigned _transfersTrackingFromParentScrollView : 1;
	unsigned _movedAfterCaughtDeceleratingScrollViewButBeganNotYetDelivered : 1;
	long long _indirectScrollingState;
	double _translationScaleFactor;
	UIScrollViewDirectionalPressGestureRecognizer* _directionalPressGestureRecognizer;

}

@property (assign,nonatomic,__weak) UIScrollView * scrollView;                                                                                //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,getter=isDirectionalLockEnabled,nonatomic) BOOL directionalLockEnabled; 
@property (getter=_caughtDeceleratingScrollView,nonatomic,readonly) BOOL caughtDeceleratingScrollView; 
@property (getter=_beganCaughtDeceleratingScrollViewAndMoved,nonatomic,readonly) BOOL beganCaughtDeceleratingScrollViewAndMoved; 
@property (assign,nonatomic) double translationScaleFactor;                                                                                   //@synthesize translationScaleFactor=_translationScaleFactor - In the implementation block
@property (assign,nonatomic,__weak) UIScrollViewDirectionalPressGestureRecognizer * directionalPressGestureRecognizer;                        //@synthesize directionalPressGestureRecognizer=_directionalPressGestureRecognizer - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setView:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(UIScrollView *)scrollView;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setAllowedTouchTypes:(id)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(void)setDirectionalLockEnabled:(BOOL)arg1 ;
-(CGPoint)translationInView:(id)arg1 ;
-(CGPoint)velocityInView:(id)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)_resetGestureRecognizer;
-(double)_hysteresis;
-(UIScrollViewDirectionalPressGestureRecognizer *)directionalPressGestureRecognizer;
-(BOOL)_isGestureType:(long long)arg1 ;
-(void)setTranslationScaleFactor:(double)arg1 ;
-(BOOL)delaysTouchesBegan;
-(CGPoint)_convertPoint:(CGPoint)arg1 fromSceneReferenceCoordinatesToView:(id)arg2 ;
-(CGPoint)_convertPoint:(CGPoint)arg1 toSceneReferenceCoordinatesFromView:(id)arg2 ;
-(CGPoint)_adjustSceneReferenceLocation:(CGPoint)arg1 ;
-(void)_centroidMovedTo:(CGPoint)arg1 atTime:(double)arg2 ;
-(BOOL)_shouldTryToBeginWithEvent:(id)arg1 ;
-(BOOL)isDirectionalLockEnabled;
-(void)setDirectionalPressGestureRecognizer:(UIScrollViewDirectionalPressGestureRecognizer *)arg1 ;
-(BOOL)_beganCaughtDeceleratingScrollViewAndMoved;
-(BOOL)_caughtDeceleratingScrollView;
-(void)_scrollViewDidEndZooming;
-(void)_beginScroll;
-(BOOL)_canTransferTrackingFromParentPagingScrollView;
-(double)translationScaleFactor;
-(void)_handleCaughtDeceleratingScrollViewWithEvent:(id)arg1 ;
-(BOOL)_isParentScrollView:(id)arg1 consideringEvent:(id)arg2 ;
-(BOOL)_shouldTransferTrackingFromParentScrollViewForCurrentOffset;
-(BOOL)_shouldContinueToWaitToTransferTrackingFromParentScrollView;
@end

