/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVKit-Structs.h>
#import <AVKit/_AVFocusContainerView.h>
#import <AVKit/AVTouchEventForwardingProtocol.h>

@class UIEvent, UIView, AVNowPlayingPlaybackControlsViewController;

@interface _AVPlayerViewControllerContainerView : _AVFocusContainerView <AVTouchEventForwardingProtocol> {

	UIEvent* _mostRecentEndOrCancelTouchesEvent;
	BOOL _fullScreen;
	UIView* _forwardFocusView;
	AVNowPlayingPlaybackControlsViewController* _nowPlayingPlaybackControlsViewController;

}

@property (assign,getter=isFullScreen,nonatomic) BOOL fullScreen;                                                                       //@synthesize fullScreen=_fullScreen - In the implementation block
@property (nonatomic,retain) UIView * forwardFocusView;                                                                                 //@synthesize forwardFocusView=_forwardFocusView - In the implementation block
@property (getter=_isUXAllowed,nonatomic,readonly) BOOL uxAllowed; 
@property (assign,nonatomic,__weak) AVNowPlayingPlaybackControlsViewController * nowPlayingPlaybackControlsViewController;              //@synthesize nowPlayingPlaybackControlsViewController=_nowPlayingPlaybackControlsViewController - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)isFullScreen;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)accessibilityElements;
-(id)preferredFocusEnvironments;
-(void)touchesBegan:(id)arg1 withForwardedEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withForwardedEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withForwardedEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withForwardedEvent:(id)arg2 ;
-(BOOL)_isUXAllowed;
-(void)_updateFullScreenIfAppropriateForFrame:(CGRect)arg1 ;
-(void)_updateFullScreenIfAppropriate;
-(void)forwardTouches:(id)arg1 event:(id)arg2 toSelector:(SEL)arg3 ;
-(UIView *)forwardFocusView;
-(void)setForwardFocusView:(UIView *)arg1 ;
-(void)setFullScreen:(BOOL)arg1 ;
-(AVNowPlayingPlaybackControlsViewController *)nowPlayingPlaybackControlsViewController;
-(void)setNowPlayingPlaybackControlsViewController:(AVNowPlayingPlaybackControlsViewController *)arg1 ;
@end

