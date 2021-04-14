/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVPMusicVideoTitleControllerDelegate, TVPAVFPlayback;
@class UIView, TVPMusicVideoTitleCardView;

@interface TVPMusicVideoTitleController : NSObject {

	BOOL _isShowingAddButton;
	BOOL _isFingerResting;
	UIView* _musicVideoView;
	id<TVPMusicVideoTitleControllerDelegate> _delegate;
	TVPMusicVideoTitleCardView* _titleCardView;
	id<TVPAVFPlayback> _player;
	long long _mediaItemIdentifier;
	id _playPauseRemoteCommandHandler;

}

@property (nonatomic,retain) id<TVPAVFPlayback> player;                                             //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) TVPMusicVideoTitleCardView * titleCardView;                            //@synthesize titleCardView=_titleCardView - In the implementation block
@property (assign,nonatomic) BOOL isShowingAddButton;                                               //@synthesize isShowingAddButton=_isShowingAddButton - In the implementation block
@property (assign,nonatomic) long long mediaItemIdentifier;                                         //@synthesize mediaItemIdentifier=_mediaItemIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isFingerResting;                                                  //@synthesize isFingerResting=_isFingerResting - In the implementation block
@property (nonatomic,retain) id playPauseRemoteCommandHandler;                                      //@synthesize playPauseRemoteCommandHandler=_playPauseRemoteCommandHandler - In the implementation block
@property (assign,nonatomic,__weak) UIView * musicVideoView;                                        //@synthesize musicVideoView=_musicVideoView - In the implementation block
@property (assign,nonatomic,__weak) id<TVPMusicVideoTitleControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)initialize;
-(void)dealloc;
-(id<TVPMusicVideoTitleControllerDelegate>)delegate;
-(void)setDelegate:(id<TVPMusicVideoTitleControllerDelegate>)arg1 ;
-(id<TVPAVFPlayback>)player;
-(void)setPlayer:(id<TVPAVFPlayback>)arg1 ;
-(id)initWithPlayer:(id)arg1 ;
-(void)_playbackStateDidChange:(id)arg1 ;
-(void)_mediaItemDidChange:(id)arg1 ;
-(void)_handleSelectButton:(id)arg1 ;
-(void)_addGestureRecognizers;
-(void)_fingerRestRecognized:(id)arg1 ;
-(long long)mediaItemIdentifier;
-(void)setMediaItemIdentifier:(long long)arg1 ;
-(void)_showTitleCardForMediaItem:(id)arg1 ;
-(UIView *)musicVideoView;
-(void)_scheduleTitleCardWithTitleInfo:(id)arg1 ;
-(id)playPauseRemoteCommandHandler;
-(void)setPlayPauseRemoteCommandHandler:(id)arg1 ;
-(TVPMusicVideoTitleCardView *)titleCardView;
-(void)setTitleCardView:(TVPMusicVideoTitleCardView *)arg1 ;
-(void)setIsShowingAddButton:(BOOL)arg1 ;
-(BOOL)isFingerResting;
-(void)_hideCurrentTitleCardAnimated:(BOOL)arg1 force:(BOOL)arg2 ;
-(void)_removeCurrentTitleCard;
-(void)_getCurrentItemTitle:(id*)arg1 andSubtitle:(id*)arg2 ;
-(void)setIsFingerResting:(BOOL)arg1 ;
-(BOOL)isShowingAddButton;
-(void)_selectedAddButton;
-(void)setMusicVideoView:(UIView *)arg1 ;
@end

