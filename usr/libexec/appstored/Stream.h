//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "Stream-Protocol.h"

@class NSError, NSString, UnfairLock;
@protocol OS_dispatch_queue, OS_dispatch_source, StreamDelegate;

@interface Stream : NSObject <Stream>
{
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_delegateSource;	// 16 = 0x10
    UnfairLock *_lock;	// 24 = 0x18
    id <StreamDelegate> _delegate;	// 32 = 0x20
    NSError *_streamError;	// 40 = 0x28
    unsigned long long _streamStatus;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100006258
- (void)_publishStreamEvent:(unsigned long long)arg1;	// IMP=0x00000001000061f4
- (void)signalEvent:(unsigned long long)arg1;	// IMP=0x00000001000061e8
- (void)open;	// IMP=0x00000001000061ac
- (void)close;	// IMP=0x000000010000619c
@property unsigned long long streamStatus; // @synthesize streamStatus=_streamStatus;
@property(retain) NSError *streamError; // @synthesize streamError=_streamError;
@property __weak id <StreamDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;	// IMP=0x0000000100005af4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

