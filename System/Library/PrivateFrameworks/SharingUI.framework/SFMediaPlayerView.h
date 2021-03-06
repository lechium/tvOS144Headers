/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@protocol OS_dispatch_source;
@class AVPlayerLooper, AVQueuePlayer, NSMutableArray, NSObject;

@interface SFMediaPlayerView : UIView {

	AVPlayerLooper* _avLooper;
	AVQueuePlayer* _avQueuePlayer;
	NSMutableArray* _mediaItems;
	NSObject*<OS_dispatch_source> _speedUpTimer;
	BOOL _pausesAfterEachItem;

}

@property (assign,nonatomic) BOOL pausesAfterEachItem;              //@synthesize pausesAfterEachItem=_pausesAfterEachItem - In the implementation block
+(Class)layerClass;
-(void)stop;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isPaused;
-(void)pause;
-(void)play;
-(void)_pause;
-(void)advanceToNextItem;
-(void)playerItemDidReachEnd:(id)arg1 ;
-(void)startMovieLoopWithPath:(id)arg1 ;
-(void)startMovieLoopWithPath:(id)arg1 assetType:(int)arg2 adjustmentsURL:(id)arg3 ;
-(void)updateViewForAssetType:(int)arg1 adjustmentsURL:(id)arg2 ;
-(BOOL)pausesAfterEachItem;
-(void)setPausesAfterEachItem:(BOOL)arg1 ;
-(void)removeMovieItem:(id)arg1 ;
-(void)stopSpeedUpTimer;
-(void)enqueueItemsFromMediaItem:(id)arg1 afterItem:(id)arg2 ;
-(void)dequeueNonPlayingItemsFromMediaItem:(id)arg1 ;
-(void)setUpTimeRangeNotificationsForItem:(id)arg1 ;
-(void)addMovieItem:(id)arg1 ;
-(void)removeAllQueuedItems;
-(void)breakFirstEnqueuedLoop;
-(void)speedUpRemainderOfCurrentItem;
@end

