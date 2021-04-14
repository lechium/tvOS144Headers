//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACCBLEPairingServerRemote, NSArray, NSString, NSXPCConnection;
@protocol ACCBLEPairingXPCClientProtocol;

@interface _ACCBLEPairingProviderInfo : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    id <ACCBLEPairingXPCClientProtocol> _remoteObject;	// 16 = 0x10
    ACCBLEPairingServerRemote *_serverRemote;	// 24 = 0x18
    NSString *_providerUID;	// 32 = 0x20
    NSArray *_supportedPairingTypes;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100044898
@property(retain, nonatomic) NSArray *supportedPairingTypes; // @synthesize supportedPairingTypes=_supportedPairingTypes;
@property(retain, nonatomic) NSString *providerUID; // @synthesize providerUID=_providerUID;
@property(retain, nonatomic) ACCBLEPairingServerRemote *serverRemote; // @synthesize serverRemote=_serverRemote;
@property(retain, nonatomic) id <ACCBLEPairingXPCClientProtocol> remoteObject; // @synthesize remoteObject=_remoteObject;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (id)description;	// IMP=0x00000001000447ec
- (void)dealloc;	// IMP=0x0000000100044770
- (id)init;	// IMP=0x00000001000446ac

@end

