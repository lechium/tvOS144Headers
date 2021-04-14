/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Pegasus/Pegasus-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PGCommandHandler.h>
#import <libobjc.A.dylib/PGPlaybackStateDiffConsumer.h>

@protocol PGPictureInPictureViewControllerContentContainer, PGPictureInPictureViewControllerDelegate, PGPictureInPictureAnalyticsDelegate;
@class PGHostedWindowHostingHandle, UIView, PGLayerHostView, PGControlsContainerView, PGControlsViewModel, MTShadowView, PGStashView, PGStashedMaskView, PGPortalView, UITapGestureRecognizer, NSUUID, PGPictureInPictureApplication, NSString;

@interface PGPictureInPictureViewController : UIViewController <PGCommandHandler, PGPlaybackStateDiffConsumer> {

	PGHostedWindowHostingHandle* _hostedWindowHostingHandle;
	UIView* _backgroundView;
	UIView* _containerView;
	PGLayerHostView* _contentView;
	PGControlsContainerView* _controlsContainerView;
	PGControlsViewModel* _viewModel;
	MTShadowView* _shadowView;
	PGStashView* _stashView;
	MTShadowView* _tabShadowView;
	PGStashedMaskView* _stashMaskView;
	PGPortalView* _leftSideContentPortalView;
	PGPortalView* _rightSideContentPortalView;
	BOOL _initialLayerFrameIsNull;
	BOOL _interactivelyResizing;
	BOOL _prefersIdleTimerDisabled;
	BOOL _isSuspended;
	BOOL _stashTabHidden;
	BOOL _stashTabShownLeft;
	BOOL _isShowingChrome;
	unsigned long long _inFlightStashTabAnimationIdentifier;
	unsigned long long _inFlightStashProgressAnimationIdentifier;
	UITapGestureRecognizer* _stashedTapGestureRecognizer;
	CGSize _preferredContentSize;
	id<PGPictureInPictureViewControllerContentContainer> _contentContainer;
	id<PGPictureInPictureViewControllerDelegate> _delegate;
	id<PGPictureInPictureAnalyticsDelegate> _analyticsDelegate;
	NSUUID* _analyticsSourceUUID;
	NSUUID* _analyticsSessionUUID;
	BOOL _startedAutomatically;
	SCD_Struct_PG7 _contentContainerRespondsTo;
	BOOL _canStartShowingChrome;
	BOOL _stashed;
	PGPictureInPictureApplication* _application;
	/*^block*/id _waitForUIFinalizationCompletionBlock;
	long long _controlsStyle;
	CGSize _minimumStashTabSize;

}

@property (nonatomic,copy) id waitForUIFinalizationCompletionBlock;                                                     //@synthesize waitForUIFinalizationCompletionBlock=_waitForUIFinalizationCompletionBlock - In the implementation block
@property (nonatomic,readonly) long long controlsStyle;                                                                 //@synthesize controlsStyle=_controlsStyle - In the implementation block
@property (nonatomic,retain) PGHostedWindowHostingHandle * hostedWindowHostingHandle; 
@property (assign,nonatomic,__weak) id<PGPictureInPictureViewControllerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isInterrupted,nonatomic) BOOL interrupted; 
@property (nonatomic,readonly) PGControlsViewModel * viewModel; 
@property (nonatomic,__weak,readonly) PGPictureInPictureApplication * application;                                      //@synthesize application=_application - In the implementation block
@property (assign,nonatomic,__weak) id<PGPictureInPictureViewControllerContentContainer> contentContainer;              //@synthesize contentContainer=_contentContainer - In the implementation block
@property (assign,nonatomic) BOOL canStartShowingChrome;                                                                //@synthesize canStartShowingChrome=_canStartShowingChrome - In the implementation block
@property (nonatomic,readonly) UIView * contentContainerView; 
@property (assign,getter=isInteractivelyResizing,nonatomic) BOOL interactivelyResizing;                                 //@synthesize interactivelyResizing=_interactivelyResizing - In the implementation block
@property (nonatomic,readonly) double preferredMinimumWidth; 
@property (assign,nonatomic) CGSize minimumStashTabSize;                                                                //@synthesize minimumStashTabSize=_minimumStashTabSize - In the implementation block
@property (assign,nonatomic) BOOL stashed;                                                                              //@synthesize stashed=_stashed - In the implementation block
@property (nonatomic,readonly) BOOL isStashTabHidden; 
@property (nonatomic,readonly) BOOL prefersIdleTimerDisabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)contentViewCornerRadius;
+(void)animateViewWithAnimationType:(long long)arg1 initialSpringVelocity:(double)arg2 animations:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<PGPictureInPictureViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PGPictureInPictureViewControllerDelegate>)arg1 ;
-(BOOL)isInterrupted;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)setInterrupted:(BOOL)arg1 ;
-(PGPictureInPictureApplication *)application;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(CGSize)preferredContentSize;
-(PGHostedWindowHostingHandle *)hostedWindowHostingHandle;
-(void)setHostedWindowHostingHandle:(PGHostedWindowHostingHandle *)arg1 ;
-(PGControlsViewModel *)viewModel;
-(void)handleCommand:(id)arg1 ;
-(void)setInteractivelyResizing:(BOOL)arg1 ;
-(BOOL)showsPictureInPictureUnavailableIndicator;
-(void)setShowsPictureInPictureUnavailableIndicator:(BOOL)arg1 ;
-(BOOL)isInteractivelyResizing;
-(void)updatePlaybackStateWithDiff:(id)arg1 ;
-(void)hostedWindowSizeChangeBegan;
-(void)hostedWindowSizeChangeEnded;
-(double)preferredMinimumWidth;
-(void)deactivateAnalyticsSessionIfNeeded;
-(void)notePictureInPictureStartedAutomatically:(BOOL)arg1 ;
-(void)performSuspendAnimationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)performResumeAnimationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)notePictureInPictureWillStopForAppRequest:(BOOL)arg1 preferredFullScreenRestore:(BOOL)arg2 ;
-(void)performStopAnimated:(BOOL)arg1 withFinalInterfaceOrientation:(long long)arg2 finalLayerFrame:(CGRect)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithApplication:(id)arg1 controlsStyle:(long long)arg2 ;
-(void)setAnalyticsDelegate:(id)arg1 analyticsSourceUUID:(id)arg2 ;
-(void)prepareStartAnimationWithInitialInterfaceOrientation:(long long)arg1 initialLayerFrame:(CGRect)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)performStartAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)performRotateAnimationWithRotation:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)prepareStopAnimationWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)prefersIdleTimerDisabled;
-(void)setStashProgress:(double)arg1 ;
-(void)_handleTapWhileStashedGestureRecognizer:(id)arg1 ;
-(void)_updatePrefersIdleTimerDisabled;
-(void)acquireInterfaceOrientationLock;
-(void)relinquishInterfaceOrientationLock;
-(void)setStashed:(BOOL)arg1 ;
-(void)showChrome:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_resetStashTabViewsIfPossible;
-(void)setMinimumStashTabSize:(CGSize)arg1 ;
-(void)_loadShadowViewIfNeeded;
-(void)_setStashedTabHidden:(BOOL)arg1 left:(BOOL)arg2 ;
-(void)_addMaskViewSubviewIfNeeded;
-(void)_layoutStashTabViewsIfNeeded;
-(void)_setPortalActive:(BOOL)arg1 left:(BOOL)arg2 ;
-(void)_setStashMaskActive:(BOOL)arg1 ;
-(void)_updateContentCornerRadiusForMaskActive:(BOOL)arg1 ;
-(void)_performStartAnimationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_performStopAnimationWithFinalInterfaceOrientation:(long long)arg1 finalLayerFrame:(CGRect)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setContentContainer:(id<PGPictureInPictureViewControllerContentContainer>)arg1 ;
-(void)setCanStartShowingChrome:(BOOL)arg1 ;
-(void)updateHostedWindowSize:(CGSize)arg1 ;
-(BOOL)isStashTabHidden;
-(void)setStashTabHidden:(BOOL)arg1 left:(BOOL)arg2 withSpringBehavior:(id)arg3 ;
-(UIView *)contentContainerView;
-(void)setContentViewHidden:(BOOL)arg1 ;
-(id<PGPictureInPictureViewControllerContentContainer>)contentContainer;
-(BOOL)canStartShowingChrome;
-(CGSize)minimumStashTabSize;
-(BOOL)stashed;
-(id)waitForUIFinalizationCompletionBlock;
-(void)setWaitForUIFinalizationCompletionBlock:(id)arg1 ;
-(long long)controlsStyle;
@end

