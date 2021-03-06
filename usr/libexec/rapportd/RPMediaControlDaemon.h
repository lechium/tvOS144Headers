//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source, RPMessageable;

@interface RPMediaControlDaemon : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    unsigned int _movementCommand;	// 16 = 0x10
    unsigned int _movementEndCommand;	// 20 = 0x14
    NSObject<OS_dispatch_source> *_movementEndTimer;	// 24 = 0x18
    unsigned long long _mediaControlFlags;	// 32 = 0x20
    _Bool _mediaControlInterest;	// 40 = 0x28
    _Bool _mediaRemoteCommandGetting;	// 41 = 0x29
    _Bool _mediaRemoteCommandObserving;	// 42 = 0x2a
    unsigned int _mediaRemoteVolumeCaps;	// 44 = 0x2c
    _Bool _mediaRemoteVolumeObserving;	// 48 = 0x30
    _Bool _volumeControlEnabledPB;	// 49 = 0x31
    int _volumeControlNotifyToken;	// 52 = 0x34
    id <RPMessageable> _messenger;	// 56 = 0x38
    CDUnknownBlockType _sendInterestEventHandler;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010003d100
@property(copy, nonatomic) CDUnknownBlockType sendInterestEventHandler; // @synthesize sendInterestEventHandler=_sendInterestEventHandler;
@property(retain, nonatomic) id <RPMessageable> messenger; // @synthesize messenger=_messenger;
- (void)_handleSetVolume:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003cd88
- (void)_handleGetVolume:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003cb8c
- (void)_handleSkipByRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003ca44
- (void)_handleMovementCommand:(unsigned int)arg1 endCommand:(unsigned int)arg2;	// IMP=0x000000010003c8a0
- (void)_handleMediaCaptionSet:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003c67c
- (void)_handleMediaCaptionGet:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003c528
- (void)_handleCommand:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003c284
- (void)_mediaRemoteVolumeControlUpdate;	// IMP=0x000000010003c25c
- (void)_mediaRemoteVolumeControlChanged:(id)arg1;	// IMP=0x000000010003c0b4
- (void)_mediaRemoteSupportedCommandsGet;	// IMP=0x000000010003bdc4
- (void)_mediaRemoteSupportedCommandsChanged;	// IMP=0x000000010003bcdc
- (void)_mediaControlFlagsUpdate:(unsigned long long)arg1 mask:(unsigned long long)arg2;	// IMP=0x000000010003bb68
- (void)_mediaControlEnsureStopped;	// IMP=0x000000010003ba2c
- (void)_mediaControlEnsureStarted;	// IMP=0x000000010003b5ec
- (void)_update;	// IMP=0x000000010003b5c8
- (void)deregisteredEventID:(id)arg1;	// IMP=0x000000010003b570
- (void)registeredEventID:(id)arg1;	// IMP=0x000000010003b514
- (void)invalidate;	// IMP=0x000000010003b3ec
- (_Bool)activateAndReturnError:(id *)arg1;	// IMP=0x000000010003b164
- (id)init;	// IMP=0x000000010003b0f4

@end

