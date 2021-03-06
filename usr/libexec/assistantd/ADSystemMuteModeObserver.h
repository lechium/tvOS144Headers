//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface ADSystemMuteModeObserver : NSObject
{
    int _ringerStateToken;	// 8 = 0x8
    long long _muteMode;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000010019b878
- (void).cxx_destruct;	// IMP=0x000000010019bd64
- (void)_unregisterForRingerMuteStateNotifications;	// IMP=0x000000010019bd2c
- (void)_registerForRingerMuteStateNotifications;	// IMP=0x000000010019bbe8
- (int)_ringerStateToken;	// IMP=0x000000010019bbac
- (void)_updateRingerMuteState:(int)arg1;	// IMP=0x000000010019bae0
- (long long)muteMode;	// IMP=0x000000010019ba40
- (void)dealloc;	// IMP=0x000000010019b9f4
- (id)init;	// IMP=0x000000010019b8e4

@end

