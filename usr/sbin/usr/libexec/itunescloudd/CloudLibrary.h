//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CloudLibraryConnection, CloudPendingChangesCoordinator, ICConnectionConfiguration, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface CloudLibrary : NSObject
{
    _Bool _failedToConnect;	// 8 = 0x8
    _Bool _loginRequestInFlight;	// 9 = 0x9
    NSString *_libraryIdentifier;	// 16 = 0x10
    CloudLibraryConnection *_underlyingConnection;	// 24 = 0x18
    ICConnectionConfiguration *_configuration;	// 32 = 0x20
    CloudPendingChangesCoordinator *_pendingChangesCoordinator;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 48 = 0x30
    NSObject<OS_dispatch_group> *_connectionGroup;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_asynchronousRequestsAccessQueue;	// 64 = 0x40
    CDUnknownBlockType _connectionCompletionHandler;	// 72 = 0x48
}

+ (id)oversizeLogCategory;	// IMP=0x0000000100057440
+ (id)logCategory;	// IMP=0x0000000100057314
- (void).cxx_destruct;	// IMP=0x000000010005aeb0
@property(copy, nonatomic) CDUnknownBlockType connectionCompletionHandler; // @synthesize connectionCompletionHandler=_connectionCompletionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *asynchronousRequestsAccessQueue; // @synthesize asynchronousRequestsAccessQueue=_asynchronousRequestsAccessQueue;
@property(nonatomic) _Bool loginRequestInFlight; // @synthesize loginRequestInFlight=_loginRequestInFlight;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *connectionGroup; // @synthesize connectionGroup=_connectionGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(nonatomic) _Bool failedToConnect; // @synthesize failedToConnect=_failedToConnect;
@property(readonly, nonatomic) CloudPendingChangesCoordinator *pendingChangesCoordinator; // @synthesize pendingChangesCoordinator=_pendingChangesCoordinator;
@property(readonly, nonatomic) ICConnectionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) CloudLibraryConnection *underlyingConnection; // @synthesize underlyingConnection=_underlyingConnection;
@property(readonly, copy, nonatomic) NSString *libraryIdentifier; // @synthesize libraryIdentifier=_libraryIdentifier;
- (void)_executeBlockForAllOperations:(CDUnknownBlockType)arg1;	// IMP=0x000000010005a724
- (void)_continueConnectingToLibraryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010005a1ec
- (void)_connectToLibraryWithCompletionHandler:(CDUnknownBlockType)arg1 allowRetry:(_Bool)arg2 forceBagReload:(_Bool)arg3;	// IMP=0x000000010005999c
- (void)_ensureConnectionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100059330
- (void)_enqueuePendingOperation:(id)arg1;	// IMP=0x000000010005908c
- (void)_enqueueFailedOperation:(id)arg1;	// IMP=0x0000000100058f3c
- (void)_performPendingOperations;	// IMP=0x0000000100058e14
- (_Bool)_isEnabledWithURLBag:(id)arg1;	// IMP=0x0000000100058e0c
- (id)_bagKey;	// IMP=0x0000000100058dd0
- (id)_userIdentity;	// IMP=0x0000000100058dbc
- (void)cancelAllOperations;	// IMP=0x0000000100058b54
- (void)increasePriorityForAllOperations;	// IMP=0x00000001000588ec
- (void)decreasePriorityForAllOperations;	// IMP=0x0000000100058684
- (void)addBackgroundOperation:(id)arg1 priority:(int)arg2;	// IMP=0x000000010005805c
- (void)addOperation:(id)arg1 priority:(int)arg2;	// IMP=0x0000000100057a34
- (void)dealloc;	// IMP=0x0000000100057a00
- (id)_initWithConfiguration:(id)arg1 pendingChangesCoordinator:(id)arg2;	// IMP=0x00000001000575bc
- (id)init;	// IMP=0x000000010005756c

@end

