//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IXSDataPromiseDelegate-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface IXSDataPromiseManager : NSObject <IXSDataPromiseDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_uuidToPromiseMap;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000010004993c
+ (id)saveDir;	// IMP=0x00000001000498b0
+ (id)savePathForPromise:(id)arg1;	// IMP=0x00000001000497c4
- (void).cxx_destruct;	// IMP=0x000000010004b9ec
@property(readonly, nonatomic) NSMutableDictionary *uuidToPromiseMap; // @synthesize uuidToPromiseMap=_uuidToPromiseMap;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)promise:(id)arg1 didCancelForReason:(id)arg2 client:(unsigned long long)arg3;	// IMP=0x000000010004b848
- (void)promise:(id)arg1 didUpdateProgress:(double)arg2;	// IMP=0x000000010004b758
- (void)promiseDidReset:(id)arg1;	// IMP=0x000000010004b680
- (void)promiseDidComplete:(id)arg1;	// IMP=0x000000010004b5a8
- (void)promiseDidBegin:(id)arg1;	// IMP=0x000000010004b4d0
- (void)clearAllPromisesForCreator:(unsigned long long)arg1;	// IMP=0x000000010004b0c4
- (void)decommissionPromise:(id)arg1;	// IMP=0x000000010004af98
- (void)enumeratePromises:(CDUnknownBlockType)arg1;	// IMP=0x000000010004adec
- (void)registerPromise:(id)arg1;	// IMP=0x000000010004ab24
- (id)promiseForUUID:(id)arg1;	// IMP=0x000000010004a93c
- (id)promiseForUUID:(id)arg1 ofType:(Class)arg2;	// IMP=0x000000010004a92c
- (id)_promiseForUUID:(id)arg1 ofType:(Class)arg2 useQueue:(_Bool)arg3;	// IMP=0x000000010004a74c
- (void)_onQueue_restoreSavedPromises;	// IMP=0x0000000100049ae4
- (id)init;	// IMP=0x00000001000499dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

