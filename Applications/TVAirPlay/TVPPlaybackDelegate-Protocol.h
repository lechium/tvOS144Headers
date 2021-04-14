//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSObject;
@protocol TVPPlayback;

@protocol TVPPlaybackDelegate <NSObject>
- (_Bool)player:(NSObject<TVPPlayback> *)arg1 shouldChangeToMediaAtIndex:(unsigned long long)arg2;
- (_Bool)player:(NSObject<TVPPlayback> *)arg1 shouldChangeMediaInDirection:(long long)arg2;
- (_Bool)player:(NSObject<TVPPlayback> *)arg1 shouldScanAtRate:(double)arg2;
- (_Bool)playerShouldPause:(NSObject<TVPPlayback> *)arg1;
- (_Bool)playerShouldPlay:(NSObject<TVPPlayback> *)arg1 timeFromWhichToPlay:(double *)arg2;
- (_Bool)player:(NSObject<TVPPlayback> *)arg1 shouldSeekToTime:(double *)arg2 playbackDate:(id *)arg3;

@optional
- (NSArray *)player:(NSObject<TVPPlayback> *)arg1 filteredSubtitleOptionsFromOptions:(NSArray *)arg2;
@end

