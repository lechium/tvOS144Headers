//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CSVoiceTriggerXPCConnectionDelegate, OS_dispatch_queue, OS_xpc_object;

@interface CSVoiceTriggerXPCConnection : NSObject
{
    id <CSVoiceTriggerXPCConnectionDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_xpc_object> *_connection;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000cddd8
@property(retain, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSVoiceTriggerXPCConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleVoiceTriggerStatsFetchEvent:(id)arg1 client:(id)arg2;	// IMP=0x00000001000cdc84
- (void)_handleServiceConnectionLostIfNeeded;	// IMP=0x00000001000cdc80
- (void)_handleEnableVoiceTriggerWithSiriAssertionRequest:(id)arg1;	// IMP=0x00000001000cdba4
- (void)_handleVoiceTriggeredSiriSessionCancelled;	// IMP=0x00000001000cdacc
- (void)_handleRaiseToSpeakBypassRequest:(id)arg1;	// IMP=0x00000001000cda3c
- (void)_handlePhraseSpotterBypassRequest:(id)arg1;	// IMP=0x00000001000cd904
- (void)_handleVoiceTriggerXPCServiceMessage:(id)arg1 client:(id)arg2;	// IMP=0x00000001000cd794
- (void)_sendReply:(id)arg1 client:(id)arg2 result:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000001000cd714
- (void)_handleClientError:(id)arg1 client:(id)arg2;	// IMP=0x00000001000cd530
- (void)_handleClientMessage:(id)arg1 client:(id)arg2;	// IMP=0x00000001000cd44c
- (void)_handleClientEvent:(id)arg1;	// IMP=0x00000001000cd360
- (void)activateConnection;	// IMP=0x00000001000cd250
- (id)initWithConnection:(id)arg1;	// IMP=0x00000001000cd180

@end

