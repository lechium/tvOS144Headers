/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVPlayback/TVPlayback-Structs.h>
#import <UIKitCore/UIView.h>

@protocol TVPMusicNowPlayingBackgroundProvider;
@class NSObject, UIView, UIVisualEffectView;

@interface TVPMusicNowPlayingBackgroundContainerView : UIView {

	BOOL _blurAllowed;
	BOOL _shouldBlur;
	NSObject*<TVPMusicNowPlayingBackgroundProvider> _backgroundProvider;
	UIView* _containerView;
	UIVisualEffectView* _blurView;

}

@property (nonatomic,readonly) UIView * containerView;                                                        //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * blurView;                                                   //@synthesize blurView=_blurView - In the implementation block
@property (nonatomic,readonly) BOOL shouldBlur;                                                               //@synthesize shouldBlur=_shouldBlur - In the implementation block
@property (assign,getter=isBlurAllowed,nonatomic) BOOL blurAllowed;                                           //@synthesize blurAllowed=_blurAllowed - In the implementation block
@property (nonatomic,retain) NSObject*<TVPMusicNowPlayingBackgroundProvider> backgroundProvider;              //@synthesize backgroundProvider=_backgroundProvider - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)containerView;
-(UIVisualEffectView *)blurView;
-(void)setBlurView:(UIVisualEffectView *)arg1 ;
-(void)_updateForBackgroundContrastState;
-(void)_updateBlurEffect;
-(BOOL)isBlurAllowed;
-(NSObject*<TVPMusicNowPlayingBackgroundProvider>)backgroundProvider;
-(void)setBlurAllowed:(BOOL)arg1 ;
-(void)setBackgroundProvider:(NSObject*<TVPMusicNowPlayingBackgroundProvider>)arg1 ;
-(BOOL)shouldBlur;
@end

