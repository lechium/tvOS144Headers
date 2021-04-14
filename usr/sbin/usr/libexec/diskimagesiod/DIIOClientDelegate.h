//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DIBaseServiceDelegate.h"

@class DIIODaemonDelegate, NSXPCListenerEndpoint;

@interface DIIOClientDelegate : DIBaseServiceDelegate
{
    DIIODaemonDelegate *_weakDaemon;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010000c2dc
@property(nonatomic) __weak DIIODaemonDelegate *weakDaemon; // @synthesize weakDaemon=_weakDaemon;
@property(readonly, nonatomic) NSXPCListenerEndpoint *xpcEndpoint;
- (void)createListener;	// IMP=0x000000010000c200
- (_Bool)setupNewConnection:(id)arg1;	// IMP=0x000000010000ba7c
- (void)addToRefCountWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000b968
- (id)initWithIODaemon:(id)arg1;	// IMP=0x000000010000b8f4

@end
