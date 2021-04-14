//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FAQueueProvider;

@interface FAHeartbeatActivity : NSObject
{
    id <FAQueueProvider> _queueProvider;	// 8 = 0x8
    long long _timeInterval;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010000702c
- (void)_performHeartbeatCheckinForActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006c78
- (void)performHeartbeatCheckinWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006c64
- (void)checkin;	// IMP=0x0000000100006874
- (void)unregister;	// IMP=0x0000000100006868
- (id)initWithQueueProvider:(id)arg1;	// IMP=0x00000001000067e0

@end
