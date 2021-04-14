//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSAudioAlertProvidingDelegate-Protocol.h"
#import "CSXPCConnectionDelegate-Protocol.h"

@class CSXPCConnection, NSString;
@protocol CSAudioAlertProviding;

@interface CSAudioAlertProvidingProxy : NSObject <CSXPCConnectionDelegate, CSAudioAlertProvidingDelegate>
{
    id <CSAudioAlertProviding> _audioAlertProvider;	// 8 = 0x8
    CSXPCConnection *_xpcConnection;	// 16 = 0x10
    unsigned long long _streamClientType;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000ca380
@property(nonatomic) unsigned long long streamClientType; // @synthesize streamClientType=_streamClientType;
@property(nonatomic) __weak CSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(nonatomic) __weak id <CSAudioAlertProviding> audioAlertProvider; // @synthesize audioAlertProvider=_audioAlertProvider;
- (void)_sendDelegateMessageToClient:(id)arg1;	// IMP=0x00000001000ca224
- (void)audioAlertProvidingDidFinishAlertPlayback:(id)arg1 ofType:(long long)arg2 error:(id)arg3;	// IMP=0x00000001000ca058
- (void)_sendReplyMessageWithResult:(_Bool)arg1 event:(id)arg2 client:(id)arg3;	// IMP=0x00000001000c9fd8
- (void)_handleAlertProvidingRequestTypeConfigureAlertBehavior:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00000001000c9e18
- (void)_handleAlertProvidingRequestTypeAlertStartTimeMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00000001000c9bc0
- (void)_handleAlertProvidingRequestTypePlayRecordStartingAlertAndResetEndpointerMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00000001000c9a30
- (void)_handleAlertProvidingRequestTypePlayAlertSoundMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00000001000c9814
- (void)_handleAlertProvidingRequestTypeSetAlertSoundMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00000001000c9568
- (void)handleXPCMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00000001000c93b0
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x00000001000c933c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
