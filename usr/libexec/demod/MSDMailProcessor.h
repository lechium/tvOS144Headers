//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSDContentServerLocatorDelegate-Protocol.h"

@class MSDContentServerConnection, MSDContentServerLocator, NSString, NSTimer;

@interface MSDMailProcessor : NSObject <MSDContentServerLocatorDelegate>
{
    _Bool _waitingForCommand;	// 8 = 0x8
    _Bool _fullKeysSent;	// 9 = 0x9
    unsigned long long _pingInterval;	// 16 = 0x10
    NSTimer *_pingTimer;	// 24 = 0x18
    MSDContentServerLocator *_serverLocator;	// 32 = 0x20
    NSString *_serverAddress;	// 40 = 0x28
    NSString *_serverPort;	// 48 = 0x30
    MSDContentServerConnection *_serverConnection;	// 56 = 0x38
    unsigned long long _queuedPingType;	// 64 = 0x40
}

+ (id)sharedInstance;	// IMP=0x00000001000704e0
- (void).cxx_destruct;	// IMP=0x00000001000734e0
@property unsigned long long queuedPingType; // @synthesize queuedPingType=_queuedPingType;
@property _Bool fullKeysSent; // @synthesize fullKeysSent=_fullKeysSent;
@property(retain) MSDContentServerConnection *serverConnection; // @synthesize serverConnection=_serverConnection;
@property(retain) NSString *serverPort; // @synthesize serverPort=_serverPort;
@property(retain) NSString *serverAddress; // @synthesize serverAddress=_serverAddress;
@property(retain) MSDContentServerLocator *serverLocator; // @synthesize serverLocator=_serverLocator;
@property(retain) NSTimer *pingTimer; // @synthesize pingTimer=_pingTimer;
- (long long)convertPingType:(unsigned long long)arg1;	// IMP=0x0000000100073440
- (_Bool)updateManifestInfo:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100073140
- (long long)pingIntervalToUse;	// IMP=0x0000000100072ff4
- (_Bool)processRequest:(id)arg1;	// IMP=0x0000000100071eec
- (id)reducedKeyList;	// IMP=0x0000000100071e5c
- (id)fullKeyList;	// IMP=0x0000000100071d98
- (_Bool)ack:(_Bool)arg1;	// IMP=0x0000000100071b5c
- (id)pingWithType:(unsigned long long)arg1;	// IMP=0x0000000100071520
- (void)pingAndProcess:(unsigned long long)arg1 waitForCompletion:(_Bool)arg2;	// IMP=0x000000010007117c
@property _Bool waitingForCommand; // @synthesize waitingForCommand=_waitingForCommand;
@property unsigned long long pingInterval; // @synthesize pingInterval=_pingInterval;
- (void)handlePingTimerTicking:(id)arg1;	// IMP=0x000000010007100c
- (void)startPeriodicPing;	// IMP=0x0000000100070d44
- (void)sendImmediateDeviceInfoPing;	// IMP=0x0000000100070c88
- (void)sendPushNotificationPing;	// IMP=0x0000000100070c74
- (void)reportBundleInstallCompleted;	// IMP=0x0000000100070c60
- (void)reportCachingHubFailed;	// IMP=0x0000000100070c4c
- (void)start;	// IMP=0x000000010007095c
- (void)contentServerDidDisappear;	// IMP=0x0000000100070958
- (void)contentServerDidAppear:(id)arg1 port:(id)arg2;	// IMP=0x0000000100070664
- (id)init;	// IMP=0x000000010007054c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

