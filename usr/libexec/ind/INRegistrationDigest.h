//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface INRegistrationDigest : NSObject
{
    NSData *_hashData;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010000358c
- (unsigned long long)hash;	// IMP=0x000000010000357c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000034cc
- (id)data;	// IMP=0x00000001000034c4
- (id)initWithData:(id)arg1;	// IMP=0x000000010000344c
- (id)initWithRegistrationRequest:(id)arg1;	// IMP=0x0000000100003288

@end

