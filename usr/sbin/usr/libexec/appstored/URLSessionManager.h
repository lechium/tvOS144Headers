//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface URLSessionManager : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSMutableDictionary *_sessions;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000001000df6d4
- (void).cxx_destruct;	// IMP=0x00000001000dfdec
- (id)_sessionWithClientInfo:(id)arg1;	// IMP=0x00000001000dfc34
- (id)dataTaskPromiseWithRequestProperties:(id)arg1 forRequest:(id)arg2;	// IMP=0x00000001000df7e4
- (id)init;	// IMP=0x00000001000df740

@end

