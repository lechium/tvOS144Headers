//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AUDaemonProtocol-Protocol.h"
#import "FudPersonalizationPlugin-Protocol.h"
#import "FudPlugin-Protocol.h"
#import "FudQueryPlugin-Protocol.h"

@class NSString, NSXPCConnection;
@protocol FudPluginDelegate;

__attribute__((visibility("hidden")))
@interface AUServiceShim : NSObject <FudPlugin, FudQueryPlugin, FudPersonalizationPlugin, AUDaemonProtocol>
{
    int _currentState;	// 8 = 0x8
    NSString *_deviceClass;	// 16 = 0x10
    id <FudPluginDelegate> _delegate;	// 24 = 0x18
    NSString *_xpcServiceName;	// 32 = 0x20
    NSXPCConnection *_xpcServiceConn;	// 40 = 0x28
}

@property(nonatomic) NSXPCConnection *xpcServiceConn; // @synthesize xpcServiceConn=_xpcServiceConn;
@property(nonatomic) NSString *xpcServiceName; // @synthesize xpcServiceName=_xpcServiceName;
@property(nonatomic) id <FudPluginDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) NSString *deviceClass; // @synthesize deviceClass=_deviceClass;
@property(nonatomic) int currentState; // @synthesize currentState=_currentState;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100004a44
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100004a40
- (void)accessoryDisconnected:(id)arg1;	// IMP=0x0000000100004a3c
- (void)logv:(int)arg1 format:(id)arg2 arguments:(struct __va_list_tag *)arg3;	// IMP=0x0000000100004a38
- (void)log:(int)arg1 format:(id)arg2;	// IMP=0x0000000100004a34
- (void)issueNotification:(id)arg1;	// IMP=0x00000001000049d8
- (void)reportAnalytics:(id)arg1 info:(id)arg2;	// IMP=0x00000001000049c8
- (void)progress:(double)arg1;	// IMP=0x00000001000049b8
- (void)personalizationRequest:(id)arg1;	// IMP=0x00000001000049a8
- (void)personalizationResponse:(id)arg1 response:(id)arg2 status:(id)arg3;	// IMP=0x00000001000048b4
- (void)didFinish:(_Bool)arg1 info:(id)arg2 error:(id)arg3;	// IMP=0x0000000100004844
- (void)didApply:(_Bool)arg1 info:(id)arg2 error:(id)arg3;	// IMP=0x00000001000047cc
- (void)didPrepare:(_Bool)arg1 info:(id)arg2 error:(id)arg3;	// IMP=0x0000000100004754
- (void)didDownload:(_Bool)arg1 info:(id)arg2 error:(id)arg3;	// IMP=0x00000001000046dc
- (void)didFind:(_Bool)arg1 info:(id)arg2 updateAvailable:(_Bool)arg3 needsDownload:(_Bool)arg4 error:(id)arg5;	// IMP=0x000000010000462c
- (void)didBootstrap:(_Bool)arg1 info:(id)arg2 error:(id)arg3;	// IMP=0x0000000100004598
- (void)progress:(double)arg1 info:(id)arg2;	// IMP=0x0000000100004580
- (void)dealloc;	// IMP=0x0000000100004534
- (void)closeXPCConnection;	// IMP=0x00000001000044f8
- (void)queryDeviceList:(id *)arg1;	// IMP=0x0000000100004324
- (void)finishWithOptions:(id)arg1;	// IMP=0x0000000100004164
- (void)applyFirmwareWithOptions:(id)arg1;	// IMP=0x0000000100003fa4
- (void)prepareFirmwareWithOptions:(id)arg1;	// IMP=0x0000000100003dd8
- (void)downloadFirmwareWithOptions:(id)arg1;	// IMP=0x0000000100003c0c
- (void)findFirmwareWithOptions:(id)arg1 remote:(_Bool)arg2;	// IMP=0x0000000100003a28
- (void)bootstrapWithOptions:(id)arg1;	// IMP=0x00000001000037c0
- (void)connectToServer;	// IMP=0x0000000100003434
- (void)handleServiceDisconnect;	// IMP=0x0000000100003344
- (id)initWithDeviceClass:(id)arg1 delegate:(id)arg2 info:(id *)arg3 options:(id)arg4;	// IMP=0x0000000100002d70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
