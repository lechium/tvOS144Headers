//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface IXSCoordinatorManager : NSObject
{
    NSObject<OS_dispatch_queue> *_mapQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_createQueue;	// 16 = 0x10
    NSMutableDictionary *_bundleIDToCoordinatorMap;	// 24 = 0x18
    NSMutableDictionary *_uuidToCoordinatorMap;	// 32 = 0x20
    NSMutableArray *_bundleIDPriority;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x000000010000ac94
+ (id)prioritySaveURL;	// IMP=0x000000010000ac08
+ (id)saveDir;	// IMP=0x000000010000ab7c
+ (id)savePathForCoordinator:(id)arg1;	// IMP=0x000000010000aa90
- (void).cxx_destruct;	// IMP=0x000000010000d65c
@property(readonly, nonatomic) NSMutableArray *bundleIDPriority; // @synthesize bundleIDPriority=_bundleIDPriority;
@property(readonly, nonatomic) NSMutableDictionary *uuidToCoordinatorMap; // @synthesize uuidToCoordinatorMap=_uuidToCoordinatorMap;
@property(readonly, nonatomic) NSMutableDictionary *bundleIDToCoordinatorMap; // @synthesize bundleIDToCoordinatorMap=_bundleIDToCoordinatorMap;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *createQueue; // @synthesize createQueue=_createQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *mapQueue; // @synthesize mapQueue=_mapQueue;
- (void)clearAllCoordinatorsForCreator:(unsigned long long)arg1;	// IMP=0x000000010000d2d8
- (void)enumerateCoordinators:(CDUnknownBlockType)arg1;	// IMP=0x000000010000cef0
- (_Bool)prioritizeCoordinator:(id)arg1;	// IMP=0x000000010000ce88
- (_Bool)prioritizeCoordinatorWithBundleID:(id)arg1;	// IMP=0x000000010000cbd8
- (void)unregisterCoordinator:(id)arg1;	// IMP=0x000000010000c94c
- (void)performCreationBlockingOperation:(CDUnknownBlockType)arg1;	// IMP=0x000000010000c884
- (id)coordinatorForBundleID:(id)arg1 creatingIfNotExisting:(CDUnknownBlockType)arg2;	// IMP=0x000000010000c1f4
- (id)_lookupCoordinatorForBundleID:(id)arg1;	// IMP=0x000000010000c060
- (id)coordinatorForBundleID:(id)arg1;	// IMP=0x000000010000c050
- (id)coordinatorForUUID:(id)arg1;	// IMP=0x000000010000be34
- (void)_saveBundleIDPriority;	// IMP=0x000000010000bce0
- (id)init;	// IMP=0x000000010000ad34

@end

