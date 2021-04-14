/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVPlayback/TVPlayback-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIImageView, UILabel, TVPSpinnerView, NSString, TVPTimeRange, UIColor, TVPProgressBarView, TVPVideoNowPlayingDimmingView, TVPPlayheadView;

@interface TVPTransportBarView : UIView {

	UIView* _backwardAccessoryView;
	UIImageView* _backwardTrackMask;
	UIImageView* _backwardTimeSkipMask;
	UILabel* _backwardTimeSkipLabel;
	UIImageView* _backwardScanningMask;
	long long _backwardAccessoryType;
	UIView* _forwardAccessoryView;
	UIImageView* _forwardTrackMask;
	UIImageView* _forwardTimeSkipMask;
	UILabel* _forwardTimeSkipLabel;
	UIImageView* _forwardScanningMask;
	long long _forwardAccessoryType;
	long long _interactionMode;
	BOOL _elapsedLabelOverlapsPaused;
	TVPSpinnerView* _spinner;
	BOOL _enabled;
	BOOL _shouldShowLoadingAccessory;
	BOOL _alternateElapsedTimeAccessoryIsInScrubMode;
	BOOL _shouldUseAlternateElapsedTimeAccessory;
	float _playerHeadShadowOpacity;
	NSString* _bottomTitle;
	double _playbackProgress;
	TVPTimeRange* _bufferedRange;
	double _playbackStartLocation;
	UIColor* _playerHeadColor;
	TVPProgressBarView* _progressBarView;
	TVPVideoNowPlayingDimmingView* _dimmingView;
	UIView* _labelContainer;
	UILabel* _leftEdgeLabel;
	UILabel* _rightEdgeLabel;
	UILabel* _elapsedTimeLabel;
	UIView* _alternateElapsedTimeAccessory;
	TVPPlayheadView* _playerHead;

}

@property (nonatomic,retain) TVPVideoNowPlayingDimmingView * dimmingView;                  //@synthesize dimmingView=_dimmingView - In the implementation block
@property (nonatomic,retain) UIView * labelContainer;                                      //@synthesize labelContainer=_labelContainer - In the implementation block
@property (nonatomic,retain) UILabel * leftEdgeLabel;                                      //@synthesize leftEdgeLabel=_leftEdgeLabel - In the implementation block
@property (nonatomic,retain) UILabel * rightEdgeLabel;                                     //@synthesize rightEdgeLabel=_rightEdgeLabel - In the implementation block
@property (nonatomic,retain) UILabel * elapsedTimeLabel;                                   //@synthesize elapsedTimeLabel=_elapsedTimeLabel - In the implementation block
@property (assign,nonatomic) BOOL alternateElapsedTimeAccessoryIsInScrubMode;              //@synthesize alternateElapsedTimeAccessoryIsInScrubMode=_alternateElapsedTimeAccessoryIsInScrubMode - In the implementation block
@property (assign,nonatomic) BOOL shouldUseAlternateElapsedTimeAccessory;                  //@synthesize shouldUseAlternateElapsedTimeAccessory=_shouldUseAlternateElapsedTimeAccessory - In the implementation block
@property (nonatomic,retain) UIView * alternateElapsedTimeAccessory;                       //@synthesize alternateElapsedTimeAccessory=_alternateElapsedTimeAccessory - In the implementation block
@property (nonatomic,retain) TVPProgressBarView * progressBarView;                         //@synthesize progressBarView=_progressBarView - In the implementation block
@property (nonatomic,retain) TVPPlayheadView * playerHead;                                 //@synthesize playerHead=_playerHead - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL dimsEntireBounds; 
@property (assign,nonatomic) BOOL dimsWithGradient; 
@property (nonatomic,copy) NSString * leftEdgeTitle; 
@property (nonatomic,copy) NSString * rightEdgeTitle; 
@property (nonatomic,copy) NSString * bottomTitle;                                         //@synthesize bottomTitle=_bottomTitle - In the implementation block
@property (nonatomic,copy) NSString * elapsedTimeTitle; 
@property (assign,nonatomic) double playbackProgress;                                      //@synthesize playbackProgress=_playbackProgress - In the implementation block
@property (nonatomic,readonly) double presentedPlaybackProgress; 
@property (nonatomic,retain) TVPTimeRange * bufferedRange;                                 //@synthesize bufferedRange=_bufferedRange - In the implementation block
@property (assign,nonatomic) double playbackStartLocation;                                 //@synthesize playbackStartLocation=_playbackStartLocation - In the implementation block
@property (assign,nonatomic) CGSize playerHeadSize; 
@property (nonatomic,retain) UIColor * playerHeadColor;                                    //@synthesize playerHeadColor=_playerHeadColor - In the implementation block
@property (assign,nonatomic) double playerHeadAlpha; 
@property (assign,nonatomic) float playerHeadShadowOpacity;                                //@synthesize playerHeadShadowOpacity=_playerHeadShadowOpacity - In the implementation block
@property (nonatomic,readonly) CGRect playerHeadFrame; 
@property (assign,nonatomic) long long forwardAccessoryType;                               //@synthesize forwardAccessoryType=_forwardAccessoryType - In the implementation block
@property (assign,nonatomic) long long backwardAccessoryType;                              //@synthesize backwardAccessoryType=_backwardAccessoryType - In the implementation block
@property (assign,nonatomic) BOOL shouldShowLoadingAccessory;                              //@synthesize shouldShowLoadingAccessory=_shouldShowLoadingAccessory - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)playbackProgress;
-(void)setPlaybackProgress:(double)arg1 ;
-(void)layoutSubviews;
-(TVPVideoNowPlayingDimmingView *)dimmingView;
-(void)setDimmingView:(TVPVideoNowPlayingDimmingView *)arg1 ;
-(void)setDimsEntireBounds:(BOOL)arg1 ;
-(BOOL)dimsEntireBounds;
-(double)dimmingAlpha;
-(void)setInteractionMode:(long long)arg1 ;
-(void)setLabelAlpha:(double)arg1 ;
-(UIView *)labelContainer;
-(void)setDimsWithGradient:(BOOL)arg1 ;
-(BOOL)dimsWithGradient;
-(TVPProgressBarView *)progressBarView;
-(void)setProgressBarView:(TVPProgressBarView *)arg1 ;
-(double)presentedPlaybackProgress;
-(void)setPlayerHeadAlpha:(double)arg1 ;
-(long long)backwardAccessoryType;
-(long long)forwardAccessoryType;
-(void)setBackwardAccessoryType:(long long)arg1 ;
-(void)setForwardAccessoryType:(long long)arg1 ;
-(void)setBufferedRange:(TVPTimeRange *)arg1 ;
-(id)initWithPlayer:(id)arg1 frame:(CGRect)arg2 ;
-(void)setShouldShowLoadingAccessory:(BOOL)arg1 ;
-(BOOL)shouldShowLoadingAccessory;
-(id)createProgressBarView;
-(void)setLabelContainer:(UIView *)arg1 ;
-(id)timeFont;
-(void)setPlayerHeadSize:(CGSize)arg1 ;
-(CGRect)playerHeadFrameForRect:(CGRect)arg1 ;
-(void)updateProgressBarPlayheadLocations;
-(CGRect)playerHeadFrame;
-(void)_updateUserInteractionEnabled;
-(double)playerHeadAlpha;
-(void)setAlternateElapsedTimeAccessory:(UIView *)arg1 ;
-(void)setShouldUseAlternateElapsedTimeAccessory:(BOOL)arg1 ;
-(void)setLeftEdgeTitle:(NSString *)arg1 ;
-(NSString *)leftEdgeTitle;
-(void)setRightEdgeTitle:(NSString *)arg1 ;
-(NSString *)rightEdgeTitle;
-(void)setElapsedTimeTitle:(NSString *)arg1 ;
-(NSString *)elapsedTimeTitle;
-(void)setPlaybackStartLocation:(double)arg1 ;
-(CGSize)playerHeadSize;
-(void)setPlayerHeadColor:(UIColor *)arg1 ;
-(void)setPlayerHeadShadowOpacity:(float)arg1 ;
-(NSString *)bottomTitle;
-(void)setBottomTitle:(NSString *)arg1 ;
-(TVPTimeRange *)bufferedRange;
-(double)playbackStartLocation;
-(UIColor *)playerHeadColor;
-(float)playerHeadShadowOpacity;
-(UILabel *)leftEdgeLabel;
-(void)setLeftEdgeLabel:(UILabel *)arg1 ;
-(UILabel *)rightEdgeLabel;
-(void)setRightEdgeLabel:(UILabel *)arg1 ;
-(UILabel *)elapsedTimeLabel;
-(void)setElapsedTimeLabel:(UILabel *)arg1 ;
-(BOOL)alternateElapsedTimeAccessoryIsInScrubMode;
-(void)setAlternateElapsedTimeAccessoryIsInScrubMode:(BOOL)arg1 ;
-(BOOL)shouldUseAlternateElapsedTimeAccessory;
-(UIView *)alternateElapsedTimeAccessory;
-(TVPPlayheadView *)playerHead;
-(void)setPlayerHead:(TVPPlayheadView *)arg1 ;
@end

