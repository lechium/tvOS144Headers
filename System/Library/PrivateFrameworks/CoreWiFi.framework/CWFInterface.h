/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CWFClient, CWFRequestParameters;

@interface CWFInterface : NSObject {

	BOOL _activated;
	CWFClient* _client;
	CWFRequestParameters* _requestParameters;

}

@property (nonatomic,readonly) CWFClient * client;                                    //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) CWFRequestParameters * requestParameters;              //@synthesize requestParameters=_requestParameters - In the implementation block
@property (assign,getter=isActivated,nonatomic) BOOL activated;                       //@synthesize activated=_activated - In the implementation block
@property (copy) id invalidationHandler; 
@property (copy) id eventHandler; 
-(id)supported20MHzChannels;
-(id)init;
-(void)invalidate;
-(id)countryCode;
-(void)resume;
-(void)suspend;
-(CWFClient *)client;
-(long long)serviceType;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)interfaceName;
-(void)endActivity:(id)arg1 ;
-(void)activate;
-(id)invalidationHandler;
-(id)channel;
-(id)activities;
-(void)setTargetQueue:(id)arg1 ;
-(id)userInitiated;
-(BOOL)isActivated;
-(id)userInteractive;
-(id)background;
-(id)utility;
-(id)IPv6Addresses;
-(id)IPv4Addresses;
-(id)capabilities;
-(unsigned long long)securityType;
-(long long)noise;
-(id)powerState;
-(long long)RSSI;
-(void)setEventHandler:(id)arg1 ;
-(id)deviceUUID;
-(id)networkName;
-(CWFRequestParameters *)requestParameters;
-(id)highPriority;
-(id)SSID;
-(long long)WAPISubtype;
-(long long)WEPSubtype;
-(id)eventHandler;
-(BOOL)wakeOnWirelessEnabled;
-(id)MACAddress;
-(id)BSSID;
-(void)setActivated:(BOOL)arg1 ;
-(id)targetQueue;
-(double)txRate;
-(int)PHYMode;
-(id)initWithServiceType:(long long)arg1 ;
-(unsigned)reachabilityFlags;
-(void)associateWithParameters:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)performScanWithParameters:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)performANQPWithParameters:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)currentScanResult;
-(BOOL)startMonitoringEventType:(long long)arg1 error:(id*)arg2 ;
-(BOOL)powerOn;
-(BOOL)setPower:(BOOL)arg1 error:(id*)arg2 ;
-(id)supportedChannelsWithCountryCode:(id)arg1 ;
-(int)opMode;
-(unsigned long long)guardInterval;
-(id)networkServiceID;
-(id)chainAck;
-(id)txChainPower;
-(id)desense;
-(id)desenseLevel;
-(int)supportedPHYModes;
-(id)authType;
-(BOOL)setChannel:(id)arg1 error:(id*)arg2 ;
-(BOOL)setAWDLPeerTrafficRegistration:(id)arg1 error:(id*)arg2 ;
-(id)DNSServerAddresses;
-(int)virtualInterfaceRole;
-(unsigned)EAP8021XSupplicantState;
-(unsigned)EAP8021XControlMode;
-(unsigned)EAP8021XControlState;
-(int)EAP8021XClientStatus;
-(id)initWithClient:(id)arg1 requestParameters:(id)arg2 ;
-(id)__adjustedRequestParameters;
-(/*^block*/id)eventHandlerWithEventID:(id)arg1 ;
-(void)setEventHandler:(/*^block*/id)arg1 eventID:(id)arg2 ;
-(id)perAntennaRSSI;
-(int)__flagsForChannelWidth:(int)arg1 ;
-(BOOL)beginActivity:(id)arg1 error:(id*)arg2 ;
-(BOOL)startMonitoringEvent:(id)arg1 error:(id*)arg2 ;
-(void)stopMonitoringEvent:(id)arg1 ;
-(void)clearAllEventHandlers;
-(id)auxiliaryInterface;
-(id)AWDL;
-(id)veryLowPriority;
-(id)lowPriority;
-(id)veryHighPriority;
-(BOOL)cancelRequestsWithUUID:(id)arg1 error:(id*)arg2 ;
-(long long)thermalIndex;
-(BOOL)setThermalIndex:(long long)arg1 error:(id*)arg2 ;
-(id)interfaceNames;
-(id)virtualInterfaceNames;
-(id)performScanWithParameters:(id)arg1 error:(id*)arg2 ;
-(id)performANQPWithParameters:(id)arg1 error:(id*)arg2 ;
-(BOOL)associateWithParameters:(id)arg1 error:(id*)arg2 ;
-(void)disassociateWithReason:(long long)arg1 ;
-(id)currentKnownNetworkProfile;
-(id)SSIDForVendor;
-(id)BSSIDForVendor;
-(double)txPower;
-(id)supportedChannel:(unsigned long long)arg1 width:(int)arg2 countryCode:(id)arg3 ;
-(unsigned long long)MCSIndex;
-(unsigned long long)numberOfSpatialStreams;
-(unsigned long long)DTIMInterval;
-(id)parentInterfaceName;
-(id)IO80211ControllerInfo;
-(id)IO80211InterfaceInfo;
-(id)cachedRoamStatus;
-(id)cachedJoinStatus;
-(id)cachedAutoJoinStatus;
-(id)cachedLinkDownStatus;
-(id)bluetoothCoexistenceConfig;
-(id)bluetoothCoexistenceProfiles2GHz;
-(id)bluetoothCoexistenceProfiles5GHz;
-(int)bluetoothCoexistenceMode;
-(id)leakyAPStats;
-(id)cachedLinkQualityMetric;
-(void)endAllActivities;
-(void)performActivity:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)systemActivities;
-(id)eventIDs;
-(id)systemEventIDs;
-(void)stopMonitoringEventType:(long long)arg1 ;
-(void)stopMonitoringAllEvents;
-(id)knownNetworkProfilesWithProperties:(id)arg1 ;
-(id)knownNetworkProfileMatchingScanResult:(id)arg1 ;
-(id)knownNetworkProfileMatchingNetworkProfile:(id)arg1 ;
-(BOOL)updateKnownNetworkProfile:(id)arg1 properties:(id)arg2 error:(id*)arg3 ;
-(BOOL)addKnownNetworkProfile:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeKnownNetworkProfile:(id)arg1 reason:(long long)arg2 error:(id*)arg3 ;
-(id)networkServiceName;
-(BOOL)isNetworkServiceEnabled;
-(id)IPv4RouterAddress;
-(id)IPv6RouterAddress;
-(id)DHCPLeaseStartedAt;
-(id)DHCPLeaseExpiresAt;
-(id)globalIPv4InterfaceName;
-(id)globalIPv4NetworkServiceID;
-(id)globalIPv4NetworkServiceName;
-(id)globalIPv4RouterAddress;
-(id)globalIPv4Addresses;
-(id)globalIPv6InterfaceName;
-(id)globalIPv6NetworkServiceID;
-(id)globalIPv6NetworkServiceName;
-(id)globalIPv6RouterAddress;
-(id)globalIPv6Addresses;
-(id)globalDNSServerAddresses;
-(BOOL)startAWDLPeerAssistedDiscoveryWithParameters:(id)arg1 error:(id*)arg2 ;
-(void)stopAWDLPeerAssistedDiscovery;
-(id)systemAWDLPeerTrafficRegistrations;
-(id)AWDLPreferredChannels;
-(id)AWDLSyncEnabled;
-(id)AWDLSyncState;
-(id)AWDLSyncChannelSequence;
-(id)AWDLStrategy;
-(id)AWDLElectionParameters;
-(id)AWDLPeerDatabase;
-(id)AWDLSocialTimeSlots;
-(id)AWDLElectionID;
-(id)AWDLElectionRSSIThresholds;
-(id)AWDLMasterChannel;
-(id)AWDLSecondaryMasterChannel;
-(id)AWDLOpMode;
-(id)AWDLSyncParameters;
-(id)AWDLStatistics;
-(id)AWDLSidecarDiagnostics;
-(id)AWDLExtensionStateMachineParameters;
-(id)AWDLElectionMetric;
-(id)AWDLPresenceMode;
-(id)AWDLGuardTime;
-(id)AWDLAvailabilityWindowAPAlignment;
-(id)AWDLContinuousElectionAlgorithmEnabled;
-(id)AWDLAFTxMode;
-(id)AWDLPeerTrafficRegistration;
-(id)AWDLEncryptionType;
-(id)AWDLBTLEStateParameters;
-(id)rangingCapabilities;
-(BOOL)setRangeable:(BOOL)arg1 peerList:(id)arg2 error:(id*)arg3 ;
-(void)performRangingWithPeerList:(id)arg1 timeout:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(id)performRangingWithPeerList:(id)arg1 timeout:(unsigned long long)arg2 error:(id*)arg3 ;
@end

