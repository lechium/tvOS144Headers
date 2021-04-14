//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDAirDropClientDelegate-Protocol.h"
#import "WPAWDLDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSMutableSet, NSNumber, NSString, NSTimer, SDStatusMonitor, SDXPCHelperConnection, WPAWDL;
@protocol OS_xpc_object, SDBonjourBrowserDelegate;

__attribute__((visibility("hidden")))
@interface SDBonjourBrowser : NSObject <SDAirDropClientDelegate, WPAWDLDelegate>
{
    _Bool _isAirDrop;	// 8 = 0x8
    _Bool _isNetBIOS;	// 9 = 0x9
    _Bool _isWorkgroups;	// 10 = 0xa
    int _maxServices;	// 12 = 0xc
    NSString *_domain;	// 16 = 0x10
    WPAWDL *_proximity;	// 24 = 0x18
    NSString *_bundleID;	// 32 = 0x20
    NSNumber *_isFinder;	// 40 = 0x28
    long long _mode;	// 48 = 0x30
    unsigned int _awdlIndex;	// 56 = 0x38
    NSString *_browserID;	// 64 = 0x40
    NSString *_sessionID;	// 72 = 0x48
    NSTimer *_restartTimer;	// 80 = 0x50
    int _transfersInitiated;	// 88 = 0x58
    int _transfersCompleted;	// 92 = 0x5c
    SDStatusMonitor *_monitor;	// 96 = 0x60
    struct _DNSServiceRef_t *_connection;	// 104 = 0x68
    double _firstTime;	// 112 = 0x70
    double _startTime;	// 120 = 0x78
    NSMutableSet *_discoveredPeers;	// 128 = 0x80
    NSMutableDictionary *_servers;	// 136 = 0x88
    NSObject<OS_xpc_object> *_xpcConnection;	// 144 = 0x90
    NSMutableDictionary *_iconCache;	// 152 = 0x98
    NSMutableDictionary *_dnsQueries;	// 160 = 0xa0
    NSMutableDictionary *_serverCache;	// 168 = 0xa8
    NSMutableDictionary *_airDropRequests;	// 176 = 0xb0
    struct __CFDictionary *_identityQueries;	// 184 = 0xb8
    SDXPCHelperConnection *_helperConnection;	// 192 = 0xc0
    NSArray *_types;	// 200 = 0xc8
    id <SDBonjourBrowserDelegate> _delegate;	// 208 = 0xd0
}

+ (void)updateRPIdentityForAccountID:(id)arg1 withAirDropClientInfo:(id)arg2;	// IMP=0x000000010010ed3c
- (void).cxx_destruct;	// IMP=0x0000000100111418
@property int transfersCompleted; // @synthesize transfersCompleted=_transfersCompleted;
@property int transfersInitiated; // @synthesize transfersInitiated=_transfersInitiated;
@property(retain) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property __weak id <SDBonjourBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *domain; // @synthesize domain=_domain;
@property(readonly, copy) NSArray *types; // @synthesize types=_types;
@property(copy) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) __weak SDXPCHelperConnection *helperConnection; // @synthesize helperConnection=_helperConnection;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, copy) NSString *description;
- (void)restartAfterDelay:(double)arg1;	// IMP=0x000000010011116c
- (void)queryRecordTimerCallBack:(id)arg1;	// IMP=0x000000010011111c
- (void)handleQueryCallBack:(unsigned int)arg1 error:(int)arg2 fullname:(const char *)arg3 rrtype:(unsigned short)arg4 rdlen:(unsigned short)arg5 rdata:(const void *)arg6;	// IMP=0x000000010011103c
- (void)processTXTRecordUpdate:(const char *)arg1 rdlen:(unsigned short)arg2 rdata:(const void *)arg3;	// IMP=0x0000000100110a8c
- (id)valueForKey:(id)arg1 inTXTRecord:(const void *)arg2 withLength:(unsigned short)arg3;	// IMP=0x00000001001109ec
- (id)serviceFromServiceName:(id)arg1;	// IMP=0x0000000100110924
- (id)odiskMountPoints:(id)arg1;	// IMP=0x000000010011079c
- (void)handleBrowseCallBack:(unsigned int)arg1 interface:(unsigned int)arg2 error:(int)arg3 name:(const char *)arg4 type:(const char *)arg5 domain:(const char *)arg6;	// IMP=0x00000001001105e8
- (_Bool)validAirDropInterface:(unsigned int)arg1;	// IMP=0x0000000100110580
- (void)notifyClientIfDone:(unsigned int)arg1;	// IMP=0x0000000100110530
- (void)notifyClient;	// IMP=0x00000001001104f4
- (void)linkStateChanged:(id)arg1;	// IMP=0x0000000100110470
- (void)wirelessPowerChanged:(id)arg1;	// IMP=0x0000000100110460
- (void)somethingChanged:(id)arg1;	// IMP=0x0000000100110450
- (void)screenStatusChanged:(id)arg1;	// IMP=0x0000000100110444
- (void)consoleUserChanged:(id)arg1;	// IMP=0x0000000100110438
- (void)lockStatusChanged:(id)arg1;	// IMP=0x000000010011042c
- (void)airDropPublished:(id)arg1;	// IMP=0x0000000100110420
- (void)contactsChanged:(id)arg1;	// IMP=0x0000000100110260
- (void)cancelIdentityQueries;	// IMP=0x0000000100110250
- (void)startIdentityQueryForNode:(struct __SFNode *)arg1;	// IMP=0x000000010010ffb4
- (void)handleIdentity:(id)arg1 withQueryID:(id)arg2 emailOrPhone:(id)arg3 error:(id)arg4;	// IMP=0x000000010010fd88
- (void)personInfoChanged:(id)arg1 flags:(id)arg2 atag:(id)arg3 cname:(id)arg4 phash:(id)arg5 ehash:(id)arg6 nhash:(id)arg7;	// IMP=0x000000010010fb04
- (void)cancelAirDropRequests;	// IMP=0x000000010010f9c4
- (void)startAirDropRequestForNode:(struct __SFNode *)arg1;	// IMP=0x000000010010f8c0
- (void)airDropClient:(id)arg1 event:(long long)arg2 withResults:(id)arg3;	// IMP=0x000000010010f418
- (void)logAirDropDiscoveryInfoForNode:(struct __SFNode *)arg1;	// IMP=0x000000010010e8a4
- (void)cleanupAirDropRequest:(id)arg1;	// IMP=0x000000010010e828
- (void)clearCacheAndNotify;	// IMP=0x000000010010e798
- (void)startPictureQuery:(id)arg1;	// IMP=0x000000010010e6a8
- (void)commentChanged:(id)arg1 comment:(id)arg2;	// IMP=0x000000010010e618
- (void)deviceInfoChanged:(id)arg1 model:(id)arg2 ecolor:(id)arg3 icolor:(id)arg4 osxvers:(id)arg5;	// IMP=0x000000010010e4e4
- (id)colorArrayFromEcolor:(id)arg1 icolor:(id)arg2;	// IMP=0x000000010010e234
- (void)systemInfoChanged:(id)arg1 diskInfo:(struct __CFDictionary *)arg2;	// IMP=0x000000010010e120
- (struct __SFNode *)copyNodeForService:(id)arg1;	// IMP=0x000000010010e084
- (struct __SFNode *)copyNodeForName:(id)arg1;	// IMP=0x000000010010dfdc
- (void)ejectDisksIfNeeded:(id)arg1 diskNames:(id)arg2;	// IMP=0x000000010010dfd8
- (void)removeService:(id)arg1 type:(id)arg2 domain:(id)arg3;	// IMP=0x000000010010dcf4
- (void)cleanupRecordQueryForNetService:(id)arg1 recordType:(unsigned short)arg2;	// IMP=0x000000010010dc28
- (void)cleanupRecordQuery:(id)arg1 type:(id)arg2 domain:(id)arg3 recordType:(unsigned short)arg4;	// IMP=0x000000010010db80
- (void)cleanupRecordQueryForKey:(id)arg1;	// IMP=0x000000010010da88
- (void)startRecordQuery:(id)arg1 type:(id)arg2 domain:(id)arg3 recordType:(unsigned short)arg4 interface:(unsigned int)arg5;	// IMP=0x000000010010d838
- (void)addQueryToDictionary:(struct _DNSServiceRef_t **)arg1 name:(id)arg2 type:(id)arg3 domain:(id)arg4 recordType:(unsigned short)arg5;	// IMP=0x000000010010d6b8
- (id)queryKey:(id)arg1 type:(id)arg2 domain:(id)arg3 recordType:(unsigned short)arg4;	// IMP=0x000000010010d5f0
- (void)addService:(id)arg1 type:(id)arg2 domain:(id)arg3 interface:(unsigned int)arg4;	// IMP=0x000000010010d044
@property(readonly, copy) NSArray *nodes;
- (void)updateServerCacheIfNeeded;	// IMP=0x000000010010cdec
- (void)updateSecondaryNameForNodes:(id)arg1;	// IMP=0x000000010010ccd4
- (void)removeInvalidNodes:(id)arg1;	// IMP=0x000000010010cb30
- (void)invalidate;	// IMP=0x000000010010cae0
- (void)stop;	// IMP=0x000000010010c800
- (void)logAirDropSessionInfo;	// IMP=0x000000010010c6c0
- (void)start;	// IMP=0x000000010010c5e0
- (void)updateBrowserState;	// IMP=0x000000010010c068
- (_Bool)shouldStart;	// IMP=0x000000010010c000
- (void)advertiseHashes;	// IMP=0x000000010010be58
- (void)stopConnectionlessAdvertising;	// IMP=0x000000010010be14
- (void)startConnectionlessAdvertisingWithData:(id)arg1;	// IMP=0x000000010010bcec
- (void)awdl:(id)arg1 failedToStartAdvertisingWithError:(id)arg2;	// IMP=0x000000010010bc8c
- (void)awdlDidUpdateState:(id)arg1;	// IMP=0x000000010010bb34
- (void)awdl:(id)arg1 foundDevice:(id)arg2 rssi:(id)arg3;	// IMP=0x000000010010bab0
- (_Bool)checkDiscoveryEntitlement;	// IMP=0x000000010010ba88
- (_Bool)preferVibrantIcons;	// IMP=0x000000010010ba80
- (_Bool)thisIsTheFinder;	// IMP=0x000000010010b9dc
- (unsigned int)getInterface:(unsigned int)arg1;	// IMP=0x000000010010b934
- (void)removeObservers;	// IMP=0x000000010010b8e4
- (void)addObservers;	// IMP=0x000000010010b6c4
- (void)clearCache;	// IMP=0x000000010010b6b4
- (void)dealloc;	// IMP=0x000000010010b65c
- (void)restartBrowser:(id)arg1;	// IMP=0x000000010010b618
@property long long mode;
- (id)initWithDomain:(id)arg1 types:(id)arg2;	// IMP=0x000000010010b2bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

