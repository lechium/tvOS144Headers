//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "iAP2FileTransferSendDelegate-Protocol.h"

@class IAPApplicationStateMonitor, NSData, NSDate, NSDictionary, NSMutableDictionary, NSString, iAP2Connection, iAP2FileTransferSend;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface iAP2NowPlaying : NSObject <iAP2FileTransferSendDelegate>
{
    _Bool _enableNowPlayingInfoUpdate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_nowPlayingInfoUpdateQ;	// 16 = 0x10
    NSMutableDictionary *_nowPlayingInfo;	// 24 = 0x18
    NSMutableDictionary *_oldNowPlayingInfoSent;	// 32 = 0x20
    NSString *_nowPlayingAppIdentifier;	// 40 = 0x28
    NSString *_nowPlayingAppName;	// 48 = 0x30
    NSString *_nowPlayingAppBundleID;	// 56 = 0x38
    unsigned char _nowPlayingAppChanged;	// 64 = 0x40
    unsigned char _nowPlayingAppIsIPod;	// 65 = 0x41
    struct __CFArray *_currentSupportedCommands;	// 72 = 0x48
    unsigned char _nowPlayingAppIsIPodRadio;	// 80 = 0x50
    unsigned char _nowPlayingAppIsIPodIsValid;	// 81 = 0x51
    unsigned char _nowPlayingAppIsPlaying;	// 82 = 0x52
    NSDate *_nowPlayingAppIsPlayingTimestamp;	// 88 = 0x58
    NSDictionary *_nowPlayingInfoInterestDict;	// 96 = 0x60
    iAP2FileTransferSend *_nowPlayingInfoArtworkBuff;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_nowPlayingInfoArtworkBuffQ;	// 112 = 0x70
    iAP2FileTransferSend *_nowPlayingInfoPBQueueListBuff;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_nowPlayingInfoPBQueueListQ;	// 128 = 0x80
    NSData *_nowPlayingInfoPBQueueListData;	// 136 = 0x88
    NSData *_nowPlayingInfoPBQueueListMetaContentData;	// 144 = 0x90
    unsigned int _nowPlayingInfoPBQueueListMetaContentLastIndex;	// 152 = 0x98
    unsigned int _nowPlayingInfoPBQueueListMetaContentStartIndex;	// 156 = 0x9c
    unsigned int _nowPlayingInfoPBQueueListMetaContentSize;	// 160 = 0xa0
    unsigned int _nowPlayingInfoPBQueueListNeedUpdate;	// 164 = 0xa4
    unsigned int _nowPlayingInfoPBQueueListUpdated;	// 168 = 0xa8
    unsigned char _nowPlayingInfoPBQueueListDataHash[20];	// 172 = 0xac
    unsigned char _nowPlayingInfoPBQueueListDataHashValid;	// 192 = 0xc0
    NSObject<OS_dispatch_queue> *_nowPlayingInfoGetPBQueueListQ;	// 200 = 0xc8
    unsigned int _nowPlayingInfoPBQHandlerID;	// 208 = 0xd0
    NSObject<OS_dispatch_source> *_nowPlayingInfoUpdateTimerSource;	// 216 = 0xd8
    unsigned long long _lastItemUID;	// 224 = 0xe0
    NSData *_lastItemArtworkObj;	// 232 = 0xe8
    unsigned char _lastItemArtworkHash[20];	// 240 = 0xf0
    unsigned char _lastItemArtworkHashValid;	// 260 = 0x104
    unsigned char _isInitialUpdate;	// 261 = 0x105
    int _nowPlayingUpdatesPendingSend;	// 264 = 0x108
    unsigned char _nowPlayingQContainsNonLibrary;	// 268 = 0x10c
    unsigned int _nowPlayingPBTimerRetryCount;	// 272 = 0x110
    _Bool _requestedPBQueueListAvail;	// 276 = 0x114
    _Bool _requestedPBQueueListTransferID;	// 277 = 0x115
    _Bool _requestedPBQueueListItemInfoContent;	// 278 = 0x116
    IAPApplicationStateMonitor *_appStateMonitor;	// 280 = 0x118
    _Bool _isShuttingDown;	// 288 = 0x120
    _Bool _subscribedToAppleMusic;	// 289 = 0x121
    iAP2Connection *_connection;	// 296 = 0x128
    iAP2FileTransferSend *_nowPlayingInfoOBQueueListBuff;	// 304 = 0x130
}

+ (id)_MRShuffleToiAPShuffle:(id)arg1;	// IMP=0x00000001000618d0
+ (id)_MRRepeatToiAPRepeat:(id)arg1;	// IMP=0x0000000100061884
+ (id)__getNowPlayingFromConnectionID:(unsigned int)arg1;	// IMP=0x0000000100060d9c
+ (void)_printNowPlayingInfo:(id)arg1 forName:(id)arg2 withiAP2NowPlayingObject:(id)arg3;	// IMP=0x00000001000606ac
+ (unsigned char)_calcArtworkHash:(id)arg1 output:(unsigned char [20])arg2;	// IMP=0x000000010006049c
@property(readonly, nonatomic) _Bool subscribedToAppleMusic; // @synthesize subscribedToAppleMusic=_subscribedToAppleMusic;
@property(readonly, nonatomic) iAP2FileTransferSend *nowPlayingInfoOBQueueListBuff; // @synthesize nowPlayingInfoOBQueueListBuff=_nowPlayingInfoOBQueueListBuff;
@property(readonly, nonatomic) iAP2FileTransferSend *nowPlayingInfoArtworkBuff; // @synthesize nowPlayingInfoArtworkBuff=_nowPlayingInfoArtworkBuff;
@property(readonly, copy) NSDictionary *nowPlayingInfo; // @synthesize nowPlayingInfo=_nowPlayingInfo;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *nowPlayingInfoUpdateQ; // @synthesize nowPlayingInfoUpdateQ=_nowPlayingInfoUpdateQ;
@property(readonly, nonatomic) _Bool isShuttingDown; // @synthesize isShuttingDown=_isShuttingDown;
@property(readonly, nonatomic) iAP2Connection *connection; // @synthesize connection=_connection;
- (_Bool)fileTransferSendDidTimeout:(id)arg1;	// IMP=0x0000000100068208
- (_Bool)fileTransferSendDidSend:(id)arg1;	// IMP=0x00000001000680b4
- (void)handlePBQueueListDataSent:(id)arg1;	// IMP=0x0000000100067f88
- (void)handleArtworkDataSent:(id)arg1;	// IMP=0x0000000100067e5c
- (void)setNowPlayingInfomation:(id)arg1;	// IMP=0x0000000100067d4c
- (void)stopSendingNowPlayingInfomationUpdates;	// IMP=0x0000000100067d30
- (void)startSendingNowPlayingInfomationUpdates:(id)arg1;	// IMP=0x0000000100067a0c
- (void)shuttingDown;	// IMP=0x00000001000678d8
- (id)description;	// IMP=0x000000010006782c
- (void)_changeListenerQueuePriorityStop:(id)arg1;	// IMP=0x00000001000677f0
- (void)_changeListenerQueuePriorityHigh:(id)arg1;	// IMP=0x0000000100067748
- (void)dealloc;	// IMP=0x0000000100067578
- (id)initWithConnection:(id)arg1;	// IMP=0x0000000100066f20
- (void)_cleanup;	// IMP=0x0000000100066c58
- (_Bool)_isCommandActive:(unsigned int)arg1;	// IMP=0x0000000100066b64
- (_Bool)_isCommandSupported:(unsigned int)arg1;	// IMP=0x0000000100066a84
- (void *)_findCommandRefForCommand:(unsigned int)arg1;	// IMP=0x0000000100066914
- (void)_supportedCommandsDidChangeNotification;	// IMP=0x00000001000667e4
- (void)_supportedCommandsDidChange:(struct __CFArray *)arg1;	// IMP=0x0000000100066734
- (void)_playbackQueueDidChangeNotification:(id)arg1;	// IMP=0x0000000100065974
- (void)_nowPlayingAppIsPlayingChanged:(id)arg1;	// IMP=0x0000000100065760
- (void)_handleNowPlayingApplicationPIDChange:(int)arg1;	// IMP=0x0000000100065620
- (void)_nowPlayingInfoChanged:(id)arg1;	// IMP=0x00000001000654c4
- (void)_handleNowPlayingAppIsPlayingDidChange:(unsigned char)arg1;	// IMP=0x00000001000653c4
- (void)_handleNowPlayingAppChange;	// IMP=0x000000010006530c
- (void)_handleNowPlayingInfo:(struct __CFDictionary *)arg1;	// IMP=0x0000000100064acc
- (void)_handleSubscribedToAppleMusicChanged:(id)arg1;	// IMP=0x00000001000649a8
- (void)sendNowPlayingInfomationUpdate;	// IMP=0x0000000100064848
- (void)_sendNowPlayingInfomationUpdateHelper;	// IMP=0x00000001000642fc
- (void)decrementNowPlayingUpdatesPendingSend;	// IMP=0x00000001000642ec
- (id)_setupNowPlayingInfomationPlaybackInfoUpdate:(_Bool *)arg1 withSentList:(id)arg2;	// IMP=0x00000001000636b0
- (id)_setupNowPlayingInfomationMediaItemUpdateWithSentList:(id)arg1;	// IMP=0x0000000100063200
- (void)_setTrackIndex:(unsigned int)arg1;	// IMP=0x00000001000630d4
- (unsigned char)_isPBQueueListAvailable;	// IMP=0x0000000100063034
- (void)_setElapsedTime:(unsigned int)arg1;	// IMP=0x0000000100062ec8
- (unsigned char)_isSetElapsedTimeAvailable;	// IMP=0x0000000100062e2c
- (unsigned char)_nowPlayingIsStreaming;	// IMP=0x0000000100062d3c
- (unsigned char)_nowPlayingAppIsVideosApp;	// IMP=0x0000000100062d10
- (unsigned char)_nowPlayingAppIsIPodApp;	// IMP=0x0000000100062c10
- (void)_startNowPlayingPBQueueTransfer:(unsigned char)arg1;	// IMP=0x0000000100062b70
- (id)_handleNowPlayingPBQueueList;	// IMP=0x0000000100062748
- (void)_startNowPlayingArtworkTransfer:(unsigned char)arg1;	// IMP=0x0000000100062728
- (void)_startNowPlayingBufferTransferForTask:(id)arg1 buffID:(unsigned char)arg2 data:(id)arg3 queue:(id)arg4;	// IMP=0x00000001000620b0
- (id)_handleNowPlayingArtworkForInfoType:(id)arg1;	// IMP=0x0000000100061930
- (void)_updateNowPlayingDataProperty:(id)arg1 forType:(id)arg2 forParam:(id)arg3 forDict:(id)arg4;	// IMP=0x0000000100061718
- (void)_updateNowPlayingStringProperty:(id)arg1 forType:(id)arg2 forParam:(id)arg3 forDict:(id)arg4;	// IMP=0x00000001000615a4
- (void)_updateNowPlayingDoubleProperty:(id)arg1 forType:(id)arg2 forParam:(id)arg3 forDict:(id)arg4;	// IMP=0x0000000100061414
- (void)_updateNowPlayingU64Property:(id)arg1 forType:(id)arg2 forParam:(id)arg3 forDict:(id)arg4;	// IMP=0x0000000100061290
- (void)_updateNowPlayingU32Property:(id)arg1 forType:(id)arg2 forParam:(id)arg3 forDict:(id)arg4;	// IMP=0x000000010006110c
- (void)_updateNowPlayingU16Property:(id)arg1 forType:(id)arg2 forParam:(id)arg3 forDict:(id)arg4;	// IMP=0x0000000100060f88
- (void)_updateNowPlayingU8Property:(id)arg1 forType:(id)arg2 forParam:(id)arg3 forDict:(id)arg4;	// IMP=0x0000000100060e04

@end
