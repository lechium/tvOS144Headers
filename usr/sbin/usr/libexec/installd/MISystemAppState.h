//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MISystemAppState : NSObject
{
    NSObject<OS_dispatch_queue> *_appStateQueue;	// 8 = 0x8
    NSMutableDictionary *_systemAppStateList;	// 16 = 0x10
}

+ (id)sharedList;	// IMP=0x0000000100005f9c
- (void).cxx_destruct;	// IMP=0x0000000100006990
@property(retain, nonatomic) NSMutableDictionary *systemAppStateList; // @synthesize systemAppStateList=_systemAppStateList;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *appStateQueue; // @synthesize appStateQueue=_appStateQueue;
- (void)removeIdentifiers:(id)arg1;	// IMP=0x0000000100006830
- (void)addIdentifier:(id)arg1 withState:(int)arg2;	// IMP=0x0000000100006694
- (id)systemAppStateDictionaryRestoringBackedUpState:(_Bool)arg1;	// IMP=0x00000001000064e8
- (void)_onQueue_setSystemAppStateList:(id)arg1;	// IMP=0x00000001000062ac
- (id)_onQueue_retrieveSystemAppStateRestoringBackedUpState:(_Bool)arg1;	// IMP=0x0000000100006178
- (id)_onQueue_systemAppStateList;	// IMP=0x0000000100006044
- (id)init;	// IMP=0x0000000100005f14

@end

