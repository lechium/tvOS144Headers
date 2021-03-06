//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SSKeyValueStore;
@protocol OS_dispatch_queue;

@interface KeyValueStore : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    SSKeyValueStore *_keyValueStore;	// 16 = 0x10
}

+ (void)setValuesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001001b04ac
+ (void)removeValuesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001001b0468
+ (void)removeAllValuesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001001b0424
+ (void)removeAccountWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001001b03e0
+ (void)observeXPCServer:(id)arg1;	// IMP=0x00000001001b0328
+ (void)getValuesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001001b0250
+ (id)defaultKeyValueStore;	// IMP=0x00000001001b0048
- (void)_setValuesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001001b0d80
- (void)_removeValuesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001001b0bd0
- (void)_removeAllValuesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001001b0a60
- (void)_removeAccountWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001001b098c
- (void)_handleMessage:(id)arg1 connection:(id)arg2 withReplyBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001001b0858
- (void)_handleMessage:(id)arg1 connection:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001001b074c
- (void)_getValuesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001001b04f0
- (id)valueForDomain:(id)arg1 key:(id)arg2;	// IMP=0x00000001001b00f0
- (void)setValue:(id)arg1 forDomain:(id)arg2 key:(id)arg3;	// IMP=0x00000001001b00e0
- (void)dealloc;	// IMP=0x00000001001afff4
- (id)init;	// IMP=0x00000001001aff88

@end

