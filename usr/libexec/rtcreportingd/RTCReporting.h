//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RTCReportingDeallocNotifierDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSXPCConnection, RTCReportingDeallocNotifier;
@protocol OS_dispatch_queue, OS_dispatch_source, RTCReportingMessageSentNotifier;

@interface RTCReporting : NSObject <RTCReportingDeallocNotifierDelegate>
{
    NSObject<OS_dispatch_queue> *_reportingQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_reportingPeriodicTasksQueue;	// 16 = 0x10
    CDUnknownBlockType _loggingBlock;	// 24 = 0x18
    NSXPCConnection *_connection;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_timer;	// 40 = 0x28
    int _counter;	// 48 = 0x30
    NSMutableDictionary *_periodicServiceDict;	// 56 = 0x38
    NSArray *_enabledBackendNames;	// 64 = 0x40
    NSArray *_whitelistedEvents;	// 72 = 0x48
    NSArray *_blacklistedEvents;	// 80 = 0x50
    RTCReportingDeallocNotifier *_strongDeallocNotifier;	// 88 = 0x58
    id _weakDeallocNotifier;	// 96 = 0x60
    id _weakMessageSentDelegate;	// 104 = 0x68
}

+ (id)newSecureHierarchyTokenFromParentToken:(id)arg1;	// IMP=0x000000010001d3a4
+ (id)newHierarchyTokenFromParentToken:(id)arg1;	// IMP=0x000000010001d254
+ (_Bool)sendOneMessageWithSessionInfo:(id)arg1 userInfo:(id)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4 payload:(id)arg5 error:(id *)arg6;	// IMP=0x000000010001ca2c
+ (_Bool)closeEphemeralSessiontWithSessionId:(id)arg1;	// IMP=0x000000010001c580
+ (id)createEphemeralSessionWithSessionInfo:(id)arg1 userInfo:(id)arg2 error:(id *)arg3;	// IMP=0x000000010001bcdc
+ (id)getPersistentIdentifierForDNU:(_Bool)arg1;	// IMP=0x000000010001bb1c
+ (void)regeneratePersistentIdentifierForDNU:(_Bool)arg1;	// IMP=0x000000010001b990
@property(copy, nonatomic) CDUnknownBlockType messageLoggingBlock; // @synthesize messageLoggingBlock=_loggingBlock;
- (void)updateSharedDataForKey:(id)arg1 value:(id)arg2;	// IMP=0x000000010001b8b4
- (void)updateSharedDataWithDictionary:(id)arg1;	// IMP=0x000000010001b7dc
- (void)finishSession;	// IMP=0x000000010001b764
- (void)flushMessagesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001b4c0
- (_Bool)flushMessages;	// IMP=0x000000010001b444
- (_Bool)sendMessageWithDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x000000010001b0b0
- (_Bool)sendMessageWithCategory:(unsigned short)arg1 type:(unsigned short)arg2 payload:(id)arg3 error:(id *)arg4;	// IMP=0x000000010001ad94
- (_Bool)isBlacklistedEvent:(unsigned short)arg1;	// IMP=0x000000010001ac58
- (_Bool)isWhitelistedEvent:(unsigned short)arg1;	// IMP=0x000000010001ab1c
- (void)notifyMessageWasSent:(id)arg1;	// IMP=0x000000010001a9ec
- (void)fetchReportingStatesWithUserInfo:(id)arg1 fetchComplete:(CDUnknownBlockType)arg2;	// IMP=0x000000010001a464
- (void)startConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100019f3c
@property(nonatomic) id <RTCReportingMessageSentNotifier> messageSentDelegate;
- (void)dealloc;	// IMP=0x0000000100019d84
- (oneway void)release;	// IMP=0x0000000100019d28
- (id)retain;	// IMP=0x0000000100019ccc
- (void)aboutToDealloc;	// IMP=0x0000000100019c20
- (id)initWithSessionInfo:(id)arg1 userInfo:(id)arg2 frameworksToCheck:(id)arg3;	// IMP=0x0000000100019c10
- (id)initWithSessionInfo:(id)arg1 userInfo:(id)arg2 frameworksToCheck:(id)arg3 aggregationBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000100019574
- (_Bool)unregisterPeriodTaskForModule:(unsigned int)arg1;	// IMP=0x000000010001e528
- (_Bool)registerPeriodicTaskForModule:(unsigned int)arg1 needToUpdate:(_Bool)arg2 needToReport:(_Bool)arg3 serviceBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000010001e2fc
- (void)stopLogTimer;	// IMP=0x000000010001e1d4
- (void)startLogTimerWithInterval:(int)arg1 reportingMultiplier:(int)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4;	// IMP=0x000000010001dfc0
- (void)_myPeriodicTask:(unsigned short)arg1 type:(unsigned short)arg2 intervalMultiplier:(int)arg3 updateTimeout:(unsigned long long)arg4;	// IMP=0x000000010001d494
- (_Bool)uploadDataArray:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ea54
- (_Bool)uploadFileWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001e7d8
- (_Bool)serverSupportsFileUpload;	// IMP=0x000000010001e6d4
- (_Bool)setDigestKey:(id)arg1 algorithm:(int)arg2;	// IMP=0x000000010001eb9c

@end

