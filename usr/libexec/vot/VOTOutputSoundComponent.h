//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VOTOutputComponent.h"

@class NSMutableDictionary, SCRCThread;

@interface VOTOutputSoundComponent : VOTOutputComponent
{
    NSMutableDictionary *_cachedSounds;	// 24 = 0x18
    float _volume;	// 32 = 0x20
    SCRCThread *_soundThread;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010002907c
- (void)sound:(id)arg1 didFinishPlaying:(_Bool)arg2;	// IMP=0x0000000100028f38
- (void)_playSoundFast:(id)arg1 startedBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100028838
- (void)playSoundFast:(id)arg1 startedBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010002874c
- (void)playSoundFast:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000286f8
- (double)outputMutedActivityLastToggleTime;	// IMP=0x00000001000286e0
- (id)outputMutedActivityValue:(id)arg1;	// IMP=0x00000001000286d0
- (void)setVolume:(float)arg1;	// IMP=0x00000001000286c0
- (void)_handlePerformAction:(id)arg1;	// IMP=0x00000001000285e4
- (id)soundThread;	// IMP=0x00000001000285d4
- (id)_findSound:(id)arg1;	// IMP=0x00000001000283fc
- (void)handleEvent:(id)arg1;	// IMP=0x0000000100028360
- (void)_handleSoundThreadMediaSessionDied;	// IMP=0x0000000100028238
- (void)_mediaSessionDied:(id)arg1;	// IMP=0x000000010002820c
- (void)_initializeThread;	// IMP=0x00000001000281b4
- (id)init;	// IMP=0x0000000100028038

@end

