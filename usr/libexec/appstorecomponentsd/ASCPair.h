//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface ASCPair : NSObject <NSCopying>
{
    id _first;	// 8 = 0x8
    id _second;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010001c33c
@property(readonly, nonatomic) id second; // @synthesize second=_second;
@property(readonly, nonatomic) id first; // @synthesize first=_first;
- (id)description;	// IMP=0x000000010001c288
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010001c0f8
- (unsigned long long)hash;	// IMP=0x000000010001c034
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010001bf58
- (id)initWithFirst:(id)arg1 second:(id)arg2;	// IMP=0x000000010001beb4

@end

