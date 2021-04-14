//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADPeerLocationConnectionDelegate-Protocol.h"
#import "AFContextSnapshotTransforming-Protocol.h"
#import "CLLocationManagerDelegate-Protocol.h"

@class ADGreenTeaLogger, ADPeerLocationConnection, CLInUseAssertion, CLLocation, CLLocationManager, GEOLocationShifter, NSString, SAGetRequestOrigin;
@protocol ADLocationManagerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface ADLocationManager : NSObject <ADPeerLocationConnectionDelegate, CLLocationManagerDelegate, AFContextSnapshotTransforming>
{
    id <ADLocationManagerDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_externalQueue;	// 16 = 0x10
    _Bool _needsToSendLocation;	// 24 = 0x18
    _Bool _isNavigating;	// 25 = 0x19
    NSObject<OS_dispatch_queue> *_internalQueue;	// 32 = 0x20
    CLLocationManager *_locationManager;	// 40 = 0x28
    int _lastLocationAuthorizationStatus;	// 48 = 0x30
    _Bool _lastLocationServicesIsEnabled;	// 52 = 0x34
    _Bool _lastPreciseLocationIsEnabled;	// 53 = 0x35
    _Bool _haveLastAuthorizationAndEnabledValues;	// 54 = 0x36
    ADPeerLocationConnection *_peerLocationConnection;	// 56 = 0x38
    SAGetRequestOrigin *_requestOriginCommand;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_locationTimerSource;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_locationSLATimerSource;	// 80 = 0x50
    CLLocation *_lastLocation;	// 88 = 0x58
    CLInUseAssertion *_locationInUseAssertion;	// 96 = 0x60
    unsigned long long _locationInUseAssertionRefCount;	// 104 = 0x68
    GEOLocationShifter *_locationShifter;	// 112 = 0x70
    CLLocation *_lastPeerLocation;	// 120 = 0x78
    CDUnknownBlockType _updateCompletion;	// 128 = 0x80
    ADGreenTeaLogger *_greenTeaLogger;	// 136 = 0x88
}

+ (void)getLocationIsRestricted:(CDUnknownBlockType)arg1;	// IMP=0x00000001001265e4
+ (_Bool)_shouldUseOneshotLocationRequest;	// IMP=0x00000001001265e0
- (void).cxx_destruct;	// IMP=0x000000010012b528
@property(nonatomic) _Bool needsToSendLocation; // @synthesize needsToSendLocation=_needsToSendLocation;
@property(nonatomic) __weak id <ADLocationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)getRedactedContextForContextSnapshot:(id)arg1 metadata:(id)arg2 privacyPolicy:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010012b484
- (void)releaseLocationInUseAssertionForReason:(id)arg1;	// IMP=0x000000010012b24c
- (void)acquireLocationInUseAssertionForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010012afe4
- (void)stopLocationUpdates;	// IMP=0x000000010012af5c
- (void)updateLocationForCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010012a908
- (void)updateLocationSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010012a354
- (void)updateWithLocation:(id)arg1 locationStatus:(id)arg2;	// IMP=0x0000000100129f70
- (void)_setAuthorizationStatusToAuthorizedAndEnabled;	// IMP=0x0000000100129f58
- (void)locationManagerDidChangeAuthorization:(id)arg1;	// IMP=0x0000000100129794
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000100129404
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x0000000100129144
- (void)peerLocationConnectionSuggestsClearingCachedLocation:(id)arg1;	// IMP=0x0000000100129050
- (void)peerLocationConnection:(id)arg1 didReceiveUnsolicitedLocation:(id)arg2;	// IMP=0x0000000100128db8
- (double)_preferredPlatformLocationAccuracy;	// IMP=0x0000000100128d6c
- (void)_processUpdatedLocation:(id)arg1;	// IMP=0x0000000100128ab4
- (_Bool)_locationUpdateIsCapableOfSucceeding;	// IMP=0x0000000100128aac
- (id)_bestCachedLocation;	// IMP=0x0000000100128994
- (void)_requestLocationForGetRequestOrigin:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100128870
- (void)_requestLocationWithBestAccuracy;	// IMP=0x000000010012855c
- (_Bool)_shouldSendLocationUpdate:(id)arg1 fromLocation:(id)arg2 forCommand:(id)arg3;	// IMP=0x00000001001282c8
- (void)_startMonitoringLocationForGetRequestOrigin:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100128138
- (void)_startMonitoringLocationWithDesiredAccuracy:(double)arg1;	// IMP=0x0000000100127f7c
- (void)_scheduleLocationTimerWithTimeout:(double)arg1;	// IMP=0x0000000100127b98
- (void)_cancelLocationTimer;	// IMP=0x0000000100127ad4
- (void)_scheduleLocationSLATimer;	// IMP=0x000000010012783c
- (void)_triggerLocationABCForSubtype:(id)arg1;	// IMP=0x00000001001276c4
- (void)_cancelLocationSLATimer;	// IMP=0x0000000100127600
- (void)_clearCompletionState;	// IMP=0x00000001001275d0
- (void)_stopMonitoringLocation;	// IMP=0x00000001001274e8
- (void)_generateLocationUnknownResponseForGetRequestOriginCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010012748c
- (void)_generateLocationTimedOutResponseForGetRequestOriginCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100127430
- (void)_generateLocationWiFiOffResponseForGetRequestOriginCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001273d4
- (void)_generateLocationDeniedResponseForGetRequestOriginCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100127378
- (void)_generateLocationDisabledResponseForGetRequestOriginCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010012731c
- (void)_generateResponseForGetRequestOriginCommand:(id)arg1 withStatus:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001271c0
- (void)_generateResponseForGetRequestOriginCommand:(id)arg1 withUnshiftedLocation:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100126c3c
- (void)navStatusChanged:(id)arg1;	// IMP=0x0000000100126bbc
- (id)_locationShifter;	// IMP=0x0000000100126b78
- (id)_peerLocationConnection;	// IMP=0x0000000100126b24
- (id)_locationManager;	// IMP=0x0000000100126888
- (_Bool)_locationServicesIsEnabled;	// IMP=0x0000000100126880
@property(readonly, nonatomic) CLLocation *lastLocation;
- (void)dealloc;	// IMP=0x00000001001267cc
- (id)initWithSerialQueue:(id)arg1;	// IMP=0x0000000100126670

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
