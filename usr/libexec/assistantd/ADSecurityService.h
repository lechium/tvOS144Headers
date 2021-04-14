//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFSecurityService-Protocol.h"

@class NSData, NSString;
@protocol OS_dispatch_queue;

@interface ADSecurityService : NSObject <AFSecurityService>
{
    NSObject<OS_dispatch_queue> *_procedureQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_keychainQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 24 = 0x18
    NSData *_inMemorySalt;	// 32 = 0x20
}

+ (id)sharedService;	// IMP=0x0000000100134cd0
- (void).cxx_destruct;	// IMP=0x00000001001369cc
- (void)_accountDidChange:(id)arg1;	// IMP=0x00000001001368d8
- (void)_retrieveKeyAndSaltWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001365d0
- (void)_dispatchCallbackForProcessedDataMap:(id)arg1 errorMap:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001364d0
- (void)_dispatchCallbackForProcessedData:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001363d0
- (oneway void)setKeychainValue:(id)arg1 forKey:(id)arg2 accountIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100136154
- (oneway void)processDataMap:(id)arg1 usingProcedure:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001353e8
- (oneway void)processData:(id)arg1 usingProcedure:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100134d3c
- (id)init;	// IMP=0x0000000100134bb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
