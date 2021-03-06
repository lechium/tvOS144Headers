//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "RPDaemonProtocol-Protocol.h"

@class NSString, NSXPCConnection, NSXPCListener, RPRecordingManager;

@interface RPConnectionManager : NSObject <NSXPCListenerDelegate, RPDaemonProtocol>
{
    NSXPCListener *_publicListener;	// 8 = 0x8
    RPRecordingManager *_recordingManager;	// 16 = 0x10
    NSXPCConnection *_currentConnection;	// 24 = 0x18
}

+ (id)uniqueClientIdentifierWithPID:(int)arg1;	// IMP=0x000000010001bfd8
+ (id)sharedInstance;	// IMP=0x000000010001bd94
- (void).cxx_destruct;	// IMP=0x0000000100021e00
@property(nonatomic) __weak NSXPCConnection *currentConnection; // @synthesize currentConnection=_currentConnection;
- (oneway void)consumeSandboxExtension:(id)arg1 processNewConnection:(_Bool)arg2;	// IMP=0x0000000100021c0c
- (_Bool)releaseSandboxExtensionHandle:(long long)arg1;	// IMP=0x0000000100021bec
- (long long)consumeSandboxExtensionToken:(id)arg1;	// IMP=0x0000000100021ba8
- (oneway void)reportCameraUsage:(long long)arg1;	// IMP=0x0000000100021ba4
- (oneway void)saveVideoToCameraRoll:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000219d0
- (oneway void)saveVideo:(id)arg1 extensionToken:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000214d4
- (oneway void)saveVideo:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100021438
- (oneway void)macApplicationDidBecomeActiveWithContextID:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000211c4
- (oneway void)macApplicationDidResignActive;	// IMP=0x000000010002105c
- (oneway void)generateClipWithSeconds:(double)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100020e04
- (oneway void)stopClipBufferingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100020bc4
- (oneway void)startClipBufferingWithMicrophoneEnabled:(_Bool)arg1 windowSize:(struct CGSize)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010002095c
- (oneway void)stopSystemRecordingWithURLHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010002060c
- (oneway void)stopSystemRecordingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000202e4
- (oneway void)startSystemRecordingWithContextID:(id)arg1 windowSize:(struct CGSize)arg2 microphoneEnabled:(_Bool)arg3 cameraEnabled:(_Bool)arg4 withHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000010001ff34
- (oneway void)resumeInAppBroadcastWithWindowLayerContextID:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001fc0c
- (oneway void)pauseInAppBroadcast;	// IMP=0x000000010001faa4
- (oneway void)stopInAppBroadcastWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010001f870
- (oneway void)startInAppBroadcastWithContextID:(id)arg1 windowSize:(struct CGSize)arg2 microphoneEnabled:(_Bool)arg3 cameraEnabled:(_Bool)arg4 listenerEndpoint:(id)arg5 withHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000010001f55c
- (oneway void)setupBroadcastWithHostBundleID:(id)arg1 broadcastExtensionBundleID:(id)arg2 broadcastConfigurationData:(id)arg3 userInfo:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x000000010001f13c
- (oneway void)resumeInAppCaptureWithWindowLayerContextID:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ee14
- (oneway void)pauseInAppCapture;	// IMP=0x000000010001ecac
- (oneway void)stopInAppCaptureWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010001ea78
- (oneway void)startInAppCaptureWithContextID:(id)arg1 windowSize:(struct CGSize)arg2 microphoneEnabled:(_Bool)arg3 cameraEnabled:(_Bool)arg4 withHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000010001e7a0
- (oneway void)pauseInAppRecording;	// IMP=0x000000010001e638
- (oneway void)discardInAppRecordingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010001e49c
- (oneway void)stopInAppRecordingWithUrl:(id)arg1 extensionToken:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010001df68
- (oneway void)stopInAppRecordingWithUrl:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001de34
- (oneway void)stopInAppRecordingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010001dbdc
- (oneway void)resumeInAppRecordingWithWindowLayerContextID:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001d8b4
- (oneway void)startInAppRecordingWithContextID:(id)arg1 windowSize:(struct CGSize)arg2 microphoneEnabled:(_Bool)arg3 cameraEnabled:(_Bool)arg4 withHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000010001d5dc
- (oneway void)updateProcessIDForAudioCaptureWithPID:(int)arg1;	// IMP=0x000000010001d394
- (oneway void)setBroadcastURL:(id)arg1;	// IMP=0x000000010001d1f8
- (oneway void)getSystemBroadcastExtensionInfo:(CDUnknownBlockType)arg1;	// IMP=0x000000010001d05c
- (oneway void)stopAllActiveClients;	// IMP=0x000000010001cef4
- (oneway void)stopCurrentActiveSessionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010001cd58
- (void)stopAndDiscardInAppRecordingFromFilePermissionErrorWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010001c9e8
- (id)getCurrentConnection;	// IMP=0x000000010001c984
- (void)processNewConnection:(id)arg1;	// IMP=0x000000010001c4f0
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010001c2e4
- (id)connectionManagerQueue;	// IMP=0x000000010001c274
- (_Bool)hasBroadcastEntitlements;	// IMP=0x000000010001bf3c
- (_Bool)hasSystemRecordingEntitlements;	// IMP=0x000000010001beb8
- (id)init;	// IMP=0x000000010001be00
- (void)finishStartup;	// IMP=0x000000010001bd84

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

