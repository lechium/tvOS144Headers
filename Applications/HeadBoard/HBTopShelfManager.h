//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HBTopShelfExtensionControllerDelegate-Protocol.h"
#import "PBSAppInfoControllerObserver-Protocol.h"

@class NSMutableDictionary, NSOperation, NSOperationQueue, NSOrderedSet, NSString, PBSAppInfoController;

@interface HBTopShelfManager : NSObject <HBTopShelfExtensionControllerDelegate, PBSAppInfoControllerObserver>
{
    PBSAppInfoController *_appInfoController;	// 8 = 0x8
    NSOperationQueue *_modelFetchOperationQueue;	// 16 = 0x10
    NSMutableDictionary *_extensionControllerByApplicationIdentifier;	// 24 = 0x18
    NSOrderedSet *_dockApplicationIdentifiers;	// 32 = 0x20
    NSOperation *_infligtModelFetchOperation;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100052954
@property(retain, nonatomic) NSOperation *infligtModelFetchOperation; // @synthesize infligtModelFetchOperation=_infligtModelFetchOperation;
@property(copy, nonatomic) NSOrderedSet *dockApplicationIdentifiers; // @synthesize dockApplicationIdentifiers=_dockApplicationIdentifiers;
@property(readonly, nonatomic) NSMutableDictionary *extensionControllerByApplicationIdentifier; // @synthesize extensionControllerByApplicationIdentifier=_extensionControllerByApplicationIdentifier;
@property(readonly, nonatomic) NSOperationQueue *modelFetchOperationQueue; // @synthesize modelFetchOperationQueue=_modelFetchOperationQueue;
@property(readonly, nonatomic) PBSAppInfoController *appInfoController; // @synthesize appInfoController=_appInfoController;
- (void)_removeTopShelfExtensionControllerForAppIdentifierIfRequired:(id)arg1;	// IMP=0x00000001000527d4
- (void)_addTopShelfExtensionControllerForApplicationIdentifierIfRequired:(id)arg1;	// IMP=0x00000001000525b8
- (void)_updateTopShelfExtensionControllersForRestrictionSettingsChange;	// IMP=0x0000000100052480
- (void)_handleRestrictionsSettingsDidChangeNotification:(id)arg1;	// IMP=0x0000000100052414
- (void)_handleApplicationDidBecomeActiveNotification:(id)arg1;	// IMP=0x00000001000523d0
- (void)_handleApplicationWillResignActiveNotification:(id)arg1;	// IMP=0x000000010005238c
- (void)appInfoController:(id)arg1 didUpdate:(id)arg2;	// IMP=0x0000000100051ec4
- (void)topShelfExtensionController:(id)arg1 enqueueModelFetchWithOperation:(id)arg2;	// IMP=0x0000000100051d50
- (id)modelControllerForApplicationIdentifier:(id)arg1;	// IMP=0x0000000100051c00
- (void)updateWithDockApplicationIdentifiers:(id)arg1;	// IMP=0x00000001000518fc
- (void)dealloc;	// IMP=0x00000001000518a8
- (id)init;	// IMP=0x00000001000516c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
