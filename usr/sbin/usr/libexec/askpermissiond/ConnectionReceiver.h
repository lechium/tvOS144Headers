//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ConnectionProtocol-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class NSString, NSXPCListener;

@interface ConnectionReceiver : NSObject <ConnectionProtocol, NSXPCListenerDelegate>
{
    NSXPCListener *_connectionListener;	// 8 = 0x8
}

+ (id)sharedReceiver;	// IMP=0x0000000100003fe0
- (void).cxx_destruct;	// IMP=0x00000001000051a0
@property(retain, nonatomic) NSXPCListener *connectionListener; // @synthesize connectionListener=_connectionListener;
- (void)didReceiveStorePushNotificationWithPayload:(id)arg1;	// IMP=0x0000000100005018
- (void)resetAccountWithType:(long long)arg1;	// IMP=0x0000000100004bcc
- (void)addRequestWithURL:(id)arg1 account:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000475c
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100004234
- (void)start;	// IMP=0x000000010000404c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
