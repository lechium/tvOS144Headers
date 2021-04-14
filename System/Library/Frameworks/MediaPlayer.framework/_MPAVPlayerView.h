/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIView.h>

@class _MPAVPlayerViewPlayerLayerView, NSString, UIViewPropertyAnimator, AVPlayer;

@interface _MPAVPlayerView : UIView {

	_MPAVPlayerViewPlayerLayerView* _playerLayerView;
	NSString* _targetVideoGravity;
	UIViewPropertyAnimator* _videoGravityAnimator;

}

@property (nonatomic,retain) AVPlayer * player; 
@property (nonatomic,copy) NSString * videoGravity; 
@property (nonatomic,readonly) CGRect videoBounds; 
@property (nonatomic,readonly) _MPAVPlayerViewPlayerLayerView * playerLayerView; 
@property (nonatomic,copy) NSString * targetVideoGravity;                                     //@synthesize targetVideoGravity=_targetVideoGravity - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * videoGravityAnimator;                   //@synthesize videoGravityAnimator=_videoGravityAnimator - In the implementation block
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setVideoGravity:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)willMoveToWindow:(id)arg1 ;
-(CGRect)videoBounds;
-(NSString *)videoGravity;
-(void)setVideoGravity:(id)arg1 duration:(float)arg2 ;
-(_MPAVPlayerViewPlayerLayerView *)playerLayerView;
-(BOOL)_isDescendantOfScrollView;
-(void)_updatePlayerLayerViewFrame;
-(void)_updatePlayerLayerViewFrame:(id)arg1 ;
-(id)_mediaTimingFunctionForCurrentAnimationCurve;
-(NSString *)targetVideoGravity;
-(void)setTargetVideoGravity:(NSString *)arg1 ;
-(UIViewPropertyAnimator *)videoGravityAnimator;
-(void)setVideoGravityAnimator:(UIViewPropertyAnimator *)arg1 ;
@end

