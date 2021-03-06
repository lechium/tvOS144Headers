//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IXSOpaqueDataPromise.h"

#import "NSSecureCoding-Protocol.h"

@class IXPromisedOutOfBandStreamingZipTransferSeed;

@interface IXSPromisedOutOfBandStreamingZipTransfer : IXSOpaqueDataPromise <NSSecureCoding>
{
}

- (unsigned long long)totalBytesForProgress;	// IMP=0x0000000100007408
- (void)reset;	// IMP=0x0000000100007370
- (id)initWithSeed:(id)arg1 error:(id *)arg2;	// IMP=0x000000010000733c
- (oneway void)_remote_setArchiveBytesConsumed:(unsigned long long)arg1;	// IMP=0x0000000100007480

// Remaining properties
@property(readonly, copy, nonatomic) IXPromisedOutOfBandStreamingZipTransferSeed *clientSeed; // @dynamic clientSeed;
@property(retain, nonatomic) IXPromisedOutOfBandStreamingZipTransferSeed *seed; // @dynamic seed;

@end

