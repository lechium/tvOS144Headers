//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, TCCDMasterSyncController, TCCDServer, TCCDSyncController;

@interface TCCDPlatform : NSObject
{
    NSDictionary *_configurationDictionary;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    TCCDServer *_server;	// 24 = 0x18
    TCCDSyncController *_syncController;	// 32 = 0x20
    TCCDMasterSyncController *_masterSyncController;	// 40 = 0x28
    NSDictionary *_servicesByName;	// 48 = 0x30
}

+ (id)allTCCEntitlements;	// IMP=0x000000010002d82c
+ (id)currentPlatform;	// IMP=0x000000010002d7ac
+ (id)macOSPlatformNames;	// IMP=0x000000010002d71c
+ (id)iosFamilyPlatformNames;	// IMP=0x000000010002d678
+ (id)allPlatformNames;	// IMP=0x000000010002d5cc
- (void).cxx_destruct;	// IMP=0x000000010002edb0
@property(retain) NSDictionary *servicesByName; // @synthesize servicesByName=_servicesByName;
@property(retain) TCCDMasterSyncController *masterSyncController; // @synthesize masterSyncController=_masterSyncController;
@property(retain) TCCDSyncController *syncController; // @synthesize syncController=_syncController;
@property __weak TCCDServer *server; // @synthesize server=_server;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSDictionary *configurationDictionary; // @synthesize configurationDictionary=_configurationDictionary;
- (void)registerWithApplicationResolverSubjectIdentity:(id)arg1 processChain:(id)arg2;	// IMP=0x000000010002ed34
- (_Bool)displayAlert:(id)arg1;	// IMP=0x000000010002ed2c
- (_Bool)removalOfAppBundleIdentifierRequiresPruning:(id)arg1;	// IMP=0x000000010002ed24
- (_Bool)isNonAppBundleIdentifierValid:(id)arg1;	// IMP=0x000000010002ed1c
- (void)runBacktraceToolOnProcess:(id)arg1 forService:(id)arg2;	// IMP=0x000000010002ed18
- (void)prepareForAbort;	// IMP=0x000000010002ed14
- (unsigned long long)evalutePolicyForUsageStringAndPromptingForClient:(id)arg1 service:(id)arg2 resultUsageString:(id *)arg3;	// IMP=0x000000010002ed08
- (void)sendAnalyticsForAction:(long long)arg1 service:(id)arg2 subjectIdentity:(id)arg3 indirectObjectIdentity:(id)arg4 authValue:(unsigned long long)arg5 includeV1AuthValue:(_Bool)arg6 v1AuthValue:(unsigned long long)arg7;	// IMP=0x000000010002e744
- (void)updateAnalyticsEvent:(id)arg1 fromIdentity:(id)arg2 keyPrefix:(id)arg3;	// IMP=0x000000010002e454
- (id)stringForAnalyticsAction:(long long)arg1;	// IMP=0x000000010002e3e4
- (void)notifyUserOfDeniedAccessBy:(id)arg1 forService:(id)arg2;	// IMP=0x000000010002e3d8
- (id)appBundleURLContainingExecutableURL:(id)arg1;	// IMP=0x000000010002dfa8
- (id)bundleURLContainingExecutableURL:(id)arg1;	// IMP=0x000000010002df60
- (long long)evaluatePolicyForPromptingforService:(id)arg1 byIdentity:(id)arg2 attributionChain:(id)arg3;	// IMP=0x000000010002df40
- (void)handleCompositionType:(long long)arg1 forParentService:(id)arg2 forRequest:(id)arg3 intoReply:(id)arg4;	// IMP=0x000000010002df34
- (void)forwardMessage:(id)arg1 toUserTCCDFromAttributionChain:(id)arg2 forService:(id)arg3 andMergeReplyInto:(id)arg4 forConnnection:(id)arg5;	// IMP=0x000000010002df28
- (_Bool)sendMessageAsync:(id)arg1 toTCCDForTargetUID:(unsigned int)arg2 withReplyBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010002df08
- (id)sendMessageSync:(id)arg1 toTCCDForTargetUID:(unsigned int)arg2;	// IMP=0x000000010002dee8
- (id)homeRelativePathToStateDirectory;	// IMP=0x000000010002dec8
- (void)_invalidMethodForPlatform;	// IMP=0x000000010002deb0
- (id)serviceByName:(id)arg1;	// IMP=0x000000010002db8c
- (void)_configureServices;	// IMP=0x000000010002db88
- (id)description;	// IMP=0x000000010002db7c
- (void)loadConfigurationDictionary;	// IMP=0x000000010002d904
- (id)initWithName:(id)arg1;	// IMP=0x000000010002d884

@end

