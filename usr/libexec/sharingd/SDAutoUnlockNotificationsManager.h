//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSHashTable;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockNotificationsManager : NSObject
{
    id _doubleClickListener;	// 8 = 0x8
    id _cancelListener;	// 16 = 0x10
    NSHashTable *_observers;	// 24 = 0x18
    NSDictionary *_promptInfo;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_notificationTimer;	// 40 = 0x28
    CDUnknownBlockType _radarNotificationCompletion;	// 48 = 0x30
}

+ (id)sharedManager;	// IMP=0x000000010005f958
- (void).cxx_destruct;	// IMP=0x0000000100060258
@property(copy) CDUnknownBlockType radarNotificationCompletion; // @synthesize radarNotificationCompletion=_radarNotificationCompletion;
@property(retain) NSObject<OS_dispatch_source> *notificationTimer; // @synthesize notificationTimer=_notificationTimer;
@property(retain) NSDictionary *promptInfo; // @synthesize promptInfo=_promptInfo;
@property(retain) NSHashTable *observers; // @synthesize observers=_observers;
- (void)invalidateNotificationTimer;	// IMP=0x0000000100060130
- (void)restartNotificationTimer:(unsigned long long)arg1;	// IMP=0x000000010005ff3c
- (void)dismissNotification;	// IMP=0x000000010005ff38
- (void)showFileRadarNotificationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010005ff34
- (void)showSetupRetryNotificationWithDevice:(id)arg1;	// IMP=0x000000010005ff30
- (void)showMacUnlockedNotificationWithDuration:(id)arg1;	// IMP=0x000000010005ff2c
- (void)showSuggestionNotificationWithDevice:(id)arg1;	// IMP=0x000000010005ff28
- (void)showUnlockedByDeviceNotificationWithDeviceID:(id)arg1;	// IMP=0x000000010005fe10
- (void)removeAuthorizationRequestNotification;	// IMP=0x000000010005fe0c
- (void)showAuthorizationRequestNotificationWithDeviceID:(id)arg1 appName:(id)arg2 appIcon:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010005fe08
- (id)authPromptInfo;	// IMP=0x000000010005fd20
- (void)notifyObservers:(SEL)arg1;	// IMP=0x000000010005fb64
- (void)removeObserver:(id)arg1;	// IMP=0x000000010005fae8
- (void)addObserver:(id)arg1;	// IMP=0x000000010005fa6c
- (void)dealloc;	// IMP=0x000000010005fa38
- (id)init;	// IMP=0x000000010005f9c4

@end
