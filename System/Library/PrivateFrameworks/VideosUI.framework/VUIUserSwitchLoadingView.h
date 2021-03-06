/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIWindow, UIView, UIVisualEffectView, UILabel, UIActivityIndicatorView;

@interface VUIUserSwitchLoadingView : UIView {

	BOOL _hiding;
	UIWindow* _userSwitchOverlayWindow;
	UIView* _userSwitchSnapshotView;
	UIVisualEffectView* _userSwitchEffectView;
	UILabel* _userSwitchLabel;
	UIActivityIndicatorView* _userSpinnerView;

}

@property (nonatomic,retain) UIWindow * userSwitchOverlayWindow;                     //@synthesize userSwitchOverlayWindow=_userSwitchOverlayWindow - In the implementation block
@property (nonatomic,retain) UIView * userSwitchSnapshotView;                        //@synthesize userSwitchSnapshotView=_userSwitchSnapshotView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * userSwitchEffectView;              //@synthesize userSwitchEffectView=_userSwitchEffectView - In the implementation block
@property (nonatomic,retain) UILabel * userSwitchLabel;                              //@synthesize userSwitchLabel=_userSwitchLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * userSpinnerView;              //@synthesize userSpinnerView=_userSpinnerView - In the implementation block
@property (assign,nonatomic) BOOL hiding;                                            //@synthesize hiding=_hiding - In the implementation block
+(id)loadingScreen;
-(void)_timeout;
-(BOOL)isVisible;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)hide;
-(id)_textForUserSwitchState:(long long)arg1 ;
-(UILabel *)userSwitchLabel;
-(UIActivityIndicatorView *)userSpinnerView;
-(UIVisualEffectView *)userSwitchEffectView;
-(UIView *)userSwitchSnapshotView;
-(void)setUserSwitchEffectView:(UIVisualEffectView *)arg1 ;
-(void)setUserSwitchSnapshotView:(UIView *)arg1 ;
-(void)setUserSpinnerView:(UIActivityIndicatorView *)arg1 ;
-(void)setUserSwitchLabel:(UILabel *)arg1 ;
-(UIWindow *)userSwitchOverlayWindow;
-(void)showOverKeyWindowUserSwitchState:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setUserSwitchOverlayWindow:(UIWindow *)arg1 ;
-(BOOL)hiding;
-(void)setHiding:(BOOL)arg1 ;
@end

