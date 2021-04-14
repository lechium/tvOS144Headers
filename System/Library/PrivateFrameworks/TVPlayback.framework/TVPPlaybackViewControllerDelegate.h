/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVPPlaybackViewControllerDelegate <NSObject>
@optional
-(void)contextMenuForMediaItem:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)playbackViewController:(id)arg1 loadRelatedContentForMediaItem:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)playMediaItemAtIndex:(long long)arg1;
-(BOOL)playbackViewControllerProvidesCustomControls:(id)arg1;
-(void)playbackViewController:(id)arg1 controlsForMediaItem:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(BOOL)playbackViewController:(id)arg1 shouldShowIdleViewControllerForMediaItem:(id)arg2;
-(void)playbackViewController:(id)arg1 wantsIdleViewControllerForMediaItem:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)playbackViewController:(id)arg1 willShowIdleViewController:(id)arg2 forMediaItem:(id)arg3 targetCoverFrame:(inout CGRect*)arg4;
-(void)playbackViewControllerUserWillInitiatePlayback:(id)arg1;
-(long long)currentEndpointDeviceTypeForPlaybackViewController:(id)arg1;
-(void)userDidFinishInteractionAfterErrorWasPresented:(id)arg1;
-(BOOL)playbackViewController:(id)arg1 handleControlGesture:(long long)arg2;
-(BOOL)playbackViewControllerShouldChangeMediaUsingDirection:(id)arg1;

@end

