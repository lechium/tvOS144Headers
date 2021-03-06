/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source;
@class MPCMediaFoundationTranslator, NSObject;

@interface MPCItemBookmarker : NSObject {

	MPCMediaFoundationTranslator* _translator;
	NSObject*<OS_dispatch_source> _bookmarkingTimer;

}

@property (nonatomic,retain) MPCMediaFoundationTranslator * translator;                   //@synthesize translator=_translator - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> bookmarkingTimer;              //@synthesize bookmarkingTimer=_bookmarkingTimer - In the implementation block
-(MPCMediaFoundationTranslator *)translator;
-(void)userDidSkipDuringPlaybackFromItem:(id)arg1 direction:(long long)arg2 ;
-(id)initWithTranslator:(id)arg1 ;
-(void)playbackDidStopForItem:(id)arg1 time:(double)arg2 ;
-(void)updateDurationSnapshotWithTime:(double)arg1 forItem:(id)arg2 rate:(float)arg3 ;
-(void)currentItemWillChangeFromItem:(id)arg1 toItem:(id)arg2 time:(double)arg3 ;
-(void)itemDidBecomeCurrent:(id)arg1 time:(double)arg2 ;
-(void)itemDidResignCurrent:(id)arg1 time:(double)arg2 ;
-(void)itemDidPlayToEnd:(id)arg1 time:(double)arg2 ;
-(void)playbackDidStartForItem:(id)arg1 time:(double)arg2 rate:(float)arg3 ;
-(void)playbackRateDidChangeToRate:(float)arg1 forItem:(id)arg2 time:(double)arg3 ;
-(void)playbackStateDidChangeFromState:(long long)arg1 toState:(long long)arg2 forItem:(id)arg3 time:(double)arg4 rate:(float)arg5 ;
-(void)setTranslator:(MPCMediaFoundationTranslator *)arg1 ;
-(void)_teardownBookmarkingTimer;
-(void)_setupBookmarkingTimerForItem:(id)arg1 ;
-(NSObject*<OS_dispatch_source>)bookmarkingTimer;
-(void)setBookmarkingTimer:(NSObject*<OS_dispatch_source>)arg1 ;
@end

