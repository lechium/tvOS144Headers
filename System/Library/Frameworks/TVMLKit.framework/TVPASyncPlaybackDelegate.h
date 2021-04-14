/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVPASyncPlaybackDelegate <NSObject>
@required
-(void)player:(id)arg1 shouldSeekToTime:(double)arg2 completion:(/*^block*/id)arg3;
-(void)player:(id)arg1 shouldSeekToDate:(id)arg2 completion:(/*^block*/id)arg3;
-(void)player:(id)arg1 shouldPlayFromTime:(double)arg2 completion:(/*^block*/id)arg3;
-(void)player:(id)arg1 shouldPauseWithCompletion:(/*^block*/id)arg2;
-(void)player:(id)arg1 shouldScanAtRate:(double)arg2 completion:(/*^block*/id)arg3;
-(void)player:(id)arg1 shouldChangeMediaInDirection:(long long)arg2 completion:(/*^block*/id)arg3;
-(void)player:(id)arg1 shouldChangeToMediaAtIndex:(unsigned long long)arg2 completion:(/*^block*/id)arg3;

@end

