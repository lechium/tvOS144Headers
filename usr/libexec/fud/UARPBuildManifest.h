//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface UARPBuildManifest : NSObject
{
    NSArray *_bundleIdentities;	// 8 = 0x8
}

@property(readonly) NSArray *bundleIdentities; // @synthesize bundleIdentities=_bundleIdentities;
- (id)generateChipEntries:(id)arg1;	// IMP=0x000000010002b7e0
- (id)createChipEntryFromChipEntryDict:(id)arg1 chipName:(id)arg2;	// IMP=0x000000010002b39c
- (id)createManifestEntryForKey:(id)arg1 dictionary:(id)arg2;	// IMP=0x000000010002b2fc
- (id)createNumberTupleForKey:(id)arg1 object:(id)arg2;	// IMP=0x000000010002b27c
- (id)numberForObject:(id)arg1;	// IMP=0x000000010002b1c0
- (id)createBundleIdentity:(id)arg1;	// IMP=0x000000010002acd4
- (id)chipNameForKey:(id)arg1;	// IMP=0x000000010002ac50
- (_Bool)parseBuildManifest:(id)arg1;	// IMP=0x000000010002aa78
- (_Bool)isChipEntryKey:(id)arg1;	// IMP=0x000000010002aa14
- (id)initWithPlist:(id)arg1;	// IMP=0x000000010002a988

@end

