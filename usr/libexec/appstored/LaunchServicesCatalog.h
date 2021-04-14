//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreServices/LSApplicationWorkspaceObserver.h>

#import "LibraryCatalog-Protocol.h"
#import "LibraryOpen-Protocol.h"
#import "LibraryQueryEvaluator-Protocol.h"

@class LibraryQueryPlanner, NSDictionary, NSObject, NSString, ProgressCache;
@protocol LibraryCatalogObserver, OS_dispatch_queue;

@interface LaunchServicesCatalog : LSApplicationWorkspaceObserver <LibraryCatalog, LibraryOpen, LibraryQueryEvaluator>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    id <LibraryCatalogObserver> _observer;	// 16 = 0x10
    LibraryQueryPlanner *_planner;	// 24 = 0x18
    ProgressCache *_progressCache;	// 32 = 0x20
    NSDictionary *_systemAppMappingByBundleID;	// 40 = 0x28
    NSDictionary *_systemAppMappingByItemID;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x00000001000dbe68
- (void).cxx_destruct;	// IMP=0x00000001000df144
@property __weak id <LibraryCatalogObserver> observer; // @synthesize observer=_observer;
- (void)_handleAppUnregisteredNotification:(id)arg1;	// IMP=0x00000001000dee34
- (void)_handleAppRegisteredNotification:(id)arg1;	// IMP=0x00000001000deb68
- (id)_updateBuyParamsForBundleID:(id)arg1;	// IMP=0x00000001000de9e8
- (void)_refreshSystemAppMapping;	// IMP=0x00000001000de488
- (void)_markMatchingUpdateAsInstalled:(id)arg1;	// IMP=0x00000001000de320
- (id)_createAppFromRecord:(id)arg1;	// IMP=0x00000001000ddd9c
- (id)resultsWithItemIDs:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000ddacc
- (id)resultsWithBundleIDs:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000dd848
- (id)resultsMatchingPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000dd644
- (void)launchApp:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000dd280
- (void)launchApp:(id)arg1 onPairedDevice:(id)arg2 withResultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000dd230
- (void)launchApp:(id)arg1 extensionType:(long long)arg2 withResultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000dd020
- (void)executeQuery:(id)arg1 excludingBundleIDs:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001000dcdd0
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x00000001000dcbc0
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x00000001000dc994
- (id)lookupItemIDsForDeletableSystemAppsWithBundleIDs:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000dc5f4
- (id)lookupBundleIDsForDeletableSystemAppsWithItemIDs:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000dc23c
- (id)_initWithProgressCache:(id)arg1;	// IMP=0x00000001000dc000
- (void)dealloc;	// IMP=0x00000001000dbf1c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
