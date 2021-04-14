/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDDataStreamSetupOperation.h>

@class HMFNetAddress, NSData, HAPSecuritySessionEncryption;

@interface HMDDataStreamTCPSetupOperation : HMDDataStreamSetupOperation {

	HMFNetAddress* _remoteNetAddress;
	NSData* _controllerKeySalt;
	NSData* _accessoryKeySalt;
	long long _remoteTcpPort;
	HAPSecuritySessionEncryption* _sessionEncryption;

}

@property (nonatomic,retain) HMFNetAddress * remoteNetAddress;                              //@synthesize remoteNetAddress=_remoteNetAddress - In the implementation block
@property (nonatomic,readonly) NSData * controllerKeySalt;                                  //@synthesize controllerKeySalt=_controllerKeySalt - In the implementation block
@property (nonatomic,retain) NSData * accessoryKeySalt;                                     //@synthesize accessoryKeySalt=_accessoryKeySalt - In the implementation block
@property (assign,nonatomic) long long remoteTcpPort;                                       //@synthesize remoteTcpPort=_remoteTcpPort - In the implementation block
@property (nonatomic,retain) HAPSecuritySessionEncryption * sessionEncryption;              //@synthesize sessionEncryption=_sessionEncryption - In the implementation block
+(id)logCategory;
-(BOOL)_isComplete;
-(NSData *)controllerKeySalt;
-(void)setAccessoryKeySalt:(NSData *)arg1 ;
-(NSData *)accessoryKeySalt;
-(id)initWithAccessory:(id)arg1 queue:(id)arg2 logIdentifier:(id)arg3 transferManagementService:(id)arg4 ;
-(void)processTransportSetupResponse:(id)arg1 ;
-(void)startSetup;
-(HMFNetAddress *)remoteNetAddress;
-(long long)remoteTcpPort;
-(HAPSecuritySessionEncryption *)sessionEncryption;
-(void)setRemoteNetAddress:(HMFNetAddress *)arg1 ;
-(void)_finishStreamTransport;
-(void)setRemoteTcpPort:(long long)arg1 ;
-(void)_generateStreamKeys;
-(id)_fullKeySalt;
-(void)setSessionEncryption:(HAPSecuritySessionEncryption *)arg1 ;
@end

