//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSDate, NSString, NSURLRequest;

@interface RTCCachedURLRequest : NSObject <NSSecureCoding>
{
    NSDate *_dateToExpedite;	// 8 = 0x8
    NSURLRequest *_cachedRequest;	// 16 = 0x10
    NSString *_filePath;	// 24 = 0x18
    unsigned long long _nextOffset;	// 32 = 0x20
    _Bool _isRealtime;	// 40 = 0x28
    CDUnknownBlockType _eventCompletion;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000030b8
@property(copy, nonatomic) CDUnknownBlockType eventCompletion; // @synthesize eventCompletion=_eventCompletion;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(readonly) NSURLRequest *cachedRequest; // @synthesize cachedRequest=_cachedRequest;
@property(nonatomic) unsigned long long nextOffset; // @synthesize nextOffset=_nextOffset;
@property(readonly, nonatomic) _Bool isExpedited;
- (_Bool)isRealtime;	// IMP=0x0000000100003158
- (void)setIsRealtime:(_Bool)arg1;	// IMP=0x0000000100003150
- (id)dateToExpedite;	// IMP=0x0000000100003148
- (void)setDateToExpedite:(id)arg1;	// IMP=0x000000010000310c
- (id)description;	// IMP=0x00000001000030c0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010000300c
- (void)dealloc;	// IMP=0x0000000100002f6c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100002e30
- (id)initWithURLRequest:(id)arg1 expediteAfterInterval:(double)arg2 isRealtime:(_Bool)arg3;	// IMP=0x0000000100002d40

@end
