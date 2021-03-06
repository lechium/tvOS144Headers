//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CoreTelephonyClientDataDelegate-Protocol.h"
#import "CoreTelephonyClientDelegate-Protocol.h"

@class CTXPCServiceSubscriptionContext, CoreTelephonyClient, NSString, NWPathEvaluator;
@protocol OS_dispatch_queue;

@interface NetworkMonitor : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientDataDelegate>
{
    int _defaultsToken;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NWPathEvaluator *_pathEvaluator;	// 24 = 0x18
    CTXPCServiceSubscriptionContext *_subscriptionContext;	// 32 = 0x20
    CoreTelephonyClient *_telephonyClient;	// 40 = 0x28
    _Bool _connected;	// 48 = 0x30
    _Bool _constrained;	// 49 = 0x31
    _Bool _expensive;	// 50 = 0x32
    _Bool _roaming;	// 51 = 0x33
    long long _interfaceType;	// 56 = 0x38
}

+ (id)defaultMonitor;	// IMP=0x000000010019ca04
- (void).cxx_destruct;	// IMP=0x000000010019d98c
@property(readonly) long long interfaceType; // @synthesize interfaceType=_interfaceType;
- (void)_updateRoamingStatusForContext:(id)arg1;	// IMP=0x000000010019d8d0
- (void)_setPropertiesUsingPath:(id)arg1;	// IMP=0x000000010019d55c
- (void)_forcePropertyRefresh;	// IMP=0x000000010019d50c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010019d3ec
- (void)activeSubscriptionsDidChange;	// IMP=0x000000010019d144
- (void)servingNetworkChanged:(id)arg1;	// IMP=0x000000010019d138
- (void)internetDataStatus:(id)arg1;	// IMP=0x000000010019d104
- (void)currentDataSimChanged:(id)arg1;	// IMP=0x000000010019d100
- (id)copyCellularNetworkIdentityWithError:(id *)arg1;	// IMP=0x000000010019d050
@property(readonly, getter=isRoaming) _Bool roaming; // @synthesize roaming=_roaming;
@property(readonly, getter=isExpensive) _Bool expensive; // @synthesize expensive=_expensive;
@property(readonly, getter=isConstrained) _Bool constrained; // @synthesize constrained=_constrained;
@property(readonly, getter=isConnected) _Bool connected; // @synthesize connected=_connected;
- (void)dealloc;	// IMP=0x000000010019cc48
- (id)initWithPathEvalulator:(id)arg1;	// IMP=0x000000010019cab8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

