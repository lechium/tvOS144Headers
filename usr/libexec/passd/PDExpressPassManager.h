//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDAssertionObserver-Protocol.h"
#import "PDNFSecureXPCExpressTransactionEventObserver-Protocol.h"
#import "PDNFSecureXPCSecureElementEventObserver-Protocol.h"
#import "PDNotificationStreamConsumer-Protocol.h"
#import "PDScheduledActivityClient-Protocol.h"

@class NSDictionary, NSHashTable, NSSet, NSString, PDAppletSubcredentialManager, PDAssertionManager, PDDatabaseManager, PDNotificationStreamManager, PDRemoteInterfacePresenter, PKSecureElement;
@protocol OS_dispatch_queue;

@interface PDExpressPassManager : NSObject <PDNFSecureXPCSecureElementEventObserver, PDNFSecureXPCExpressTransactionEventObserver, PDAssertionObserver, PDNotificationStreamConsumer, PDScheduledActivityClient>
{
    PDDatabaseManager *_databaseManager;	// 8 = 0x8
    PDAssertionManager *_assertionManager;	// 16 = 0x10
    PKSecureElement *_secureElement;	// 24 = 0x18
    PDRemoteInterfacePresenter *_remoteInterfacePresenter;	// 32 = 0x20
    PDNotificationStreamManager *_notificationStreamManager;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_accessQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_replyQueue;	// 56 = 0x38
    _Bool _nfcRadioEnabled;	// 64 = 0x40
    _Bool _expressModesEnableable;	// 65 = 0x41
    _Bool _expressModesEnabled;	// 66 = 0x42
    _Bool _expressModesNeedUpdate;	// 67 = 0x43
    _Bool _contactlessInterfaceSuppressed;	// 68 = 0x44
    NSDictionary *_expressState;	// 72 = 0x48
    long long _outstandingExpressType;	// 80 = 0x50
    _Bool _outstandingExpressTypeProcessing;	// 88 = 0x58
    NSString *_outstandingExpressApplicationIdentifier;	// 96 = 0x60
    NSString *_outstandingPassUniqueIdentifier;	// 104 = 0x68
    NSSet *_outstandingExpressECP2TCIs;	// 112 = 0x70
    unsigned long long _lastReceivedExpressTransactionEvents;	// 120 = 0x78
    struct os_unfair_lock_s _observersLock;	// 128 = 0x80
    NSHashTable *_observers;	// 136 = 0x88
    PDAppletSubcredentialManager *_subcredentialManager;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00000001000ce9d4
@property(retain, nonatomic) PDAppletSubcredentialManager *subcredentialManager; // @synthesize subcredentialManager=_subcredentialManager;
- (void)assertionManager:(id)arg1 didInvalidateAssertion:(id)arg2;	// IMP=0x00000001000ce928
- (void)assertionManager:(id)arg1 didAcquireAssertion:(id)arg2;	// IMP=0x00000001000ce890
- (void)_updateContactlessInterfaceSuppression:(id)arg1;	// IMP=0x00000001000ce700
- (_Bool)allowAcquisitionOfAssertionOfType:(unsigned long long)arg1;	// IMP=0x00000001000ce6f8
- (_Bool)interestedInAssertionOfType:(unsigned long long)arg1;	// IMP=0x00000001000ce6d8
- (void)handleNotificationWithName:(id)arg1 event:(id)arg2 forStream:(long long)arg3;	// IMP=0x00000001000ce6c4
- (id)createCurrentNotificationRegistrationState;	// IMP=0x00000001000ce6bc
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;	// IMP=0x00000001000ce6b8
- (void)_presentExpressRemoteAlert;	// IMP=0x00000001000ce590
- (void)receivedSecureExpressTransactionEvent:(id)arg1;	// IMP=0x00000001000cd998
- (void)secureElementRadioStateChanged;	// IMP=0x00000001000cd8b8
- (void)secureElementExpressConfigurationDidFail;	// IMP=0x00000001000cd840
- (void)secureElementDidRunScriptsFromTSM;	// IMP=0x00000001000cd7b4
- (void)secureElementExpressConfigurationNeedsUpdate;	// IMP=0x00000001000cd728
- (void)outstandingExpressTransactionStateWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000cd5dc
- (void)_accessObserversWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000cd3e8
- (void)unregisterObserver:(id)arg1;	// IMP=0x00000001000cd384
- (void)registerObserver:(id)arg1;	// IMP=0x00000001000cd320
- (void)_adjustPasscodeLockoutTimerWithDelay:(double)arg1;	// IMP=0x00000001000cd1b0
- (id)expressPassInformationWithAID:(id)arg1 keyIdentifier:(id)arg2;	// IMP=0x00000001000ccf68
- (void)_executeExpressMutationCompletions:(id)arg1;	// IMP=0x00000001000cc958
- (void)_persistTargetExpressState:(id)arg1;	// IMP=0x00000001000cc7a4
- (void)_queueExpressMutationRequest:(id)arg1;	// IMP=0x00000001000cc724
- (void)resetExpressPasses;	// IMP=0x00000001000cc648
- (void)removeExpressPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000cc488
- (void)removeExpressPassesWithCardType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000cc2f4
- (void)setExpressWithPassInformation:(id)arg1 credential:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000cbdd0
- (void)_conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withState:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000cbbd4
- (void)conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withReferenceExpressState:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000cb9cc
- (void)conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000cb8ec
- (void)expressPassesInformationWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000cb70c
- (void)expressPassesInformationWithAutomaticSelectionTechnologyType:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000cb308
- (void)expressPassesInformationWithCardType:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000cb0d0
- (void)expressPassInformationWithPassUniqueIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000caf38
- (void)isPassExpressWithPassUniqueIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000cad9c
- (void)expressPassInformationForMode:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000cab04
- (void)processPaymentApplicationsUpdateFromPriorPaymentApplications:(id)arg1 toPaymentApplications:(id)arg2 forPassUniqueIdentifier:(id)arg3;	// IMP=0x00000001000ca214
- (void)sanitizeExpressPasses;	// IMP=0x00000001000ca188
- (void)stopExpressModes;	// IMP=0x00000001000ca11c
- (void)startExpressModes;	// IMP=0x00000001000ca098
- (id)initWithDatabaseManager:(id)arg1 assertionManager:(id)arg2 secureElement:(id)arg3 remoteInterfacePresenter:(id)arg4 notificationStreamManager:(id)arg5 isFirstUnlockedLaunchForBoot:(_Bool)arg6;	// IMP=0x00000001000c9d34
- (id)init;	// IMP=0x00000001000c9d1c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

