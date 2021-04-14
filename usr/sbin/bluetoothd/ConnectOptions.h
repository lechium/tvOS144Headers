//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface ConnectOptions : NSObject <NSCopying, NSCoding>
{
    _Bool _connectionAlerts;	// 8 = 0x8
    _Bool _disconnectionAlerts;	// 9 = 0x9
    _Bool _notificationAlerts;	// 10 = 0xa
    _Bool _wantsObjectDiscoveryData;	// 11 = 0xb
    _Bool _enableTransportBridging;	// 12 = 0xc
    _Bool _disableLeGATT;	// 13 = 0xd
    _Bool _ancsRequired;	// 14 = 0xe
    _Bool _hideFromBTSettings;	// 15 = 0xf
    _Bool _enableControllerBTClockUpdates;	// 16 = 0x10
    _Bool _waitForConnectionPoll;	// 17 = 0x11
    _Bool _enableScanCore;	// 18 = 0x12
    _Bool _isLatencyCritical;	// 19 = 0x13
    long long _delay;	// 24 = 0x18
    long long _initPHYs;	// 32 = 0x20
    long long _PHYOptions;	// 40 = 0x28
    NSString *_clientBundleID;	// 48 = 0x30
    NSString *_clientProcessID;	// 56 = 0x38
    long long _connectionUseCase;	// 64 = 0x40
    long long _maxAllowedConnectionDelay;	// 72 = 0x48
    long long _minRSSILevelForConnection;	// 80 = 0x50
    unsigned long long _ctkdChosenTransport;	// 88 = 0x58
    NSData *_temporaryLTK;	// 96 = 0x60
}

+ (id)alertOptionsWithConnectionAlerts:(_Bool)arg1 disconnectionAlerts:(_Bool)arg2 notificationAlerts:(_Bool)arg3 delay:(long long)arg4 bridgeTransport:(_Bool)arg5;	// IMP=0x0000000100256adc
- (void).cxx_destruct;	// IMP=0x0000000100257448
@property(retain) NSData *temporaryLTK; // @synthesize temporaryLTK=_temporaryLTK;
@property unsigned long long ctkdChosenTransport; // @synthesize ctkdChosenTransport=_ctkdChosenTransport;
@property _Bool isLatencyCritical; // @synthesize isLatencyCritical=_isLatencyCritical;
@property _Bool enableScanCore; // @synthesize enableScanCore=_enableScanCore;
@property long long minRSSILevelForConnection; // @synthesize minRSSILevelForConnection=_minRSSILevelForConnection;
@property _Bool waitForConnectionPoll; // @synthesize waitForConnectionPoll=_waitForConnectionPoll;
@property long long maxAllowedConnectionDelay; // @synthesize maxAllowedConnectionDelay=_maxAllowedConnectionDelay;
@property long long connectionUseCase; // @synthesize connectionUseCase=_connectionUseCase;
@property(retain) NSString *clientProcessID; // @synthesize clientProcessID=_clientProcessID;
@property(retain) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property _Bool enableControllerBTClockUpdates; // @synthesize enableControllerBTClockUpdates=_enableControllerBTClockUpdates;
@property long long PHYOptions; // @synthesize PHYOptions=_PHYOptions;
@property long long initPHYs; // @synthesize initPHYs=_initPHYs;
@property _Bool hideFromBTSettings; // @synthesize hideFromBTSettings=_hideFromBTSettings;
@property _Bool ancsRequired; // @synthesize ancsRequired=_ancsRequired;
@property _Bool disableLeGATT; // @synthesize disableLeGATT=_disableLeGATT;
@property _Bool enableTransportBridging; // @synthesize enableTransportBridging=_enableTransportBridging;
@property _Bool wantsObjectDiscoveryData; // @synthesize wantsObjectDiscoveryData=_wantsObjectDiscoveryData;
@property long long delay; // @synthesize delay=_delay;
@property _Bool notificationAlerts; // @synthesize notificationAlerts=_notificationAlerts;
@property _Bool disconnectionAlerts; // @synthesize disconnectionAlerts=_disconnectionAlerts;
@property _Bool connectionAlerts; // @synthesize connectionAlerts=_connectionAlerts;
- (id)description;	// IMP=0x00000001002571d8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001002570b4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100256fe8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100256c18

@end

