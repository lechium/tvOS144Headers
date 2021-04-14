//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/ASDNotification.h>

@interface ASDNotification (LibraryService)
+ (id)notificationForUnregisteredBundleIDs:(id)arg1;	// IMP=0x00000001002e7150
+ (id)notificationForUninstalls:(id)arg1 withDeviceID:(id)arg2;	// IMP=0x00000001002e7018
+ (id)notificationForRegisteredApps:(id)arg1;	// IMP=0x00000001002e6f14
+ (id)notificationForInstalls:(id)arg1 withDeviceID:(id)arg2;	// IMP=0x00000001002e6ddc
+ (id)notificationForFailedInstalls:(id)arg1;	// IMP=0x00000001002e6cd8
+ (id)notificationForRefreshWithDeviceID:(id)arg1;	// IMP=0x00000001002e6bd4
+ (id)notificationForRefreshWithBundleIDs:(id)arg1;	// IMP=0x00000001002e6ad0
@end

