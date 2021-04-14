/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _TVPlaybackPiPStateMachine, _TVPlayer;

@interface _TVPlaybackManager : NSObject {

	_TVPlaybackPiPStateMachine* _pipStateMachine;
	_TVPlayer* _presentedPlayer;

}

@property (nonatomic,retain) _TVPlayer * presentedPlayer;                                 //@synthesize presentedPlayer=_presentedPlayer - In the implementation block
@property (nonatomic,readonly) _TVPlaybackPiPStateMachine * pipStateMachine;              //@synthesize pipStateMachine=_pipStateMachine - In the implementation block
+(id)sharedInstance;
-(void)_playbackStateDidChange:(id)arg1 ;
-(_TVPlaybackPiPStateMachine *)pipStateMachine;
-(_TVPlayer *)presentedPlayer;
-(id)viewControllerForPlayer:(id)arg1 ;
-(void)presentWithPlayer:(id)arg1 animated:(BOOL)arg2 ;
-(void)presentWithPlayer:(id)arg1 animated:(BOOL)arg2 prepareBlock:(/*^block*/id)arg3 ;
-(id)_viewControllerForPlayer:(id)arg1 remove:(BOOL)arg2 ;
-(void)setPresentedPlayer:(_TVPlayer *)arg1 ;
-(void)stopPresentedPlayer;
-(void)resetPresentedPlayer;
-(void)stopBackgroundedPlayer;
@end

