//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, NSString;
@protocol BTAVRCP_NowPlayingInfoDelegate;

@interface BTAVRCP_NowPlayingInfo : NSObject
{
    _Bool _mrAppIsPlaying;	// 8 = 0x8
    id <BTAVRCP_NowPlayingInfoDelegate> _delegate;	// 16 = 0x10
    NSSet *_browsablePlayers;	// 24 = 0x18
    NSDictionary *_mrInfo;	// 32 = 0x20
    NSString *_mrAppIdentifier;	// 40 = 0x28
    void *_mrActiveOrigin;	// 48 = 0x30
    long long _currentPlaybackState;	// 56 = 0x38
    unsigned long long _currentTrackHash;	// 64 = 0x40
    CDStruct_a94359dc _currentSettings;	// 72 = 0x48
    NSString *_currentArtworkIdentifier;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000001000110f0
@property(retain, nonatomic) NSString *currentArtworkIdentifier; // @synthesize currentArtworkIdentifier=_currentArtworkIdentifier;
@property(nonatomic) CDStruct_a94359dc currentSettings; // @synthesize currentSettings=_currentSettings;
@property(nonatomic) unsigned long long currentTrackHash; // @synthesize currentTrackHash=_currentTrackHash;
@property(nonatomic) long long currentPlaybackState; // @synthesize currentPlaybackState=_currentPlaybackState;
@property(nonatomic) void *mrActiveOrigin; // @synthesize mrActiveOrigin=_mrActiveOrigin;
@property(nonatomic) _Bool mrAppIsPlaying; // @synthesize mrAppIsPlaying=_mrAppIsPlaying;
@property(retain, nonatomic) NSString *mrAppIdentifier; // @synthesize mrAppIdentifier=_mrAppIdentifier;
@property(retain, nonatomic) NSDictionary *mrInfo; // @synthesize mrInfo=_mrInfo;
@property(readonly, nonatomic) NSSet *browsablePlayers; // @synthesize browsablePlayers=_browsablePlayers;
@property(nonatomic) __weak id <BTAVRCP_NowPlayingInfoDelegate> delegate; // @synthesize delegate=_delegate;
- (id)heights;	// IMP=0x000000010001102c
- (id)widths;	// IMP=0x0000000100011020
- (id)encodings;	// IMP=0x0000000100011014
- (_Bool)isMusicApp;	// IMP=0x0000000100010fbc
- (_Bool)isLocalOrigin;	// IMP=0x0000000100010f94
- (void)_settingsDidChange:(CDStruct_a94359dc)arg1;	// IMP=0x0000000100010ed4
- (CDStruct_a94359dc)settings;	// IMP=0x0000000100010ec8
- (void)_trackDidChange;	// IMP=0x0000000100010e20
- (unsigned long long)trackId;	// IMP=0x0000000100010bec
- (unsigned long long)_trackHash;	// IMP=0x0000000100010844
- (void)_playbackStateDidChange;	// IMP=0x00000001000107b0
- (long long)playbackState;	// IMP=0x0000000100010708
- (float)_defaultPlaybackRate;	// IMP=0x0000000100010678
- (float)_playbackRate;	// IMP=0x00000001000105c0
- (id)playerName;	// IMP=0x00000001000104b4
- (int)playerId;	// IMP=0x000000010001048c
- (_Bool)isBrowsablePlayer;	// IMP=0x0000000100010408
- (id)trackImageHandle;	// IMP=0x00000001000102ec
- (id)trackPosition;	// IMP=0x0000000100010144
- (id)trackDuration;	// IMP=0x0000000100010094
- (id)trackQueueCount;	// IMP=0x000000010000ffc0
- (id)trackQueueIndex;	// IMP=0x000000010000febc
- (id)trackGenre;	// IMP=0x000000010000fe5c
- (id)trackArtist;	// IMP=0x000000010000fdfc
- (id)trackAlbum;	// IMP=0x000000010000fd3c
- (id)trackTitle;	// IMP=0x000000010000fcdc
- (void)_supportedCommandsDidChange:(id)arg1;	// IMP=0x000000010000fb94
- (void)_activeOriginDidChange:(void *)arg1;	// IMP=0x000000010000fad0
- (void)_playbackQueueDidChange;	// IMP=0x000000010000fa5c
- (void)_appIsPlayingDidChange:(_Bool)arg1;	// IMP=0x000000010000f9d4
- (void)_appDidChange:(id)arg1;	// IMP=0x000000010000f8a8
- (void)_infoDidChange:(id)arg1;	// IMP=0x000000010000f810
- (void)_supportedCommandsDidChangeNotification;	// IMP=0x000000010000f804
- (void)_activeOriginDidChangeNotification;	// IMP=0x000000010000f7f8
- (void)_playbackQueueDidChangeNotification;	// IMP=0x000000010000f7ec
- (void)_appIsPlayingDidChangeNotification:(id)arg1;	// IMP=0x000000010000f758
- (void)_appDidChangeNotification:(id)arg1;	// IMP=0x000000010000f74c
- (void)_infoDidChangeNotification;	// IMP=0x000000010000f740
- (unsigned long long)_getEncodingForMimeType:(id)arg1;	// IMP=0x000000010000f6cc
- (void)_refreshSupportedCommands;	// IMP=0x000000010000f660
- (void)_refreshActiveOrigin;	// IMP=0x000000010000f5f0
- (void)_refreshAppIsPlaying;	// IMP=0x000000010000f580
- (void)_refreshApp;	// IMP=0x000000010000f514
- (void)_refreshInfo;	// IMP=0x000000010000f4a0
- (void)dealloc;	// IMP=0x000000010000f3fc
- (void)_initializeState;	// IMP=0x000000010000ee10
- (id)init;	// IMP=0x000000010000eb00

@end

