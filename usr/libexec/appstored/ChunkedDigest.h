//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray;

@interface ChunkedDigest : NSObject <NSCopying>
{
    unsigned int _chunkSize;	// 8 = 0x8
    NSArray *_chunkDigests;	// 16 = 0x10
    long long _chunkType;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001002d4d60
@property(nonatomic) long long chunkType; // @synthesize chunkType=_chunkType;
@property(nonatomic) unsigned int chunkSize; // @synthesize chunkSize=_chunkSize;
@property(copy, nonatomic) NSArray *chunkDigests; // @synthesize chunkDigests=_chunkDigests;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001002d4cb0

@end

