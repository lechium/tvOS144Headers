//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVPlayback/TVPPlayer.h>

@interface TVPPlayer (AirPlay)
- (id)mediaItemForIdentifier:(id)arg1;	// IMP=0x000000010000e4fc
- (void)setAudioSessionID:(unsigned int)arg1;	// IMP=0x000000010000e3e0
- (void)setReversePlaybackEndTime:(CDStruct_198678f7)arg1;	// IMP=0x000000010000e298
- (void)setForwardPlaybackEndTime:(CDStruct_198678f7)arg1;	// IMP=0x000000010000e150
- (void)setPlayerRate:(float)arg1;	// IMP=0x000000010000e038
- (void)setPlayerPosition:(double)arg1;	// IMP=0x000000010000df04
- (void)setSelectedMediaArray:(id)arg1;	// IMP=0x000000010000def8
- (id)selectedMediaArray;	// IMP=0x000000010000dc94
- (void)setTrackEnabled:(_Bool)arg1 trackID:(long long)arg2;	// IMP=0x000000010000dab8
- (_Bool)trackEnabled:(long long)arg1;	// IMP=0x000000010000d8b4
- (id)timedMetadata;	// IMP=0x000000010000d7e8
- (id)errorLogArray;	// IMP=0x000000010000d794
- (id)accessLogArray;	// IMP=0x000000010000d740
- (id)playbackInfo;	// IMP=0x000000010000cb58
@end

