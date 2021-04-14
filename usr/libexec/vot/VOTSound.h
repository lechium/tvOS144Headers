//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioPlayer, NSString, SCRCTargetSelectorTimer, SCRCThread, VOTOutputAction;

@interface VOTSound : NSObject
{
    VOTOutputAction *_action;	// 8 = 0x8
    struct OpaqueAudioFileID *_audioFileID;	// 16 = 0x10
    struct OpaqueAudioComponentInstance *_audioUnit;	// 24 = 0x18
    unsigned int _soundID;	// 32 = 0x20
    id _delegate;	// 40 = 0x28
    id _owner;	// 48 = 0x30
    CDUnknownBlockType _completionBlock;	// 56 = 0x38
    double _volume;	// 64 = 0x40
    NSString *_soundPath;	// 72 = 0x48
    AVAudioPlayer *_player;	// 80 = 0x50
    struct os_unfair_lock_s _completionBlockLock;	// 88 = 0x58
    long long _soundChannels;	// 96 = 0x60
    _Bool _hearingAidStreamSelected;	// 104 = 0x68
    unsigned long long _soundPlayGeneration;	// 112 = 0x70
    SCRCTargetSelectorTimer *_cancelHelperTimer;	// 120 = 0x78
    _Bool _isPlaying;	// 128 = 0x80
    _Bool _isVolumeSound;	// 129 = 0x81
    SCRCThread *_soundThread;	// 136 = 0x88
    NSString *_resolvedSoundPath;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00000001000160c8
@property(copy, nonatomic) NSString *resolvedSoundPath; // @synthesize resolvedSoundPath=_resolvedSoundPath;
@property(nonatomic) _Bool isVolumeSound; // @synthesize isVolumeSound=_isVolumeSound;
@property(retain, nonatomic) SCRCThread *soundThread; // @synthesize soundThread=_soundThread;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;	// IMP=0x0000000100015ff8
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;	// IMP=0x0000000100015f74
- (void)playAvoidingSSS;	// IMP=0x0000000100015f64
- (void)play;	// IMP=0x0000000100015f54
- (void)playAvoidingSSS:(_Bool)arg1;	// IMP=0x0000000100015be8
- (void)_cancelHelperFired:(unsigned long long)arg1;	// IMP=0x0000000100015af0
- (void)_sendFinishPlayingNotificationsWithCompletionBlock:(CDUnknownBlockType)arg1 delegate:(id)arg2;	// IMP=0x0000000100015a20
- (void)_finishedPlaying;	// IMP=0x000000010001588c
- (id)action;	// IMP=0x0000000100015884
- (void)setAction:(id)arg1;	// IMP=0x0000000100015878
- (id)owner;	// IMP=0x0000000100015870
- (void)setOwner:(id)arg1;	// IMP=0x0000000100015864
- (id)delegate;	// IMP=0x000000010001585c
- (void)setDelegate:(id)arg1;	// IMP=0x0000000100015850
- (void)dealloc;	// IMP=0x0000000100015748
- (void)setVolume:(float)arg1;	// IMP=0x0000000100015730
- (id)soundPath;	// IMP=0x0000000100015728
- (void)_updateAudioSessionProperties;	// IMP=0x00000001000156d0
- (void)__updateAudioSessionProperties;	// IMP=0x00000001000153e8
- (void)_updatePlayerWithAudioFile:(_Bool)arg1;	// IMP=0x0000000100015188
- (_Bool)shouldUseAVAudioPlayer;	// IMP=0x00000001000150f4
- (void)resetSoundForLostMediaSession;	// IMP=0x0000000100015088
- (void)_hearingAidRouteChange:(id)arg1;	// IMP=0x0000000100015084
- (id)initWithSoundPath:(id)arg1 thread:(id)arg2;	// IMP=0x0000000100014c14

@end
