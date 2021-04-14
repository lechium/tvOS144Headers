//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSRegistrationPushHandlerListener-Protocol.h"
#import "IMSystemMonitorListener-Protocol.h"

@class IDSRegistrationPushHandler, NSMutableSet, NSString;

@interface IDSDRegistrationPushManager : NSObject <IDSRegistrationPushHandlerListener, IMSystemMonitorListener>
{
    IDSRegistrationPushHandler *_pushHandler;	// 8 = 0x8
    NSMutableSet *_registeredAccountIDs;	// 16 = 0x10
    _Bool _registeredForPushes;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0000000100163e5c
- (void).cxx_destruct;	// IMP=0x000000010016849c
- (void)_handleValidateCredentialsActionForAccounts:(id)arg1;	// IMP=0x0000000100167bec
- (void)_handleForceRepairRegistrationActionForAccounts:(id)arg1;	// IMP=0x00000001001679b4
- (void)_handleReRegisterActionForAccounts:(id)arg1;	// IMP=0x0000000100167680
- (void)_handleReProvisionActionForAccounts:(id)arg1;	// IMP=0x0000000100166da8
- (void)_handleReIdentifyActionForAccounts:(id)arg1;	// IMP=0x0000000100166474
- (void)_handleAction:(long long)arg1 forAccounts:(id)arg2;	// IMP=0x000000010016627c
- (void)handler:(id)arg1 reregisterUserID:(id)arg2 style:(id)arg3 service:(id)arg4;	// IMP=0x000000010016598c
- (void)handler:(id)arg1 requestedPromptThroughPushWithTitle:(id)arg2 message:(id)arg3 defaultButton:(id)arg4 defaultUrl:(id)arg5 alternateButton:(id)arg6 alternateUrl:(id)arg7;	// IMP=0x0000000100165558
- (void)handler:(id)arg1 requestedSysdiagnoseWithTapToRadarPushPayload:(id)arg2;	// IMP=0x0000000100164afc
- (_Bool)_isAccountRelevantForRegistrationPush:(id)arg1;	// IMP=0x00000001001649bc
- (id)_accountsWithService:(id)arg1;	// IMP=0x0000000100164848
- (void)fakeIncomingPushForUserID:(id)arg1 style:(id)arg2 service:(id)arg3;	// IMP=0x0000000100164774
- (void)_ignoreIncomingPushes;	// IMP=0x0000000100164680
- (void)_acceptIncomingPushes;	// IMP=0x000000010016458c
- (void)_updatePushState;	// IMP=0x00000001001644e0
- (void)stopTrackingRegisteredAccountID:(id)arg1;	// IMP=0x0000000100164388
- (void)startTrackingRegisteredAccountID:(id)arg1;	// IMP=0x0000000100164230
- (void)dealloc;	// IMP=0x000000010016416c
- (id)init;	// IMP=0x0000000100164008

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

