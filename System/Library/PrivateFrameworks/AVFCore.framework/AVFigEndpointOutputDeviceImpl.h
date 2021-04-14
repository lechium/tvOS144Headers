/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVOutputDeviceImpl.h>

@protocol AVOutputDeviceImplSupport, FigRoutingContextFactory;
@class AVWeakReference, NSString, NSData, NSArray, NSNumber, NSDictionary;

@interface AVFigEndpointOutputDeviceImpl : NSObject <AVOutputDeviceImpl> {

	id<AVOutputDeviceImplSupport> _implSupportEventListener;
	AVWeakReference* _weakObserver;
	OpaqueFigEndpointRef _figEndpoint;
	OpaqueFigVolumeControllerStateRef _volumeController;
	id<FigRoutingContextFactory> _routingContextFactory;
	BOOL _useRouteConfigUpdatedNotification;

}

@property (__weak) id<AVOutputDeviceImplSupport> implEventListener;                                                    //@synthesize implSupportEventListener=_implSupportEventListener - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * ID; 
@property (nonatomic,readonly) long long deviceType; 
@property (nonatomic,readonly) long long deviceSubType; 
@property (nonatomic,readonly) long long clusterType; 
@property (nonatomic,readonly) long long configuredClusterSize; 
@property (nonatomic,readonly) NSString * manufacturer; 
@property (nonatomic,copy,readonly) NSString * modelID; 
@property (nonatomic,readonly) NSString * serialNumber; 
@property (nonatomic,readonly) NSString * firmwareVersion; 
@property (nonatomic,copy,readonly) NSData * identifyingMACAddress; 
@property (nonatomic,readonly) NSArray * clusteredDeviceDescriptions; 
@property (nonatomic,readonly) BOOL isClusterLeader; 
@property (nonatomic,readonly) NSString * clusterID; 
@property (nonatomic,readonly) NSNumber * batteryLevel; 
@property (nonatomic,readonly) NSNumber * caseBatteryLevel; 
@property (nonatomic,readonly) NSNumber * leftBatteryLevel; 
@property (nonatomic,readonly) NSNumber * rightBatteryLevel; 
@property (nonatomic,readonly) NSNumber * supportsDataOverACLProtocol; 
@property (nonatomic,readonly) NSNumber * isInEar; 
@property (nonatomic,readonly) NSDictionary * airPlayProperties; 
@property (getter=isInUseByPairedDevice,nonatomic,readonly) BOOL inUseByPairedDevice; 
@property (nonatomic,copy,readonly) NSArray * connectedPairedDevices; 
@property (nonatomic,readonly) unsigned long long deviceFeatures; 
@property (nonatomic,readonly) BOOL requiresAuthorization; 
@property (nonatomic,readonly) BOOL automaticallyAllowsConnectionsFromPeersInHomeGroup; 
@property (nonatomic,readonly) BOOL onlyAllowsConnectionsFromPeersInHomeGroup; 
@property (nonatomic,readonly) BOOL canAccessRemoteAssets; 
@property (nonatomic,readonly) BOOL canAccessAppleMusic; 
@property (nonatomic,readonly) BOOL canAccessiCloudMusicLibrary; 
@property (nonatomic,readonly) BOOL supportsBufferedAirPlay; 
@property (readonly) float volume; 
@property (readonly) BOOL canSetVolume; 
@property (readonly) long long volumeControlType; 
@property (nonatomic,readonly) BOOL canBeGrouped; 
@property (nonatomic,copy,readonly) NSString * groupID; 
@property (nonatomic,copy,readonly) NSString * proposedGroupID; 
@property (nonatomic,readonly) BOOL canBeGroupLeader; 
@property (nonatomic,readonly) BOOL isGroupLeader; 
@property (nonatomic,readonly) BOOL participatesInGroupPlayback; 
@property (nonatomic,readonly) BOOL groupContainsGroupLeader; 
@property (nonatomic,readonly) NSString * logicalDeviceID; 
@property (nonatomic,readonly) BOOL isLogicalDeviceLeader; 
@property (nonatomic,readonly) BOOL canCommunicateWithAllLogicalDeviceMembers; 
@property (nonatomic,readonly) BOOL canRelayCommunicationChannel; 
@property (nonatomic,readonly) BOOL canPlayEncryptedProgressiveDownloadAssets; 
@property (nonatomic,readonly) BOOL canFetchMediaDataFromSender; 
@property (nonatomic,readonly) BOOL presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets; 
@property (nonatomic,readonly) BOOL supportsBluetoothSharing; 
@property (nonatomic,readonly) long long HAPConformance; 
@property (nonatomic,readonly) BOOL supportsHeadTrackedSpatialAudio; 
@property (getter=isHeadTrackedSpatialAudioActive,nonatomic,readonly) BOOL headTrackedSpatialAudioActive; 
@property (nonatomic,readonly) NSArray * availableBluetoothListeningModes; 
@property (nonatomic,readonly) NSString * currentBluetoothListeningMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)dealloc;
-(long long)deviceType;
-(NSString *)serialNumber;
-(NSString *)ID;
-(NSString *)firmwareVersion;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(long long)clusterType;
-(NSString *)manufacturer;
-(unsigned long long)deviceFeatures;
-(NSString *)groupID;
-(NSNumber *)batteryLevel;
-(BOOL)canRelayCommunicationChannel;
-(BOOL)groupContainsGroupLeader;
-(long long)deviceSubType;
-(NSString *)modelID;
-(NSString *)logicalDeviceID;
-(BOOL)canAccessRemoteAssets;
-(BOOL)canAccessAppleMusic;
-(BOOL)canAccessiCloudMusicLibrary;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(BOOL)supportsBufferedAirPlay;
-(BOOL)isGroupLeader;
-(BOOL)requiresAuthorization;
-(long long)configuredClusterSize;
-(BOOL)supportsBluetoothSharing;
-(NSString *)currentBluetoothListeningMode;
-(NSArray *)availableBluetoothListeningModes;
-(BOOL)canSetVolume;
-(BOOL)canBeGrouped;
-(NSString *)clusterID;
-(NSDictionary *)airPlayProperties;
-(NSData *)identifyingMACAddress;
-(BOOL)canBeGroupLeader;
-(BOOL)participatesInGroupPlayback;
-(BOOL)isInUseByPairedDevice;
-(BOOL)setCurrentBluetoothListeningMode:(id)arg1 error:(id*)arg2 ;
-(BOOL)supportsHeadTrackedSpatialAudio;
-(BOOL)isHeadTrackedSpatialAudioActive;
-(NSArray *)clusteredDeviceDescriptions;
-(long long)volumeControlType;
-(long long)HAPConformance;
-(BOOL)isClusterLeader;
-(BOOL)automaticallyAllowsConnectionsFromPeersInHomeGroup;
-(BOOL)onlyAllowsConnectionsFromPeersInHomeGroup;
-(void)configureUsingBlock:(/*^block*/id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setImplEventListener:(id<AVOutputDeviceImplSupport>)arg1 ;
-(NSNumber *)caseBatteryLevel;
-(NSNumber *)leftBatteryLevel;
-(NSNumber *)rightBatteryLevel;
-(NSNumber *)supportsDataOverACLProtocol;
-(NSNumber *)isInEar;
-(NSArray *)connectedPairedDevices;
-(void)setSecondDisplayEnabled:(BOOL)arg1 ;
-(void)setSecondDisplayMode:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)proposedGroupID;
-(BOOL)isLogicalDeviceLeader;
-(BOOL)canCommunicateWithAllLogicalDeviceMembers;
-(void)setCurrentBluetoothListeningMode:(NSString *)arg1 ;
-(id<AVOutputDeviceImplSupport>)implEventListener;
-(void)_volumeDidChangeForEndpointWithID:(CFStringRef)arg1 ;
-(void)_canSetEndpointVolumeDidChangeForEndpointWithID:(CFStringRef)arg1 ;
-(id)initWithFigEndpoint:(OpaqueFigEndpointRef)arg1 volumeController:(OpaqueFigVolumeControllerStateRef)arg2 routingContextFactory:(id)arg3 useRouteConfigUpdatedNotification:(BOOL)arg4 ;
-(OpaqueFigEndpointRef)figEndpoint;
-(id)_figEndpointPropertyValueForKey:(CFStringRef)arg1 ;
@end

