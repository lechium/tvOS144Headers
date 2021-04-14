//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PKDServer, PKDXpcClient;
@protocol OS_xpc_object;

@interface Transaction : NSObject
{
    const char *_type;	// 8 = 0x8
    unsigned long long _interval;	// 16 = 0x10
    PKDXpcClient *_client;	// 24 = 0x18
    NSObject<OS_xpc_object> *_request;	// 32 = 0x20
    NSObject<OS_xpc_object> *_reply;	// 40 = 0x28
    unsigned long long _version;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100012ac8
@property unsigned long long version; // @synthesize version=_version;
@property(retain) NSObject<OS_xpc_object> *reply; // @synthesize reply=_reply;
@property(retain) NSObject<OS_xpc_object> *request; // @synthesize request=_request;
@property(retain) PKDXpcClient *client; // @synthesize client=_client;
- (void)fail:(long long)arg1 error:(id)arg2;	// IMP=0x0000000100012958
- (void)fail:(long long)arg1 message:(id)arg2;	// IMP=0x0000000100012880
- (void)done;	// IMP=0x0000000100012714
- (void)addAnnotationForPlugIn:(id)arg1 in:(id)arg2;	// IMP=0x00000001000125a0
- (_Bool)pluginShouldBeAutoEnabled:(id)arg1;	// IMP=0x0000000100012598
- (void)matchPlugIns;	// IMP=0x000000010000f1c8
- (void)findPlugIn;	// IMP=0x000000010000ed98
- (id)findPlugInByPathURL:(id)arg1;	// IMP=0x000000010000eca4
- (id)findPlugInByUUID:(id)arg1;	// IMP=0x000000010000ebc8
- (void)fetchAppStoreReceipt;	// IMP=0x000000010000e904
- (void)lockDownPlugIns;	// IMP=0x000000010000de84
- (void)bulkAnnotatePlugIns;	// IMP=0x000000010000d8e4
- (void)annotatePlugIns;	// IMP=0x000000010000d390
- (void)accessPlugIns;	// IMP=0x000000010000d114
- (void)readyPlugIns;	// IMP=0x000000010000c574
- (_Bool)processUuidList:(CDUnknownBlockType)arg1;	// IMP=0x000000010000bdf0
- (void)bulkPlugIns;	// IMP=0x000000010000bd54
- (void)removePlugIns;	// IMP=0x000000010000bb2c
- (void)addPlugIns;	// IMP=0x000000010000b860
- (_Bool)processPaths:(CDUnknownBlockType)arg1;	// IMP=0x000000010000b798
- (_Bool)marshalPaths:(CDUnknownBlockType)arg1;	// IMP=0x000000010000b508
- (void)dispatch;	// IMP=0x000000010000b1e4
- (CDStruct_4c969caf)auditToken;	// IMP=0x000000010000b188
@property(readonly) NSObject<OS_xpc_object> *connection;
@property(readonly) PKDServer *server;
- (id)initWithRequest:(id)arg1 forClient:(id)arg2;	// IMP=0x000000010000ade0

@end

