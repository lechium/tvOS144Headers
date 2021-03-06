//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADRapportLinkListening-Protocol.h"
#import "AFAssertionCoordinatorDelegate-Protocol.h"
#import "AFAudioSessionAssertionAcquisitionService-Protocol.h"
#import "AFInvalidating-Protocol.h"

@class ADRapportLink, AFAssertionCoordinator, AFAudioSessionCoordinationSystemInfo, AFHeartBeat, NSDateInterval, NSMutableSet, NSString;
@protocol ADAudioSessionCoordinatorDelegate, OS_dispatch_group, OS_dispatch_queue;

@interface ADAudioSessionCoordinator : NSObject <ADRapportLinkListening, AFAssertionCoordinatorDelegate, AFAudioSessionAssertionAcquisitionService, AFInvalidating>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <ADAudioSessionCoordinatorDelegate> _delegate;	// 16 = 0x10
    AFHeartBeat *_heartBeat;	// 24 = 0x18
    NSDateInterval *_currentOrUpNextDateInterval;	// 32 = 0x20
    unsigned long long _audioSessionState;	// 40 = 0x28
    NSMutableSet *_keepAliveDeviceIDs;	// 48 = 0x30
    AFAudioSessionCoordinationSystemInfo *_localSystemInfo;	// 56 = 0x38
    AFAssertionCoordinator *_localAssertionCoordinator;	// 64 = 0x40
    AFAssertionCoordinator *_remoteAssertionCoordinator;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_rapportLinkQueue;	// 80 = 0x50
    NSObject<OS_dispatch_group> *_rapportLinkReadyGroup;	// 88 = 0x58
    ADRapportLink *_rapportLink;	// 96 = 0x60
    _Bool _hasLoggedAudioSessionCoordinationDisablement;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000001002330f4
- (id)_qualifiedOutOfRangeDeviceIDs;	// IMP=0x0000000100233068
- (id)_qualifiedInRangeDeviceIDs;	// IMP=0x0000000100232fdc
- (id)_qualifiedDeviceIDs;	// IMP=0x0000000100232dc8
- (id)_disqualifiedDevices;	// IMP=0x0000000100232c28
- (id)_qualifiedOutOfRangeDevices;	// IMP=0x0000000100232a40
- (id)_qualifiedInRangeDevices;	// IMP=0x0000000100232858
- (id)_qualifiedDevices;	// IMP=0x00000001002326b8
- (id)_deviceWithID:(id)arg1;	// IMP=0x00000001002324b0
- (void)_handleLostRemoteDevice:(id)arg1;	// IMP=0x000000010023213c
- (void)_handleUpdatedRemoteDevice:(id)arg1;	// IMP=0x0000000100231b38
- (void)_handleFoundRemoteDevice:(id)arg1;	// IMP=0x00000001002311c0
- (void)_handleUpdatedLocalDevice:(id)arg1;	// IMP=0x000000010023103c
- (void)_handleRelinquishedRemoteAssertion:(id)arg1 isLast:(_Bool)arg2;	// IMP=0x0000000100230ce4
- (void)_handleAcquiredRemoteAssertion:(id)arg1 isFirst:(_Bool)arg2;	// IMP=0x0000000100230894
- (void)_handleUpdatedLocalAssertionsForReason:(id)arg1 pendingAssertions:(id)arg2 activeAssertions:(id)arg3;	// IMP=0x00000001002305a8
- (void)_handleRemovedLocalAssertion:(id)arg1 isLast:(_Bool)arg2;	// IMP=0x000000010023042c
- (void)_handleRelinquishedLocalAssertion:(id)arg1 isLast:(_Bool)arg2;	// IMP=0x0000000100230038
- (void)_handleAcquiredLocalAssertion:(id)arg1 isFirst:(_Bool)arg2;	// IMP=0x000000010022fb4c
- (void)_handleAddedLocalAssertion:(id)arg1 isFirst:(_Bool)arg2;	// IMP=0x000000010022f9d0
- (void)_heartBeatFired;	// IMP=0x000000010022f790
- (void)_stopHeartBeat;	// IMP=0x000000010022f6b0
- (void)_startHeartBeatWithEffectiveDate:(id)arg1;	// IMP=0x000000010022f3e4
- (void)_endAudioSessionOnAllRemoteDevicesForReason:(id)arg1 effectiveDate:(id)arg2;	// IMP=0x000000010022effc
- (void)_endAudioSessionOnOutOfRangeRemoteDevicesForReason:(id)arg1 effectiveDate:(id)arg2;	// IMP=0x000000010022ed20
- (void)_keepAudioSessionAliveOnRemoteDevicesForReason:(id)arg1 expirationDuration:(double)arg2;	// IMP=0x000000010022eac8
- (void)_beginAudioSessionOnInRangeRemoteDevicesForReason:(id)arg1 effectiveDate:(id)arg2 expirationDuration:(double)arg3;	// IMP=0x000000010022e7d0
- (void)_handleUpdatedCurrentOrUpNextDateIntervalForReason:(id)arg1;	// IMP=0x000000010022e540
- (void)_handleUpdatedLocalSystemInfoForReason:(id)arg1;	// IMP=0x000000010022e20c
- (void)_updateCurrentOrUpNextDateInterval:(id)arg1 reason:(id)arg2;	// IMP=0x000000010022e058
- (void)_updateMediaRemoteRouteIdentifier:(id)arg1 reason:(id)arg2;	// IMP=0x000000010022de1c
- (void)_updateMediaRemoteGroupIdentifier:(id)arg1 reason:(id)arg2;	// IMP=0x000000010022dbe0
- (void)_updateHomeKitMediaSystemIdentifier:(id)arg1 reason:(id)arg2;	// IMP=0x000000010022d9a4
- (void)_updateHomeKitRoomName:(id)arg1 reason:(id)arg2;	// IMP=0x000000010022d768
- (void)_handleDidSetAudioSessionActive:(_Bool)arg1;	// IMP=0x000000010022d664
- (void)_handleWillSetAudioSessionActive:(_Bool)arg1;	// IMP=0x000000010022d52c
- (void)_enumerateKeepAliveListUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010022d490
- (void)_resetKeepAliveListForReason:(id)arg1;	// IMP=0x000000010022d358
- (void)_removeDeviceIDFromKeepAliveList:(id)arg1 reason:(id)arg2;	// IMP=0x000000010022d1b8
- (void)_addDeviceIDToKeepAliveList:(id)arg1 reason:(id)arg2;	// IMP=0x000000010022d014
- (void)_invalidate;	// IMP=0x000000010022cea4
- (void)mediaRemoteDeviceInfoGroupIdentifierDidChange:(id)arg1;	// IMP=0x000000010022cc88
- (void)mediaRemoteDeviceInfoRouteIdentifierDidChange:(id)arg1;	// IMP=0x000000010022ca6c
- (void)rapportLink:(id)arg1 didLoseDevice:(id)arg2;	// IMP=0x000000010022c934
- (void)rapportLink:(id)arg1 didUpdateDevice:(id)arg2 changes:(unsigned int)arg3;	// IMP=0x000000010022c7e8
- (void)rapportLink:(id)arg1 didFindDevice:(id)arg2;	// IMP=0x000000010022c6b0
- (void)rapportLink:(id)arg1 didUpdateLocalDevice:(id)arg2;	// IMP=0x000000010022c578
- (void)assertionCoordinator:(id)arg1 didRemoveAssertion:(id)arg2 isLastAssertion:(_Bool)arg3;	// IMP=0x000000010022c2f8
- (void)assertionCoordinator:(id)arg1 didDeactivateAssertion:(id)arg2 isLastAssertion:(_Bool)arg3;	// IMP=0x000000010022c1b4
- (void)assertionCoordinator:(id)arg1 didActivateAssertion:(id)arg2 isFirstAssertion:(_Bool)arg3;	// IMP=0x000000010022c070
- (void)assertionCoordinator:(id)arg1 didAddAssertion:(id)arg2 isFirstAssertion:(_Bool)arg3;	// IMP=0x000000010022bf44
- (void)invalidate;	// IMP=0x000000010022bedc
- (void)fetchAndUpdateMediaRemoteGroupIdentifierForReason:(id)arg1;	// IMP=0x000000010022bbf8
- (void)fetchAndUpdateMediaRemoteRouteIdentifierForReason:(id)arg1;	// IMP=0x000000010022b914
- (_Bool)_relinquishRemoteAssertionForSenderID:(id)arg1 reason:(id)arg2 effectiveDate:(id)arg3 error:(id *)arg4;	// IMP=0x000000010022b048
- (id)_acquireRemoteAssertionForSenderID:(id)arg1 reason:(id)arg2 effectiveDate:(id)arg3 expirationDuration:(double)arg4 error:(id *)arg5;	// IMP=0x000000010022a1f8
- (void)_unregisterRequestID:(id)arg1;	// IMP=0x000000010022a1f4
- (void)_registerRequestID:(id)arg1 requestHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100229d68
- (void)_sendRequestID:(id)arg1 request:(id)arg2 recipientID:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100229948
- (id)_queue;	// IMP=0x0000000100229940
- (void)handleDidSetAudioSessionActive:(_Bool)arg1;	// IMP=0x0000000100229828
- (void)handleWillSetAudioSessionActive:(_Bool)arg1;	// IMP=0x0000000100229710
- (void)getSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100228a70
- (_Bool)hasActiveAudioSessionAssertions;	// IMP=0x00000001002288b0
- (id)acquireAudioSessionAssertionWithContext:(id)arg1 relinquishmentHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100227fd8
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000001002278e4
- (void)dealloc;	// IMP=0x0000000100227898
- (void)_sendEndAudioSessionRequest:(id)arg1 toDeviceWithID:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001ea088
- (void)_sendKeepAudioSessionAliveRequest:(id)arg1 toDeviceWithID:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001e9c6c
- (void)_sendBeginAudioSessionRequest:(id)arg1 toDeviceWithID:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001e9850
- (void)_sendMessage:(id)arg1 toDeviceWithID:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001e9270
- (void)_handleEndAudioSessionRequest:(id)arg1 fromDeviceWithID:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001e8fc4
- (void)_handleKeepAudioSessionAliveRequest:(id)arg1 fromDeviceWithID:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001e8d24
- (void)_handleBeginAudioSessionRequest:(id)arg1 fromDeviceWithID:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001e8a58
- (void)_handleMessage:(id)arg1 fromDeviceWithID:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001e8038
- (void)_tearDownRequestHandlers;	// IMP=0x00000001001e7fdc
- (void)_setUpRequestHandlers;	// IMP=0x00000001001e7c50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

