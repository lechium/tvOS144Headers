/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CWFXPCRequestProtocolInternal
@required
-(void)cancelRequestsWithUUID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)startMonitoringEvent:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)stopMonitoringEvent:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)stopMonitoringAllEventsWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryEventIDsWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)querySystemEventIDsWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryInterfaceNameWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryInterfaceNamesWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryVirtualInterfaceNamesWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryKnownNetworkProfilesWithProperties:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)queryKnownNetworkProfileMatchingNetworkProfile:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)queryKnownNetworkProfileMatchingScanResult:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)addKnownNetworkProfile:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)removeKnownNetworkProfile:(id)arg1 reason:(long long)arg2 requestParams:(id)arg3 reply:(/*^block*/id)arg4;
-(void)updateKnownNetworkProfile:(id)arg1 properties:(id)arg2 requestParams:(id)arg3 reply:(/*^block*/id)arg4;
-(void)queryThermalIndexWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)setThermalIndex:(long long)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)beginActivity:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)endActivityWithUUID:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)endAllActivitiesWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryActivitiesWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)querySystemActivitiesWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryDeviceUUIDWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)setPower:(BOOL)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)setChannel:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)performScanWithParameters:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)performANQPWithParameters:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)associateWithParameters:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)disassociateWithReason:(long long)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)queryRSSIWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryNoiseWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryTxRateWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryTxPowerWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryDTIMIntervalWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryInterfaceCapabilitiesWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryNumberOfSpatialStreamsWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryMCSIndexWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAuthTypeWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)querySecurityWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryWEPSubtypeWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryWAPISubtypeWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)querySupportedChannelsWithCountryCode:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)queryChannelWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)querySupportedPHYModesWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryPHYModeWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryGuardIntervalWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryCountryCodeWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)querySSIDWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)querySSIDForVendorWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryBSSIDWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryBSSIDForVendorWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryPowerWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryOpModeWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryParentInterfaceNameWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryVirtualInterfaceRoleWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryCurrentScanResultWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryCurrentKnownNetworkProfileWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryMACAddressWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryIO80211ControllerInfoWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryIO80211InterfaceInfoWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryRoamStatusWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryJoinStatusWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAutoJoinStatusWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryLinkDownStatusWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryWoWEnabledWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryPowerStateWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryChainAckWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryTxChainPowerWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryDesenseWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryDesenseLevelWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryBluetoothCoexConfigWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryBluetoothCoexProfiles2GHzWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryBluetoothCoexProfiles5GHzWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryBluetoothCoexModeWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryLeakyAPStatsWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryIPv4AddressesWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryIPv4RouterWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryNetworkServiceNameWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryNetworkServiceIDWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryIsNetworkServiceEnabledWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryIPv6AddressesWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryIPv6RouterWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryDNSServerAddressesWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryDHCPLeaseStartTimeWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryDHCPLeaseExpirationTimeWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryGlobalIPv4AddressesWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryGlobalIPv4RouterWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryGlobalIPv4InterfaceNameWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryGlobalIPv4NetworkServiceNameWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryGlobalIPv4NetworkServiceIDWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryGlobalIPv6InterfaceNameWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryGlobalIPv6NetworkServiceNameWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryGlobalIPv6NetworkServiceIDWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryGlobalIPv6AddressesWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryGlobalIPv6RouterWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryGlobalDNSServerAddressesWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryNetworkReachabilityWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryEAP8021XSupplicantStateWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryEAP8021XControlModeWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryEAP8021XControlStateWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryEAP8021XClientStatusWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)startAWDLPeerAssistedDiscoveryWithParameters:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)stopAWDLPeerAssistedDiscoveryWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)setAWDLPeerTrafficRegistration:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)querySystemAWDLPeerTrafficRegistrationsWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLPreferredChannelsWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLSyncEnabledWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLSyncStateWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLSyncChannelSequenceWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLStrategyWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLElectionParametersWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLPeerDatabaseWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLSocialTimeSlotsWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLElectionIDWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLElectionRSSIThresholdsWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLMasterChannelWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLSecondaryMasterChannelWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLOpModeWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLSyncParametersWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLStatisticsWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLSidecarDiagnosticsWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLExtensionStateMachineParamsWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLElectionMetricWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLPresenceModeWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLGuardTimeWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLAvailabilityWindowAPAlignmentWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLContinuousElectionAlgorithmEnabledWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLAFTxModeWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLPeerTrafficRegistrationWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLEncryptionTypeWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLBTLEStateParamsWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryRangingCapabilitiesWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)setRangeable:(BOOL)arg1 peerList:(id)arg2 requestParams:(id)arg3 reply:(/*^block*/id)arg4;
-(void)performRangingWithPeerList:(id)arg1 timeout:(unsigned long long)arg2 requestParams:(id)arg3 reply:(/*^block*/id)arg4;
-(void)queryLinkQualityMetricWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;

@end

