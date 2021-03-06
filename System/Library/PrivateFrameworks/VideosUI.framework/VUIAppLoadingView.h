/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIWindow, UIImageView, UIVisualEffectView, UIActivityIndicatorView;

@interface VUIAppLoadingView : UIView {

	UIView* _wallpaperView;
	UIWindow* _overlayWindow;
	BOOL _hiding;
	double _timeout;
	double _delay;
	UIImageView* _maskView;
	UIVisualEffectView* _visualEffectView;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
+(id)loadingScreen;
-(void)setTimeout:(double)arg1 ;
-(void)timeout;
-(BOOL)isVisible;
-(void)hide;
-(void)didRotate:(id)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setLoadingDelay:(double)arg1 ;
-(void)showOverKeyWindowWithSpinnerOnly:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 templateImage:(id)arg2 ;
-(void)showOverKeyWindow;
-(double)hideAnimationDuration;
@end

