//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PRSettingsObserver : NSObject
{
    NSMutableDictionary *_settingsSubscriptions;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject *_settings;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001001c8dc8
@property(readonly) NSObject *settings; // @synthesize settings=_settings;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001001c8c0c
- (void)stopObserving:(id)arg1;	// IMP=0x00000001001c8b7c
- (void)startObserving:(id)arg1 observeImmediately:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x00000001001c8974
- (id)initWithSettings:(id)arg1 queue:(id)arg2;	// IMP=0x00000001001c88b4

@end

