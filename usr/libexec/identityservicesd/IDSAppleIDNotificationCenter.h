//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IDSAppleIDNotificationCenter : NSObject
{
    NSMutableArray *_availableNotifications;	// 8 = 0x8
    NSMutableArray *_usageNotifications;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000010024f1a8
- (void).cxx_destruct;	// IMP=0x0000000100252d9c
- (void)addUsageNotificationForSession:(id)arg1 appleID:(id)arg2 alias:(id)arg3 deviceName:(id)arg4 hardwareVersion:(id)arg5 serviceType:(id)arg6;	// IMP=0x0000000100252878
- (void)addAvailableNotificationForSession:(id)arg1 appleID:(id)arg2 alias:(id)arg3 deviceName:(id)arg4 serviceType:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x0000000100252344
- (void)_noteNewUsageNotification:(id)arg1;	// IMP=0x000000010025224c
- (void)_noteNewAvailableNotification:(id)arg1;	// IMP=0x0000000100252154
- (void)_processUsageNotifications;	// IMP=0x0000000100251e20
- (void)_processAvailableNotifications;	// IMP=0x0000000100251aec
- (id)_localizedServicesUsageStringForDevice:(id)arg1 useSingular:(_Bool)arg2;	// IMP=0x0000000100251918
- (void)_postUsageNotificationForSessions:(id)arg1 appleID:(id)arg2 aliases:(id)arg3 deviceName:(id)arg4 deviceModel:(id)arg5 serviceTypes:(id)arg6;	// IMP=0x0000000100250808
- (void)_postAvailableNotificationForSessions:(id)arg1 appleID:(id)arg2 aliases:(id)arg3 deviceName:(id)arg4 serviceTypes:(id)arg5 blockMap:(id)arg6;	// IMP=0x000000010024f44c
- (id)init;	// IMP=0x000000010024f354

@end

