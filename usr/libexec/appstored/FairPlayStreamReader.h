//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Stream.h"

#import "StreamDelegate-Protocol.h"
#import "StreamReader-Protocol.h"

@class NSData, NSError, NSObject, NSString;
@protocol OS_dispatch_queue, StreamDelegate, StreamReader;

@interface FairPlayStreamReader : Stream <StreamDelegate, StreamReader>
{
    struct KBCryptOpaque_ *_session;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSData *_scratchBuffer;	// 24 = 0x18
    id <StreamReader> _streamReader;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100014ddc
- (long long)_decryptBuffer:(char *)arg1 length:(unsigned long long)arg2 allowPartial:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000100014c94
- (_Bool)_beginSessionWithDPInfo:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100014a68
- (long long)readBytes:(char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000001000145a4
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;	// IMP=0x00000001000142e4
- (void)close;	// IMP=0x0000000100014278
- (void)open;	// IMP=0x0000000100014220
@property(readonly) _Bool hasBytesAvailable;
- (void)dealloc;	// IMP=0x000000010001406c
- (id)initWithDPInfo:(id)arg1 streamReader:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100013f44

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property __weak id <StreamDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSError *streamError;
@property(readonly) unsigned long long streamStatus;
@property(readonly) Class superclass;

@end

