//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary;

@interface ContextManager : NSObject
{
    NSMapTable *_contextMap;	// 8 = 0x8
    NSMapTable *_contextProxyMap;	// 16 = 0x10
    NSMapTable *_contextByExternalizedContextMap;	// 24 = 0x18
    NSMutableDictionary *_modules;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000010000d424
- (void).cxx_destruct;	// IMP=0x000000010000de6c
- (id)loadModule:(long long)arg1 error:(id *)arg2;	// IMP=0x000000010000da14
- (void)_logClass:(Class)arg1 tag:(id)arg2 level:(int)arg3;	// IMP=0x000000010000d878
- (void)_logClass:(Class)arg1 tag:(id)arg2;	// IMP=0x000000010000d7d8
- (id)_pathForModule:(long long)arg1 error:(id *)arg2;	// IMP=0x000000010000d6bc
- (void)registerExternalizedContext:(id)arg1 forContext:(id)arg2;	// IMP=0x000000010000d66c
- (void)addContext:(id)arg1;	// IMP=0x000000010000d5fc
- (void)addContextProxy:(id)arg1;	// IMP=0x000000010000d594
- (id)findContextForExternalizedContext:(id)arg1;	// IMP=0x000000010000d584
- (id)contextForUUID:(id)arg1;	// IMP=0x000000010000d574
- (id)init;	// IMP=0x000000010000d490

@end
