//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol IDSDuetInterfaceDelegate;

@interface IDSDuetInterface : NSObject
{
    id <IDSDuetInterfaceDelegate> _delegate;	// 8 = 0x8
    NSMutableSet *_initialSyncClientIDs;	// 16 = 0x10
    NSMutableSet *_reunionSyncClientIDs;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000010001fcf8
- (void).cxx_destruct;	// IMP=0x0000000100020a30
@property(retain, nonatomic) NSMutableSet *reunionSyncClientIDs; // @synthesize reunionSyncClientIDs=_reunionSyncClientIDs;
@property(retain, nonatomic) NSMutableSet *initialSyncClientIDs; // @synthesize initialSyncClientIDs=_initialSyncClientIDs;
@property(nonatomic) __weak id <IDSDuetInterfaceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clearAdmissionCheckCache;	// IMP=0x000000010002091c
- (void)checkAvailabilityForValues:(id)arg1 priority:(long long)arg2 logString:(id)arg3 fromQueue:(id)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;	// IMP=0x0000000100020680
- (void)forceCheckAvailabilityForValues:(id)arg1 priority:(long long)arg2 logString:(id)arg3 fromQueue:(id)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;	// IMP=0x0000000100020390
- (void)_checkAvailabilityForValues:(id)arg1 priority:(long long)arg2 logString:(id)arg3 fromQueue:(id)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000001000202ac
- (id)_newKeyForValues:(id)arg1 priority:(long long)arg2;	// IMP=0x000000010002008c
- (_Bool)reunionSyncInProgress;	// IMP=0x000000010002005c
- (void)setReunionSyncInProgress:(_Bool)arg1 forClientID:(id)arg2;	// IMP=0x0000000100020004
- (_Bool)initialSyncInProgress;	// IMP=0x000000010001ffd4
- (void)setInitialSyncInProgress:(_Bool)arg1 forClientID:(id)arg2;	// IMP=0x000000010001ff7c
- (void)_resourceAvailabilityChangedForIdentifiers:(id)arg1;	// IMP=0x000000010001ff2c
- (void)dealloc;	// IMP=0x000000010001fedc
- (id)init;	// IMP=0x000000010001fe2c
- (void)_setupPairedSystemContext;	// IMP=0x000000010001fe18

@end

