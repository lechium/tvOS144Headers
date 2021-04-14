/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUIService.framework/AccessibilityUIService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AXUINubbitDelegate;
@class UIView, AXAssertion, UIPanGestureRecognizer, AXDispatchTimer, UIDynamicAnimator, UIGravityBehavior, UIAttachmentBehavior, UISnapBehavior, UICollisionBehavior, UIDynamicItemBehavior;

@interface AXUINubbitContext : NSObject {

	UIView* _nubbit;
	id<AXUINubbitDelegate> _delegate;
	AXAssertion* _disableSystemGesturesAssertion;
	AXAssertion* _disableDashBoardSystemGesturesAssertion;
	UIPanGestureRecognizer* _moveNubbitGestureRecognizer;
	AXDispatchTimer* _fadeTimer;
	UIDynamicAnimator* _dynamicAnimator;
	UIGravityBehavior* _gravityBehavior;
	UIAttachmentBehavior* _followPanBehavior;
	UISnapBehavior* _snapToBoundaryBehavior;
	UICollisionBehavior* _collisionBehavior;
	UIDynamicItemBehavior* _dynamicItemBehavior;
	double _originalAlpha;

}

@property (nonatomic,retain) UIView * nubbit;                                                    //@synthesize nubbit=_nubbit - In the implementation block
@property (assign,nonatomic,__weak) id<AXUINubbitDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AXAssertion * disableSystemGesturesAssertion;                       //@synthesize disableSystemGesturesAssertion=_disableSystemGesturesAssertion - In the implementation block
@property (nonatomic,retain) AXAssertion * disableDashBoardSystemGesturesAssertion;              //@synthesize disableDashBoardSystemGesturesAssertion=_disableDashBoardSystemGesturesAssertion - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * moveNubbitGestureRecognizer;               //@synthesize moveNubbitGestureRecognizer=_moveNubbitGestureRecognizer - In the implementation block
@property (nonatomic,retain) AXDispatchTimer * fadeTimer;                                        //@synthesize fadeTimer=_fadeTimer - In the implementation block
@property (nonatomic,retain) UIDynamicAnimator * dynamicAnimator;                                //@synthesize dynamicAnimator=_dynamicAnimator - In the implementation block
@property (nonatomic,retain) UIGravityBehavior * gravityBehavior;                                //@synthesize gravityBehavior=_gravityBehavior - In the implementation block
@property (nonatomic,retain) UIAttachmentBehavior * followPanBehavior;                           //@synthesize followPanBehavior=_followPanBehavior - In the implementation block
@property (nonatomic,retain) UISnapBehavior * snapToBoundaryBehavior;                            //@synthesize snapToBoundaryBehavior=_snapToBoundaryBehavior - In the implementation block
@property (nonatomic,retain) UICollisionBehavior * collisionBehavior;                            //@synthesize collisionBehavior=_collisionBehavior - In the implementation block
@property (nonatomic,retain) UIDynamicItemBehavior * dynamicItemBehavior;                        //@synthesize dynamicItemBehavior=_dynamicItemBehavior - In the implementation block
@property (assign,nonatomic) double originalAlpha;                                               //@synthesize originalAlpha=_originalAlpha - In the implementation block
-(id<AXUINubbitDelegate>)delegate;
-(void)setDelegate:(id<AXUINubbitDelegate>)arg1 ;
-(UIDynamicAnimator *)dynamicAnimator;
-(UIView *)nubbit;
-(void)setNubbit:(UIView *)arg1 ;
-(AXAssertion *)disableSystemGesturesAssertion;
-(void)setDisableSystemGesturesAssertion:(AXAssertion *)arg1 ;
-(AXAssertion *)disableDashBoardSystemGesturesAssertion;
-(void)setDisableDashBoardSystemGesturesAssertion:(AXAssertion *)arg1 ;
-(UIPanGestureRecognizer *)moveNubbitGestureRecognizer;
-(void)setMoveNubbitGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(AXDispatchTimer *)fadeTimer;
-(void)setFadeTimer:(AXDispatchTimer *)arg1 ;
-(void)setDynamicAnimator:(UIDynamicAnimator *)arg1 ;
-(UIGravityBehavior *)gravityBehavior;
-(void)setGravityBehavior:(UIGravityBehavior *)arg1 ;
-(UIAttachmentBehavior *)followPanBehavior;
-(void)setFollowPanBehavior:(UIAttachmentBehavior *)arg1 ;
-(UISnapBehavior *)snapToBoundaryBehavior;
-(void)setSnapToBoundaryBehavior:(UISnapBehavior *)arg1 ;
-(UICollisionBehavior *)collisionBehavior;
-(void)setCollisionBehavior:(UICollisionBehavior *)arg1 ;
-(UIDynamicItemBehavior *)dynamicItemBehavior;
-(void)setDynamicItemBehavior:(UIDynamicItemBehavior *)arg1 ;
-(double)originalAlpha;
-(void)setOriginalAlpha:(double)arg1 ;
@end

