//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NEPlugin.h"

#import "NEAppPushPluginManager-Protocol.h"

@interface NEAppPushPlugin : NEPlugin <NEAppPushPluginManager>
{
}

- (void)handleProviderStopped;	// IMP=0x0000000100016cac
- (void)sendExtensionFailed;	// IMP=0x0000000100016be4
- (void)reportIncomingCall:(id)arg1;	// IMP=0x0000000100016ae4
- (void)handleProviderError:(id)arg1 forMessageID:(id)arg2;	// IMP=0x00000001000169b0
- (void)handleProviderError:(id)arg1;	// IMP=0x00000001000168b0
- (id)managerInterface;	// IMP=0x0000000100016894
- (id)remotePluginInterface;	// IMP=0x0000000100016878
- (void)sendTimerEvent;	// IMP=0x0000000100016838
- (void)sendOutgoingCallMessage:(id)arg1 andMessageID:(id)arg2;	// IMP=0x00000001000167b0
- (void)setProviderConfiguration:(id)arg1;	// IMP=0x0000000100016744
- (void)stopWithReason:(int)arg1;	// IMP=0x00000001000166fc
- (void)startConnectionWithProviderConfig:(id)arg1;	// IMP=0x0000000100016690

@end
