/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@protocol TVPPlayback;
@class NSURL, TVImageView, TVMusicRoundProgressView, NSTimer;

@interface TVMusicRadioAdView : UIView {

	NSURL* _adImageURL;
	id<TVPPlayback> _player;
	TVImageView* _adImageView;
	TVMusicRoundProgressView* _progressView;
	NSTimer* _timer;

}

@property (nonatomic,retain) id<TVPPlayback> player;                               //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) TVImageView * adImageView;                            //@synthesize adImageView=_adImageView - In the implementation block
@property (nonatomic,retain) TVMusicRoundProgressView * progressView;              //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                      //@synthesize timer=_timer - In the implementation block
@property (nonatomic,copy,readonly) NSURL * adImageURL;                            //@synthesize adImageURL=_adImageURL - In the implementation block
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(id<TVPPlayback>)player;
-(void)setPlayer:(id<TVPPlayback>)arg1 ;
-(void)removeFromSuperview;
-(void)layoutSubviews;
-(TVMusicRoundProgressView *)progressView;
-(void)_updateProgressView;
-(void)setProgressView:(TVMusicRoundProgressView *)arg1 ;
-(void)setAdImageProxy:(id)arg1 ;
-(void)progressTimerFireMethod:(id)arg1 ;
-(TVImageView *)adImageView;
-(id)initWithAdImageURL:(id)arg1 player:(id)arg2 ;
-(NSURL *)adImageURL;
-(void)setAdImageView:(TVImageView *)arg1 ;
@end

