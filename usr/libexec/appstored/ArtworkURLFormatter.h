//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;

@interface ArtworkURLFormatter : NSObject
{
    NSDictionary *_dictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010000c978
- (id)urlWithHeight:(long long)arg1 width:(long long)arg2 cropStyle:(id)arg3 format:(id)arg4;	// IMP=0x000000010000c4b4
- (id)urlWithHeight:(long long)arg1 width:(long long)arg2 format:(id)arg3;	// IMP=0x000000010000c49c
- (id)urlWithHeight:(long long)arg1 width:(long long)arg2;	// IMP=0x000000010000c488
@property(readonly) long long width;
@property(readonly) NSURL *url;
@property(readonly) long long height;
- (id)initWithString:(id)arg1;	// IMP=0x000000010000c368
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000010000c2f0

@end

