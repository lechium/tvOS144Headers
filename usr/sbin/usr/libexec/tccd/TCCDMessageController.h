//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TCCDMessageController : NSObject
{
    NSMutableDictionary *_messageTypesToHandlers;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedMessageControllerForCurrentPlatform;	// IMP=0x0000000100004fd4
- (void).cxx_destruct;	// IMP=0x0000000100005548
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSMutableDictionary *messageTypesToHandlers; // @synthesize messageTypesToHandlers=_messageTypesToHandlers;
- (void)_makeReadyToReceiveMessages;	// IMP=0x000000010000551c
- (void)_sendMessage:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000054dc
- (void)sendMessage:(id)arg1 ofType:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000053c0
- (void)setIncomingMessageType:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000050f0
- (id)init;	// IMP=0x0000000100005014

@end
