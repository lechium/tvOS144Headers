//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AppInstallPredicates : NSObject
{
}

+ (id)predicateForInstallFromSource:(long long)arg1 bundleID:(id)arg2 itemID:(id)arg3 error:(id *)arg4;	// IMP=0x00000001002f4bd0
+ (id)predicateForActiveBootstrapWithSourceType:(long long)arg1;	// IMP=0x00000001002f4aa8
+ (id)restoreHardFailures;	// IMP=0x00000001002f4850
+ (id)pendingRestoreSoftFailures;	// IMP=0x00000001002f4698
+ (id)pendingInstalls;	// IMP=0x00000001002f4520
+ (id)pendingBootstrap;	// IMP=0x00000001002f43a8
+ (id)pendingRestoreMetadataLookup;	// IMP=0x00000001002f4228
+ (id)knownMDMInstalls;	// IMP=0x00000001002f4198
+ (id)activeRestores;	// IMP=0x00000001002f3fd8
+ (id)activeInstalls;	// IMP=0x00000001002f3f44

@end
