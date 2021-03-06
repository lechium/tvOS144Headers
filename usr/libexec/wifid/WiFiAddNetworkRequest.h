//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WiFiAddNetworkRequest : NSObject
{
    _Bool _sessionBased;	// 8 = 0x8
    _Bool _usingPrefix;	// 9 = 0x9
    _Bool _poweredOff;	// 10 = 0xa
    _Bool _wapi;	// 11 = 0xb
    int _originator;	// 12 = 0xc
    NSString *_localizedApplicationName;	// 16 = 0x10
    NSString *_bundleId;	// 24 = 0x18
    struct __WiFiClient *_client;	// 32 = 0x20
    struct __WiFiNetwork *_network;	// 40 = 0x28
    NSDictionary *_alertDictionary;	// 48 = 0x30
    CDUnknownFunctionPointerType _callback;	// 56 = 0x38
    void *_context;	// 64 = 0x40
}

@property _Bool wapi; // @synthesize wapi=_wapi;
@property _Bool poweredOff; // @synthesize poweredOff=_poweredOff;
@property void *context; // @synthesize context=_context;
@property CDUnknownFunctionPointerType callback; // @synthesize callback=_callback;
@property _Bool usingPrefix; // @synthesize usingPrefix=_usingPrefix;
@property _Bool sessionBased; // @synthesize sessionBased=_sessionBased;
@property(retain) NSDictionary *alertDictionary; // @synthesize alertDictionary=_alertDictionary;
@property struct __WiFiNetwork *network; // @synthesize network=_network;
@property struct __WiFiClient *client; // @synthesize client=_client;
@property(copy) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(copy) NSString *localizedApplicationName; // @synthesize localizedApplicationName=_localizedApplicationName;
@property int originator; // @synthesize originator=_originator;
- (void)setNetworkMatchingPrefix:(struct __WiFiNetwork *)arg1;	// IMP=0x00000001000aa374
- (void)dealloc;	// IMP=0x00000001000aa2fc
- (struct __CFDictionary *)_createAlertDictionary;	// IMP=0x00000001000a9ff4
- (id)initWithClient:(struct __WiFiClient *)arg1 network:(struct __WiFiNetwork *)arg2 bundleId:(id)arg3 localizedAppName:(id)arg4 originator:(int)arg5 poweredOff:(_Bool)arg6 wapi:(_Bool)arg7 sessionBased:(_Bool)arg8 useSSIDPrefix:(_Bool)arg9 callback:(CDUnknownFunctionPointerType)arg10 context:(void *)arg11;	// IMP=0x00000001000a9e68
- (id)init;	// IMP=0x00000001000a9e30

@end

