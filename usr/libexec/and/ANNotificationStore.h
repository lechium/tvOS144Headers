//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSPersistentStoreCoordinator;

@interface ANNotificationStore : NSObject
{
    NSManagedObjectContext *_managedObjectContext;	// 8 = 0x8
    NSPersistentStoreCoordinator *_storeCoordinator;	// 16 = 0x10
}

+ (id)sharedStore;	// IMP=0x00000001000037a0
- (void).cxx_destruct;	// IMP=0x0000000100005abc
- (id)_copyPersistentStoreFilePath;	// IMP=0x00000001000059f8
- (id)_managedObjectModel;	// IMP=0x00000001000058dc
- (void)_createManagedObjectContext;	// IMP=0x0000000100005638
- (_Bool)_unsafe_commitChangesInManagedObjectContext;	// IMP=0x000000010000558c
- (_Bool)removeNotificationWithIdentifier:(id)arg1;	// IMP=0x0000000100005114
- (_Bool)removeAllNotificationsForAccountTypeID:(id)arg1;	// IMP=0x0000000100004d40
- (_Bool)limitPendingNotificationsForAccountTypeID:(id)arg1 toMaximumCount:(unsigned long long)arg2;	// IMP=0x0000000100004634
- (_Bool)saveNotification:(id)arg1;	// IMP=0x0000000100004158
- (id)_notificationsMatchingPredicate:(id)arg1 limit:(unsigned long long)arg2;	// IMP=0x0000000100003dec
- (id)_notificationsMatchingPredicate:(id)arg1;	// IMP=0x0000000100003ddc
- (id)typeIdentifiersOfAccountsWithPendingNotifications;	// IMP=0x0000000100003a04
- (id)pendingNotificationsWithEventID:(id)arg1;	// IMP=0x0000000100003988
- (id)notificationWithIdentifier:(id)arg1;	// IMP=0x00000001000038e0
- (id)pendingNotificationsForAccountsWithTypeID:(id)arg1;	// IMP=0x0000000100003864
- (id)init;	// IMP=0x000000010000380c

@end

