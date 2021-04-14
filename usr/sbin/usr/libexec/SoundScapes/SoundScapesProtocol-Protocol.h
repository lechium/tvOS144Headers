//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSString;

@protocol SoundScapesProtocol <NSObject>
- (void)updateMediaAffinity:(NSString *)arg1 withAffinity:(_Bool)arg2;
- (void)enableSynthDelay:(_Bool)arg1;
- (void)setBinIntensityPlayInterval:(unsigned long long)arg1;
- (void)queryDeviceAssetStatus:(NSString *)arg1 withCompletion:(void (^)(_Bool, NSString *, NSString *))arg2;
- (void)sendPlaybackQueueWithMediaItem:(NSData *)arg1 forIntentID:(NSString *)arg2 toDestination:(NSArray *)arg3 withSpeakerUserID:(NSString *)arg4;
- (void)stopPlayback;
- (void)playSynth;
- (void)playSample;
@end
