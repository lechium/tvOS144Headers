//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SYDMessage;

@interface SYDSyncRequest : NSObject
{
    _Bool _soon;	// 8 = 0x8
    int _reason;	// 12 = 0xc
    long long _type;	// 16 = 0x10
    NSArray *_apps;	// 24 = 0x18
    SYDMessage *_message;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010004b7a4
@property(retain, nonatomic) SYDMessage *message; // @synthesize message=_message;
@property(nonatomic) _Bool soon; // @synthesize soon=_soon;
@property(retain, nonatomic) NSArray *apps; // @synthesize apps=_apps;
@property(nonatomic) int reason; // @synthesize reason=_reason;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)initWithType:(long long)arg1 reason:(int)arg2 apps:(id)arg3 soon:(_Bool)arg4 message:(id)arg5;	// IMP=0x000000010004b688

@end

