//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MobileInstallerProtocol-Protocol.h"

@class NSString, NSXPCConnection;

@interface MIClientConnection : NSObject <MobileInstallerProtocol>
{
    unsigned int _percentComplete;	// 8 = 0x8
    NSXPCConnection *_xpcConnection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010000ec0c
@property(readonly, nonatomic) unsigned int percentComplete; // @synthesize percentComplete=_percentComplete;
@property(nonatomic) __weak NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)getTestModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010000eaec
- (void)endTestModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010000ea04
- (void)setTestModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010000e91c
- (void)dieForTesting;	// IMP=0x000000010000e878
- (void)getPidForTestingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010000e838
- (void)systemAppMigratorHasCompleted:(CDUnknownBlockType)arg1;	// IMP=0x000000010000e5d8
- (void)waitForSystemAppMigratorToComplete:(CDUnknownBlockType)arg1;	// IMP=0x000000010000e384
- (void)setSystemAppMigrationComplete:(CDUnknownBlockType)arg1;	// IMP=0x000000010000e130
- (void)getAppMetadataForApp:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000da08
- (void)updatePlaceholderMetadataForApp:(id)arg1 installType:(unsigned long long)arg2 failureReason:(unsigned long long)arg3 underlyingError:(id)arg4 failureSource:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000010000d550
- (void)checkCapabilities:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000d0e4
- (void)listSafeHarborsOfType:(long long)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000cce4
- (void)removeSafeHarborForIdentifier:(id)arg1 ofType:(long long)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010000c854
- (void)registerSafeHarborAtPath:(id)arg1 forIdentifier:(id)arg2 ofType:(long long)arg3 withOptions:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000010000c2c8
- (void)processRestoredContainerWithIdentifier:(id)arg1 ofType:(long long)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010000bdc8
- (void)fetchDiskUsageForIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000b9a4
- (void)updateiTunesMetadataForLSWithIdentifier:(id)arg1 options:(id)arg2 plistData:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010000b634
- (void)updateSinfForLSWithIdentifier:(id)arg1 withOptions:(id)arg2 sinfData:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010000b214
- (_Bool)_validateArgsForMethodWithName:(const char *)arg1 bundleIdentifier:(id)arg2 data:(id)arg3 optionalOptions:(id)arg4 error:(id *)arg5;	// IMP=0x000000010000afe8
- (void)fetchInfoForContainerizedAppWithBundleID:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000aa94
- (void)fetchInfoForFrameworkAtURL:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000a2bc
- (void)enumerateInstalledAppsWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000099e8
- (void)fetchInstalledDeveloperAppsWithMountPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100009668
- (void)updateSystemAppStateForIdentifier:(id)arg1 appState:(int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100009270
- (void)lookupSystemAppStateWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008e98
- (void)clearUninstalledIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100008ab4
- (void)lookupUninstalledWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008720
- (void)uninstallIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000802c
- (void)installURL:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100007628
- (void)_doInstallationForURL:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100006f84
- (void)_callBlockAfterDelegateMessagesSend:(const char *)arg1 dispatchBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006e4c
- (void)sendDelegateMessagesComplete;	// IMP=0x0000000100006d18
- (void)sendProgressWithStatus:(id)arg1;	// IMP=0x0000000100006d08
- (void)sendProgressWithStatus:(id)arg1 percentComplete:(unsigned int)arg2;	// IMP=0x0000000100006be8
- (void)sendProgressWithDictionary:(id)arg1;	// IMP=0x0000000100006ab0
@property(readonly, copy, nonatomic) NSString *clientName;

@end

