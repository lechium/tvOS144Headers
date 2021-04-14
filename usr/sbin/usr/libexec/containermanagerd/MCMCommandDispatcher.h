//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MCMCommandDispatcher : NSObject
{
    NSMutableDictionary *_messageToCommandClassMap;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010005101c
@property(readonly, nonatomic) NSMutableDictionary *messageToCommandClassMap; // @synthesize messageToCommandClassMap=_messageToCommandClassMap;
- (void)_queueCommand:(id)arg1 commandQueue:(id)arg2 xpcReply:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x0000000100050f44
- (id)_commandFromMessage:(id)arg1 clientIdentity:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x0000000100050e5c
- (_Bool)dispatchMessage:(id)arg1 clientConnection:(id)arg2 xpcReply:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x0000000100050cec
- (_Bool)dispatchMessage:(id)arg1 commandQueue:(id)arg2 clientIdentity:(id)arg3 xpcReply:(id)arg4 error:(unsigned long long *)arg5;	// IMP=0x0000000100050bd4
- (void)registerCommandClass:(Class)arg1;	// IMP=0x0000000100050b64
- (id)init;	// IMP=0x0000000100050af0

@end

