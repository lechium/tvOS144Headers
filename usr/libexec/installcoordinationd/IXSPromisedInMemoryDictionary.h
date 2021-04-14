//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IXSOwnedDataPromise.h"

#import "NSSecureCoding-Protocol.h"

@class IXPromisedInMemoryDictionarySeed, NSDictionary;

@interface IXSPromisedInMemoryDictionary : IXSOwnedDataPromise <NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100026554
@property(readonly, copy, nonatomic) NSDictionary *dictionary;
- (id)initWithSeed:(id)arg1 dictionary:(id)arg2 error:(id *)arg3;	// IMP=0x000000010002655c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000264c8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100026494

// Remaining properties
@property(readonly, copy, nonatomic) IXPromisedInMemoryDictionarySeed *clientSeed; // @dynamic clientSeed;
@property(retain, nonatomic) IXPromisedInMemoryDictionarySeed *seed; // @dynamic seed;

@end

