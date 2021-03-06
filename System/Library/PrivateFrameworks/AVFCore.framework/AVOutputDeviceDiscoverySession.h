/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCore/AVFCore-Structs.h>
@class AVOutputDeviceDiscoverySessionInternal, AVAudioSession, NSArray, AVOutputDeviceDiscoverySessionAvailableOutputDevices;

@interface AVOutputDeviceDiscoverySession : NSObject {

	AVOutputDeviceDiscoverySessionInternal* _outputDeviceDiscoverySession;

}

@property (readonly) OpaqueFigRouteDiscovererRef routeDiscoverer; 
@property (assign,nonatomic) long long discoveryMode; 
@property (nonatomic,retain) AVAudioSession * targetAudioSession; 
@property (nonatomic,readonly) NSArray * availableOutputDevices; 
@property (nonatomic,readonly) AVOutputDeviceDiscoverySessionAvailableOutputDevices * availableOutputDevicesObject; 
@property (nonatomic,readonly) NSArray * availableOutputDeviceGroups; 
@property (nonatomic,readonly) BOOL devicePresenceDetected; 
+(void)initialize;
+(id)outputDeviceDiscoverySessionFactory;
-(id)init;
-(void)dealloc;
-(id)impl;
-(void)setDiscoveryMode:(long long)arg1 ;
-(long long)discoveryMode;
-(BOOL)devicePresenceDetected;
-(NSArray *)availableOutputDevices;
-(id)initWithDeviceFeatures:(unsigned long long)arg1 ;
-(AVAudioSession *)targetAudioSession;
-(void)setTargetAudioSession:(AVAudioSession *)arg1 ;
-(NSArray *)availableOutputDeviceGroups;
-(AVOutputDeviceDiscoverySessionAvailableOutputDevices *)availableOutputDevicesObject;
-(void)outputDeviceDiscoverySessionImplDidChangeAvailableOutputDevices:(id)arg1 ;
-(id)initWithOutputDeviceDiscoverySessionImpl:(id)arg1 ;
-(void)outputDeviceDiscoverySessionImpl:(id)arg1 didExpireWithReplacement:(id)arg2 ;
-(void)outputDeviceDiscoverySessionImplDidChangeAvailableOutputDeviceGroups:(id)arg1 ;
-(OpaqueFigRouteDiscovererRef)routeDiscoverer;
@end

