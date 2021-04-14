/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SPOwner/SPPersistentConnectionProtocol.h>
#import <SPOwner/SPTrackingAvoidanceServiceProtocol.h>
#import <SPOwner/SPTagSeparationProtocol.h>
#import <SPOwner/SPOwnerSessionPrivateProtocol.h>

@protocol SPOwnerSessionXPCProtocol, OS_dispatch_queue, OS_dispatch_source;
@class NSSet, FMXPCServiceDescription, FMXPCSession, NSObject, NSOperationQueue, NSDictionary, NSDate, NSMutableDictionary, NSString;

@interface SPOwnerSession : NSObject <SPPersistentConnectionProtocol, SPTrackingAvoidanceServiceProtocol, SPTagSeparationProtocol, SPOwnerSessionPrivateProtocol> {

	/*^block*/id beaconAddedBlock;
	/*^block*/id beaconRemovedBlock;
	/*^block*/id beaconsChangedBlock;
	/*^block*/id latestLocationsUpdatedBlock;
	NSSet* _locationSources;
	FMXPCServiceDescription* _serviceDescription;
	FMXPCSession* _session;
	id<SPOwnerSessionXPCProtocol> _proxy;
	id<SPOwnerSessionXPCProtocol> _userAgentProxy;
	NSSet* _allBeaconsCache;
	NSSet* _clientObservedBeacons;
	NSObject*<OS_dispatch_queue> _queue;
	NSOperationQueue* _notificationQueue;
	id _beaconsChangedNotificationToken;
	id _tagSeparationBeaconsChangedNotificationToken;
	id _persistentConnectionBeaconsChangedNotificationToken;
	id _beaconEstimatedLocationChangedNotificationToken;
	NSDictionary* _locationCache;
	NSObject*<OS_dispatch_source> _locationFetchDispatchTimer;
	NSObject*<OS_dispatch_source> _connectionExpiryDispatchTimer;
	NSDate* _fetchLimit;
	NSMutableDictionary* _batteryStatusCache;
	NSObject*<OS_dispatch_source> _registerIntentDispatchTimer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) FMXPCServiceDescription * serviceDescription;                               //@synthesize serviceDescription=_serviceDescription - In the implementation block
@property (nonatomic,retain) FMXPCSession * session;                                                     //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) id<SPOwnerSessionXPCProtocol> proxy;                                        //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,retain) id<SPOwnerSessionXPCProtocol> userAgentProxy;                               //@synthesize userAgentProxy=_userAgentProxy - In the implementation block
@property (nonatomic,retain) NSSet * allBeaconsCache;                                                    //@synthesize allBeaconsCache=_allBeaconsCache - In the implementation block
@property (nonatomic,retain) NSSet * clientObservedBeacons;                                              //@synthesize clientObservedBeacons=_clientObservedBeacons - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * notificationQueue;                                       //@synthesize notificationQueue=_notificationQueue - In the implementation block
@property (assign,nonatomic,__weak) id beaconsChangedNotificationToken;                                  //@synthesize beaconsChangedNotificationToken=_beaconsChangedNotificationToken - In the implementation block
@property (assign,nonatomic,__weak) id tagSeparationBeaconsChangedNotificationToken;                     //@synthesize tagSeparationBeaconsChangedNotificationToken=_tagSeparationBeaconsChangedNotificationToken - In the implementation block
@property (assign,nonatomic,__weak) id persistentConnectionBeaconsChangedNotificationToken;              //@synthesize persistentConnectionBeaconsChangedNotificationToken=_persistentConnectionBeaconsChangedNotificationToken - In the implementation block
@property (assign,nonatomic,__weak) id beaconEstimatedLocationChangedNotificationToken;                  //@synthesize beaconEstimatedLocationChangedNotificationToken=_beaconEstimatedLocationChangedNotificationToken - In the implementation block
@property (nonatomic,retain) NSDictionary * locationCache;                                               //@synthesize locationCache=_locationCache - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> locationFetchDispatchTimer;                   //@synthesize locationFetchDispatchTimer=_locationFetchDispatchTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> connectionExpiryDispatchTimer;                //@synthesize connectionExpiryDispatchTimer=_connectionExpiryDispatchTimer - In the implementation block
@property (nonatomic,copy) NSDate * fetchLimit;                                                          //@synthesize fetchLimit=_fetchLimit - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * batteryStatusCache;                                   //@synthesize batteryStatusCache=_batteryStatusCache - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> registerIntentDispatchTimer;                  //@synthesize registerIntentDispatchTimer=_registerIntentDispatchTimer - In the implementation block
@property (nonatomic,copy) NSSet * locationSources;                                                      //@synthesize locationSources=_locationSources - In the implementation block
@property (nonatomic,copy) id beaconsChangedBlock; 
@property (nonatomic,copy) id beaconAddedBlock; 
@property (nonatomic,copy) id beaconRemovedBlock; 
@property (nonatomic,copy) id latestLocationsUpdatedBlock; 
@property (nonatomic,copy,readonly) NSSet * allBeacons; 
-(id)init;
-(void)dealloc;
-(FMXPCSession *)session;
-(void)_invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSession:(FMXPCSession *)arg1 ;
-(void)setFetchLimit:(NSDate *)arg1 ;
-(NSDate *)fetchLimit;
-(void)setProxy:(id<SPOwnerSessionXPCProtocol>)arg1 ;
-(id<SPOwnerSessionXPCProtocol>)proxy;
-(NSOperationQueue *)notificationQueue;
-(void)setNotificationQueue:(NSOperationQueue *)arg1 ;
-(FMXPCServiceDescription *)serviceDescription;
-(id)remoteInterface;
-(void)setServiceDescription:(FMXPCServiceDescription *)arg1 ;
-(void)executeCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<SPOwnerSessionXPCProtocol>)userAgentProxy;
-(void)beaconsToMaintainPersistentConnection:(/*^block*/id)arg1 ;
-(void)setPersistentConnectionBeaconsChangedNotificationToken:(id)arg1 ;
-(id)persistentConnectionBeaconsChangedNotificationToken;
-(void)startRefreshingPersistentConnectionWithBlock:(/*^block*/id)arg1 ;
-(void)stopRefreshingPersistentConnection;
-(NSObject*<OS_dispatch_source>)locationFetchDispatchTimer;
-(void)setLocationFetchDispatchTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)connectionExpiryDispatchTimer;
-(void)setConnectionExpiryDispatchTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setClientObservedBeacons:(NSSet *)arg1 ;
-(id)beaconsChangedNotificationToken;
-(void)setBeaconsChangedNotificationToken:(id)arg1 ;
-(id)beaconEstimatedLocationChangedNotificationToken;
-(void)setBeaconEstimatedLocationChangedNotificationToken:(id)arg1 ;
-(oneway void)beaconForUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)forceDistributeKeysWithCompletion:(/*^block*/id)arg1 ;
-(oneway void)forceUpdateKeyMapsForUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)forceUpdateKeyAlignmentRecordForUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)allBeaconsWithCompletion:(/*^block*/id)arg1 ;
-(void)unacceptedBeaconsWithCompletion:(/*^block*/id)arg1 ;
-(void)removeBeacon:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)beaconStoreStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)waitForBeaconStoreAvailableWithCompletion:(/*^block*/id)arg1 ;
-(void)updateBatteryStatus:(unsigned char)arg1 beaconUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)didDetectUnauthorizedTrackingWithCompletion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didUpdateUnauthorizedTrackingWithCompletion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didWithdrawUnauthorizedTrackingWithCompletion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)ignoreBeaconByUUID:(id)arg1 until:(unsigned long long)arg2 ;
-(void)unknownBeaconsForUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)ignoreBeaconByUUID:(id)arg1 untilDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)disableUTAppAlert:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)isUTAppAlertDisabled:(/*^block*/id)arg1 ;
-(void)ignoringUnauthorizedTrackingWithCompletion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)unauthorizedTrackingTypeWithCompletion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)acceptUTForBeaconUUID:(id)arg1 ;
-(void)updateBeaconObservations:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)tagSeparationStateChanged:(id)arg1 beaconUUID:(id)arg2 location:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)shareBeacon:(id)arg1 handles:(id)arg2 expiration:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchUnauthorizedEncryptedPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendRegisterIntentWithCompletion:(/*^block*/id)arg1 ;
-(void)sendUnregisterIntentWithCompletion:(/*^block*/id)arg1 ;
-(oneway void)forceKeySyncForBeaconUUID:(id)arg1 lastObservationDate:(id)arg2 lastObservationIndex:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(oneway void)fakeClassicPairingWithMACAddress:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSSet *)locationSources;
-(void)setLocationCache:(NSDictionary *)arg1 ;
-(NSDictionary *)locationCache;
-(void)locationFetchTimerFired;
-(void)updateAllBeaconLocations;
-(void)connectionExpiryTimerFired;
-(void)updateAllBeacons;
-(void)setConnectionExpiryDispatchTimerWithInterval:(double)arg1 ;
-(void)startRefreshing;
-(void)finishBeaconFuture:(id)arg1 beaconUUID:(id)arg2 ;
-(void)addBeaconChangedListener:(id)arg1 beaconUUID:(id)arg2 taskName:(id)arg3 commandIdentifier:(id)arg4 commandIssueDate:(id)arg5 ;
-(NSSet *)allBeaconsCache;
-(void)registerIntentTimerFired;
-(void)invalidateRegisterIntentDispatchTimer;
-(void)setRegisterIntentDispatchTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)registerIntentDispatchTimer;
-(void)setRegisterIntentDispatchTimerWithInterval:(double)arg1 ;
-(id)latestLocationsUpdatedBlock;
-(NSSet *)clientObservedBeacons;
-(void)setLocationFetchDispatchTimerWithInterval:(double)arg1 ;
-(void)locationsForBeacons:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAllBeaconsCache:(NSSet *)arg1 ;
-(void)updateConnectionExpiryDispatchTimerWithBeacons:(id)arg1 ;
-(NSMutableDictionary *)batteryStatusCache;
-(void)_updateBatteryStatus:(unsigned char)arg1 beaconUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_cacheBatteryStatus:(unsigned char)arg1 beaconUUID:(id)arg2 ;
-(void)startRefreshingBeacons:(id)arg1 ;
-(void)stopRefreshing;
-(id)executeCommand:(id)arg1 ;
-(id)executeUTPlaySoundCommand:(id)arg1 ;
-(void)setLocationSources:(NSSet *)arg1 ;
-(id)beaconsChangedBlock;
-(void)setBeaconsChangedBlock:(id)arg1 ;
-(id)beaconAddedBlock;
-(void)setBeaconAddedBlock:(id)arg1 ;
-(id)beaconRemovedBlock;
-(void)setBeaconRemovedBlock:(id)arg1 ;
-(void)setLatestLocationsUpdatedBlock:(id)arg1 ;
-(NSSet *)allBeacons;
-(void)rawSearchResultsForBeacon:(id)arg1 dateInterval:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setUserAgentProxy:(id<SPOwnerSessionXPCProtocol>)arg1 ;
-(id)tagSeparationBeaconsChangedNotificationToken;
-(void)setTagSeparationBeaconsChangedNotificationToken:(id)arg1 ;
-(void)setBatteryStatusCache:(NSMutableDictionary *)arg1 ;
-(void)playUnauthorizedSoundOnBeaconByUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)ignoreBeaconByUUID:(id)arg1 until:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)ignoreBeaconByAdvertisement:(id)arg1 until:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)beaconsToLeash;
-(void)startRefreshingTagSeparationWithBlock:(/*^block*/id)arg1 ;
-(void)stopRefreshingTagSeparation;
-(void)tagSeparationStateChanged:(id)arg1 beaconUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

