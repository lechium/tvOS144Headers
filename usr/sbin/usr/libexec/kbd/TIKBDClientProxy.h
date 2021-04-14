//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TIClientProxy-Protocol.h"

@class NSString, NSXPCConnection;

@interface TIKBDClientProxy : NSObject <TIClientProxy>
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

+ (id)KBDClientProxyWithConnection:(id)arg1;	// IMP=0x000000010000824c
- (void).cxx_destruct;	// IMP=0x000000010000841c
@property(readonly, nonatomic) __weak NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)closeRequestToken:(id)arg1;	// IMP=0x0000000100008400
- (void)pushCandidates:(id)arg1 requestToken:(id)arg2;	// IMP=0x0000000100008324
- (void)invalidate;	// IMP=0x0000000100008318
- (id)initWithConnection:(id)arg1;	// IMP=0x00000001000082ac
- (id)init;	// IMP=0x000000010000829c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

