//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICConnectionConfiguration, NSString;
@protocol OS_dispatch_queue;

@interface CloudPendingChangesCoordinator : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSString *_pendingChangesPath;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    Class _loggable;	// 32 = 0x20
    ICConnectionConfiguration *_configuration;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000a2918
@property(readonly, copy, nonatomic) ICConnectionConfiguration *configuration; // @synthesize configuration=_configuration;
- (_Bool)_savePendingChanges:(id)arg1;	// IMP=0x00000001000a26e8
- (id)_pendingChanges;	// IMP=0x00000001000a23d8
- (void)removeAllPendingChanges;	// IMP=0x00000001000a23c8
- (void)removeAllPendingChangesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a213c
- (void)processPendingChangesUsingLibrary:(id)arg1;	// IMP=0x00000001000a1bfc
- (void)addPendingChange:(id)arg1;	// IMP=0x00000001000a1964
- (id)initWithConfiguration:(id)arg1 prefix:(id)arg2 loggable:(Class)arg3;	// IMP=0x00000001000a1638

@end
