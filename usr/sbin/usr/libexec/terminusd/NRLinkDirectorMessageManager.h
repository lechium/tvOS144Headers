//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface NRLinkDirectorMessageManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_latestMessageDictionary;	// 16 = 0x10
}

+ (id)copySharedManager;	// IMP=0x0000000100006260
- (void).cxx_destruct;	// IMP=0x0000000100006078
@property(retain, nonatomic) NSMutableDictionary *latestMessageDictionary; // @synthesize latestMessageDictionary=_latestMessageDictionary;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)isMessageIdentifierValidForNRUUID:(id)arg1 messageType:(unsigned char)arg2 identifier:(unsigned long long)arg3;	// IMP=0x0000000100005e98
- (void)updateMessageIdentifierForNRUUID:(id)arg1 messageType:(unsigned char)arg2 identifier:(unsigned long long)arg3;	// IMP=0x0000000100005ca4
- (void)flushMessageIdentifiersForNRUUID:(id)arg1;	// IMP=0x0000000100005c14
- (void)unregisterNRUUIDForIncomingMessages:(id)arg1;	// IMP=0x0000000100005b7c
- (void)registerNRUUIDForIncomingMessages:(id)arg1;	// IMP=0x0000000100005a64
- (id)description;	// IMP=0x0000000100005720
- (id)initManager;	// IMP=0x00000001000055c8

@end
