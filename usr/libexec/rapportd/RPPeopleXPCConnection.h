//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RPPeopleXPCDaemonInterface-Protocol.h"

@class NSMutableDictionary, NSXPCConnection, RPPeopleDaemon, RPPeopleDiscovery;
@protocol OS_dispatch_queue;

@interface RPPeopleXPCConnection : NSObject <RPPeopleXPCDaemonInterface>
{
    NSMutableDictionary *_discoveredDevices;	// 8 = 0x8
    NSMutableDictionary *_discoveredPeople;	// 16 = 0x10
    unsigned int _discoveryDeviceFlags;	// 24 = 0x18
    _Bool _entitled;	// 28 = 0x1c
    RPPeopleDiscovery *_activatedDiscovery;	// 32 = 0x20
    RPPeopleDaemon *_daemon;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 48 = 0x30
    NSXPCConnection *_xpcCnx;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010004c594
@property(readonly, nonatomic) NSXPCConnection *xpcCnx; // @synthesize xpcCnx=_xpcCnx;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) _Bool entitled; // @synthesize entitled=_entitled;
@property(readonly, nonatomic) RPPeopleDaemon *daemon; // @synthesize daemon=_daemon;
@property(readonly, nonatomic) RPPeopleDiscovery *activatedDiscovery; // @synthesize activatedDiscovery=_activatedDiscovery;
- (void)xpcPeopleDiscoveryUpdate:(id)arg1;	// IMP=0x000000010004c350
- (void)xpcPeopleDiscoveryActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004bfec
- (void)xpcPeopleRemoveAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004bbcc
- (void)xpcPeopleAddAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004baec
- (void)clientPeopleStatusChanged:(unsigned int)arg1;	// IMP=0x000000010004baa0
- (void)clientDeviceChanged:(id)arg1 changes:(unsigned int)arg2;	// IMP=0x000000010004b7bc
- (void)clientDeviceLost:(id)arg1;	// IMP=0x000000010004b3f4
- (void)clientDeviceFound:(id)arg1 report:(_Bool)arg2;	// IMP=0x000000010004afe0
- (_Bool)_entitledAndReturnError:(id *)arg1;	// IMP=0x000000010004aea0
- (void)connectionInvalidated;	// IMP=0x000000010004adbc
- (id)initWithDaemon:(id)arg1 xpcCnx:(id)arg2;	// IMP=0x000000010004ad08

@end

