/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MFPlaybackStackControllerDelegate
@required
-(void)currentItemWillChangeFromItem:(id)arg1 toItem:(id)arg2 source:(long long)arg3 timeStamp:(id)arg4;
-(void)itemIsReadyToPlay:(id)arg1 timeStamp:(id)arg2;
-(void)itemDidFailToLoad:(id)arg1 error:(id)arg2 timeStamp:(id)arg3;
-(void)itemDidFailToPlayToEnd:(id)arg1 error:(id)arg2 timeStamp:(id)arg3;
-(void)itemDidBecomeCurrent:(id)arg1 source:(long long)arg2 timeStamp:(id)arg3;
-(void)itemDidResignCurrent:(id)arg1 source:(long long)arg2 timeStamp:(id)arg3;
-(void)playbackDidStartForItem:(id)arg1 rate:(float)arg2 fromStalling:(BOOL)arg3 timeStamp:(id)arg4;
-(void)playbackDidStopForItem:(id)arg1 timeStamp:(id)arg2;
-(void)playbackWaitingToPlayForItem:(id)arg1 reason:(id)arg2 timeStamp:(id)arg3;
-(void)itemDidPlayToEnd:(id)arg1 timeStamp:(id)arg2;
-(void)playbackTimeDidChangeTo:(double)arg1 forItem:(id)arg2 reason:(long long)arg3 timeStamp:(id)arg4;
-(void)playbackRateDidChangeToRate:(float)arg1 forItem:(id)arg2 timeStamp:(id)arg3;
-(void)playbackIsLikelyToKeepUp:(BOOL)arg1 forItem:(id)arg2 timeStamp:(id)arg3;
-(void)playbackBufferStateDidChangeToState:(long long)arg1 forItem:(id)arg2 timeStamp:(id)arg3;
-(void)didReachEndOfQueueWithReason:(id)arg1;
-(void)interruptionDidBeginWithInterruptor:(id)arg1 timeStamp:(id)arg2;
-(void)interruptionDidFinishForInterruptor:(id)arg1 shouldResume:(BOOL)arg2 timeStamp:(id)arg3;
-(void)routeDidChange:(BOOL)arg1 metadata:(id)arg2 timeStamp:(id)arg3;
-(void)stateDidChangeFromState:(long long)arg1 toState:(long long)arg2 timeStamp:(id)arg3;
-(void)screenRecordingDidChange:(BOOL)arg1 timeStamp:(id)arg2;
-(void)userActionDidBegin:(id)arg1;
-(void)userActionDidEnd:(id)arg1 error:(id)arg2;
-(void)mediaServicesInterruptionDidBeginWithItemAtDeath:(id)arg1 timeAtDeath:(double)arg2 timeStamp:(id)arg3;
-(void)mediaServicesInterruptionDidEndWithTimeStamp:(id)arg1;
-(void)playbackIsBlockedOnNonPlayableItem:(id)arg1;
-(void)userSeekCompletedForItem:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 timeStamp:(id)arg4;

@end

