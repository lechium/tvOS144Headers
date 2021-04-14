/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVPMediaItemReportingDelegate <NSObject>
@optional
-(void)mediaItemDidBecomeCurrentItem:(id)arg1 player:(id)arg2 reason:(id)arg3;
-(void)mediaItemWillNoLongerBeCurrentItem:(id)arg1 player:(id)arg2 reason:(id)arg3;
-(void)mediaItem:(id)arg1 willChangeFromPlaybackState:(id)arg2 toPlaybackState:(id)arg3 updatedRate:(double)arg4 player:(id)arg5;
-(void)mediaItem:(id)arg1 didChangeFromPlaybackState:(id)arg2 toPlaybackState:(id)arg3 updatedRate:(double)arg4 player:(id)arg5;
-(void)mediaItemDidStall:(id)arg1 player:(id)arg2;
-(void)mediaItemWillStartBuffering:(id)arg1 player:(id)arg2;
-(void)mediaItemBufferingDidBecomeLikelyToKeepUp:(id)arg1 timeTakenForOperation:(double)arg2 player:(id)arg3;
-(void)mediaItem:(id)arg1 elapsedTimeDidChangeTo:(double)arg2 playbackDateDidChangeTo:(id)arg3 dueToTimeJump:(BOOL)arg4;
-(void)mediaItemDidSwitchVariantStreams:(id)arg1 player:(id)arg2;
-(void)mediaItem:(id)arg1 errorDidOccur:(id)arg2 player:(id)arg3;
-(void)mediaItemDidPrepareForLoading:(id)arg1 timeTakenForOperation:(double)arg2 player:(id)arg3;
-(void)mediaItemDidLoadAVAssetKeys:(id)arg1 timeTakenForOperation:(double)arg2 player:(id)arg3;
-(void)mediaItemDidPrepareForPlaybackInitiation:(id)arg1 timeTakenForOperation:(double)arg2 player:(id)arg3;
-(void)mediaItemPlayerItemStatusDidBecomeReadyToPlay:(id)arg1 timeTakenForOperation:(double)arg2 player:(id)arg3;
-(void)mediaItemAllInitialLoadingComplete:(id)arg1 totalTime:(double)arg2 player:(id)arg3;

@end

