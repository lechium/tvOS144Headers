//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary;

@interface PushRawMessage : NSObject
{
    unsigned long long _topic;	// 8 = 0x8
    NSDictionary *_userInfo;	// 16 = 0x10
    NSDate *_timestamp;	// 24 = 0x18
}

+ (unsigned long long)getTopicFromString:(id)arg1;	// IMP=0x00000001002d4f24
+ (id)getTopicString:(unsigned long long)arg1;	// IMP=0x00000001002d4eb0
- (void).cxx_destruct;	// IMP=0x00000001002d52b0
- (id)description;	// IMP=0x00000001002d512c
- (unsigned long long)hash;	// IMP=0x00000001002d511c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001002d509c
- (_Bool)isEqualToMessage:(id)arg1;	// IMP=0x00000001002d5004
@property(readonly) NSDate *timestamp;
@property(readonly) NSDictionary *userInfo;
@property(readonly) unsigned long long pushTopic;
- (id)initWithAPSMessage:(id)arg1;	// IMP=0x00000001002d4d6c

@end
