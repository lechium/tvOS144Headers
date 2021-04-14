//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LSApplicationWorkspace;

@interface GKApplicationWorkspace : NSObject
{
    LSApplicationWorkspace *_lsWorkspace;	// 8 = 0x8
}

+ (id)defaultWorkspace;	// IMP=0x0000000100092170
@property(retain, nonatomic) LSApplicationWorkspace *lsWorkspace; // @synthesize lsWorkspace=_lsWorkspace;
- (_Bool)wasProductionSignedForProcess:(int)arg1;	// IMP=0x0000000100092af0
- (_Bool)allowProductionForProcess:(int)arg1;	// IMP=0x0000000100092ae8
- (id)availableGamesAndIdentifiers;	// IMP=0x000000010009297c
- (id)availableGameIdentifiers;	// IMP=0x0000000100092770
- (id)gameDescriptorsWithInstalledBundleVersionsForGameDescriptors:(id)arg1;	// IMP=0x0000000100092638
- (id)gameDescriptorsWithInstalledBundleVersionsForBundleIDs:(id)arg1;	// IMP=0x0000000100092420
- (_Bool)applicationIsInstalled:(id)arg1;	// IMP=0x00000001000923fc
- (void)openGameCenterSettings;	// IMP=0x00000001000923f0
- (void)openURL:(id)arg1;	// IMP=0x00000001000923dc
- (void)openICloudSettings;	// IMP=0x0000000100092390
- (void)openSettings;	// IMP=0x0000000100092344
- (id)applicationProxyForBundleID:(id)arg1;	// IMP=0x000000010009230c
- (void)dealloc;	// IMP=0x00000001000922c4
- (id)initWithWorkspace:(id)arg1;	// IMP=0x0000000100092264

@end
