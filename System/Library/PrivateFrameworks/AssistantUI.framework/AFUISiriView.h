/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantUI/AssistantUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SiriUISiriStatusViewDelegate.h>
#import <libobjc.A.dylib/AFUISiriContent.h>

@protocol SiriUISiriStatusViewProtocol, AFUISiriViewDataSource, AFUISiriViewDelegate;
@class _UIBackdropView, UIView, SiriUIAudioRoutePickerButton, SiriUIHelpButton, SiriUIContentButton, SiriUIConfiguration, SiriUIVisualEffectView, UIImageView, UILabel, NSString;

@interface AFUISiriView : UIView <SiriUISiriStatusViewDelegate, AFUISiriContent> {

	_UIBackdropView* _backdropView;
	BOOL _backdropViewVisible;
	UIEdgeInsets _suspendedSafeAreaInsets;
	BOOL _safeAreaInsetsSuspended;
	UIView* _dimmingAndLockContainer;
	UIView* _statusViewContainer;
	SiriUIAudioRoutePickerButton* _audioRoutePickerButton;
	SiriUIHelpButton* _helpButton;
	SiriUIContentButton* _reportBugButton;
	UIView* _voiceActivationMaskView;
	SiriUIConfiguration* _configuration;
	UIView* _lockContainerView;
	BOOL _inShowUnlockViewAnimation;
	BOOL _inHideUnlockViewAnimation;
	BOOL _remoteContentViewHidden;
	BOOL _lockViewHidden;
	BOOL _flamesViewDeferred;
	BOOL _helpButtonDeferred;
	BOOL _inFluidDismissal;
	BOOL _statusViewHidden;
	BOOL _flamesViewPaused;
	BOOL _keepStatusViewHidden;
	SiriUIVisualEffectView* _eyesFreeEffectView;
	UIImageView* _eyesFreeLogoView;
	UILabel* _assistantVersionLabel;
	SiriUIVisualEffectView* _assistantVersionVisualEffectView;
	UIView* _foregroundView;
	UIView* _foregroundContainerView;
	_UIBackdropView* _backgroundBlurView;
	long long _siriSessionState;
	long long _mode;
	double _statusViewHeight;
	UIView*<SiriUISiriStatusViewProtocol> _siriStatusView;
	BOOL _disabled;
	UIView* _remoteContentView;
	id<AFUISiriViewDataSource> _dataSource;
	id<AFUISiriViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AFUISiriViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<AFUISiriViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL disabled;                                             //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,readonly) UIView * foregroundView;                                 //@synthesize foregroundView=_foregroundView - In the implementation block
@property (nonatomic,readonly) UIView * foregroundContainerView;                        //@synthesize foregroundContainerView=_foregroundContainerView - In the implementation block
@property (nonatomic,readonly) _UIBackdropView * backgroundBlurView; 
@property (nonatomic,readonly) double statusViewHeight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long siriSessionState;                                //@synthesize siriSessionState=_siriSessionState - In the implementation block
@property (assign,nonatomic) long long mode;                                            //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) UIView * remoteContentView;                                //@synthesize remoteContentView=_remoteContentView - In the implementation block
+(void)_animateView:(id)arg1 fromYPosition:(double)arg2 toYPosition:(double)arg3 fade:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)dealloc;
-(id<AFUISiriViewDelegate>)delegate;
-(void)setDelegate:(id<AFUISiriViewDelegate>)arg1 ;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)disabled;
-(id<AFUISiriViewDataSource>)dataSource;
-(void)setDataSource:(id<AFUISiriViewDataSource>)arg1 ;
-(void)reloadData;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)safeAreaInsets;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 ;
-(void)safeAreaInsetsDidChange;
-(void)fadeOutCurrentAura;
-(void)setStatusViewHidden:(BOOL)arg1 ;
-(void)siriStatusViewWasTapped:(id)arg1 ;
-(void)siriStatusViewHoldDidBegin:(id)arg1 ;
-(void)siriStatusViewHoldDidEnd:(id)arg1 ;
-(UIEdgeInsets)safeAreaInsetsForSiriStatusView:(id)arg1 ;
-(float)audioLevelForSiriStatusView:(id)arg1 ;
-(void)setupOrbIfNeeded;
-(void)setFlamesViewDeferred:(BOOL)arg1 ;
-(void)setInUITrackingMode:(BOOL)arg1 ;
-(double)statusViewHeight;
-(void)_helpButtonTapped:(id)arg1 ;
-(void)_audioRouteButtonTapped:(id)arg1 ;
-(BOOL)_showsReportBugButton;
-(void)_loadReportBugButtonTemplateImageInBackgroundWithCompletion:(/*^block*/id)arg1 ;
-(void)_reportBugButtonTapped;
-(void)_reportBugButtonLongPressed;
-(void)setShowAudioRoutePicker:(BOOL)arg1 ;
-(void)setAudioRoutePickerBluetoothOn:(BOOL)arg1 ;
-(_UIBackdropView *)backgroundBlurView;
-(void)setInFluidDismissal:(BOOL)arg1 ;
-(void)_setupContentViews;
-(void)_updateSiriStatusViewForMode:(long long)arg1 ;
-(BOOL)_wantsBackdropView:(long long)arg1 ;
-(BOOL)_reducesMotionEffects;
-(void)_destroyAssistantVersionLabelIfNecessary;
-(BOOL)_isTextInputEnabled;
-(void)_updateControlsAppearance;
-(void)_configureEyesFreeLogo;
-(void)_configureHelpButton;
-(void)configureReportBugButtonToShowHoldToTalkState:(BOOL)arg1 ;
-(void)_createAssistantVersionLabelIfNecessary;
-(CGRect)_remoteContentViewFrame;
-(CGRect)_lockViewFrame;
-(CGRect)_statusViewContainerFrame;
-(double)_buttonInset;
-(void)_layoutReportBugButton;
-(void)_setSafeAreaInsetsSuspended:(BOOL)arg1 ;
-(void)_animateButtonsHidden:(BOOL)arg1 ;
-(void)_setupButtonsIfNecessary;
-(id)dimBackdropSettings;
-(void)_placeRemoteContentView;
-(void)_setupVoiceActivationMaskView;
-(void)setBackdropVisible:(BOOL)arg1 ;
-(void)_createReportBugButtonWithTemplateImage:(id)arg1 andConfigureWithHoldToTalkState:(BOOL)arg2 ;
-(void)_configureReportBugButtonWithHoldToTalkState:(BOOL)arg1 ;
-(BOOL)_shouldIndicateHoldToTalkMode;
-(BOOL)_helpButtonIsVisible;
-(UIView *)foregroundContainerView;
-(UIView *)remoteContentView;
-(void)setRemoteContentView:(UIView *)arg1 ;
-(long long)siriSessionState;
-(void)setSiriSessionState:(long long)arg1 ;
-(void)showPasscodeUnlockWithStatusText:(id)arg1 subtitle:(id)arg2 completionHandler:(/*^block*/id)arg3 unlockCompletionHandler:(/*^block*/id)arg4 ;
-(void)setVoiceActivationMaskViewVisible:(BOOL)arg1 ;
-(void)setContentViewsAlpha:(double)arg1 ;
-(void)setStatusViewUserInteractionEnabled:(BOOL)arg1 ;
-(BOOL)flamesViewPaused;
-(void)setFlamesViewPaused:(BOOL)arg1 ;
-(void)teardownStatusView;
-(void)setBackdropShouldRasterize:(BOOL)arg1 ;
-(void)updateForPercentageRevealed:(double)arg1 ;
-(void)_preferencesDidChange:(id)arg1 ;
-(void)setBugReportingAvailable:(BOOL)arg1 ;
-(void)setHelpButtonEmphasized:(BOOL)arg1 ;
-(void)setHelpButtonDeferred:(BOOL)arg1 ;
-(void)pulseHelpButton;
-(void)cancelShowingPasscodeUnlock;
-(void)siriDidActivateFromSource:(long long)arg1 ;
-(UIView *)foregroundView;
@end
