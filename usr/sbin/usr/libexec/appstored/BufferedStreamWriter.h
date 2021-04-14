//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Stream.h"

#import "StreamWriter-Protocol.h"

@class BufferedStream, NSError, NSString;
@protocol StreamDelegate;

@interface BufferedStreamWriter : Stream <StreamWriter>
{
    BufferedStream *_bufferedStream;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100015f7c
- (long long)writeBytes:(const char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000100015f64
- (void)close;	// IMP=0x0000000100015ec0
@property(readonly) _Bool hasSpaceAvailable;
- (void)dealloc;	// IMP=0x0000000100015e18
- (id)_initWithBufferedStream:(id)arg1;	// IMP=0x0000000100015d98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property __weak id <StreamDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSError *streamError;
@property(readonly) unsigned long long streamStatus;
@property(readonly) Class superclass;

@end

