/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, CUTWeakReference, NSString, NSData, NSArray, NSUUID, IDSEndpointCapabilities, NSDate;

@interface _IDSDevice : NSObject {

	NSDictionary* _info;
	CUTWeakReference* _account;
	CUTWeakReference* _serviceReference;
	int _nearbyToken;
	BOOL _nearby;
	BOOL _connected;
	BOOL _immutableCloudConnected;
	BOOL _cloudConnected;

}

@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) NSString * modelIdentifier; 
@property (nonatomic,readonly) NSString * productName; 
@property (nonatomic,readonly) NSString * productVersion; 
@property (nonatomic,readonly) NSString * productBuildVersion; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * service; 
@property (getter=isNearby,nonatomic,readonly) BOOL nearby; 
@property (getter=isConnected,nonatomic,readonly) BOOL connected; 
@property (getter=isCloudConnected,nonatomic,readonly) BOOL cloudConnected; 
@property (nonatomic,readonly) BOOL locallyPresent; 
@property (nonatomic,readonly) BOOL isDefaultPairedDevice; 
@property (nonatomic,readonly) BOOL isLocallyPaired; 
@property (nonatomic,readonly) unsigned long long pairingProtocolVersion; 
@property (nonatomic,readonly) unsigned long long minCompatibilityVersion; 
@property (nonatomic,readonly) unsigned long long maxCompatibilityVersion; 
@property (nonatomic,readonly) unsigned long long serviceMinCompatibilityVersion; 
@property (nonatomic,readonly) BOOL supportsiCloudPairing; 
@property (nonatomic,readonly) BOOL supportsTethering; 
@property (nonatomic,readonly) BOOL supportsHandoff; 
@property (nonatomic,readonly) BOOL supportsApplePay; 
@property (nonatomic,readonly) NSData * pushToken; 
@property (nonatomic,readonly) NSArray * identities; 
@property (setter=setNSUUID:,nonatomic,retain) NSUUID * nsuuid; 
@property (nonatomic,readonly) BOOL supportsSMSRelay; 
@property (nonatomic,readonly) BOOL supportsMMSRelay; 
@property (nonatomic,readonly) BOOL supportsPhoneCalls; 
@property (nonatomic,readonly) NSString * deviceColor; 
@property (nonatomic,readonly) NSString * enclosureColor; 
@property (nonatomic,readonly) NSArray * linkedUserURIs; 
@property (nonatomic,readonly) BOOL isHSATrusted; 
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,readonly) long long relationship; 
@property (nonatomic,readonly) IDSEndpointCapabilities * capabilities; 
@property (nonatomic,readonly) NSDate * lastActivityDate; 
@property (nonatomic,readonly) NSString * uniqueIDOverride; 
-(NSString *)name;
-(id)description;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)uniqueID;
-(NSArray *)identities;
-(NSString *)service;
-(BOOL)isActive;
-(NSString *)productName;
-(NSString *)productVersion;
-(NSString *)productBuildVersion;
-(BOOL)isConnected;
-(long long)relationship;
-(IDSEndpointCapabilities *)capabilities;
-(NSData *)pushToken;
-(id)fullDescription;
-(BOOL)isDefaultPairedDevice;
-(BOOL)isNearby;
-(NSString *)enclosureColor;
-(NSString *)deviceColor;
-(NSString *)modelIdentifier;
-(unsigned long long)minCompatibilityVersion;
-(BOOL)isCloudConnected;
-(NSString *)uniqueIDOverride;
-(unsigned long long)pairingProtocolVersion;
-(NSUUID *)nsuuid;
-(BOOL)isLocallyPaired;
-(void)_setAccount:(id)arg1 ;
-(BOOL)supportsiCloudPairing;
-(void)_addIdentity:(id)arg1 ;
-(void)_setService:(id)arg1 ;
-(id)compactDescription;
-(void)_nearbyStateChanged;
-(void)_connectedStateChanged;
-(void)_cloudConnectedStateChanged;
-(void)_stateChanged;
-(NSArray *)linkedUserURIs;
-(BOOL)supportsSMSRelay;
-(BOOL)supportsMMSRelay;
-(BOOL)supportsPhoneCalls;
-(BOOL)locallyPresent;
-(unsigned long long)maxCompatibilityVersion;
-(BOOL)isHSATrusted;
-(BOOL)supportsHandoff;
-(BOOL)supportsTethering;
-(BOOL)isTinker;
-(NSDate *)lastActivityDate;
-(unsigned long long)serviceMinCompatibilityVersion;
-(void)setNSUUID:(id)arg1 ;
-(BOOL)supportsApplePay;
@end

