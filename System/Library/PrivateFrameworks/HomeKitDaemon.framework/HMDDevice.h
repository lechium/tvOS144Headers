/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>
#import <libobjc.A.dylib/HMDBackingStoreModelBackedObjectProtocol.h>
#import <libobjc.A.dylib/HMDRemoteAddressable.h>
#import <libobjc.A.dylib/HMFMerging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol HMFCancellable;
@class HMFUnfairLock, NSSet, HMFNetService, NSString, HMDAccount, HMFProductInfo, HMDHomeKitVersion, HMDDeviceCapabilities, NSUUID, HMDRPIdentity, NSArray, NSData;

@interface HMDDevice : HMFObject <HMFObject, HMFLogging, HMDBackingStoreObjectProtocol, HMDBackingStoreModelBackedObjectProtocol, HMDRemoteAddressable, HMFMerging, NSSecureCoding> {

	HMFUnfairLock* _lock;
	NSSet* _handles;
	HMFNetService* _observedNetService;
	id<HMFCancellable> _netServiceKVOCancellation;
	BOOL _lastKnownIsPublishingStateValue;
	BOOL _dirty;
	BOOL _locallyTracked;
	BOOL _cloudTracked;
	NSString* _name;
	HMDAccount* _account;
	HMFProductInfo* _productInfo;
	HMDHomeKitVersion* _version;
	HMDDeviceCapabilities* _capabilities;
	NSUUID* _idsIdentifierHash;
	HMDRPIdentity* _rpIdentity;
	NSUUID* _modelIdentifier;
	NSUUID* _identifier;

}

@property (copy,readonly) NSArray * identities; 
@property (getter=isCurrentDevice,readonly) BOOL currentDevice; 
@property (copy) HMFProductInfo * productInfo;                                         //@synthesize productInfo=_productInfo - In the implementation block
@property (setter=setIDSIdentifierHash:,copy) NSUUID * idsIdentifierHash;              //@synthesize idsIdentifierHash=_idsIdentifierHash - In the implementation block
@property (__weak) HMDAccount * account;                                               //@synthesize account=_account - In the implementation block
@property (getter=isDirty) BOOL dirty;                                                 //@synthesize dirty=_dirty - In the implementation block
@property (getter=isLocallyTracked) BOOL locallyTracked;                               //@synthesize locallyTracked=_locallyTracked - In the implementation block
@property (getter=isCloudTracked) BOOL cloudTracked;                                   //@synthesize cloudTracked=_cloudTracked - In the implementation block
@property (copy) HMDDeviceCapabilities * capabilities;                                 //@synthesize capabilities=_capabilities - In the implementation block
@property (copy,readonly) NSData * pushToken; 
@property (copy,readonly) NSUUID * idsIdentifier; 
@property (copy,readonly) NSUUID * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (copy,readonly) HMDHomeKitVersion * version;                                 //@synthesize version=_version - In the implementation block
@property (copy) HMDRPIdentity * rpIdentity;                                           //@synthesize rpIdentity=_rpIdentity - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Class modelClass; 
@property (nonatomic,copy,readonly) NSUUID * modelIdentifier;                          //@synthesize modelIdentifier=_modelIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * modelParentIdentifier; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)destinationForDevice:(id)arg1 service:(id)arg2 ;
+(id)deviceWithDestination:(id)arg1 ;
+(id)deviceWithHandle:(id)arg1 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)identifier;
-(void)setDirty:(BOOL)arg1 ;
-(HMDHomeKitVersion *)version;
-(void)setVersion:(HMDHomeKitVersion *)arg1 ;
-(NSArray *)identities;
-(id)handles;
-(NSString *)shortDescription;
-(HMDDeviceCapabilities *)capabilities;
-(NSData *)pushToken;
-(BOOL)isDirty;
-(void)setCapabilities:(HMDDeviceCapabilities *)arg1 ;
-(void)setHandles:(id)arg1 ;
-(HMDAccount *)account;
-(void)setAccount:(HMDAccount *)arg1 ;
-(NSUUID *)modelIdentifier;
-(NSUUID *)idsIdentifier;
-(Class)modelClass;
-(BOOL)isCurrentDevice;
-(id)initWithObjectModel:(id)arg1 ;
-(HMDRPIdentity *)rpIdentity;
-(void)setRpIdentity:(HMDRPIdentity *)arg1 ;
-(id)logIdentifier;
-(NSArray *)attributeDescriptions;
-(HMFProductInfo *)productInfo;
-(BOOL)mergeObject:(id)arg1 ;
-(BOOL)isBackingStorageEqual:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 handles:(id)arg2 name:(id)arg3 productInfo:(id)arg4 version:(id)arg5 capabilities:(id)arg6 ;
-(id)localHandles;
-(id)initWithService:(id)arg1 device:(id)arg2 ;
-(id)deviceForIDSService:(id)arg1 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)remoteDestinationString;
-(void)startObservingIsPublishingForService:(id)arg1 ;
-(id)globalHandles;
-(BOOL)isRelatedToDevice:(id)arg1 ;
-(id)modelBackedObjects;
-(NSUUID *)modelParentIdentifier;
-(id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(BOOL)isLocallyTracked;
-(void)setLocallyTracked:(BOOL)arg1 ;
-(void)__updateDeviceWithActions:(id)arg1 ;
-(BOOL)isCloudTracked;
-(void)setCloudTracked:(BOOL)arg1 ;
-(void)updateWithDevice:(id)arg1 ;
-(BOOL)isPublishingOnObservedNetService;
-(void)updateVersion:(id)arg1 ;
-(NSUUID *)idsIdentifierHash;
-(void)setIDSIdentifierHash:(id)arg1 ;
-(void)setProductInfo:(HMFProductInfo *)arg1 ;
-(void)__handleAccountHandleUpdated:(id)arg1 ;
@end
