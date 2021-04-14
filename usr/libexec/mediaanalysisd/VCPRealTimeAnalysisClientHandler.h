//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VCPClientHandler.h"

#import "VCPRealTimeAnalysisServerProtocol-Protocol.h"

@class NSObject, NSXPCConnection, VCPContentAnalysis, VCPPriorityAnalysis, VCPVideoChatAnalysis;
@protocol OS_dispatch_queue, OS_os_transaction, VCPRealTimeAnalysisClientProtocol;

@interface VCPRealTimeAnalysisClientHandler : VCPClientHandler <VCPRealTimeAnalysisServerProtocol>
{
    NSXPCConnection *_connection;	// 8 = 0x8
    id <VCPRealTimeAnalysisClientProtocol> _clientProxy;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_managementQueue;	// 24 = 0x18
    VCPContentAnalysis *_contentAnalysis;	// 32 = 0x20
    VCPVideoChatAnalysis *_videoChatAnalysis;	// 40 = 0x28
    VCPPriorityAnalysis *_priorityAnalysis;	// 48 = 0x30
    NSObject<OS_os_transaction> *_transaction;	// 56 = 0x38
    int _totalFaceDetectedFrames;	// 64 = 0x40
}

+ (id)clientHandlerWithXPCConnection:(id)arg1;	// IMP=0x000000010006fbf0
- (void).cxx_destruct;	// IMP=0x0000000100070330
- (void)requestAnalysis:(unsigned long long)arg1 ofIOSurface:(id)arg2 withProperties:(id)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x000000010006fc5c
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x000000010006f6c8
- (id)init;	// IMP=0x000000010006f6b0

@end

