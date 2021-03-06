/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUserDefaults, NSArray, NSDictionary, NSString;

@interface MRUserSettings : NSObject {

	NSUserDefaults* _userDefaults;
	BOOL _externalDevicePairingAllowed;

}

@property (nonatomic,readonly) BOOL usePeerToPeerExternalDeviceConnections; 
@property (nonatomic,readonly) BOOL useNoDelayOptionForExternalDeviceSockets; 
@property (nonatomic,readonly) BOOL useDebugAVRouteWithoutVolumeControl; 
@property (nonatomic,readonly) BOOL useAPSyncAPI; 
@property (nonatomic,readonly) BOOL useOutputDeviceTransport; 
@property (nonatomic,readonly) BOOL useClusterDevices; 
@property (nonatomic,readonly) BOOL shouldInitializeTelevisionBonjourService; 
@property (nonatomic,readonly) BOOL shouldInitializeGenericBonjourService; 
@property (nonatomic,readonly) BOOL shouldInitializeRapportService; 
@property (nonatomic,readonly) BOOL shouldLogPairingSetupCode; 
@property (nonatomic,readonly) BOOL shouldLogArtwork; 
@property (nonatomic,readonly) BOOL verboseProtocolMessageLogging; 
@property (nonatomic,readonly) BOOL shouldWakeDeviceForRemoteControlCommands; 
@property (nonatomic,readonly) BOOL hasExternalDeviceSocketQOSLevelSet; 
@property (nonatomic,readonly) long long externalDeviceSocketQOSLevel; 
@property (assign,getter=isExternalDevicePairingAllowed,nonatomic) BOOL externalDevicePairingAllowed;                                 //@synthesize externalDevicePairingAllowed=_externalDevicePairingAllowed - In the implementation block
@property (nonatomic,readonly) double externalDeviceTimeoutDuration; 
@property (nonatomic,readonly) double externalDeviceNowPlayingInfoCoalesceDuration; 
@property (nonatomic,readonly) double externalDeviceNowPlayingInfoArtworkCoalesceDuration; 
@property (nonatomic,readonly) double externalDeviceDisconnectWaitDuration; 
@property (nonatomic,readonly) double externalDeviceDisconnectSleepDuration; 
@property (nonatomic,readonly) double externalDeviceSleepAssertionOnClientConnectDuration; 
@property (nonatomic,readonly) double bluetoothDeviceResumeDuration; 
@property (nonatomic,readonly) double broadcastCommandWaitDuration; 
@property (nonatomic,readonly) double airPlayOutputContextInitTimeoutDuration; 
@property (nonatomic,readonly) BOOL useExternalDeviceSystemPairing; 
@property (nonatomic,readonly) long long maxTransactionMemorySize; 
@property (nonatomic,readonly) double transactionWaitDurationOnOutOfMemory; 
@property (nonatomic,readonly) double transactionWaitDurationOnXpcSend; 
@property (nonatomic,readonly) double transactionWaitDurationOnNetworkSend; 
@property (nonatomic,readonly) BOOL useSystemAudioContextForAirPlayTransport; 
@property (nonatomic,readonly) BOOL useGenericTransportForHostedEndpoints; 
@property (nonatomic,retain) NSArray * connectedClientAuditTokens; 
@property (nonatomic,retain) NSArray * expectedClientAuditTokens; 
@property (nonatomic,readonly) double queuedCommandsTimeoutInterval; 
@property (nonatomic,readonly) BOOL computeNowPlayingApplication; 
@property (nonatomic,readonly) double nowPlayingApplicationTimeout; 
@property (nonatomic,readonly) BOOL takelockScreenAssertion; 
@property (nonatomic,readonly) BOOL useProactiveEndpoint; 
@property (nonatomic,readonly) BOOL connectToEndpointWhenBeginsPlayback; 
@property (nonatomic,readonly) BOOL connectToAllEndpointsWhenAnyEndpointBeginsPlayback; 
@property (nonatomic,readonly) BOOL connectToUserSelectedEndpoint; 
@property (nonatomic,readonly) double discoverEndpointTimeoutInterval; 
@property (nonatomic,readonly) BOOL needNowPlayingForegroundState; 
@property (nonatomic,readonly) double deviceRecentlyUsedInterval; 
@property (nonatomic,readonly) double mediaRecentlyPlayedInterval; 
@property (nonatomic,readonly) double endpointRecentlyUserSelectedInterval; 
@property (nonatomic,readonly) double launchApplicationTimeoutInterval; 
@property (nonatomic,readonly) BOOL supportProximityMigration; 
@property (nonatomic,readonly) BOOL supportMigration; 
@property (nonatomic,readonly) BOOL supportNewMigrationBehaviorForProximity; 
@property (nonatomic,readonly) BOOL supportMigrationBackToPersonalDevice; 
@property (nonatomic,readonly) BOOL supportNewMigrationArchitecture; 
@property (nonatomic,readonly) BOOL supportProximityMigrationV2; 
@property (nonatomic,readonly) BOOL forceFadeForEveryHandoff; 
@property (nonatomic,readonly) BOOL supportLastPlayingDevice; 
@property (nonatomic,readonly) BOOL sendLastPlayingDeviceToHome; 
@property (nonatomic,readonly) BOOL connectToAllEndpointsWhenInProximityToAnyDevice; 
@property (nonatomic,readonly) double lastPlayingDeviceThresholdInterval; 
@property (nonatomic,readonly) double sendPlaybackSessionUpdateToCompanionCoalesceInterval; 
@property (nonatomic,readonly) BOOL supportLockscreenPlatterDisplayForPersonalDevice; 
@property (nonatomic,readonly) double personalDeviceLockScreenTimeout; 
@property (nonatomic,retain) NSDictionary * personalDeviceState; 
@property (nonatomic,readonly) unsigned long long maximumNumberOfMediaSuggestions; 
@property (nonatomic,readonly) BOOL supportProactiveSuggestion; 
@property (nonatomic,readonly) BOOL visuallyIdentifyProactiveSuggestion; 
@property (nonatomic,readonly) double activeSystemEndpointStartupDelayToAllowAllPreviousClientsTimeToInitializeInterval; 
@property (nonatomic,readonly) BOOL supportNanoLinkAgent; 
@property (nonatomic,readonly) NSArray * jsonClientUIDs; 
@property (nonatomic,retain) NSString * lastBootUUID; 
@property (nonatomic,readonly) NSArray * remoteControlDiscoveryBlacklist; 
@property (nonatomic,readonly) NSArray * remoteControlDiscoveryWhitelist; 
+(id)currentSettings;
-(id)init;
-(BOOL)useClusterDevices;
-(NSArray *)jsonClientUIDs;
-(BOOL)shouldLogArtwork;
-(BOOL)useAPSyncAPI;
-(BOOL)supportMigration;
-(BOOL)forceFadeForEveryHandoff;
-(double)externalDeviceTimeoutDuration;
-(BOOL)useExternalDeviceSystemPairing;
-(BOOL)takelockScreenAssertion;
-(BOOL)supportProximityMigrationV2;
-(id)defaultSupportedCommandsData;
-(BOOL)usePeerToPeerExternalDeviceConnections;
-(BOOL)useNoDelayOptionForExternalDeviceSockets;
-(BOOL)useDebugAVRouteWithoutVolumeControl;
-(BOOL)shouldInitializeTelevisionBonjourService;
-(BOOL)shouldInitializeGenericBonjourService;
-(BOOL)shouldInitializeRapportService;
-(BOOL)shouldLogPairingSetupCode;
-(BOOL)verboseProtocolMessageLogging;
-(BOOL)shouldWakeDeviceForRemoteControlCommands;
-(BOOL)hasExternalDeviceSocketQOSLevelSet;
-(long long)externalDeviceSocketQOSLevel;
-(double)externalDeviceNowPlayingInfoCoalesceDuration;
-(double)externalDeviceNowPlayingInfoArtworkCoalesceDuration;
-(double)externalDeviceDisconnectWaitDuration;
-(double)externalDeviceDisconnectSleepDuration;
-(double)externalDeviceSleepAssertionOnClientConnectDuration;
-(double)bluetoothDeviceResumeDuration;
-(double)broadcastCommandWaitDuration;
-(double)airPlayOutputContextInitTimeoutDuration;
-(long long)maxTransactionMemorySize;
-(double)transactionWaitDurationOnOutOfMemory;
-(double)transactionWaitDurationOnXpcSend;
-(double)transactionWaitDurationOnNetworkSend;
-(BOOL)useSystemAudioContextForAirPlayTransport;
-(BOOL)useGenericTransportForHostedEndpoints;
-(NSArray *)connectedClientAuditTokens;
-(void)setConnectedClientAuditTokens:(NSArray *)arg1 ;
-(NSArray *)expectedClientAuditTokens;
-(void)setExpectedClientAuditTokens:(NSArray *)arg1 ;
-(double)queuedCommandsTimeoutInterval;
-(double)nowPlayingApplicationTimeout;
-(BOOL)computeNowPlayingApplication;
-(BOOL)needNowPlayingForegroundState;
-(BOOL)useProactiveEndpoint;
-(BOOL)connectToEndpointWhenBeginsPlayback;
-(BOOL)connectToAllEndpointsWhenAnyEndpointBeginsPlayback;
-(BOOL)connectToUserSelectedEndpoint;
-(double)discoverEndpointTimeoutInterval;
-(double)deviceRecentlyUsedInterval;
-(double)mediaRecentlyPlayedInterval;
-(double)endpointRecentlyUserSelectedInterval;
-(double)launchApplicationTimeoutInterval;
-(NSArray *)remoteControlDiscoveryBlacklist;
-(NSArray *)remoteControlDiscoveryWhitelist;
-(BOOL)supportProximityMigration;
-(BOOL)supportNewMigrationBehaviorForProximity;
-(BOOL)supportMigrationBackToPersonalDevice;
-(BOOL)supportNewMigrationArchitecture;
-(BOOL)supportLastPlayingDevice;
-(BOOL)sendLastPlayingDeviceToHome;
-(double)lastPlayingDeviceThresholdInterval;
-(double)sendPlaybackSessionUpdateToCompanionCoalesceInterval;
-(BOOL)connectToAllEndpointsWhenInProximityToAnyDevice;
-(id)defaultSupportedCommandsDataForClient:(id)arg1 ;
-(void)updateDefaultSupportedCommandsData:(id)arg1 forClient:(id)arg2 ;
-(double)activeSystemEndpointStartupDelayToAllowAllPreviousClientsTimeToInitializeInterval;
-(unsigned)localPlaybackState;
-(void)setLocalPlaybackState:(unsigned)arg1 ;
-(id)localLastPlayingDate;
-(void)setLocalLastPlayingDate:(id)arg1 ;
-(NSString *)lastBootUUID;
-(void)setLastBootUUID:(NSString *)arg1 ;
-(BOOL)supportNanoLinkAgent;
-(BOOL)useOutputDeviceTransport;
-(BOOL)supportLockscreenPlatterDisplayForPersonalDevice;
-(double)personalDeviceLockScreenTimeout;
-(NSDictionary *)personalDeviceState;
-(void)setPersonalDeviceState:(NSDictionary *)arg1 ;
-(unsigned long long)maximumNumberOfMediaSuggestions;
-(BOOL)supportProactiveSuggestion;
-(BOOL)visuallyIdentifyProactiveSuggestion;
-(BOOL)isExternalDevicePairingAllowed;
-(void)setExternalDevicePairingAllowed:(BOOL)arg1 ;
@end

